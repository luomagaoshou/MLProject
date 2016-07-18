//
//  CALayer+Line.m
//  MLProject
//
//  Created by apple on 16/3/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CALayer+Line.h"
#import "UIView+Frame.h"
@implementation CALayer (Line)
-(CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor
{
    return [self makeLineWithPositionType:positionType lineColor:lineColor insets:UIEdgeInsetsZero];
}

- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineColor:(UIColor *)lineColor insets:(UIEdgeInsets)insets
{
    return [self makeLineWithPositionType:positionType lineWidthOrHeight:1/SCREEN_SCALE lineColor:lineColor insets:insets];
}

- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionOption)positionType lineWidthOrHeight:(CGFloat)lineWidthOrHeight   lineColor:(UIColor *)lineColor insets:(UIEdgeInsets)insets
{
    CALayer *layer = [[CALayer alloc] init];
    layer.backgroundColor = lineColor.CGColor;

    layer.frame = [self calculateFrameForType:positionType lineWidthOrHeight:lineWidthOrHeight insets:insets];
    [self addSublayer:layer];
    return layer;
}
- (CGRect)calculateFrameForType:(CALayerDrawLinePositionOption)positionType  lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets
{
    CGRect frame;
    switch (positionType) {
        case CALayerDrawLinePositionOptionTop:
        {
            frame = CGRectMake(0, 0, self.bounds.size.width, lineWidthOrHeight);
        }
            break;
        case CALayerDrawLinePositionOptionLeft:
        {
            frame = CGRectMake(0, 0, lineWidthOrHeight, self.bounds.size.height);
        }
            break;
        case CALayerDrawLinePositionOptionBottom:
        {
            frame = CGRectMake(0, self.bounds.size.height - lineWidthOrHeight, self.bounds.size.width, lineWidthOrHeight);
        }
            break;
        case CALayerDrawLinePositionOptionRight:
        {
             frame = CGRectMake(self.bounds.size.width - lineWidthOrHeight, 0, lineWidthOrHeight, self.bounds.size.height);
        }
            break;
        default:
            break;
    }
    
    frame = UIEdgeInsetsInsetRect(frame, insets);
    return frame;
}
@end
