//
//  UIView+Shade.m
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIView+Shade.h"
#import <objc/runtime.h>
@implementation UIView (Shade)
+ (instancetype)currentShadeView
{
    UIView *shadeView = objc_getAssociatedObject(self, @selector(currentShadeView));
    if (!shadeView) {
    
        shadeView = [[UIView alloc] init];
        objc_setAssociatedObject(self, @selector(currentShadeView), shadeView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return shadeView;
}

+ (instancetype)addFullScreenShade

{
   return [[self currentShadeView] addFullScreenShade];
}

- (instancetype)addFullScreenShade
{
   return [self addFullScreenShadeWithTapEvent:nil];
}
+ (instancetype)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback
{
    return [[UIView currentShadeView] addFullScreenShadeWithTapEvent:tapActionCallback];
}
- (instancetype)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback
{
   
    self.frame = [UIScreen mainScreen].bounds;
 
    self.autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
     self.backgroundColor = [UIColor colorWithWhite:0 alpha:0.5];
    if (tapActionCallback) {
        UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] init];
        [tapGesture addTarget:self action:@selector(tapEvent:)];
        [self addGestureRecognizer:tapGesture];
            objc_setAssociatedObject(self, @selector(tapEvent:), tapActionCallback, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }else{
        objc_setAssociatedObject(self, @selector(tapEvent:), nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    
    
    [[[UIApplication sharedApplication].delegate window] addSubview:self];
    return self;
}
+ (void)removeShadeView
{
    [[UIView currentShadeView] _removeShadeView];
 
    
}
- (void)_removeShadeView
{
    if (self.superview) {
        [self removeFromSuperview];
        for (UIView *subView in self.subviews) {
            [subView removeFromSuperview];
        }
        objc_setAssociatedObject([UIView class], @selector(currentShadeView), nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
        
    }
}

#pragma mark - ========= Event Methods =========
- (void)tapEvent:(UITapGestureRecognizer *)tapGesture
{
    if (objc_getAssociatedObject(self,@selector(tapEvent:))) {
        ((void(^)(void))objc_getAssociatedObject(self, @selector(tapEvent:)))();
    }
   
}

@end
