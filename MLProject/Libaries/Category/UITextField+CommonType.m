//
//  UITextField+CommonType.m
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UITextField+CommonType.h"
#import "UITextField+ML_Tools.h"
#import "UILabel+Init.h"
#import "UIButton+Init.h"
@implementation UITextField (CommonType)

- (void)setTextFieldCommonOption:(UITextFieldCommonOption)textFieldCommonOption
{
    if (self.textFieldCommonOption == textFieldCommonOption) {
        return;
    }
    objc_setAssociatedObject(self, @selector(textFieldCommonOption), @(textFieldCommonOption), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    if (self.textFieldCommonOption & UITextFieldCommonOptionTextGray) {
        
        self.backgroundColor = [UIColor whiteColor];
        UIView *emptyView = [[UIView alloc] init];
        emptyView.frame = CGRectMake(0, 0, 30, 1);
        self.leftView = emptyView;
        self.leftViewMode = UITextFieldViewModeAlways;
        [self setValue:kUI_COLOR_GRAY_999999 forKeyPath:@"_placeholderLabel.textColor"];
        [self setValue:[UIFont systemFontOfSize:14] forKeyPath:@"_placeholderLabel.font"];
        [self setTextColor:kUI_COLOR_BLACK_333333];
        
    }else if (self.textFieldCommonOption & UITextFieldCommonOptionLeftImageView){
        
        self.backgroundColor = [UIColor whiteColor];
        self.leftViewMode = UITextFieldViewModeAlways;
        self.leftViewOffset = CGPointMake(10, 0);
        self.leftViewSizeProportion = 0.8;
        self.editRectOffset = CGPointMake(10, 0);
        self.textLabelOffset = CGPointMake(10, 0);
        self.placeHolderLabelOffet = CGPointMake(10, 0);
         self.textColor = kUI_COLOR_BLACK_333333;
        UILabel *placeholderLabel = [self placeholderLabel];
        LabelAlignment_fontSize_textColor(placeholderLabel, kUI_COLOR_GRAY_cccccc, 14, NSTextAlignmentLeft);
        UIImageView *imagaView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 5, self.height - 10, self.height - 10)];
        self.leftView = imagaView;
        
    }else if (self.textFieldCommonOption & UITextFieldCommonOptionRightImageView){
        
        self.backgroundColor = [UIColor whiteColor];
         self.rightViewMode = UITextFieldViewModeAlways;
          self.rightViewOffset = CGPointMake(-5, 0);
         self.textColor = kUI_COLOR_BLACK_333333;
        UILabel *placeholderLabel = [self placeholderLabel];
        LabelAlignment_fontSize_textColor(placeholderLabel, kUI_COLOR_GRAY_cccccc, 14, NSTextAlignmentLeft);
        UIImageView *imagaView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 5, self.height - 10, self.height - 10)];
        self.rightView = imagaView;
    }else if (self.textFieldCommonOption & UITextFieldCommonOptionLeftButton){
        
         self.leftViewMode = UITextFieldViewModeAlways;
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom frame:CGRectMake(0, 5, 100, self.height - 10) title:@""];
        self.leftView = button;
        
    }else if (self.textFieldCommonOption & UITextFieldCommonOptionRightButton){
        
        self.rightViewMode = UITextFieldViewModeAlways;
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom frame:CGRectMake(0, 5, 100, self.height - 10) title:@""];
        self.rightView = button;
        
    }else if (self.textFieldCommonOption & UITextFieldCommonOptionLeftLabel){
        
        self.backgroundColor = [UIColor whiteColor];
        self.leftViewMode = UITextFieldViewModeAlways;
        self.leftViewOffset = CGPointMake(20, 0);
        self.rightViewMode = UITextFieldViewModeAlways;
        self.rightViewOffset = CGPointMake(-10, 0);
        self.editRectOffset = CGPointMake(10, 0);
        self.textLabelOffset = CGPointMake(10, 0);
        self.placeHolderLabelOffet = CGPointMake(10, 0);
        self.textColor = kUI_COLOR_BLACK_333333;
        UILabel *placeholderLabel = [self placeholderLabel];
        LabelAlignment_fontSize_textColor(placeholderLabel, kUI_COLOR_GRAY_cccccc, 14, NSTextAlignmentLeft);
        UILabel *leftLable = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 80, self.height)];
        LabelAlignment_fontSize_textColor(leftLable, kUI_COLOR_GRAY_666666, 14, NSTextAlignmentLeft);
        self.leftView = leftLable;
        LayerCornerRadius_borderWidth_borderColor(self.layer, 0, 1/SCREEN_SCALE, kUI_COLOR_GRAY_ebebeb);
       
    }
    
}
- (UITextFieldCommonOption)textFieldCommonOption
{
   return [objc_getAssociatedObject(self, @selector(textFieldCommonOption)) integerValue];
}
@end

