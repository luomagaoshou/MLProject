//
//  UIViewController+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIViewController+ML_Tools.h"
#import "UIImage+ML_Tools.h"
@implementation UIViewController (ML_Tools)
//#pragma clang diagnostic push
//#pragma clang diagnostic ignored "-Wobjc-protocol-method-implementation"
////重写 因为老viewcontroller的NavigationBar为自定义
//- (void)viewWillAppear:(BOOL)animated
//{
//  
//    NSLog(@"%@",self);
//    [self hideNavigationBar];
//    
//    for (UIViewController *childviewController in self.childViewControllers) {
//        [childviewController hideNavigationBar];
//        
//    }
// 
//   
//    
//}
- (void)setupContollerDefaultConfig
{
    self.view.backgroundColor = [UIColor whiteColor];
    self.automaticallyAdjustsScrollViewInsets = NO;
}
- (id)setupSelfNameControllerRootView
{
    
    NSString *selfName = NSStringFromClass([self class]);
    NSString *selfViewName = [[selfName substringToIndex:[selfName rangeOfString:@"Controller"].location] stringByAppendingString:@"View"];
   
      NSString *result =  [[NSBundle mainBundle] pathForResource:selfViewName ofType:@"nib"];
   
    UIView *rootView;
    if (result) {
         rootView = [[[NSBundle mainBundle] loadNibNamed:selfViewName owner:nil options:nil] firstObject];
         rootView.frame = CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
        
    }
    else
    {
        rootView = [[NSClassFromString(selfViewName) alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT - 64)];
    }

   
        [self.view addSubview:rootView];
    NSAssert(rootView, @"没有对应的view");
        return rootView;
    

}


+ (id)getLastViewControllerWithClass:(Class)aClass
{
    UIViewController *resultCtl = nil;
    UIViewController *lastCtl = [self getLastViewController];
    if ([lastCtl isMemberOfClass:[UINavigationController class]]) {
        UINavigationController *nav = (UINavigationController *)lastCtl;
        for (UIViewController *ctl in nav.viewControllers) {
            if ([ctl isKindOfClass:aClass]) {
                resultCtl = ctl;
                break;
            }
            
        }
    }
   
    return resultCtl;
}

+ (UIViewController *)getLastViewController
{
    UIViewController *resultCtl = nil;
    UIWindow * window = [[UIApplication sharedApplication] keyWindow];
    if (window.windowLevel != UIWindowLevelNormal)
    {
        NSArray *windows = [[UIApplication sharedApplication] windows];
        for(UIWindow * tmpWin in windows)
        {
            if (tmpWin.windowLevel == UIWindowLevelNormal)
            {
                window = tmpWin;
                break;
            }
        }
    }
    
    UIView *frontView = [[window subviews] objectAtIndex:0];
    id nextResponder = [frontView nextResponder];
    while(![nextResponder isKindOfClass:[UIViewController class]])
    {
        nextResponder = [nextResponder nextResponder];
    }
    if ([nextResponder isKindOfClass:[UIViewController class]])
    {
        resultCtl = (UIViewController *)nextResponder;
    }
    
    if (resultCtl == nil) {
        resultCtl = window.rootViewController;
    }
    return resultCtl;
    
    
}
- (void)addChildViewControllerAndView:(UIViewController *)childController
{
    [self addChildViewControllerAndView:childController childControllerViewFrame:CGRectZero];
}
- (void)addChildViewControllerAndView:(UIViewController *)childController childControllerViewFrame:(CGRect)frame
{
    [self addChildViewController:childController];
    [self.view addSubview:childController.view];
    if (!CGRectIsNull(frame)) {
        childController.view.frame = frame;
    }
    
}
#pragma clang diagnostic pop
- (void)hideNavigationBar
{
    for (UIView *subView in self.view.subviews) {
        if ([subView.featureIdentifier isEqualToString:@"自定义背景视图"]) {
            self.navigationController.navigationBar.hidden = YES;
            
            return;
        }
        else
        {
            if ([subView isKindOfClass:[UIScrollView class]]) {
                for (UIView *subviewInScrollView in subView.subviews) {
                    if ([subviewInScrollView.featureIdentifier isEqualToString:@"自定义背景视图"]) {
                        self.navigationController.navigationBar.hidden = YES;
                        
                        return;
                    }
                }
            }
        }
    }
    self.navigationController.navigationBar.hidden = NO;
}
- (void)setNavigationBarBackgroundAutoResizeImage:(UIImage *)image
{
 
    image = [image stretchableImageWithCenterPoint];
    [self.navigationController.navigationBar setBackgroundImage:image forBarMetrics:UIBarMetricsDefault];
    
}
@end
