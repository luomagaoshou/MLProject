//
//  UIButton+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIButton+ML_Tools.h"

@implementation UIButton (ML_Tools)

+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor
{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    if (button) {
        [button setFrame:frame];
        [button setTitle:title forState:UIControlStateNormal];
        [button.layer setMasksToBounds:YES];
        [button.layer setBorderWidth:borderWidth];
        [button.layer setCornerRadius:cornerRadius];
        [button.layer setBorderColor:borderColor.CGColor];
    }
    return button;
}
@end
