//
//  ProjectManager.h
//  LotteryStraightTrain
//
//  Created by apple on 15/12/22.
//  Copyright © 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ProjectManager : NSObject


+ (void)popToCenterRootControllerAnimated:(BOOL)animated;

+ (id)jumpToStoryboardControllerWithNibName:(NSString *)nibName
                               storyboardID:(NSString *)storyboardID;
+ (id)jumpToStoryboardControllerWithNibName:(NSString *)nibName
                               storyboardID:(NSString *)storyboardID
                                      title:(NSString *)title;

+ (id)jumpToStoryboardControllerAfterCloseWithNibName:(NSString *)nibName
                               storyboardID:(NSString *)storyboardID
                                      title:(NSString *)title;
+ (void)jumpToLoginController;
+ (void)jumpToPersonalAccountController;


+ (id)jumpToControllerWithControllerAfterCloseDrawer:(id)controller;
+ (id)jumpToControllerWithControllerAfterCloseDrawer:(id)controller title:(NSString *)title;

+ (id)jumpToControllerWithController:(id)controller;
+ (id)jumpToControllerWithController:(id)controller title:(NSString *)title;
@end
