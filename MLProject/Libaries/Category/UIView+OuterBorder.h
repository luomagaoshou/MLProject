//
//  UIView+OuterBorder.h
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/3.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (OuterBorder)

/**
 装载外部的border在view上

 @param width border的宽度
 @param color border的颜色
 */
- (void)ml_setUpOuterBorderWithWidth:(CGFloat)width color:(UIColor *)color;
- (instancetype)ml_outerBorder;
@end
