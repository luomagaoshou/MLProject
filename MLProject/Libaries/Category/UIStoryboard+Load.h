//
//  UIStoryboard+Load.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/18.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIStoryboard (Create)
+ (id)loadViewControllerWithNibName:(NSString *)nibName
                         storyboardID:(NSString *)storyboardID;
@end
