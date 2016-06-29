//
//  UIView+Animation.h
//  LotterySteward
//
//  Created by apple on 15/11/7.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Animation)
+ (void)animateWithDuration:(NSTimeInterval)duration
                      views:(NSArray *)views
                     offset:(CGPoint)offset;

@end
