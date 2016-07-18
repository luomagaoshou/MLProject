//
//  CALayer+Line.h
//  MLProject
//
//  Created by apple on 16/3/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
typedef NS_OPTIONS(NSInteger, CALayerDrawLinePositionOption) {
    CALayerDrawLinePositionOptionTop,
    CALayerDrawLinePositionOptionLeft,
    CALayerDrawLinePositionOptionBottom,
    CALayerDrawLinePositionOptionRight
    
};
@interface CALayer (Line)
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor;
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight;

- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor insets:(UIEdgeInsets)insets;


- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineWidthOrHeight:(CGFloat)lineWidthOrHeight lineColor:(UIColor *)lineColor insets:(UIEdgeInsets)insets;
@end
