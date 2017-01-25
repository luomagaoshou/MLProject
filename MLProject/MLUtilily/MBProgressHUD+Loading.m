//
//  MBProgressHUD+Loading.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MBProgressHUD+Loading.h"

@implementation MBProgressHUD (Loading)

+ (void)showNativeLoadingHudOnKeywindow
{
    
    [self showNativeLoadingHudOnView:nil];
    
}
+ (void)showNativeLoadingHudOnView:(UIView *)view
{
    [self showNativeLoadingHudOnView:view moreConfig:nil];
}
+ (void)showNativeLoadingHudOnView:(UIView *)view moreConfig:(void (^)(MBProgressHUD *))config{
    UIView *showHudView = view;
    if (!showHudView) {
        showHudView = [[UIApplication sharedApplication].delegate window];
    }
    if ([MBProgressHUD HUDForView:showHudView]) {
        return;
    }
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:showHudView animated:YES];
    [hud hideAnimated:NO afterDelay:60];
    hud.mode = MBProgressHUDAnimationFade;//枚举类型不同的效果
    hud.activityIndicatorColor = [UIColor whiteColor];
    
    hud.bezelView.style = MBProgressHUDBackgroundStyleSolidColor;
    
    hud.bezelView.backgroundColor = [UIColor colorWithRed:56/256.f green:56/256.f blue:56/256.f alpha:0.8];
    hud.minSize = CGSizeMake(120, 100);
    
    hud.detailsLabel.text = @"请稍候...";
    hud.detailsLabel.font = [UIFont systemFontOfSize:13];
    hud.detailsLabel.textColor = [UIColor whiteColor];
    
    hud.offset = CGPointMake(0, -64);
    if (config) {
        config(hud);
    }
}
+ (void)showLoadingHudOnKeywindow
{
    [self showLoadingHudOnView:nil];
}
+ (void)showLoadingHudOnView:(UIView *)view
{
    
    [self showLoadingHudOnView:view moreConfig:nil];
}

+ (void)showLoadingHudOnView:(UIView *)view moreConfig:(void (^)(MBProgressHUD *))config{
    
    UIView *showHudView = view;
    if (!showHudView) {
        showHudView = [[UIApplication sharedApplication].delegate window];
    }
    
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:showHudView animated:YES];
    [hud hideAnimated:NO afterDelay:60];
    hud.mode = MBProgressHUDModeCustomView;
    hud.backgroundView.style = MBProgressHUDBackgroundStyleSolidColor;
    
    hud.bezelView.backgroundColor = [UIColor clearColor];
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 80000
    if ([hud.bezelView valueForKey:@"effectView"]) {
        UIVisualEffectView *effectView = [hud.bezelView valueForKey:@"effectView"];
        effectView.backgroundColor = [UIColor clearColor];
        effectView.effect = nil;
    }
#else
    if ([hud.bezelView valueForKey:@"toolbar"]) {
        UIToolbar *toolbar = [hud.bezelView valueForKey:@"toolbar"];
        toolbar.tintColor = [UIColor clearColor];
        toolbar.backgroundColor = [UIColor clearColor];
    }
#endif
    
    
    UIImageView *customImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 50, 50)];
    
    NSMutableArray *images = [[NSMutableArray alloc] init];
    for (NSInteger i = 0; i < 6; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"pic_loading%ld", i]];
        [images addObject:image];
    }
    customImageView.animationImages = images;
    customImageView.animationDuration = 0.5;
    customImageView.animationRepeatCount = 0;
    [customImageView startAnimating];
    
    hud.customView = customImageView;
    
    if (config) {
        config(hud);
    }
}
+ (void)showHudOnKeywindowWithTitle:(NSString *)title
{
    [self showHudOnView:nil withTitle:title];
}
+ (void)showHudOnView:(UIView *)view withTitle:(NSString *)title
{
    [self showHudOnView:view withTitle:title moreConfig:nil];
}
+ (void)showHudOnView:(UIView *)view withTitle:(NSString *)title moreConfig:(void (^)(MBProgressHUD *hud))config;
{
    
    __block typeof (view) showHudView = view;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (!showHudView) {
            showHudView = [[UIApplication sharedApplication].delegate window];
        }
        if ([MBProgressHUD HUDForView:showHudView]) {
            return ;
        }
        MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:showHudView animated:YES];
        [hud hideAnimated:YES afterDelay:1];
        hud.mode = MBProgressHUDModeText;
        hud.label.text = title;
        hud.label.font = [UIFont systemFontOfSize:14];
        hud.label.textColor = [UIColor whiteColor];
        hud.label.numberOfLines = 0;
        hud.layer.cornerRadius = 4.f;
        
        hud.minSize = CGSizeMake(showHudView.width - 64, 40);
        hud.margin = 0;
        hud.bezelView.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0.5];
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 80000
        if ([hud.bezelView valueForKey:@"effectView"]) {
            UIVisualEffectView *effectView = [hud.bezelView valueForKey:@"effectView"];
            effectView.backgroundColor = [UIColor clearColor];
            effectView.effect = nil;
        }
#else
        if ([hud.bezelView valueForKey:@"toolbar"]) {
            UIToolbar *toolbar = [hud.bezelView valueForKey:@"toolbar"];
            toolbar.tintColor = [UIColor clearColor];
            toolbar.backgroundColor = [UIColor clearColor];
        }
#endif
        
        if (config) {
            config(hud);
        }
        hud.label.text = NSLocalizedString(title, @"HUD loading title");
    });
}


@end
