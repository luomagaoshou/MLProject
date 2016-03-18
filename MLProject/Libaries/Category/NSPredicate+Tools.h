//
//  NSPredicate+Tools.h
//  LotterySteward
//
//  Created by apple on 15/9/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSPredicate (Tools)
#pragma 正则匹配手机号
+ (BOOL)checkTelNumber:(NSString *) telNumber;
#pragma 正则匹配用户密码,数字和字母组合
+ (BOOL)checkPassword:(NSString *) password;
#pragma 正则匹配用户姓名,20位的中文或英文
+ (BOOL)checkUserName : (NSString *) userName;
#pragma 正则匹配用户姓名,20位的中文
+ (BOOL)checkChineseUserName : (NSString *) userName;
#pragma 正则匹配用户姓名,6-15位的英文或数字
+ (BOOL)checkEnglishUserName : (NSString *) userName;
#pragma 正则匹配用户身份证号
+ (BOOL)checkUserIdCard: (NSString *) idCard;
#pragma 正则匹员工号,12位的数字
+ (BOOL)checkEmployeeNumber : (NSString *) number;
#pragma 正则匹配URL
+ (BOOL)checkURL : (NSString *) url;
//+ (BOOL)checkValidityPeriodString:(NSString *) validityPeriodString;
@end
