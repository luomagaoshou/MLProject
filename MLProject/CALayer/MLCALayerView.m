//
//  MLCALayerView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCALayerView.h"
#import "UIBezierPath+ML_Tools.h"

@implementation MLCALayerView

- (void)awakeFromNib
{
    //self.backgroundColor = [UIColor redColor];
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self setNeedsDisplay];
    [self layoutIfNeeded];
}
- (void)drawRect:(CGRect)rect {
    
  
    // Drawing code
    //self.backgroundColor =
    CAShapeLayer *shapeLayer = [[CAShapeLayer alloc] init];
    shapeLayer.bounds = self.bounds;
    shapeLayer.frame = self.bounds;
    //shapeLayer.position = CGPointMake(self.layer.position.x - self.frame.origin.x, self.layer.position.y - self.frame.origin.y);
    shapeLayer.backgroundColor = [UIColor redColor].CGColor;
     //[self.layer addSublayer:shapeLayer];
  static  NSInteger borderWidth = 10;
    borderWidth++;
    shapeLayer.borderWidth = borderWidth;
    shapeLayer.borderColor = [UIColor blueColor].CGColor;
  
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:self.bounds cornerRadius:10];
    
 

    [[UIColor blueColor] set];
    
 
  shapeLayer.path  = path.CGPath;
    [self.layer addSublayer:shapeLayer];
    [shapeLayer mask];
    self.layer.masksToBounds = NO;
    
}


@end
