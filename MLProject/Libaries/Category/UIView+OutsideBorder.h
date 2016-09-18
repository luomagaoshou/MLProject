//
//  UIView+OutsideBorder.h
//  MLProject
//
//  Created by 妙龙赖 on 16/8/25.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (OutsideBorder)
/**
 *  在view的外层增加一个border，只支持圆形
 *
 *  @param width 宽度
 *  @param color 长度
 */
- (void)addOutsideBorderWithWidth:(CGFloat)width color:(UIColor *)color;
@end
