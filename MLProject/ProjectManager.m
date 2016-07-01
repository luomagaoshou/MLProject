//
//  ProjectManager.m
//  LotteryStraightTrain
//
//  Created by apple on 15/12/22.
//  Copyright © 2015年 apple. All rights reserved.
//

#import "ProjectManager.h"
#import "UIViewController+ML_Tools.h"
#import "UIStoryboard+Load.h"
@implementation ProjectManager




+ (id)pushStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID
{
    return [self pushStoryboardControllerWithNibName:nibName storyboardID:storyboardID title:nil];
}
+ (id)pushStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID title:(NSString *)title
{
    UIViewController *pushedCtl = [UIStoryboard loadViewControllerWithNibName:nibName storyboardID:storyboardID];

    pushedCtl.title = title;
    [[self rootNavigationController] pushViewController:pushedCtl animated:YES];
    return pushedCtl;
}


+ (UIViewController *)pushToControllerWithController:(id)controller
{
    return [self pushToControllerWithController:controller title:nil];
}

+ (UIViewController *)pushToControllerWithController:(id)controller title:(NSString *)title
{
    UIViewController *ctl = [self viewControllerWithController:controller title:title];
    [[self rootNavigationController] pushViewController:ctl animated:YES];
    return ctl;
}

+ (void)popToRootControllerAnimated:(BOOL)animated
{
    UINavigationController *nav = (UINavigationController *)[UIApplication sharedApplication].keyWindow.rootViewController;
    if ([nav isKindOfClass:[UINavigationController class]]) {
        [nav popToRootViewControllerAnimated:YES];
    }
}

#pragma mark - ========= Present =========
+ (id)presentToControllerWithController:(id)controller
{
    return [self presentToControllerWithController:controller title:nil];
}
+ (id)presentToControllerWithController:(id)controller title:(NSString *)title
{
    UIViewController *ctl = [self viewControllerWithController:controller title:title];
    UIViewController *lastVC = [UIViewController getLastViewController];
    [lastVC presentViewController:ctl animated:YES completion:nil];
    return ctl;
}

+ (id)presentStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID
{
  return [self presentStoryboardControllerWithNibName:nibName storyboardID:storyboardID title:nil];
}
+ (id)presentStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID title:(NSString *)title
{
    UIViewController *ctl = [UIStoryboard loadViewControllerWithNibName:nibName storyboardID:storyboardID];
    ctl.title = title;
    UIViewController *lastVC = [UIViewController getLastViewController];
    [lastVC presentViewController:ctl animated:YES completion:nil];
    return ctl;
    
}

+ (UINavigationController *)rootNavigationController
{
   
    UIViewController *lastCtl = [UIViewController getLastViewController];
    return (UINavigationController *)lastCtl;
}
#pragma mark - ========= 根据类名或类名字串取得viewController =========
+ (id)viewControllerWithController:(id)controller title:(NSString *)title
{
    UIViewController *ctl;
    
    if ([controller isKindOfClass:[UIViewController class]]) {
        ctl = controller;
    }
    else if ([controller isKindOfClass:[NSString class]])
    {
        
        NSString *result =  [[NSBundle mainBundle] pathForResource:controller ofType:@"nib"];
        if (result) {
            ctl = [[NSClassFromString(controller) alloc] initWithNibName:controller bundle:nil];
        }
        else
        {
            ctl = [[NSClassFromString(controller) alloc] init];
        }
        
    }
    else if ([controller isKindOfClass:[controller class]])
    {
        NSString *result =  [[NSBundle mainBundle] pathForResource:NSStringFromClass(controller) ofType:@"nib"];
        if (result) {
            ctl = [[NSClassFromString(NSStringFromClass([controller class])) alloc] initWithNibName:NSStringFromClass(controller) bundle:nil];
        }
        else
        {
            ctl = [[[controller class] alloc] init];
        }
        
    }
    
    
    if (title) {
        ctl.title = title;
    }
    return ctl;
}
@end
