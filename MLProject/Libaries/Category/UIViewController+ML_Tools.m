//
//  UIViewController+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIViewController+ML_Tools.h"
#import "UIImage+ML_Tools.h"
#import <MJRefresh/MJRefresh.h>
#import "UIScrollView+Refresh.h"

@implementation UIViewController (ML_Tools)



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


- (void)setNavigationBarBackgroundAutoResizeImage:(UIImage *)image
{
 
    image = [image stretchableImageWithCenterPoint];
    [self.navigationController.navigationBar setBackgroundImage:image forBarMetrics:UIBarMetricsDefault];
    
}
- (void)configSuccuessDataShowWithScrollView:(__kindof UIScrollView *)scrollView
           originalDatas:(NSArray <NSArray *>*)originalDatas
               cellDatas:(NSMutableArray *)cellDatas
              moreConfig:(void(^)(void))moreConfig
{

        if (scrollView.loadType == UIScrollViewLoadTypeRefresh) {
            [cellDatas removeAllObjects];
        }
        if (originalDatas) {
         
            for (NSInteger i = 0; i < originalDatas.count; i++) {
                NSArray *secondLevelArray = originalDatas[i];
                if (![secondLevelArray isKindOfClass:[NSArray class]]) {
                    continue;
                }
                if (secondLevelArray.count < 1) {
                    continue;
                }
                //防止嵌套错误
                if (secondLevelArray.count == 1 && [secondLevelArray[0] isKindOfClass:[NSArray class]]) {
                    secondLevelArray = secondLevelArray[0];
                }
                //过滤非对象返回
                BOOL isObject = YES;
                for (id ObjIn2ndArr in secondLevelArray) {
                    if ([ObjIn2ndArr isKindOfClass:[NSNull class]] || [ObjIn2ndArr isKindOfClass:[NSString class]]) {
                        isObject = NO;
                        break;
                    }
                }
                
                if (isObject) {
                    [cellDatas addObject:secondLevelArray];
                }
                
            }
            
        }
    

    if (cellDatas.count == 0) {
         scrollView.statusType = UIScrollViewStatusTypeEmptyData;
    }else{
        scrollView.statusType = UIScrollViewStatusTypeDefault;
    }
    
    [scrollView performSelector:@selector(reloadData)];
    [self closeHeaderOrFooterWithScrollView:scrollView];
    
}
- (void)closeHeaderOrFooterWithScrollView:(__kindof UIScrollView *)scrollView
{
    if (scrollView.loadType == UIScrollViewLoadTypeRefresh) {
        if (scrollView.mj_header) {
            [scrollView.mj_header endRefreshing];
        }
        
    }
    else if (scrollView.loadType == UIScrollViewLoadTypeLoadMore){
        if (scrollView.mj_footer) {
            [scrollView.mj_footer endRefreshing];
        }
        
    }
}
@end
