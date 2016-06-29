//
//  UIView+Animation.m
//  LotterySteward
//
//  Created by apple on 15/11/7.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIView+Animation.h"

@implementation UIView (Animation)
+ (void)animateWithDuration:(NSTimeInterval)duration
                   views:(NSArray *)views
                     offset:(CGPoint)offset
{
  
    for (UIView *view in views) {
        [UIView animateWithDuration:duration animations:^{
            CGRect origionRect = view.frame;
            CGRect newRect = CGRectMake(origionRect.origin.x + offset.x, origionRect.origin.y + offset.y, origionRect.size.width, origionRect.size.height);
            view.frame = newRect;
        }];
    }
}

@end
