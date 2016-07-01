//
//  ProjectManager.h
//  LotteryStraightTrain
//
//  Created by apple on 15/12/22.
//  Copyright © 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ProjectManager : NSObject


+ (void)popToRootControllerAnimated:(BOOL)animated;

+ (id)pushStoryboardControllerWithNibName:(NSString *)nibName
                               storyboardID:(NSString *)storyboardID;
+ (id)pushStoryboardControllerWithNibName:(NSString *)nibName
                               storyboardID:(NSString *)storyboardID
                                      title:(NSString *)title;

+ (id)pushToControllerWithController:(id)controller;
+ (id)pushToControllerWithController:(id)controller title:(NSString *)title;


+ (id)presentStoryboardControllerWithNibName:(NSString *)nibName
                                storyboardID:(NSString *)storyboardID;
+ (id)presentStoryboardControllerWithNibName:(NSString *)nibName
                                storyboardID:(NSString *)storyboardID
                                       title:(NSString *)title;


+ (id)presentToControllerWithController:(id)controller;
+ (id)presentToControllerWithController:(id)controller title:(NSString *)title;


@end
