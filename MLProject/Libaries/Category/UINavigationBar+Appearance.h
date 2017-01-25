//
//  UINavigationBar+Appearance.h
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UINavigationBarCommonType) {
    
    UINavigationBarCommonTypeBlue = 1,
    UINavigationBarCommonTypeRed,
    UINavigationBarCommonTypeClear,
};
@interface UINavigationBar (Appearance)
@property (nonatomic, assign) UINavigationBarCommonType navigationBarCommonType;

/**
 给每个viewController设置一个独立的navigationBar

 @param viewController 需要独立设置的navigationBar
 */
+ (void)setUpIndependentNavigationBarWithViewController:(UIViewController *)viewController type:(UINavigationBarCommonType)type;;

/**
 获取viewController独立设置的navigationBar

 @param viewController <#viewController description#>
 @return <#return value description#>
 */
+ (instancetype)independentNavigationBarWithViewController:(UIViewController *)viewController;

+ (void)setTitleColor:(UIColor *)titleColor
      backgroundColor:(UIColor *)backgroundColor
backBarButtonItemTitle:(NSString *)backBarButtonItemTitle;

+ (void)setTintColor:(UIColor *)tintColor
          titleColor:(UIColor *)titleColor
 hideBackButtonTitle:(BOOL)hideBackButtonTitle;

- (UIImage *)resizedImageForBackBarButtonItemWithImageName:(NSString *)imageName;
@end
