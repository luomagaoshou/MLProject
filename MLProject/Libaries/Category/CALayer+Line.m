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
-(NSArray <CALayer *>*)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor
{
    return [self drawLineWithPositionOption:positionOption lineColor:lineColor lineWidthOrHeight:-1/[UIScreen mainScreen].scale];
}
- (NSArray <CALayer *>*)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight
{
    return [self drawLineWithPositionOption:positionOption lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:UIEdgeInsetsZero];
}

- (NSArray <CALayer *>*)drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption
                            lineColor:(UIColor *)lineColor
                    lineWidthOrHeight:(CGFloat)lineWidthOrHeight
                               insets:(UIEdgeInsets)insets
{
    NSMutableArray *layers = [[NSMutableArray alloc] init];
    if (positionOption | CALayerDrawLinePositionOptionTop) {
       [layers addObject:[self _drawLineWithPositionOption:CALayerDrawLinePositionOptionTop lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets]];
    }
    if (positionOption | CALayerDrawLinePositionOptionLeft) {
       [layers addObject:[self _drawLineWithPositionOption:CALayerDrawLinePositionOptionLeft lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets]];
    }
   
    if (positionOption | CALayerDrawLinePositionOptionBottom) {
        [layers addObject:[self _drawLineWithPositionOption:CALayerDrawLinePositionOptionBottom lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets]];
    }
    if (positionOption | CALayerDrawLinePositionOptionRight) {
        [layers addObject:[self _drawLineWithPositionOption:CALayerDrawLinePositionOptionRight lineColor:lineColor lineWidthOrHeight:lineWidthOrHeight insets:insets]];
    }
    return layers;
}
- (CALayer *)_drawLineWithPositionOption:(CALayerDrawLinePositionOption)positionOption lineColor:(UIColor *)lineColor lineWidthOrHeight:(CGFloat)lineWidthOrHeight insets:(UIEdgeInsets)insets
{
    CALayer *layer = [[CALayer alloc] init];
    layer.backgroundColor = lineColor.CGColor;
    layer.frame = [self _calculateFrameForType:positionOption lineWidthOrHeight:lineWidthOrHeight insets:insets];
    
    [self addSublayer:layer];
    return layer;
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
