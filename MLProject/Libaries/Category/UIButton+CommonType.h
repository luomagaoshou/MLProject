//
//  UIButton+CommonType.h
//  MLProject
//
//  Created by 妙龙赖 on 15/11/9.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, UIButtonCommonType) {
    UIButtonCommonTypeBlue,///<蓝底白字
    UIButtonCommonTypeGreen,///<绿底白字
    UIButtonCommonTypeGreenText,
    UIButtonCommonTypeGray,
    UIButtonCommonTypeGrayText,
    UIButtonCommonTypeGrayTextAndBorder,
    UIButtonCommonTypeWhite,
    UIButtonCommonTypeRed,
    UIButtonCommonTypeRedText,
    UIButtonCommonTypeDisableGray,
    UIButtonCommonTypeOrange,
    
    UIButtonCommonTypeSelectedRed,
    UIButtonCommonTypeSelectedRed2,
    UIButtonCommonTypeSelectedRedText,
    UIButtonCommonTypeSelectedBlue,
    
    UIButtonCommonTypeUpImageDownTitle,///<上图下字　
};

@interface UIButton (Type)
@property (nonatomic, assign) UIButtonCommonType buttonCommonType;
@end
