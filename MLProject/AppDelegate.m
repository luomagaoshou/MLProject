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
#import <Reachability/Reachability.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <Masonry.h>
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
    
    
     NSLog(@"%@", NSHomeDirectory());
    
    
    
#pragma mark - ========= SB =========
#pragma mark - Swift - start
    //  [ProjectManager pushStoryboardControllerWithNibName:@"MLMedia" storyboardID:@"MLMediaController"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLSwift" storyboardID:@"MLSwiftController"];
    
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLMap" storyboardID:@"MLMapOfAmapController"];
    
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLRunloop" storyboardID:@"MLRunloopController"];
    
    
    //   [ProjectManager pushStoryboardControllerWithNibName:@"MLBlueTooth" storyboardID:@"MLBlueToothController"];
#pragma mark - Swift - end
    
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLHook"storyboardID:@"MLHookViewController" title:@"Hook"];
    
    //  [ProjectManager pushStoryboardControllerWithNibName:    @"MLNestNib" storyboardID:@"MLNestNibViewController"];
    
    // [ProjectManager pushStoryboardControllerWithNibName:@"MLCustomCLViewController" storyboardID:@"MLReuseVCViewController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLPageViewController" storyboardID:@"MLPageViewController2"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLAttributeString" storyboardID:@"MLAttributeStringController" title:nil];
    //  [ProjectManager pushStoryboardControllerWithNibName:@"MLTintColor" storyboardID:@"MLTintColorViewController" title:@""];
 //   [ProjectManager pushStoryboardControllerWithNibName:@"MLRealm" storyboardID:@"MLRealmViewController"];
 //  [ProjectManager pushStoryboardControllerWithNibName:@"MLPromiseKit" storyboardID:@"MLPromiseKitViewController" title:nil];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLTableView" storyboardID:@"MLTableViewController"];
    //  [ProjectManager pushStoryboardControllerWithNibName:@"MLMJRefresh" storyboardID:@"MLMJRefreshViewController"];
    
      // [ProjectManager pushStoryboardControllerWithNibName:@"MLNavigation" storyboardID:@"MLNavigationViewController"];
      // [ProjectManager pushStoryboardControllerWithNibName:@"MLTextField" storyboardID:@"MLTextFieldViewController"];
    
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLFaceDetector" storyboardID:@"MLFaceDetectorViewController"];
    
 //   [ProjectManager pushStoryboardControllerWithNibName:@"MLStoneAgeToolView" storyboardID:@"MLStoneAgeToolViewController" title:@""];
    //  [ProjectManager pushStoryboardControllerWithNibName:@"MLRAC" storyboardID:@"MLRACViewController"];
  // [ProjectManager pushStoryboardControllerWithNibName:@"MLMacro" storyboardID:@"MLMacroViewController"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLGNUAttribute" storyboardID:@"MLGNUAttributeViewController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLMobClick" storyboardID:@"MLMobClickViewController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLBooksExercise" storyboardID:@"MLBooksExerciseViewController" title:@"书本测试"];
 //   [ProjectManager pushStoryboardControllerWithNibName:@"MLAttribute" storyboardID:@"MLAttributeViewController"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLPropertyKeyword" storyboardID:@"MLPropertyKeywordController"];
    
    
 //   [ProjectManager pushStoryboardControllerWithNibName:@"BGTCalendar" storyboardID:@"BGTNestTBViewController"];
    [ProjectManager pushStoryboardControllerWithNibName:@"MLMJ" storyboardID:@"MLMJViewController"];
    
    // [ProjectManager pushStoryboardControllerWithNibName:@"MLAnimations" storyboardID:@"MLAnimationsController" title:@""];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLSQLite" storyboardID:@"MLSQLiteController" title:nil];
//[ProjectManager pushStoryboardControllerWithNibName:@"MLWebView" storyboardID:@"MLWebViewController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLCPP" storyboardID:@"MLCPPViewController"];
    // [ProjectManager pushStoryboardControllerWithNibName:@"MLCLanguage" storyboardID:@"MLCLPointerController"];
    
    //  [ProjectManager pushStoryboardControllerWithNibName:@"MLSplit" storyboardID:@"MLSplitViewController"];
    
    　// [ProjectManager pushStoryboardControllerWithNibName:@"MLResponderChain" storyboardID:@"MLResponderChainController"];
    //[ProjectManager pushStoryboardControllerWithNibName:@"MLStoryboard" storyboardID:@"MLStoryboardController"];
    
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLAddressbook" storyboardID:@"MLAddressbookViewController"];
    
    //    UIViewController *strCtl = [UIStoryboard loadViewControllerWithNibName:<#(NSString *)#> storyboardID:<#(NSString *)#>]
    
    
    
      //[ProjectManager pushStoryboardControllerWithNibName:@"AlgorithmPlay" storyboardID:@"AlgorithmPlayController" title:@""];
 //    [nav pushViewController:[UIStoryboard loadViewControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"] animated:YES];
    
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLAssembleComputer" storyboardID:@"MLAssembleComputerController" title:@"组装电脑"];
    //[ProjectManager pushToControllerWithController:@"ChainableController"];
    // [ProjectManager pushStoryboardControllerWithNibName:@"MLKVC_KVO" storyboardID:@"MLKVC_KVOController"];
    
    // [ProjectManager pushStoryboardControllerWithNibName:@"IQKeyboardManager" storyboardID:@"IQKeyboardManagerController" title:nil];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLBlocksKit" storyboardID:@"MLBlocksKitViewController" title:@""];
   // [ProjectManager pushToControllerWithController:@"MLCollectionView" title:@"MLCollectionViewController"];
#pragma mark - ========= XIB =========
    //[ProjectManager pushToControllerWithController:@"MultiThreadController"];
    
    // [ProjectManager pushStoryboardControllerWithNibName:@"MLStruct" storyboardID:@"MLStructController"];
    
      // [ProjectManager pushStoryboardControllerWithNibName:@"MLImage" storyboardID:@"MLImageController" title:@""];
    // [nav pushViewController:strCtl animated:YES];
    
  //  [ProjectManager pushStoryboardControllerWithNibName:@"MLCALayer" storyboardID:@"MLCALayerController"];
    
    
 //  [ProjectManager pushToControllerWithController:@"RunTimeController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLDebug" storyboardID:@"MLDebugViewController"];
   // [ProjectManager pushStoryboardControllerWithNibName:@"MLResponerChain" storyboardID:@"MLResponerChainViewController"];
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
