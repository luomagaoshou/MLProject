

//
//  MLCALayerView2.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCALayerView2.h"

@implementation MLCALayerView2
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self draw];
}
- (void)draw
{   // Drawing code
    /*绘图绘图，从起点到终点 一直绘下去，不要乱了顺序*/
    //create path
    UIBezierPath *path = [[UIBezierPath alloc] init];
    //（1）首先设置一个起点
    [path moveToPoint:CGPointMake(150, 75)];
    //（2）跟着我画一个弧线 CGPointMake(150, 125) 是终点， CGPointMake(120, 100) 是控制弧度
    [path addQuadCurveToPoint:CGPointMake(150, 125) controlPoint:CGPointMake(120, 100)];
    //（3）跟着我再跟着顺序 画一条直线条 （2）
    [path addLineToPoint:CGPointMake(250, 125)];
    //（4）同上，也是一个弧线
    [path addQuadCurveToPoint:CGPointMake(250, 75) controlPoint:CGPointMake(230, 100)];
    //（5）再从弧线到 起点 也就是终点
    [path addLineToPoint:CGPointMake(150, 75)];
    
    //1-5 这样就构成一个图形，是按顺序来
    
    path.lineCapStyle = kCGLineCapRound; //线条拐角
    path.lineJoinStyle = kCGLineCapRound; //终点处理
    
    //    create shape layer
    CAShapeLayer *shapeLayer = [CAShapeLayer layer];
    shapeLayer.strokeColor = [UIColor redColor].CGColor;
    shapeLayer.fillColor = [UIColor cyanColor].CGColor;
    shapeLayer.lineWidth = 5;
    shapeLayer.lineJoin = kCALineJoinRound;
    shapeLayer.lineCap = kCALineCapRound;
    shapeLayer.path = path.CGPath;
    //add it to our view
    [self.layer addSublayer:shapeLayer];
    
}
- (void)drawRect:(CGRect)rect {
 
}


@end
