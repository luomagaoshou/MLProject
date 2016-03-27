//
//  AppDelegate.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/8.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "AppDelegate.h"
#import "RootController.h"
#import "MLStoryboardController.h"
#import "UIStoryboard+Load.h"
#import "ProjectManager.h"
#import "NSBundle+ML_Tools.h"
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    RootController *rootCtl = [[RootController alloc] initWithNibName:@"RootController" bundle:nil];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:rootCtl];
      self.window.rootViewController = nav;
//    UIViewController *ctl = [[NSClassFromString(@"ChainableController") alloc] initWithNibName:@"ChainableController" bundle:nil];
//    
//    
//    UIStoryboard *storyborad = [UIStoryboard storyboardWithName:@"MLStoryboard" bundle:nil];
    
//    UIViewController *strCtl = [UIStoryboard loadViewControllerWithNibName:<#(NSString *)#> storyboardID:<#(NSString *)#>]
  
  // [nav pushViewController:[ProjectManager jumpToControllerWithController:@"ChainableController" title:@"chain"] animated:YES ];

   // [ProjectManager jumpToStoryboardControllerWithNibName:@"MLChainable" storyboardID:@"MLChainableController"];

    //[nav pushViewController:[UIStoryboard loadViewControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"] animated:YES];
    
 [ProjectManager jumpToControllerWithController:@"MultiThreadController"];
    
//    [ProjectManager jumpToStoryboardControllerWithNibName:@"MLImage" storyboardID:@"MLImageController" title:@""];
   // [nav pushViewController:strCtl animated:YES];
  
   // [ProjectManager jumpToStoryboardControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
