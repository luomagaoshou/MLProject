//
//  UIView+GestureBlock.h
//  MLProject
//
//  Created by apple on 16/1/14.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (GestureBlock)

- (void)tapWithEvent:(void (^)(id gesture))eventBlock;
- (void)tapWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;

- (void)swipeWithEvent:(void (^)(id gesture))eventBlock;
- (void)swipeWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;
- (void)panWithEvent:(void (^)(id gesture))eventBlock;
- (void)panWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;

- (void)pinchWithEvent:(void (^)(id gesture))eventBlock;
- (void)pinchWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;

- (void)rotationWithEvent:(void (^)(id gesture))eventBlock;
- (void)rotationWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;

- (void)longPressWithEvent:(void (^)(id gesture))eventBlock;
- (void)longPressWithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;


@end
