//
//  NSString+Class.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/30.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSString+Class.h"
#import "CABasicAnimation+ML_make.h"
@implementation NSString (Class)
- (NSString *)ml_superClassNameFromSelf
{
    Class class = NSClassFromString(self);
    NSParameterAssert(class);
    Class superClass = [class superclass];
    return NSStringFromClass(superClass);
}

@end
