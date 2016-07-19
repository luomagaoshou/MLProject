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
-(void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor
{
    [self drawLineWithPositionOption:positionOption lineColor:lineColor lineWidthOrHeight:-1/[UIScreen mainScreen].scale];
}
- (void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight
{
    [self drawLineWithPositionOption:positionOption lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:UIEdgeInsetsZero];
}

- (void)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption
                            lineColor:(UIColor *)lineColor
                    lineWidthOrHeight:(CGFloat)lineWidthOrHeight
                               insets:(UIEdgeInsets)insets
{
    if (positionOption | CALayerDrawLinePositionOptionTop) {
        [self _drawLineWithPositionOption:CALayerDrawLinePositionOptionTop lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets];
    }
    if (positionOption | CALayerDrawLinePositionOptionLeft) {
        [self _drawLineWithPositionOption:CALayerDrawLinePositionOptionLeft lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets];
    }
   
    if (positionOption | CALayerDrawLinePositionOptionBottom) {
        [self _drawLineWithPositionOption:CALayerDrawLinePositionOptionBottom lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets];
    }
    if (positionOption | CALayerDrawLinePositionOptionRight) {
        [self _drawLineWithPositionOption:CALayerDrawLinePositionOptionRight lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets];
    }
    
}
- (void)_drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets
{
    CALayer *layer = [[CALayer alloc] init];
    layer.backgroundColor = lineColor.CGColor;
    layer.frame = [self _calculateFrameForType:positionOption lineWidthOrHeight:lineWidthOrHeight insets:insets];
    
    [self addSublayer:layer];
}
- (CGRect)_calculateFrameForType:(CALayerDrawLinePositionOption)positionOption  lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets
{
    CGRect frame;
    switch (positionOption) {
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
