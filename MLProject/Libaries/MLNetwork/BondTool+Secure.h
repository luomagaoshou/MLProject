//
//  BondTool+Secure.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/8.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "BondTool.h"
UIKIT_EXTERN NSString *const kBGTClientType;
@interface BondTool (Secure)
+ (NSString *)deviceId;
+ (NSString *)internalVersion;
+ (NSString *)clientType;
+ (NSString *)deviceModel;
+ (NSString *)deviceOS;
@end