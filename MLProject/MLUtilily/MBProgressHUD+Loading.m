//
//  MBProgressHUD+Loading.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MBProgressHUD+Loading.h"
#import "UIImage+FX.h"
#import "UIImage+FileName.h"
@implementation MBProgressHUD (Loading)
+ (void)showNativeLoadingHudOnKeywindow
{
    
   
        MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[UIApplication sharedApplication].keyWindow animated:YES];
        hud.mode = MBProgressHUDAnimationFade;//枚举类型不同的效果
        hud.activityIndicatorColor = [UIColor whiteColor];

        hud.bezelView.style = MBProgressHUDBackgroundStyleSolidColor;

    hud.bezelView.backgroundColor = [UIColor colorWithRed:56/256.f green:56/256.f blue:56/256.f alpha:0.8];
        hud.minSize = CGSizeMake(120, 100);
        
//        hud.label.text = @"加载中...";
//    hud.label.font = [UIFont systemFontOfSize:8];
//        hud.label.textColor = [UIColor clearColor];
//        
        hud.detailsLabel.text = @"请稍候...";
        hud.detailsLabel.font = [UIFont systemFontOfSize:13];
        hud.detailsLabel.textColor = [UIColor whiteColor];
        
        hud.offset = CGPointMake(0, -64);

}
+ (void)showLoadingHudOnKeywindow
{
    [self showLoadingHudOnView:nil];
}
+ (void)showLoadingHudOnView:(UIView *)view
{
    
    if (!view) {
        view = [UIApplication sharedApplication].keyWindow;
    }
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:view animated:YES];
    
  
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
    
   
    UIImageView *customImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 30, 30)];
   
    NSMutableArray *images = [[NSMutableArray alloc] init];
    for (NSInteger i = 0; i < 3; i++) {
        UIImage *image = [UIImage imageNamed:[NSString stringWithFormat:@"test%ld", i]];
        [images addObject:image];
    }
    customImageView.animationImages = images;
    customImageView.animationDuration = 1;
    customImageView.animationRepeatCount = 0;
    [customImageView startAnimating];


    hud.minSize = CGSizeMake(50, 50);
    hud.customView = customImageView;
    
        
}
+ (void)showHudOnKeywindowWithTitle:(NSString *)title
{
    [self showHudWithTitle:title moreConfig:nil];
}
+ (void)showHudWithTitle:(NSString *)title moreConfig:(void (^)(MBProgressHUD *hud))config
{
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[UIApplication sharedApplication].keyWindow animated:YES];
    hud.mode = MBProgressHUDModeText;
    hud.label.text = title;
    hud.label.font = [UIFont systemFontOfSize:17];
    hud.label.textColor = [UIColor whiteColor];
    hud.layer.cornerRadius = 4.f;
    [hud hideAnimated:YES afterDelay:1];
    hud.minSize = CGSizeMake([UIApplication sharedApplication].keyWindow.width - 64, 60);
    hud.bezelView.backgroundColor = [UIColor colorWithRed:56/256.f green:56/256.f blue:56/256.f alpha:0.8];
    

    if (config) {
        config(hud);
    }
    hud.label.text = NSLocalizedString(title, @"HUD loading title");
    
}

+ (void)removeProgressHudOnKeywindow
{
    
    [MBProgressHUD hideHUDForView:[UIApplication sharedApplication].keyWindow animated:YES];
}
@end
