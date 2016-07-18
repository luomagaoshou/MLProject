//
//  BGTToastManager.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//
#define kToast [BGTToastManager shareManager]
#import <Foundation/Foundation.h>
@class BGTLogin;
@interface BGTToastManager : NSObject
- (instancetype)shareManager;
@property (nonatomic, strong) BGTLogin *login;
@end

@interface BGTLogin : NSObject
@property (nonatomic, copy, readonly) NSString *noUserName;
@property (nonatomic, copy, readonly) NSString *noPasswordName;
@property (nonatomic, copy, readonly) NSString *passwordincorrect;
@property (nonatomic, copy, readonly) NSString *verifingAccout;
@end