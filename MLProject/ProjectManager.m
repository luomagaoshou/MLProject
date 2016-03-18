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

+ (UIViewController *)jumpToControllerWithControllerAfterCloseDrawer:(id)controller
{
    
    
   return [ProjectManager jumpToControllerWithControllerAfterCloseDrawer:controller title:nil];
}
+ (UIViewController *)jumpToControllerWithControllerAfterCloseDrawer:(id)controller title:(NSString *)title
{
    
   __block UIViewController *ctl;
    dispatch_async(dispatch_get_main_queue(), ^{
      
    });
   
    return ctl;
}

+ (UIViewController *)jumpToControllerWithController:(id)controller
{
   return [self jumpToControllerWithController:controller title:nil];
}

+ (id)jumpToStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID
{
    return [self jumpToStoryboardControllerWithNibName:nibName storyboardID:storyboardID title:nil];
}
+ (id)jumpToStoryboardControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID title:(NSString *)title
{
    UIViewController *pushedCtl = [UIStoryboard loadViewControllerWithNibName:nibName storyboardID:storyboardID];
    pushedCtl.title = title;
    [[self rootNavigationController] pushViewController:pushedCtl animated:YES];
    return pushedCtl;
}
//+ (id)jumpToStoryboardControllerAfterCloseWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID title:(NSString *)title
//{
//    __block UIViewController *ctl;
// 
//        [[RootDrawerController shareInstance] closeDrawerAnimated:NO completion:^(BOOL finished) {
//            ctl = [self jumpToStoryboardControllerWithNibName:nibName storyboardID:storyboardID title:title];
//        }];
//  
//    return ctl;
//}
//


+ (UIViewController *)jumpToControllerWithController:(id)controller title:(NSString *)title
{
    UIViewController *pushedCtl;
    
    if ([controller isKindOfClass:[UIViewController class]]) {
        pushedCtl = controller;
    }
    else if ([controller isKindOfClass:[NSString class]])
    {
       // pushedCtl = [[NSClassFromString(controller) alloc] init];
     NSString *result =  [[NSBundle mainBundle] pathForResource:controller ofType:@"nib"];
        if (result) {
            pushedCtl = [[NSClassFromString(controller) alloc] initWithNibName:controller bundle:nil];
        }
        else
        {
             pushedCtl = [[NSClassFromString(controller) alloc] init];
        }
        
    }
    else if ([controller isKindOfClass:[controller class]])
    {
           NSString *result =  [[NSBundle mainBundle] pathForResource:NSStringFromClass(controller) ofType:@"nib"];
        if (result) {
                 pushedCtl = [[NSClassFromString(NSStringFromClass([controller class])) alloc] initWithNibName:NSStringFromClass(controller) bundle:nil];
        }
        else
        {
               pushedCtl = [[[controller class] alloc] init];
        }
     
    }
    
    
    if (title) {
        pushedCtl.title = title;
    }
    [[self rootNavigationController] pushViewController:pushedCtl animated:YES];
    return pushedCtl;
}
+ (UINavigationController *)rootNavigationController
{
   
    UIViewController *lastCtl = [UIViewController getLastViewController];
    return (UINavigationController *)lastCtl;
}
//+ (UINavigationController *)centerNavigationControler
//{
//    return ((UINavigationController *)[RootDrawerController shareInstance].centerViewController);
//}
@end
