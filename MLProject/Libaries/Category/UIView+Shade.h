//
//  UIView+Shade.h
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface UIView (Shade)
@property (nonatomic, strong) UIView *shadeView;
+ (instancetype)shareShadeViewInstance;
+ (void)addFullScreenShade;
+ (void)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback;
+ (void)removeShadeView;



@end
