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
- (void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor;
- (void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight;



- (void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType
                            lineColor:(UIColor *)lineColor
                    lineWidthOrHeight:(CGFloat)lineWidthOrHeight
                               insets:(UIEdgeInsets)insets;
@end
