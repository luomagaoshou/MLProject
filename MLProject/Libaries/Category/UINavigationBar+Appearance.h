//
//  UINavigationBar+Appearance.h
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UINavigationBarCommonType) {
    
    UINavigationBarCommonTypeBlue,
    UINavigationBarCommonTypeRed,
    UINavigationBarCommonTypeClear,
};
@interface UINavigationBar (Appearance)
@property (nonatomic, assign) UINavigationBarCommonType navigationBarCommonType;
- (void)setTitleColor:(UIColor *)titleColor
      backgroundColor:(UIColor *)backgroundColor
backBarButtonItemTitle:(NSString *)backBarButtonItemTitle;
+ (void)setTintColor:(UIColor *)tintColor
          titleColor:(UIColor *)titleColor
 hideBackButtonTitle:(BOOL)hideBackButtonTitle;
@end
