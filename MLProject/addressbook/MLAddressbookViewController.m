//
//  MLAddressbookViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/20.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAddressbookViewController.h"
#import <AddressBook/AddressBook.h>
#import "BGTAddressBook.h"
#import "MBProgressHUD+Loading.h"
@interface MLAddressbookViewController ()

@end

@implementation MLAddressbookViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{

  //  [self getAuthorization];
    [self testAB];
}
- (NSArray *)createPhoneNumbers{
    
    
    NSInteger startNumber = arc4random() %10000;
    NSInteger count = arc4random() % 3 + 1;
    NSMutableArray *mutArr = [NSMutableArray new];
    for (NSInteger i = 0; i < count; i++) {
        [mutArr addObject:@(startNumber + i).stringValue];
    }
    [MBProgressHUD showHudOnKeywindowWithTitle:[mutArr componentsJoinedByString:@"---"]];
    return mutArr;
    
}
- (void)testAB{
    
    CFErrorRef errorRef = NULL;
        ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, &errorRef);
        //查
        CFStringRef cfStr = (__bridge CFStringRef)@"邦德教育";
        NSArray *people = (__bridge NSArray *)ABAddressBookCopyPeopleWithName(addressBook, (__bridge CFStringRef)@"邦德教育");
    
    
    
    BGTABPerson *person = [BGTABPerson personInAddressBokkWithConfig:^(BGTABPersonDetailModel *model) {
        model.firstName = @"邦德教育";
    }];
    if (person) {
     
        
        [person appendPhoneNumbers:[self createPhoneNumbers]];
    }
}
-(void)getAuthorization{
    ABAddressBookRef addressBook = ABAddressBookCreateWithOptions(NULL, NULL);
    //查
    CFStringRef cfStr = (__bridge CFStringRef)@"邦德教育";
   NSArray *people = (__bridge NSArray *)ABAddressBookCopyPeopleWithName(addressBook, cfStr);
    
    
    ABRecordRef person = nil;
    for (id p in people) {
        CFStringRef cfFirstName = ABRecordCopyValue((__bridge ABRecordRef)p, kABPersonFirstNameProperty);
        
        if (CFEqual(cfFirstName, cfStr)) {
             person = (__bridge ABRecordRef)p;
            break;
        }
       
    }
    
    //增
    if (person) {
  
        ABMultiValueRef originalPhones = ABRecordCopyValue(person, kABPersonPhoneProperty);
        ABMutableMultiValueRef newMultiValue = ABMultiValueCreateMutable(kABMultiStringPropertyType);
        
        
        for (int i = 0; i < ABMultiValueGetCount(originalPhones); i++) {
         
 
            CFStringRef personPhone = ABMultiValueCopyValueAtIndex(originalPhones, i);
            
                 ABMultiValueAddValueAndLabel(newMultiValue, personPhone, kABPersonPhoneIPhoneLabel, NULL);
            
        }
        
    
        
        ABMultiValueAddValueAndLabel(newMultiValue, @"12345", kABPersonPhoneIPhoneLabel, NULL);
        
        ABRecordSetValue(person, kABPersonPhoneProperty, newMultiValue, NULL);
        
        ABAddressBookAddRecord(addressBook, person, NULL);
        ABAddressBookSave(addressBook, NULL);
    }
    
    
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        ABAddressBookRequestAccessWithCompletion(addressBook, ^(bool granted, CFErrorRef error) {
            
        });
    });
    
    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
