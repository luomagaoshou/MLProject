//
//  UIView+ML_Tools.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/22.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UIView+ML_Tools.h"

@implementation UIView (ML_Tools)
- (void)resignFirstResponderCommonMothed
{
    [[self class] resignFirstResponderCommonMothed];
}
+ (void)resignFirstResponderCommonMothed
{
    [[UIApplication sharedApplication] sendAction:@selector(resignFirstResponder) to:nil from:nil forEvent:nil];
}
@end
