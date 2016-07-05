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
#import <UIKit/UIKit.h>
#import "NSObject+CreateCode.h"
#import "NSString+ML_Tools.h"
#import <Foundation/Foundation.h>
@interface AppDelegate ()

@end


@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
   
    
    
    
    
 
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    RootController *rootCtl = [[RootController alloc] initWithNibName:@"RootController" bundle:nil];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:rootCtl];
   
      self.window.rootViewController = nav;
    

    @"";
    
    #pragma mark - ========= SB =========
    #pragma mark - Swift
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLMedia" storyboardID:@"MLMediaController"];
   //[ProjectManager pushStoryboardControllerWithNibName:@"MLSwift" storyboardID:@"MLSwiftController"];
    
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLMap" storyboardID:@"MLMapOfAmapController"];
    
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLRunloop" storyboardID:@"MLRunloopController"];
    
   
 //   [ProjectManager pushStoryboardControllerWithNibName:@"MLBlueTooth" storyboardID:@"MLBlueToothController"];
        #pragma mark - Swift
   //  [ProjectManager pushStoryboardControllerWithNibName:    @"MLNestNib" storyboardID:@"MLNestNibViewController"];

    
    [ProjectManager pushStoryboardControllerWithNibName:@"MLMJRefresh" storyboardID:@"MLMJRefreshViewController"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLPropertyKeyword" storyboardID:@"MLPropertyKeywordController"];
    
    
    
   //   [ProjectManager pushStoryboardControllerWithNibName:@"MLWebView" storyboardID:@"MLWebViewController"];
    
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLAnimations" storyboardID:@"MLAnimationsController" title:@""];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLSQLite" storyboardID:@"MLSQLiteController" title:nil];
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLWebView" storyboardID:@"MLWebViewController"];

   // [ProjectManager pushStoryboardControllerWithNibName:@"MLCLanguage" storyboardID:@"MLCLPointerController"];
    
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLSplit" storyboardID:@"MLSplitViewController"];
    
   　// [ProjectManager pushStoryboardControllerWithNibName:@"MLResponderChain" storyboardID:@"MLResponderChainController"];

//    
//    
//    UIStoryboard *storyborad = [UIStoryboard storyboardWithName:@"MLStoryboard" bundle:nil];
    
//    UIViewController *strCtl = [UIStoryboard loadViewControllerWithNibName:<#(NSString *)#> storyboardID:<#(NSString *)#>]
  


  //  [ProjectManager pushStoryboardControllerWithNibName:@"AlgorithmPlay" storyboardID:@"AlgorithmPlayController" title:@""];
   // [nav pushViewController:[UIStoryboard loadViewControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"] animated:YES];
    
   // [ProjectManager pushToControllerWithController:@"ChainableController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLKVC_KVO" storyboardID:@"MLKVC_KVOController"];
    #pragma mark - ========= XIB =========
 //[ProjectManager pushToControllerWithController:@"MultiThreadController"];
  
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLStruct" storyboardID:@"MLStructController"];
    
//    [ProjectManager pushStoryboardControllerWithNibName:@"MLImage" storyboardID:@"MLImageController" title:@""];
   // [nav pushViewController:strCtl animated:YES];
  
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"];
  
  
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
