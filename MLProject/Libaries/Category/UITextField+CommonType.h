//
//  UITextField+CommonType.h
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UITextFieldCommonType) {
    UITextFieldCommonTypeGray,
    UITextFieldCommonTypeBothLeftAndRightViewHaveImage,
    UITextFieldCommonTypeLeftViewIsLabel,
    UITextFieldCommonTypeLeftViewIsLabelAndRightIsButton,
  
};

@interface UITextField (CommonType)
@property (nonatomic, assign) UITextFieldCommonType textFieldCommonType;
@end
