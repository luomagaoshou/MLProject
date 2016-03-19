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
-(CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType lineColor:(UIColor *)lineColor
{
    return [self makeLineWithPositionType:positionType insets:UIEdgeInsetsZero lineColor:lineColor];
}

- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType insets:(UIEdgeInsets)insets lineColor:(UIColor *)lineColor
{
    return [self makeLineWithPositionType:positionType lineWidthOrHeight:1/SCREEN_SCALE insets:insets lineColor:lineColor];
}
- (CALayer *)makeLineWithPositionType:(CALayerDrawLinePositionType)positionType lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets  lineColor:(UIColor *)lineColor
{
    CALayer *layer = [[CALayer alloc] init];
    layer.backgroundColor = lineColor.CGColor;

    layer.frame = [self getFrameWithType:positionType lineWidthOrHeight:lineWidthOrHeight insets:insets];
    [self addSublayer:layer];
    return layer;
}
- (CGRect)getFrameWithType:(CALayerDrawLinePositionType)positionType  lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets
{
    CGRect frame;
    switch (positionType) {
        case CALayerDrawLineTypePositionTop:
        {
            frame = CGRectMake(0, 0, self.bounds.size.width, lineWidthOrHeight);
        }
            break;
        case CALayerDrawLineTypePositionLeft:
        {
            frame = CGRectMake(0, 0, lineWidthOrHeight, self.bounds.size.height);
        }
            break;
        case CALayerDrawLineTypePositionBottom:
        {
            frame = CGRectMake(0, self.bounds.size.height - lineWidthOrHeight, self.bounds.size.width, lineWidthOrHeight);
        }
            break;
        case CALayerDrawLineTypePositionRight:
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
