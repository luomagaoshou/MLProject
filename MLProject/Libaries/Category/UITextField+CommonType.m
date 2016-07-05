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
@implementation UITextField (CommonType)
@dynamic textFieldCommonType;
- (void)setTextFieldCommonType:(UITextFieldCommonType)textFieldCommonType
{
    switch (textFieldCommonType) {
        case UITextFieldCommonTypeGray:
        {
            self.backgroundColor = [UIColor whiteColor];
            UIView *emptyView = [[UIView alloc] init];
            emptyView.frame = CGRectMake(0, 0, 30, 1);
            self.leftView = emptyView;
            self.leftViewMode = UITextFieldViewModeAlways;
            [self setValue:kUI_TEXT_COLOR_LIGHT_GRAY forKeyPath:@"_placeholderLabel.textColor"];
            [self setValue:[UIFont systemFontOfSize:14] forKeyPath:@"_placeholderLabel.font"];
            [self setTextColor:kUI_TEXT_COLOR_BLACK];
            
        }
            break;
       
        case UITextFieldCommonTypeBothLeftAndRightViewHaveImage:
        {
            self.backgroundColor = [UIColor whiteColor];
                self.leftViewMode = UITextFieldViewModeAlways;
            self.leftViewOffset = CGPointMake(10, 0);
            self.leftViewSizeProportion = 0.8;
            self.rightViewMode = UITextFieldViewModeAlways;
         
            self.rightViewOffset = CGPointMake(-5, 0);
            self.editRectOffset = CGPointMake(10, 0);
            self.textLabelOffset = CGPointMake(10, 0);
            self.placeHolderLabelOffet = CGPointMake(10, 0);
        
            self.textColor = kUI_TEXT_COLOR_BLACK;
            
            
            UILabel *placeholderLabel = [self placeholderLabel];
            LabelAlignment_fontSize_textColor(placeholderLabel, NSTextAlignmentLeft, 14, kUI_OBJECT_COLOR_LIGHT_GRAY);
            
         
          
            
        }
            break;
        case UITextFieldCommonTypeLeftViewIsLabelAndRightIsButton:
        {
            UIButton *rightBtn = [UIButton buttonWithType:UIButtonTypeCustom frame:CGRectMake(0, 5, 100, self.height - 10) title:@""];
       
              
            self.rightView = rightBtn;
        }
           //接下去设置
        case UITextFieldCommonTypeLeftViewIsLabel:
        {
            self.backgroundColor = [UIColor whiteColor];
            self.leftViewMode = UITextFieldViewModeAlways;
            self.leftViewOffset = CGPointMake(20, 0);
            self.rightViewMode = UITextFieldViewModeAlways;
            self.rightViewOffset = CGPointMake(-10, 0);
            self.editRectOffset = CGPointMake(10, 0);
            self.textLabelOffset = CGPointMake(10, 0);
            self.placeHolderLabelOffet = CGPointMake(10, 0);
            self.textColor = kUI_TEXT_COLOR_BLACK;
            
            
            
            UILabel *placeholderLabel = [self placeholderLabel];
            LabelAlignment_fontSize_textColor(placeholderLabel, NSTextAlignmentLeft, 14, kUI_OBJECT_COLOR_LIGHT_GRAY);
      
            
            UILabel *leftLable = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 80, self.height)];
               LabelAlignment_fontSize_textColor(leftLable, NSTextAlignmentLeft, 14, kUI_TEXT_COLOR_GRAY);
            self.leftView = leftLable;
    
            LayerCornerRadius_borderWidth_borderColor(self.layer, 0, 1/SCREEN_SCALE, kUI_SEPARATOR_COLOR_GRAY);
            
        }
            break;
      
            
        default:
            break;
    }
}
@end
