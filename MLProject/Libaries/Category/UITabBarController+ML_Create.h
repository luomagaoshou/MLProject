//
//  UITabBarController+ML_Create.h
//  LotterySteward
//
//  Created by apple on 16/3/25.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, ML_TabBarControllerLoadType) {
    ML_TabBarControllerLoadTypeFromClass,
    ML_TabBarControllerLoadTypeFromXib,
    ML_TabBarControllerLoadTypeFromStoryboard
};
@interface ML_TabBarControllerCeateHelperModel:NSObject
@property (nonatomic, copy) NSString *titleString;
@property (nonatomic, copy) NSString *normalImageString;
@property (nonatomic, copy) NSString *selectImageString;
@property (nonatomic, copy) NSString *classString;
@property (nonatomic, assign) ML_TabBarControllerLoadType loadType;
@property (nonatomic, copy) NSString *nibNameString;///<使用storyboard才需设置
/**
 *  使用Class
 *
 *  @param titleString       <#titleString description#>
 *  @param normalImageString <#normalImageString description#>
 *  @param selectImageString <#selectImageString description#>
 *  @param classString       <#classString description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)modelWithTitleString:(NSString *)titleString normalImageString:(NSString *)normalImageString selectImageString:(NSString *)selectImageString classString:(NSString *)classString;
+ (instancetype)modelWithTitleString:(NSString *)titleString normalImageString:(NSString *)normalImageString selectImageString:(NSString *)selectImageString classString:(NSString *)classString loadType:(ML_TabBarControllerLoadType)loadType nibNameString:(NSString *)nibNameString;
@end

@interface UITabBarController (ML_Create)
- (void)configControllersWithModels:(NSArray *)models;
@end
