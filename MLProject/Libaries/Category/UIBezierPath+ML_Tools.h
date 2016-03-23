//
//  UIBezierPath+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/10/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UIBezierPathDrawLineOptionSide) {
    UIBezierPathDrawLineOptionSideTop = 1 << 1,
    UIBezierPathDrawLineOptionSideLeft = 1 << 2,
    UIBezierPathDrawLineOptionSideBottom = 1 << 3,
    UIBezierPathDrawLineOptionSideRight = 1 << 4,
};
@interface UIBezierPath (ML_Tools)

+ (void)drawLineOnView:(UIView *)view
                          withSide:(UIBezierPathDrawLineOptionSide)side
                       lineColor:(UIColor *)lineColor
                       lineWidth:(CGFloat)lineWidth
                          insets:(UIEdgeInsets)insets;
+ (void)drawLineOnTopWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth;
+ (void)drawLineOnTopWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;

+ (void)drawLineOnLeftWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth;
+ (void)drawLineOnLeftWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;

+ (void)drawLineOnBottomWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth;
+ (void)drawLineOnBottomWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;

+ (void)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth;
+ (void)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;
@end
