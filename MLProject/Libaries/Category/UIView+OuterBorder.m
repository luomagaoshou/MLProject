//
//  UIView+OuterBorder.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/3.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "UIView+OuterBorder.h"

@implementation UIView (OuterBorder)
- (void)ml_setUpOuterBorderWithWidth:(CGFloat)width color:(UIColor *)color{
    UIView *outsideBorderView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.width + width * 2, self.height + width * 2)];
    outsideBorderView.center = self.center;
    LayerCornerRadius_borderWidth_borderColor(outsideBorderView.layer, outsideBorderView.width/2, width, color);
    objc_setAssociatedObject(self, @selector(ml_outerBorder), outsideBorderView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    UIView *superView = self.superview;
    [superView addSubview:outsideBorderView];
    [superView insertSubview:outsideBorderView belowSubview:self];
}
- (instancetype)ml_outerBorder{
    
    return objc_getAssociatedObject(self, @selector(ml_outerBorder));
}
@end
