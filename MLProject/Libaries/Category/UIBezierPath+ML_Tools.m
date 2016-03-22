//
//  UIBezierPath+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/10/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIBezierPath+ML_Tools.h"

@implementation UIBezierPath (ML_Tools)
+ (UIBezierPath *)drawLineOnView:(UIView *)view withSide:(UIBezierPathDrawLineSide)side lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    UIBezierPath *path = [UIBezierPath bezierPathWithRect:[self getFrameWithView:view withSide:side lineColor:lineColor lineWidth:lineWidth insets:insets]];
    [lineColor set];
    [path stroke];
    [path fill];
    return nil;
}
+ (CGRect)getFrameWithView:(UIView *)view withSide:(UIBezierPathDrawLineSide)side lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    CGRect frame;
    switch (side) {
        case UIBezierPathDrawLineSideTop:
        {
        frame = CGRectMake(0, 0, view.bounds.size.width, lineWidth);
        }
            break;
        case UIBezierPathDrawLineSideLeft:
        {
        frame = CGRectMake(0, 0, lineWidth, view.bounds.size.height);
        }
            break;
        case UIBezierPathDrawLineSideBottom:
        {
        frame = CGRectMake(0, view.bounds.size.height - lineWidth, view.bounds.size.width, lineWidth);
        }
            break;
        case UIBezierPathDrawLineSideRight:
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

+ (UIBezierPath *)drawLineOnButtomWithView:(UIView *)view
                                 lineColor:(UIColor *)lineColor
                                 lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake(0, CGRectGetHeight(view.bounds) - lineWidth / 2))];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetWidth(view.bounds), CGRectGetHeight(view.bounds) - lineWidth / 2))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
}
+ (UIBezierPath *)drawLineOnTopWithView:(UIView *)view
                                 lineColor:(UIColor *)lineColor
                                 lineWidth:(CGFloat)lineWidth
{
   return [self drawLineOnTopWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];
}
+ (UIBezierPath *)drawLineOnTopWithView:(UIView *)view
                              lineColor:(UIColor *)lineColor
                              lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake(0 + insets.left, lineWidth / 2 + insets.top))];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetWidth(view.bounds) - insets.right, lineWidth / 2 - insets.bottom))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
}


+ (UIBezierPath *)drawLineOnLeftWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake(lineWidth / 2, 0))];
    [points addObject:NSStringFromCGPoint(CGPointMake(lineWidth / 2, CGRectGetHeight(view.bounds)))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
}
+ (UIBezierPath *)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
   return [self drawLineOnRightWithView:view lineColor:lineColor lineWidth:lineWidth insets:UIEdgeInsetsZero];

}

+ (UIBezierPath *)drawLineOnRightWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetWidth(view.bounds) - lineWidth / 2 + insets.left, insets.top))];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetWidth(view.bounds) - lineWidth / 2 - insets.right, CGRectGetHeight(view.bounds) - insets.bottom))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
}

+ (UIBezierPath *)drawLineOnVerticalCenterWithView:(UIView *)view
                                         lineColor:(UIColor *)lineColor
                                         lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetHeight(view.bounds)/2 - lineWidth / 2, 0))];
    [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetHeight(view.bounds)/2 - lineWidth / 2, CGRectGetWidth(view.bounds)))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
    

}
+ (UIBezierPath *)drawLineOnHorizontalCenterWithView:(UIView *)view
                                         lineColor:(UIColor *)lineColor
                                         lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(CGPointMake( CGRectGetWidth(view.bounds)/2 - lineWidth / 2, 0))];
    [points addObject:NSStringFromCGPoint(CGPointMake( CGRectGetWidth(view.bounds)/2 - lineWidth / 2, CGRectGetHeight(view.bounds)))];
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
    
    
}
+ (UIBezierPath *)drawUpsideAngleWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [NSMutableArray new];
    CGPoint startPoint = CGPointMake(CGRectGetWidth(view.bounds) - 10, CGRectGetHeight(view.bounds)/2);
    [points addObject:NSStringFromCGPoint(startPoint)];
    [points addObject:NSStringFromCGPoint(CGPointWithOffset(startPoint, CGPointMake(5, 5)))];
    [points addObject:NSStringFromCGPoint(CGPointWithOffset(startPoint, CGPointMake(10, 0)))];
   
    return  [UIBezierPath drawWithPoints:points lineColor:lineColor lineWidth:lineWidth];
}
+(UIBezierPath *)drawUpsidedownAngleWithView:(UIView *)view lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    NSMutableArray *points = [NSMutableArray new];
    CGPoint startPoint = CGPointMake(CGRectGetWidth(view.bounds) - 10, CGRectGetHeight(view.bounds)/2);
    [points addObject:NSStringFromCGPoint(startPoint)];
    [points addObject:NSStringFromCGPoint(CGPointWithOffset(startPoint, CGPointMake(5, -5)))];
    [points addObject:NSStringFromCGPoint(CGPointWithOffset(startPoint, CGPointMake(10, 0)))];
    
    return  [UIBezierPath drawWithPoints:points lineColor:lineColor lineWidth:lineWidth];
}
+ (UIBezierPath *)drawCenterEquilateralTriangleWithRect:(CGRect)rect length:(CGFloat)length
{

        NSMutableArray *points = [[NSMutableArray alloc] init];
        [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetMaxX(rect)/2 - length/2, CGRectGetMaxY(rect)))];
        [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetMaxX(rect)/2 + length/2, CGRectGetMaxY(rect)))];
        [points addObject:NSStringFromCGPoint(CGPointMake(CGRectGetMaxX(rect)/2, CGRectGetMaxY(rect) - length/sqrt(3)))];
      return   [self drawWithPoints:points lineColor:[UIColor whiteColor] lineWidth:1 isFill:YES];
        
   

}
+ (UIBezierPath *)drawLineWithStartPoint:(CGPoint)statrPoint
                      endPoint:(CGPoint)endPoint
                     lineColor:(UIColor *)lineColor
                     lineWidth:(CGFloat)lineWidth
{

    NSMutableArray *points = [[NSMutableArray alloc] init];
    [points addObject:NSStringFromCGPoint(statrPoint)];
    [points addObject:NSStringFromCGPoint(endPoint)];
   return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
    

}
+ (UIBezierPath *)drawWithPoints:(NSArray *)points
                         lineColor:(UIColor *)lineColor
                         lineWidth:(CGFloat)lineWidth
{
    return [self drawWithPoints:points lineColor:lineColor lineWidth:lineWidth isFill:NO];
    
}
+ (UIBezierPath *)drawWithPoints:(NSArray *)points
             lineColor:(UIColor *)lineColor
             lineWidth:(CGFloat)lineWidth
                isFill:(BOOL)isFill
{
    UIBezierPath *path;

    for (NSInteger i = 0; i < points.count; i++) {
        switch (i) {
            case 0:
            {
                path = [UIBezierPath bezierPathWithRect:CGRectMake(CGPointFromString(points[i]).x, CGPointFromString(points[i]).y, 0, 0)];
            }
                break;
                
            default:{
                 [path addLineToPoint:CGPointFromString(points[i])];
            }
                break;
        }
        
        
    }
    [lineColor set];
    path.lineWidth = lineWidth;
    if (isFill) {
        [path fill];
    }
    [path stroke];
    return path;
}
+ (UIBezierPath *)drawBorderWithRect:(CGRect)rect edgeInset:(UIEdgeInsets)edgeInset lineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth
{
    UIBezierPath * borderPath = [UIBezierPath bezierPath];
    [borderPath appendPath:[UIBezierPath bezierPathWithRect:CGRectMake(edgeInset.left, edgeInset.top,0, 0)]];
    [borderPath addLineToPoint:CGPointMake(edgeInset.left, CGRectGetMaxY(rect) - edgeInset.bottom)];
    [borderPath addLineToPoint:CGPointMake(CGRectGetMaxX(rect) - edgeInset.bottom, CGRectGetMaxY(rect) - edgeInset.right)];
    [borderPath addLineToPoint:CGPointMake(CGRectGetMaxX(rect) - edgeInset.bottom, edgeInset.top)];
    [borderPath addLineToPoint:CGPointMake(edgeInset.left, edgeInset.top)];
    borderPath.lineWidth = lineWidth;
    [lineColor set];
    [borderPath stroke];
    return borderPath;
}
@end
