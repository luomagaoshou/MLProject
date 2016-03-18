//
//  UIView+Shade.m
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIView+Shade.h"
#import <objc/runtime.h>
static const char *externTapActionCallbackKey;
static const char *externShadeViewKey;
@implementation UIView (Shade)
+ (instancetype)shareShadeViewInstance
{
    static dispatch_once_t onceToken;
    static UIView *shadeView = nil;
    dispatch_once(&onceToken, ^{
        shadeView = [[UIView alloc] init];
        
    });
    return shadeView;
}
+ (void)addFullScreenShade

{
    [[UIView shareShadeViewInstance] addFullScreenShade];
}


- (void)addFullScreenShade
{
    [self addFullScreenShadeWithTapEvent:nil];
}
+ (void)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback
{
    [[UIView shareShadeViewInstance] addFullScreenShadeWithTapEvent:tapActionCallback];
}
- (void)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback
{
    self.shadeView = [UIView shareShadeViewInstance];
    [UIView shareShadeViewInstance].frame = [UIScreen mainScreen].bounds;
 
    
    [UIView shareShadeViewInstance].autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
     [UIView shareShadeViewInstance].backgroundColor = [UIColor colorWithWhite:0 alpha:0.5];
    UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] init];
    [tapGesture addTarget:self action:@selector(tapEvent:)];
    [[UIView shareShadeViewInstance] addGestureRecognizer:tapGesture];
    
    if (tapActionCallback) {
        objc_setAssociatedObject(self, &externTapActionCallbackKey, tapActionCallback, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    
    [[UIApplication sharedApplication].keyWindow addSubview:[UIView shareShadeViewInstance]];
}
+ (void)removeShadeView
{
    if ([UIView shareShadeViewInstance].superview) {
        [[UIView shareShadeViewInstance] removeFromSuperview];
        for (UIView *subView in [UIView shareShadeViewInstance].subviews) {
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
- (void)setShadeView:(UIView *)shadeView
{
    
    objc_setAssociatedObject(self, &externShadeViewKey, shadeView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UIView *)shadeView
{
    if (objc_getAssociatedObject(self, &externShadeViewKey) == nil) {
        self.shadeView = [UIView shareShadeViewInstance];
        
    }
    return objc_getAssociatedObject(self, &externShadeViewKey);
}
@end
