//
//  CALayer+Line.h
//  MLProject
//
//  Created by apple on 16/3/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
typedef NS_ENUM(NSInteger, CALayerDrawLinePositionType) {
    CALayerDrawLineTypePositionTop,
    CALayerDrawLineTypePositionLeft,
    CALayerDrawLineTypePositionBottom,
    CALayerDrawLineTypePositionRight
    
};
@interface CALayer (Line)
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType lineColor:(UIColor *)lineColor;
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType insets:(UIEdgeInsets)insets lineColor:(UIColor *)lineColor;
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets lineColor:(UIColor *)lineColor;
@end
