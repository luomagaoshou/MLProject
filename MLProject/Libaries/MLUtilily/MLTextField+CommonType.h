//
//  UITextField+CommonType.h
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLTextField.h"
typedef NS_OPTIONS(NSInteger, UITextFieldCommonOption) {
    UITextFieldCommonOptionTextGray = 1 << 1,
    UITextFieldCommonOptionLeftImageView = 1 << 2,
    UITextFieldCommonOptionRightImageView = 1 << 3,
    UITextFieldCommonOptionLeftLabel = 1 << 4,
    UITextFieldCommonOptionRightLabel = 1 << 5,
    UITextFieldCommonOptionLeftButton = 1 << 6,
    UITextFieldCommonOptionRightButton = 1 << 7,
  
};

@interface MLTextField (CommonType)
@property (nonatomic, assign) UITextFieldCommonOption textFieldCommonOption;
@end

