//
//  UIView+ClearColorShade.m
//  LotterySteward
//
//  Created by apple on 15/11/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIView+ClearColorShade.h"
#import <objc/runtime.h>
static const char *externTapActionCallbackKey;
static const char *externClearColorShadeViewKey;
@implementation UIView (ClearColorShade)
+ (instancetype)shareClearColorShadeViewInstance
{
    static dispatch_once_t onceToken;
    static UIView *ClearColorShadeView = nil;
    dispatch_once(&onceToken, ^{
        ClearColorShadeView = [[UIView alloc] init];
        
    });
    return ClearColorShadeView;
}
+ (void)addFullScreenClearColorShade

{
    [[UIView shareClearColorShadeViewInstance] addFullScreenClearColorShade];
}

- (void)addFullScreenClearColorShade
{
    [self addFullScreenClearColorShadeWithTapEvent:nil];
}
+ (void)addFullScreenClearColorShadeWithTapEvent:(void (^)(void))tapActionCallback
{
    [[UIView shareClearColorShadeViewInstance] addFullScreenClearColorShadeWithTapEvent:tapActionCallback];
}
- (void)addFullScreenClearColorShadeWithTapEvent:(void (^)(void))tapActionCallback
{
    self.ClearColorShadeView = [UIView shareClearColorShadeViewInstance];
    [UIView shareClearColorShadeViewInstance].frame = [UIScreen mainScreen].bounds;
    
    
    [UIView shareClearColorShadeViewInstance].autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
    [UIView shareClearColorShadeViewInstance].backgroundColor = [UIColor clearColor];
    UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] init];
    [tapGesture addTarget:self action:@selector(tapEvent:)];
    [[UIView shareClearColorShadeViewInstance] addGestureRecognizer:tapGesture];
    
    if (tapActionCallback) {
        objc_setAssociatedObject(self, &externTapActionCallbackKey, tapActionCallback, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    
    [[UIApplication sharedApplication].keyWindow addSubview:[UIView shareClearColorShadeViewInstance]];
}
+ (void)removeClearColorShadeView
{
    if ([UIView shareClearColorShadeViewInstance].superview) {
        [[UIView shareClearColorShadeViewInstance] removeFromSuperview];
        for (UIView *subView in [UIView shareClearColorShadeViewInstance].subviews) {
            [subView removeFromSuperview];
        }
        
    }
    
}
#pragma mark - ========= Event Methods =========
- (void)tapEvent:(UITapGestureRecognizer *)tapGesture
{
    if (objc_getAssociatedObject(self, &externTapActionCallbackKey)) {
        ((void(^)(void))objc_getAssociatedObject(self, &externTapActionCallbackKey))();
    }
    
}
#pragma mark - ========= Setter & Getter =========
- (void)setClearColorShadeView:(UIView *)ClearColorShadeView
{
    
    objc_setAssociatedObject(self, &externClearColorShadeViewKey, ClearColorShadeView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UIView *)ClearColorShadeView
{
    if (objc_getAssociatedObject(self, &externClearColorShadeViewKey) == nil) {
        self.ClearColorShadeView = [UIView shareClearColorShadeViewInstance];
        
    }
    return objc_getAssociatedObject(self, &externClearColorShadeViewKey);
}

@end
