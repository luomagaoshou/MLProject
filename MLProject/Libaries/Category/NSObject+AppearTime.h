//
//  NSObject+AppearTime.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/8/5.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (AppearTime)
- (void)operationWithAppearTimeBlock:(void (^)(NSInteger appearTime))block;
@end
