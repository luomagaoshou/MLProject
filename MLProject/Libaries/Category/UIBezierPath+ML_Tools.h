//
//  UIBezierPath+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/10/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBezierPath (ML_Tools)
//在低边画一条线
+ (UIBezierPath *)drawLineOnButtomWithView:(UIView *)view
                                 lineColor:(UIColor *)lineColor
                                 lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawLineOnTopWithView:(UIView *)view
                                 lineColor:(UIColor *)lineColor
                                 lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawLineOnTopWithView:(UIView *)view
                              lineColor:(UIColor *)lineColor
                              lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;
+ (UIBezierPath *)drawLineOnLeftWithView:(UIView *)view
                              lineColor:(UIColor *)lineColor
                              lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawLineOnRightWithView:(UIView *)view
                               lineColor:(UIColor *)lineColor
                               lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets;
//
+ (UIBezierPath *)drawLineOnVerticalCenterWithView:(UIView *)view
                                lineColor:(UIColor *)lineColor
                                lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawLineOnHorizontalCenterWithView:(UIView *)view
                                           lineColor:(UIColor *)lineColor
                                           lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawUpsideAngleWithView:(UIView *)view
                                 lineColor:(UIColor *)lineColor
                                 lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawUpsidedownAngleWithView:(UIView *)view
                                lineColor:(UIColor *)lineColor
                                lineWidth:(CGFloat)lineWidth;

+ (UIBezierPath *)drawLineWithStartPoint:(CGPoint)statrPoint
                      endPoint:(CGPoint)endPoint
                     lineColor:(UIColor *)lineColor
                     lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawBorderWithRect:(CGRect)rect
    edgeInset:(UIEdgeInsets)edgeInset
                 lineColor:(UIColor *)lineColor
                 lineWidth:(CGFloat)lineWidth;



+ (UIBezierPath *)drawCenterEquilateralTriangleWithRect:(CGRect)rect
                                                 length:(CGFloat)length;
+ (UIBezierPath *)drawWithPoints:(NSArray *)points
                       lineColor:(UIColor *)lineColor
                       lineWidth:(CGFloat)lineWidth;
+ (UIBezierPath *)drawWithPoints:(NSArray *)points
                       lineColor:(UIColor *)lineColor
                       lineWidth:(CGFloat)lineWidth
                          isFill:(BOOL)isFill;
@end
