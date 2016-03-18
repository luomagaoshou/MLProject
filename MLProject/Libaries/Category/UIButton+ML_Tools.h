//
//  UIButton+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (ML_Tools)
+ (instancetype)buttonWithType:(UIButtonType)buttonType
                         frame:(CGRect)frame
                         title:(NSString *)title
                   borderWidth:(CGFloat)borderWidth
                  cornerRadius:(CGFloat)cornerRadius
                   borderColor:(UIColor *)borderColor;

@end
