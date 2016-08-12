//
//  CALayer+Line.h
//  MLProject
//
//  Created by apple on 16/3/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
typedef NS_OPTIONS(NSInteger, CALayerDrawLinePositionOption) {
    CALayerDrawLinePositionOptionTop = 1,
    CALayerDrawLinePositionOptionLeft = 1 << 1,
    CALayerDrawLinePositionOptionBottom = 1 << 2,
    CALayerDrawLinePositionOptionRight = 1 << 3,
    
};
@interface CALayer (Line)
- (NSArray <CALayer *> *)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor;
- (NSArray <CALayer *> *)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight;



- (NSArray <CALayer *> *)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionType
                            lineColor:(UIColor *)lineColor
                    lineWidthOrHeight:(CGFloat)lineWidthOrHeight
                               insets:(UIEdgeInsets)insets;
@end
