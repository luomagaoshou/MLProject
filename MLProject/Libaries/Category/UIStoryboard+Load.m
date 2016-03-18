//
//  UIStoryboard+Load.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/18.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UIStoryboard+Load.h"

@implementation UIStoryboard (Create)
+ (id)loadViewControllerWithNibName:(NSString *)nibName storyboardID:(NSString *)storyboardID
{
    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:nibName bundle:nil];
   UIViewController *ctl = [storyboard instantiateViewControllerWithIdentifier:storyboardID];
    return ctl;
}
@end
