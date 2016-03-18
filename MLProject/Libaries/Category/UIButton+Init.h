//
//  UIButton+Init.h
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Init)
+ (instancetype)buttonWithType:(UIButtonType)buttonType title:(NSString *)title;
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title;
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title titleColor:(UIColor *)titleColor;
+ (instancetype)buttonWithType:(UIButtonType)buttonType frame:(CGRect)frame title:(NSString *)title borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor;

//设置button的imageView
- (instancetype)imageViewWithPureColorImage:(UIColor *)normalImageColor
                                   selectedImageColor:(UIColor *)selectedImageColor

                                  imageSize:(CGSize)imageSize
                               cornerRadius:(CGFloat)cornerRadius
                                borderColor:(UIColor *)borderColor
                                borderWidth:(CGFloat)borderWidth
                                 edgeInsets:(UIEdgeInsets)edgeInsets;
//设置Button的titleLabel
- (instancetype)titleLabelWithCornerRadius:(CGFloat)cornerRadius
                               borderColor:(UIColor *)borderColor
                               borderWidth:(CGFloat)borderWidth
                                edgeInsets:(UIEdgeInsets)edgeInsets;

@end
