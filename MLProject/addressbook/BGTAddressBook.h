//
//  BGTAddressBook.h
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
@interface BGTABPersonDetailModel : NSObject 
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *lastName;
@end

@interface BGTABPerson: NSObject
+ (BGTABPerson *)personInAddressBokkWithConfig:(void (^)(BGTABPersonDetailModel * model))config;
+ (BGTABPerson *)person;
- (void)appendPhoneNumbers:(NSArray <NSString *> *)phoneNumbers;
- (void)deletePhoneNumbers:(NSArray <NSString *> *)phoneNumbers;
- (BOOL)saveInAddressBokk;
@end

@interface BGTAddressBook : NSObject
+ (ABAddressBookRef)defaulAddressBookRef;
- (ABAddressBookRef)addressBookRef;
//包含
+ (ABRecordRef)recordRefWithName:(NSString *)name;
@end
