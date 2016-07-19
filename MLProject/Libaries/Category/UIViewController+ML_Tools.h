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
- (void)configSuccuessDataShowWithScrollView:(__kindof UIScrollView *)scrollView
                statusCode:(NSInteger)statusCode
                        originalDatas:(NSArray <NSArray *>*)originalDatas
                            cellDatas:(NSMutableArray *)cellDatas
              moreConfig:(void(^)(NSInteger status))moreConfig;
- (void)closeHeaderOrFooterWithScrollView:(__kindof UIScrollView *)scrollView;
@end
