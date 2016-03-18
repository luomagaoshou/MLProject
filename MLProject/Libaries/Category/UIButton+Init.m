//
//  UIButton+Init.m
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIButton+Init.h"
#import "UIImage+FX.h"
#import "UIImage+Color.h"
#import "UIColor+ML_Tools.h"
@implementation UIButton (Init)
+ (instancetype)buttonWithType:(UIButtonType)buttonType title:(NSString *)title
{
    return [self buttonWithType:buttonType frame:CGRectZero title:title];
}
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title
{
    return [self buttonWithType:buttonType frame:frame title:title titleColor:nil];
}
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)titleColor
{
    return [self buttonWithType:buttonType frame:frame title:title titleColor:titleColor borderWidth:0 cornerRadius:0 borderColor:0];
}
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor
{
    return [self buttonWithType:buttonType frame:frame title:title titleColor:nil borderWidth:borderWidth cornerRadius:cornerRadius borderColor:borderColor];
}

+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)titleColor borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor

{
    UIButton *button = [UIButton buttonWithType:buttonType];
    if (button) {
        [button setFrame:frame];
        [button setTitle:title forState:UIControlStateNormal];
        [button setTitleColor:titleColor forState:UIControlStateNormal];
        [button.layer setMasksToBounds:YES];
        [button.layer setBorderWidth:borderWidth];
        [button.layer setCornerRadius:cornerRadius];
        [button.layer setBorderColor:borderColor.CGColor];
    }
    return button;
}




- (instancetype)imageViewWithPureColorImage:(UIColor *)normalImageColor
                         selectedImageColor:(UIColor *)selectedImageColor

                                  imageSize:(CGSize)imageSize
                               cornerRadius:(CGFloat)cornerRadius
                                borderColor:(UIColor *)borderColor
                                borderWidth:(CGFloat)borderWidth
                                 edgeInsets:(UIEdgeInsets)edgeInsets
{
    
    UIImage *normalButtonImage = [UIImage imageWithColor:normalImageColor];
    normalButtonImage = [normalButtonImage imageScaledToFillSize:imageSize];
    [self setImage:normalButtonImage forState:UIControlStateNormal];
    
    
    UIImage *selectedButtonImage = [UIImage imageWithColor:selectedImageColor];
    selectedButtonImage = [selectedButtonImage imageScaledToFillSize:imageSize];
    [self setImage:selectedButtonImage forState:UIControlStateSelected];
    
    self.imageView.contentMode = UIViewContentModeScaleAspectFill;
    self.imageView.layer.cornerRadius = cornerRadius;
    self.imageView.layer.borderColor = borderColor.CGColor;
    self.imageView.layer.borderWidth = borderWidth;
    self.imageEdgeInsets = edgeInsets;
    
    
    return self;
}
- (instancetype)titleLabelWithCornerRadius:(CGFloat)cornerRadius
                                borderColor:(UIColor *)borderColor
                                borderWidth:(CGFloat)borderWidth
                                 edgeInsets:(UIEdgeInsets)edgeInsets
{
    
    self.titleEdgeInsets = edgeInsets;
    self.titleLabel.layer.cornerRadius = cornerRadius;
    self.titleLabel.layer.borderColor = borderColor.CGColor;
    self.titleLabel.layer.borderWidth = borderWidth;
    return self;
}
@end
