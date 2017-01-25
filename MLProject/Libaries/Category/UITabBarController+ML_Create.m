//
//  UITabBarController+ml_create.m
//  LotterySteward
//
//  Created by apple on 16/3/25.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import "UITabBarController+ml_create.h"
#import "UIImage+ML_Tools.h"
#import "UINavigationBar+Appearance.h"
#import "UIStoryboard+Load.h"
#import "NSBundle+ML_Tools.h"
#import "UIImage+FileName.h"
@implementation ML_TabBarControllerCeateHelperModel
+ (instancetype)modelWithTitleString:(NSString *)titleString normalImageString:(NSString *)normalImageString selectImageString:(NSString *)selectImageString classString:(NSString *)classString
{
    return [self modelWithTitleString:titleString normalImageString:normalImageString selectImageString:selectImageString classString:classString loadType:ML_TabBarControllerLoadTypeFromClass nibNameString:nil];
}
+ (instancetype)modelWithTitleString:(NSString *)titleString normalImageString:(NSString *)normalImageString selectImageString:(NSString *)selectImageString classString:(NSString *)classString loadType:(ML_TabBarControllerLoadType)loadType nibNameString:(NSString *)nibNameString
{
    ML_TabBarControllerCeateHelperModel *model = [[ML_TabBarControllerCeateHelperModel alloc] init];
    model.titleString = titleString;
    model.normalImageString = normalImageString;
    model.selectImageString = selectImageString;
    model.classString = classString;
    model.loadType = loadType;
    model.nibNameString = nibNameString;
    return model;
}
@end
@implementation UITabBarController (ml_create)
- (void)configControllersWithModels:(NSArray *)models
{
 
    NSMutableArray *controllers = [[NSMutableArray alloc] init];
    for (NSInteger i = 0; i < models.count; i++) {
        ML_TabBarControllerCeateHelperModel *model = models[i];
        Class controllerClass = NSClassFromString(model.classString);
        UIViewController *ctl;
        switch (model.loadType) {
            case ML_TabBarControllerLoadTypeFromClass:
            {
                ctl = [[controllerClass alloc] init];
            }
                break;
            case ML_TabBarControllerLoadTypeFromXib:
            {
            
                ctl = [[(__kindof UIViewController *) controllerClass alloc] initWithNibName:model.nibNameString?model.nibNameString:model.classString bundle:nil];
             
            }
                break;
            case ML_TabBarControllerLoadTypeFromStoryboard:
            {
                ctl = [UIStoryboard loadViewControllerWithNibName:model.nibNameString storyboardID:model.classString];
            }
                break;
            default:
                break;
        }
        ctl.tabBarItem.title = model.titleString;
        ctl.tabBarItem.image = [UIImage imageWithFileName:model.normalImageString];
        ctl.tabBarItem.selectedImage = [UIImage imageWithFileName:model.selectImageString];
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:ctl];
        nav.navigationBar.navigationBarCommonType = UINavigationBarCommonTypeBlue;
        [controllers addObject:nav];
    }
    self.viewControllers = controllers;
}
@end
