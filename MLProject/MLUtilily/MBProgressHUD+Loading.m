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
    
//      hud.mode = MBProgressHUDModeText;
      hud.mode = MBProgressHUDModeCustomView;
    hud.backgroundView.style = MBProgressHUDBackgroundStyleSolidColor;
#if 0
    for (NSInteger i = 0; i < hud.subviews.count; i++) {
        UIView *view1  = hud.subviews[i];
        view1.backgroundColor = [UIColor clearColor];
        for (NSInteger j = 0; j < view1.subviews.count; j++) {
            UIView *view2 = view1.subviews[j];
             view2.backgroundColor = [UIColor clearColor];
            for (NSInteger k = 0; k < view2.subviews.count; k++) {
                UIView *view3 = view2.subviews[k];
                view3.backgroundColor = [UIColor clearColor];
            }
        }
    }
#endif
   
    hud.color = [UIColor clearColor];
    hud.bezelView.backgroundColor = [UIColor clearColor];
//    hud.bezelView.alpha = 0;
    
  //    for (NSInteger i = 0; i < hud.backgroundView.subviews[1].subviews.count; i++) {
//        UIView *subview = hud.subviews[1].subviews[i];
//        subview.backgroundColor = [UIColor greenColor];
//    }
//        hud.removeFromSuperViewOnHide = YES;
 
//    hud.bezelView.backgroundColor = [UIColor redColor];
//    hud.bezelView.alpha = 0;
//    hud.backgroundView.backgroundColor = [UIColor orangeColor];
//    hud.backgroundColor = [UIColor greenColor];
//    hud.color = [UIColor blueColor];
    
   
    UIImageView *customImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 50, 50)];
   
    NSMutableArray *images = [[NSMutableArray alloc] init];
    for (NSInteger i = 0; i < 6; i++) {
        UIImage *image = [UIImage imageWithFileName:[NSString stringWithFormat:@"pic_loading%ld", i]];
        [images addObject:image];
    }
    customImageView.animationImages = images;
    customImageView.animationDuration = 0.5;
    customImageView.animationRepeatCount = 0;
    [customImageView startAnimating];

    //[hud.bezelView addSubview:customImageView];
   // hud.minSize = CGSizeMake(100, 100);
   
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
