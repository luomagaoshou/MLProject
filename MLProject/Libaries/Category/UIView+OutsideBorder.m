//
//  UIView+OutsideBorder.m
//  MLProject
//
//  Created by 妙龙赖 on 16/8/25.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIView+OutsideBorder.h"

@implementation UIView (OutsideBorder)
- (void)addOutsideBorderWithWidth:(CGFloat)width color:(UIColor *)color{
    UIView *outsideBorderView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.width + width * 2, self.height + width * 2)];
    outsideBorderView.center = self.center;
    LayerCornerRadius_borderWidth_borderColor(outsideBorderView.layer, outsideBorderView.width/2, width, color);
    UIView *superView = self.superview;
    NSCParameterAssert(superView);
    [superView addSubview:outsideBorderView];
    [superView insertSubview:outsideBorderView belowSubview:self];
    
}
@end
