//
//  UIBezierPath+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/10/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIBezierPath+ML_Tools.h"

@implementation UIBezierPath (ML_Tools)

+ (void)drawLineOnTopWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    [self drawLineOnTopWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];
}
+ (void)drawLineOnTopWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    [self drawLineOnView:view withSide:UIBezierPathDrawLineOptionSideTop lineColor:lineColor lineWidth:lineWidth insets:insets];
}


+ (void)drawLineOnLeftWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    [self drawLineOnLeftWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];
}
+ (void)drawLineOnLeftWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    [self drawLineOnView:view withSide:UIBezierPathDrawLineOptionSideLeft lineColor:lineColor lineWidth:lineWidth insets:insets];
}

+ (void)drawLineOnBottomWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    [self drawLineOnBottomWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];
}
+ (void)drawLineOnBottomWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    [self drawLineOnView:view withSide:UIBezierPathDrawLineOptionSideBottom lineColor:lineColor lineWidth:lineWidth insets:insets];
}

+ (void)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    [self drawLineOnRightWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];
}
+ (void)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    [self drawLineOnView:view withSide:UIBezierPathDrawLineOptionSideRight lineColor:lineColor lineWidth:lineWidth insets:insets];
}


+ (void)drawLineOnView:(UIView *)view withSide:(UIBezierPathDrawLineOptionSide)side lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    
    if (side & UIBezierPathDrawLineOptionSideTop) {
        UIBezierPath *path = [UIBezierPath bezierPathWithRect:[self getFrameWithView:view withSide:UIBezierPathDrawLineOptionSideTop lineColor:lineColor lineWidth:lineWidth insets:insets]];
        [lineColor set];
        [path stroke];
        [path fill];
    }
  if (side & UIBezierPathDrawLineOptionSideLeft){
        UIBezierPath *path = [UIBezierPath bezierPathWithRect:[self getFrameWithView:view withSide:UIBezierPathDrawLineOptionSideLeft lineColor:lineColor lineWidth:lineWidth insets:insets]];
        [lineColor set];
        [path stroke];
        [path fill];
    }
   if (side & UIBezierPathDrawLineOptionSideBottom){
        UIBezierPath *path = [UIBezierPath bezierPathWithRect:[self getFrameWithView:view withSide:UIBezierPathDrawLineOptionSideBottom lineColor:lineColor lineWidth:lineWidth insets:insets]];
        [lineColor set];
        [path stroke];
        [path fill];
    }
   if (side & UIBezierPathDrawLineOptionSideRight){
        UIBezierPath *path = [UIBezierPath bezierPathWithRect:[self getFrameWithView:view withSide:UIBezierPathDrawLineOptionSideRight lineColor:lineColor lineWidth:lineWidth insets:insets]];
        [lineColor set];
        [path stroke];
        [path fill];
    }
  
}
+ (CGRect)getFrameWithView:(UIView *)view withSide:(UIBezierPathDrawLineOptionSide)side lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    CGRect frame;
    switch (side) {
        case UIBezierPathDrawLineOptionSideTop:
        {
        frame = CGRectMake(0, 0, view.bounds.size.width, lineWidth);
        }
            break;
        case UIBezierPathDrawLineOptionSideLeft:
        {
        frame = CGRectMake(0, 0, lineWidth, view.bounds.size.height);
        }
            break;
        case UIBezierPathDrawLineOptionSideBottom:
        {
        frame = CGRectMake(0, view.bounds.size.height - lineWidth, view.bounds.size.width, lineWidth);
        }
            break;
        case UIBezierPathDrawLineOptionSideRight:
        {
        frame = CGRectMake(view.bounds.size.width - lineWidth, 0, lineWidth, view.bounds.size.height);
        }
            break;
        default:
            break;
    }
    
    frame = UIEdgeInsetsInsetRect(frame, insets);
    return frame;
}


@end
