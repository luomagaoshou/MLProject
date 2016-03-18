//
//  UIButton+CustomType.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/9.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "UIButton+CommonType.h"
#import "UIImage+Color.h"

@implementation UIButton (Type)
@dynamic buttonCommonType;

- (void)setButtonCommonType:(UIButtonCommonType)buttonCommonType
{
     self.userInteractionEnabled = YES;
    switch (buttonCommonType) {
        case UIButtonCommonTypeBlue:
        {
    
            if (self.buttonType == UIButtonTypeCustom) {
                [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
                 self.titleLabel.font = [UIFont systemFontOfSize:14];
                [self setBackgroundColor:kUI_OBJECT_COLOR_BLUE];
            }
              else if (self.buttonType == UIButtonTypeSystem)
              {
                 
                  [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
                   self.titleLabel.font = [UIFont systemFontOfSize:14];
                  [self setBackgroundColor:kUI_OBJECT_COLOR_BLUE];
              }
        }
            break;
        case UIButtonCommonTypeGreen:
        {
            [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:kUI_OBJECT_BACKGROUND_COLOR_GREEN];
        }
            break;
        case UIButtonCommonTypeGreenText:
        {
            [self setTitleColor:kUI_OBJECT_BACKGROUND_COLOR_GREEN forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:[UIColor whiteColor]];
           
        
        }
            break;
            case UIButtonCommonTypeGray:
        {
        
              [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
           
            [self setBackgroundColor:kUI_OBJECT_BACKGROUND_COLOR_GRAY];
     
           
        }
            break;
        case UIButtonCommonTypeGrayText:
        {
            [self setTitleColor:kUI_TEXT_COLOR_GRAY forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
  
        }
            break;
        case UIButtonCommonTypeGrayTextAndBorder:
        {
            [self setTitleColor:kUI_TEXT_COLOR_GRAY forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:kUI_OBJECT_BUTTON_BACKGORND_COLOR_GRAY];
            self.clipsToBounds = YES;
            self.layer.borderWidth = 1/SCREEN_SCALE;
            self.layer.borderColor = kUI_OBJECT_BORDER_COLOR_GRAY.CGColor;
            self.layer.cornerRadius = 3;
        }
            break;
        case UIButtonCommonTypeWhite:
        {
          
            [self setTitleColor:kUI_TEXT_COLOR_BLACK forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:[UIColor whiteColor]];
        }
            break;
            case UIButtonCommonTypeRed:
        {
            [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:kUI_TEXT_COLOR_RED];
        }
            break;
        case UIButtonCommonTypeRedText:
        {
            [self setTitleColor:kUI_TEXT_COLOR_RED forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:[UIColor clearColor]];
            
        }
            break;
            
        case UIButtonCommonTypeDisableGray:
        {
           
            [self setTitleColor:kUI_TEXT_COLOR_GRAY forState:UIControlStateNormal];
            [self setTitleColor:kUI_TEXT_COLOR_GRAY forState:UIControlStateHighlighted];
            [self setHighlighted:NO];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:kUI_OBJECT_COLOR_LIGHT_GRAY];
            

        }
            break;
        case UIButtonCommonTypeOrange:
        {
            [self setTitleColor:kUI_TEXT_COLOR_WHITE forState:UIControlStateNormal];
              self.titleLabel.font = [UIFont systemFontOfSize:14];
            self.backgroundColor = kUI_OBJECT_BACKGROUND_COLOR_ORANGE;
        }
            break;
            
            
        case UIButtonCommonTypeSelectedRed:
        {
            [self setTitleColor:kUI_TEXT_COLOR_LIGHT_GRAY forState:UIControlStateNormal];
            [self setTitleColor:kUI_TEXT_COLOR_RED forState:UIControlStateSelected];
            [self setTitleColor:kUI_TEXT_COLOR_RED forState:UIControlStateHighlighted];
       
            self.titleLabel.font = [UIFont systemFontOfSize:14];
           
        }
            break;
        case UIButtonCommonTypeSelectedRed2:
        {
            [self setTitleColor:kUI_TEXT_COLOR_GRAY forState:UIControlStateNormal];
            [self setTitleColor:kUI_TEXT_COLOR_WHITE forState:UIControlStateSelected];
            [self setTitleColor:kUI_TEXT_COLOR_WHITE forState:UIControlStateHighlighted];
            [self setBackgroundImage:[UIImage imageWithColor:kUI_OBJECT_BACKGROUND_RED] forState:UIControlStateSelected];
            [self setBackgroundImage:[UIImage imageWithColor:[UIColor whiteColor]] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
        }
            break;
        case UIButtonCommonTypeSelectedRedText:
        {
            [self setTitleColor:kUI_TEXT_COLOR_LIGHT_GRAY forState:UIControlStateNormal];
            [self setTitleColor:kUI_TEXT_COLOR_RED forState:UIControlStateSelected];
            [self setTitleColor:kUI_TEXT_COLOR_RED forState:UIControlStateHighlighted];
         
            self.titleLabel.font = [UIFont systemFontOfSize:14];
        }
            break;
            
        case UIButtonCommonTypeSelectedBlue:
        {
          
            [self setBackgroundImage:[UIImage imageWithColor:kUI_OBJECT_BUTTON_BACKGORND_COLOR_BLUE ] forState:UIControlStateSelected];
              [self setTitleColor:kUI_TEXT_COLOR_WHITE forState:UIControlStateSelected];
            
            [self setBackgroundImage:[UIImage imageWithColor:[UIColor clearColor]] forState:UIControlStateNormal];
              [self setTitleColor:kUI_TEXT_DATE_COLOR_GRAY forState:UIControlStateNormal];
            
        }
            break;
        case UIButtonCommonTypeUpImageDownTitle:
        {
            
            self.imageEdgeInsets = UIEdgeInsetsMake(0, 15, 30, -15);
            self.imageView.contentMode = UIViewContentModeScaleAspectFit;
            self.titleEdgeInsets = UIEdgeInsetsMake(self.height/2 + 25, - self.width + 30, 0, 0);
            [self setTitleColor:kUI_TEXT_COLOR_LIGHT_GRAY forState:UIControlStateNormal];
              self.titleLabel.font = [UIFont systemFontOfSize:14];
            
        }
            break;
        default:
            break;
    }
}


@end
