//
//  UIViewController+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (ML_Tools)

- (void)setNavigationBarBackgroundAutoResizeImage:(UIImage *)image;
+ (UIViewController *)getLastViewController;
+ (id)getLastViewControllerWithClass:(Class)aClass;
- (void)setupContollerDefaultConfig;
- (id)setupSelfNameControllerRootView;
- (void)addChildViewControllerAndView:(UIViewController *)childController;
- (void)addChildViewControllerAndView:(UIViewController *)childController childControllerViewFrame:(CGRect)frame;
@end
