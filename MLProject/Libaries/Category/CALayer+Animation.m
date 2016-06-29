//
//  CALayer+Animation.m
//  MLProject
//
//  Created by 妙龙赖 on 16/6/2.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CALayer+Animation.h"

@implementation CALayer (Animation)
- (void)ml_shake
{
    CAKeyframeAnimation *keyframeAnimation = [CAKeyframeAnimation animation];
    keyframeAnimation.keyPath = @"transform.rotation";
    keyframeAnimation.values = @[@(-M_PI_4/90 * 5), @(M_PI_4/90 * 5), @(-M_PI_4/90 * 5)];
    keyframeAnimation.removedOnCompletion = NO;
    keyframeAnimation.fillMode = kCAFillModeForwards;
    keyframeAnimation.duration = 0.2;
    keyframeAnimation.repeatCount = MAXFLOAT;
    [self addAnimation:keyframeAnimation forKey:@"shakeAni"];
    
}
@end
