//
//  BGTAddressBook.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "BGTAddressBook.h"
#import <AddressBook/AddressBook.h>

@implementation BGTABPersonDetailModel
+ (NSDictionary *)systemCodeDic{
    
    return @{
             
             @"firstName": @(kABPersonFirstNameProperty),
             @"middleName": @(kABPersonMiddleNameProperty),
             @"lastName": @(kABPersonLastNameProperty),
             
             
             };
}
@end
@interface BGTABPerson()

@end
@implementation BGTABPerson
{
    ABRecordRef _recordRef;
}
- (void)appendPhoneNumbers:(NSArray <NSString *> *)phoneNumbers{
    
    ABMultiValueRef originalMultiValueRef = ABRecordCopyValue(_recordRef, kABPersonPhoneProperty);
    ABMutableMultiValueRef mutMultiValue = ABMultiValueCreateMutableCopy(originalMultiValueRef);
    
    CFArrayRef phoneArrayRef = ABMultiValueCopyArrayOfAllValues(originalMultiValueRef);
    
    for (NSString *phoneNumberStr in phoneNumbers) {
        if (CFArrayContainsValue(phoneArrayRef, CFRangeMake(0, CFArrayGetCount(phoneArrayRef) - 1), (void *)phoneNumberStr)) {
            continue;
        }
        ABMultiValueAddValueAndLabel(mutMultiValue, (__bridge CFStringRef)phoneNumberStr, kABPersonPhoneIPhoneLabel, NULL);
    }
    ABRecordSetValue(_recordRef, kABPersonPhoneProperty, mutMultiValue, NULL);

  
}
- (void)deletePhoneNumbers:(NSArray<NSString *> *)phoneNumbers{
    ABMultiValueRef originalMultiValueRef = ABRecordCopyValue(_recordRef, kABPersonPhoneProperty);
    ABMutableMultiValueRef mutMultiValue = ABMultiValueCreateMutableCopy(originalMultiValueRef);
    
     ABMultiValueRef phones = ABRecordCopyValue(_recordRef, kABPersonPhoneProperty);
    for (NSInteger i = 0; i < CFArrayGetCount(phones); i++) {
        NSString *existingPhoneStr = (__bridge NSString*)ABMultiValueCopyValueAtIndex(phones, i);
        if ([phoneNumbers containsObject:existingPhoneStr]) {
            ABMultiValueRemoveValueAndLabelAtIndex(mutMultiValue, i);
        }
    }
    
    ABRecordSetValue(_recordRef, kABPersonPhoneProperty, mutMultiValue, NULL);
}
- (BOOL)saveInAddressBokk{
    
    ABAddressBookRef addressBookRef = [BGTAddressBook defaulAddressBookRef];
    CFErrorRef errorRef;
    if (addressBookRef) {
        ABAddressBookAddRecord(addressBookRef, _recordRef, &errorRef);
        if (errorRef) { return NO; }
        
        ABAddressBookSave(addressBookRef, &errorRef);
          if (errorRef) { return NO; }
      
        return YES;
    }
    
    return NO;
}
+ (BGTABPerson *)person{
    BGTABPerson *person = [[BGTABPerson alloc] init];
    person->_recordRef = ABPersonCreate();
    return person;
}
+ (BGTABPerson *)personInAddressBokkWithConfig:(void (^)(BGTABPersonDetailModel *))config{
    BGTABPersonDetailModel *detailModel = nil;
    if (config) {
        detailModel = [[BGTABPersonDetailModel alloc] init];
        config(detailModel);
        NSDictionary *detailDic = [detailModel dictionaryOfPropertyKeyValues];
        
        
        CFArrayRef people = [self peopleWithDetail:detailDic];
        if (!people) {
            return nil;
        }
        ABRecordRef firstPerson = NULL;
        if (CFArrayGetCount(people)) {
            firstPerson = CFArrayGetValueAtIndex(people, 0);
        }
        
        if (firstPerson) {
            BGTABPerson *person = [[BGTABPerson alloc] init];
            person->_recordRef = firstPerson;
        }
       
    }
    return nil;
}

+ (CFArrayRef)peopleWithDetail:(NSDictionary *)detailDic{
    
    
    ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, NULL);
    //查
    CFStringRef cfStr = (__bridge CFStringRef)@"邦德教育";
    NSArray *people = (__bridge NSArray *)ABAddressBookCopyPeopleWithName(addressBook, cfStr);
    
 
    if (addressBook) {
        CFArrayRef people = ABAddressBookCopyPeopleWithName( addressBook, (__bridge CFStringRef)detailDic.allValues.firstObject);
        
        CFStringRef cfStr = (__bridge CFStringRef)@"邦德教育";
        NSArray *people2 = (__bridge NSArray *)ABAddressBookCopyPeopleWithName(addressBook, cfStr);
        
        if (CFArrayGetCount(people)) {
            
            CFMutableArrayRef resultMutArrRef = CFArrayCreateMutable(nil, 0, nil);
            for (NSInteger i = 0; i < CFArrayGetCount(people); i++) {
                ABRecordRef recordRef = CFArrayGetValueAtIndex(people, i);
                if ([self isMeetingScearchRequireMentWithRecordRef:recordRef detailDic:detailDic]) {
                    CFArrayAppendValue(resultMutArrRef, recordRef);
                }
                
            }
            return resultMutArrRef;
        }
    }
    
    return NULL;
    
    
}
+ (BOOL)isMeetingScearchRequireMentWithRecordRef:(ABRecordRef)recordRef detailDic:(NSDictionary *)detailDic{
    
    NSDictionary *systemCodeDic = [BGTABPersonDetailModel systemCodeDic];
    
    BOOL isMeeting = YES && detailDic.allKeys.count;
    for (NSInteger i = 0; i < detailDic.allKeys.count; i++) {
        id key = detailDic.allKeys[i];
        id value = [detailDic valueForKey:key];
        ABPropertyID propertyID = [[systemCodeDic valueForKey:key] intValue];
        CFStringRef stringRef = ABRecordCopyValue(recordRef, propertyID);
        if (![value isEqualToString:(__bridge NSString *)stringRef]) {
            isMeeting = NO;
            break;
        }
        
    }
    
    return isMeeting;
}


@end

@implementation BGTAddressBook
{
    ABAddressBookRef _addressBookRef;
}
+ (ABAddressBookRef)defaulAddressBookRef{
    
    static BGTAddressBook *addressBook = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        addressBook = [[BGTAddressBook alloc] init];
        addressBook->_addressBookRef = ABAddressBookCreateWithOptions(NULL, NULL);
    });
    return addressBook->_addressBookRef;
}

@end
