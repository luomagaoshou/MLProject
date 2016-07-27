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
+ (__kindof UIViewController *)viewControllerOfView:(UIView *)view;
- (void)configSuccuessDataShowWithScrollView:(__kindof UIScrollView *)scrollView
                statusCode:(NSInteger)statusCode
                        originalDatas:(NSArray <NSArray <id> *> *)originalDatas
                            cellDatas:(NSMutableArray *)cellDatas
              moreConfig:(void(^)(NSInteger status))moreConfig;
- (void)closeHeaderOrFooterWithScrollView:(__kindof UIScrollView *)scrollView;
@end
