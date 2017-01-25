//
//  NSObject+AppearTime.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/8/5.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "NSObject+AppearTime.h"

@implementation NSObject (AppearTime)
- (void)operationWithAppearTimeBlock:(void (^)(NSInteger))block
{
    if (!objc_getAssociatedObject(self, @selector(operationWithAppearTimeBlock:))) {
        objc_setAssociatedObject(self, @selector(operationWithAppearTimeBlock:), @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    
    NSInteger appearTime = [objc_getAssociatedObject(self, @selector(operationWithAppearTimeBlock:)) integerValue];
    appearTime++;
    objc_setAssociatedObject(self, @selector(operationWithAppearTimeBlock:), @(appearTime), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (block) {
        block(appearTime);
    }
}
@end
