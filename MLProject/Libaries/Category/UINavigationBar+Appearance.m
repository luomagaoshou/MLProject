//
//  UINavigationBar+Appearance.m
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UINavigationBar+Appearance.h"
#import "UIImage+Color.h"
@implementation UINavigationBar (Appearance)
@dynamic navigationBarCommonType;

- (void)setNavigationBarCommonType:(UINavigationBarCommonType)navigationBarCommonType
{
    switch (navigationBarCommonType) {
        case UINavigationBarCommonTypeBlue:
        {
            [self setTitleTextAttributes:[NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:NSForegroundColorAttributeName]];
            
            UIImage *backImage = [UIImage imageWithColor:kUI_OBJECT_COLOR_BLUE];
            [self setBackgroundImage:backImage forBarMetrics:UIBarMetricsDefault];
            
            [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, -200) forBarMetrics:UIBarMetricsDefault];
            [self setTintColor:[UIColor whiteColor]];

        
            
        }
            break;
        case UINavigationBarCommonTypeRed:
        {
            [self setTitleTextAttributes:[NSDictionary dictionaryWithObject:[UIColor whiteColor] forKey:NSForegroundColorAttributeName]];
            
            UIImage *backImage = [UIImage imageWithColor:kUI_TEXT_COLOR_RED];
            [self setBackgroundImage:backImage forBarMetrics:UIBarMetricsDefault];
            
            [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, -200) forBarMetrics:UIBarMetricsDefault];
            [self setTintColor:[UIColor whiteColor]];
            self.barStyle = UIBarStyleBlack;
            [self setTitleTextAttributes:@{NSFontAttributeName:[UIFont boldSystemFontOfSize:18]}];
            
        }
            break;
            
            
        default:
            break;
    }
}
- (void)setTitleColor:(UIColor *)titleColor backgroundColor:(UIColor *)backgroundColor backBarButtonItemTitle:(NSString *)backBarButtonItemTitle
{
    [[UINavigationBar appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObject:titleColor forKey:UITextAttributeTextColor]];
    [[UINavigationBar appearance] setBarTintColor:[UIColor redColor]];
    [[UINavigationBar appearance] setBackgroundColor:backgroundColor];
 //   [UINavigationBar appearance].backItem.title = @"";
    
}
+ (void)setTintColor:(UIColor *)tintColor
          titleColor:(UIColor *)titleColor
 hideBackButtonTitle:(BOOL)hideBackButtonTitle
{
       // [[UINavigationBar appearance] setTranslucent:NO];
    [[UINavigationBar appearance] setBackgroundColor:kUI_OBJECT_COLOR_BLUE];

    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setTitleTextAttributes:@{NSForegroundColorAttributeName:titleColor}];
    if (hideBackButtonTitle) {
         [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, -200) forBarMetrics:UIBarMetricsDefault];
    }
    else
    {
         [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, 0) forBarMetrics:UIBarMetricsDefault];
    }
    
    
}
@end
