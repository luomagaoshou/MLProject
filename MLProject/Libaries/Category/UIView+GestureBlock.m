//
//  UIView+GestureBlock.m
//  MLProject
//
//  Created by apple on 16/1/14.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIView+GestureBlock.h"

//
//- (void)tap:(void (^)(void))eventBlock
//{
//    objc_setAssociatedObject(self, @selector(tapAction:), eventBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
//
//    id gesture = [[NSClassFromString(@"UITapGestureRecognizer") alloc] initWithTarget:self action:@selector(tapAction:)];
//    [self addGestureRecognizer:gesture];
//
//
//}
//- (void)tapAction:(id)sender
//{
//    void (^block)() = objc_getAssociatedObject(self, @selector(tapAction:));
//    if (block) {
//        block();
//    }
//}


#define UIVIEW_GESTURE_EVENT(methodName, eventName)\
- (void)methodName##WithConfig:(void (^)(id gesture))gestureConfig event:(void (^)(id gesture))eventBlock;\
{\
self.userInteractionEnabled = YES;\
objc_setAssociatedObject(self, @selector(methodName##Action:), eventBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);\
NSString *classString = [NSString stringWithUTF8String:#eventName];\
classString = [NSString stringWithFormat:@"%@%@%@", @"UI", classString, @"GestureRecognizer"];\
id createGesture = [[NSClassFromString(classString) alloc] initWithTarget:self action:@selector(methodName##Action:)];\
if(gestureConfig){\
gestureConfig(createGesture);\
}\
[self addGestureRecognizer:createGesture];\
}\
- (void)methodName##Action:(id)sender\
{\
void (^block)(id gesture) = objc_getAssociatedObject(self, @selector(methodName##Action:));\
if (block) {\
block(sender);\
}\
}

@implementation UIView (GestureBlock)
UIVIEW_GESTURE_EVENT(tap, Tap)
UIVIEW_GESTURE_EVENT(swipe, Swipe)
UIVIEW_GESTURE_EVENT(longPress, LongPress)
UIVIEW_GESTURE_EVENT(pan, Pan)
UIVIEW_GESTURE_EVENT(pinch, Pinch)
UIVIEW_GESTURE_EVENT(rotation, Rotation)
@end
