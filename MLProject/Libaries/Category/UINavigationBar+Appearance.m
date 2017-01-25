//
//  UINavigationBar+Appearance.m
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UINavigationBar+Appearance.h"
#import "UIImage+Color.h"
#import "uiimage+FX.h"
@implementation UINavigationBar (Appearance)
@dynamic navigationBarCommonType;

- (void)setNavigationBarCommonType:(UINavigationBarCommonType)navigationBarCommonType
{
   
    objc_setAssociatedObject(self, @selector(navigationBarCommonType), @(navigationBarCommonType), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        [self setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor],
                                       NSFontAttributeName:[UIFont boldSystemFontOfSize:17]}];
    });
    
    if (!objc_getAssociatedObject(self, @selector(defaultShadowImage))) {
        objc_setAssociatedObject(self, @selector(defaultShadowImage), [UIImage imageWithColor:[UIColor colorWithRed:1 green:1 blue:1 alpha:0.3]], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    switch (navigationBarCommonType) {
        case UINavigationBarCommonTypeBlue:
        {
            
             [self setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor],
             NSFontAttributeName:[UIFont boldSystemFontOfSize:17]}];
            
            UIImage *backImage = [UIImage imageWithColor:kUI_COLOR_BLUE_00b4e9];
            [self setBackgroundImage:backImage forBarMetrics:UIBarMetricsDefault];
            self.shadowImage = [UIImage imageWithColor:[UIColor clearColor]];
           [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, -200) forBarMetrics:UIBarMetricsDefault];
            
             [[UIBarButtonItem appearance] setBackButtonBackgroundImage:[self resizedImageForBackBarButtonItemWithImageName:@"navbar_back_button"]  forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
            dispatch_async(dispatch_get_main_queue(), ^{
                [[UINavigationBar appearance].backItem setTitle:@""];
            });
            self.tintColor = [UIColor whiteColor];

       
          
        }
            break;
        case UINavigationBarCommonTypeRed:
        {
           [self setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor],
                                           NSFontAttributeName:[UIFont boldSystemFontOfSize:17]}];
            
            UIImage *backImage = [UIImage imageWithColor:kUI_COLOR_RED_e74747];
            
            [self setBackgroundImage:backImage forBarMetrics:UIBarMetricsDefault];
             self.shadowImage = [self defaultShadowImage];
            [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(-100, -200) forBarMetrics:UIBarMetricsDefault];
            dispatch_async(dispatch_get_main_queue(), ^{
                [[UINavigationBar appearance].backItem setTitle:@""];
            });
            [[UIBarButtonItem appearance] setBackButtonBackgroundImage:[self resizedImageForBackBarButtonItemWithImageName:@"navbar_back_button"]  forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
           
            
        
            self.tintColor = [UIColor whiteColor];
            
        }
            break;
            case UINavigationBarCommonTypeClear:
        {
            
              [self setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor whiteColor],
             NSFontAttributeName:[UIFont boldSystemFontOfSize:17]}];
            
            UIImage *backImage = [UIImage imageWithColor:[UIColor clearColor]];
            [self setBackgroundImage:backImage forBarMetrics:UIBarMetricsDefault];
            self.shadowImage = [UIImage imageWithColor:[UIColor clearColor]];
            [[UIBarButtonItem appearance] setBackButtonTitlePositionAdjustment:UIOffsetMake(0, -200) forBarMetrics:UIBarMetricsDefault];
            
            [[UIBarButtonItem appearance] setBackButtonBackgroundImage:[self resizedImageForBackBarButtonItemWithImageName:@"navbar_back_button"]  forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
      
           self.tintColor = [UIColor whiteColor];
            
         
            
        }
            break;
        default:
            break;
    }
}

- (UINavigationBarCommonType)navigationBarCommonType{
    return [objc_getAssociatedObject(self, @selector(navigationBarCommonType)) integerValue];
}

+ (void)setUpIndependentNavigationBarWithViewController:(UIViewController *)viewController type:(UINavigationBarCommonType)type{
    UINavigationBar *navigationBar;
     NSInteger height = (type == UINavigationBarCommonTypeClear) ? 0 : 64;
    if (![self independentNavigationBarWithViewController:viewController]) {
        navigationBar = [[UINavigationBar alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, height)];
        [viewController.view addSubview:navigationBar];
        objc_setAssociatedObject(viewController, @selector(independentNavigationBarWithViewController:), navigationBar, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
   
    navigationBar.navigationBarCommonType = type;
    
}
+ (instancetype)independentNavigationBarWithViewController:(UIViewController *)viewController{
    return objc_getAssociatedObject(viewController, @selector(independentNavigationBarWithViewController:));
}
+ (void)setTitleColor:(UIColor *)titleColor backgroundColor:(UIColor *)backgroundColor backBarButtonItemTitle:(NSString *)backBarButtonItemTitle
{
    [[UINavigationBar appearance] setTitleTextAttributes:[NSDictionary dictionaryWithObject:titleColor forKey:NSForegroundColorAttributeName]];
    [[UINavigationBar appearance] setBarTintColor:[UIColor redColor]];
    [[UINavigationBar appearance] setBackgroundColor:backgroundColor];
 //   [UINavigationBar appearance].backItem.title = @"";
   
    
}
+ (void)setTintColor:(UIColor *)tintColor
          titleColor:(UIColor *)titleColor
 hideBackButtonTitle:(BOOL)hideBackButtonTitle
{
       // [[UINavigationBar appearance] setTranslucent:NO];
    [[UINavigationBar appearance] setBackgroundColor:kUI_COLOR_BLUE_009ddf];

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
- (UIImage *)defaultShadowImage
{
   return objc_getAssociatedObject(self, @selector(defaultShadowImage));
}
- (UIImage *)resizedImageForBackBarButtonItemWithImageName:(NSString *)imageName
{
    //查找是否有缓存
    if (objc_getAssociatedObject(self, @selector(resizedImageForBackBarButtonItemWithImageName:))) {
        return objc_getAssociatedObject(self, @selector(resizedImageForBackBarButtonItemWithImageName:));
    }
    UIImage *resultImage = nil;
    UIImage *image = [UIImage imageNamed:imageName];
    CGSize arrowSize = CGSizeMake(10, 17);
    UIImage *clearColorImage = [UIImage imageWithColor:[UIColor clearColor]];
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(arrowSize.width + 1, arrowSize.height + 1), NO, 0);
    [image drawInRect:CGRectMake(0, 0, arrowSize.width, arrowSize.height)];
    [clearColorImage drawInRect:CGRectMake(arrowSize.width, 0, 1, arrowSize.height)];
    resultImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    resultImage = [resultImage stretchableImageWithLeftCapWidth:arrowSize.width topCapHeight:arrowSize.height];
    //绑定
    objc_setAssociatedObject(self, @selector(resizedImageForBackBarButtonItemWithImageName:), resultImage, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return resultImage;
    
}
@end
