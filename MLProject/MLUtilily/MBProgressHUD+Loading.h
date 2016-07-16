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
+ (void)showLoadingHudOnKeywindow;
+ (void)showLoadingHudOnView:(UIView *)view;
+ (void)showHudOnKeywindowWithTitle:(NSString *)title;
+ (void)showHudWithTitle:(NSString *)title moreConfig:(void (^)(MBProgressHUD *hud))config;

+ (void)removeProgressHudOnKeywindow;
@end
