//
//  MBProgressHUD+Loading.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (Loading)
+ (void)showNativeLoadingHudOnKeywindow;
+ (void)showNativeLoadingHudOnView:(UIView *)view;
+ (void)showNativeLoadingHudOnView:(UIView *)view moreConfig:(void (^)(MBProgressHUD *hud))config;

+ (void)showLoadingHudOnKeywindow;
+ (void)showLoadingHudOnView:(UIView *)view;
+ (void)showLoadingHudOnView:(UIView *)view moreConfig:(void (^)(MBProgressHUD *hud))config;


+ (void)showHudOnKeywindowWithTitle:(NSString *)title;
+ (void)showHudOnView:(UIView *)view withTitle:(NSString *)title;
+ (void)showHudOnView:(UIView *)view withTitle:(NSString *)title moreConfig:(void (^)(MBProgressHUD *hud))config;


@end
