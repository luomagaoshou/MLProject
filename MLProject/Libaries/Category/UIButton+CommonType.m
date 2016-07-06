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
                [self setBackgroundColor:kUI_COLOR_BLUE_009ddf];
            }
              else if (self.buttonType == UIButtonTypeSystem)
              {
                 
                  [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
                   self.titleLabel.font = [UIFont systemFontOfSize:14];
                  [self setBackgroundColor:kUI_COLOR_BLUE_009ddf];
              }
        }
            break;
        case UIButtonCommonTypeGreen:
        {
            [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:kUI_COLOR_GREEN_0x1bbc9b];
        }
            break;
        case UIButtonCommonTypeGreenText:
        {
            [self setTitleColor:kUI_COLOR_GREEN_0x1bbc9b forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:[UIColor whiteColor]];
           
        
        }
            break;
            case UIButtonCommonTypeGray:
        {
        
              [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
           
            [self setBackgroundColor:kUI_COLOR_GRAY_dbdbdb];
     
           
        }
            break;
        case UIButtonCommonTypeGrayText:
        {
            [self setTitleColor:kUI_COLOR_GRAY_666666 forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
  
        }
            break;
        case UIButtonCommonTypeGrayTextAndBorder:
        {
            [self setTitleColor:kUI_COLOR_GRAY_666666 forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
            [self setBackgroundColor:kUI_COLOR_GRAY_f0f0f0];
            self.clipsToBounds = YES;
            self.layer.borderWidth = 1/SCREEN_SCALE;
            self.layer.borderColor = kUI_COLOR_GRAY_dedede.CGColor;
            self.layer.cornerRadius = 3;
        }
            break;
        case UIButtonCommonTypeWhite:
        {
          
            [self setTitleColor:kUI_COLOR_BLACK_333333 forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:[UIColor whiteColor]];
        }
            break;
            case UIButtonCommonTypeRed:
        {
            [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:kUI_COLOR_RED_e74747];
        }
            break;
        case UIButtonCommonTypeRedText:
        {
            [self setTitleColor:kUI_COLOR_RED_e74747 forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:[UIColor clearColor]];
            
        }
            break;
            
        case UIButtonCommonTypeDisableGray:
        {
           
            [self setTitleColor:kUI_COLOR_GRAY_666666 forState:UIControlStateNormal];
            [self setTitleColor:kUI_COLOR_GRAY_666666 forState:UIControlStateHighlighted];
            [self setHighlighted:NO];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            [self setBackgroundColor:kUI_COLOR_GRAY_cccccc];
            

        }
            break;
        case UIButtonCommonTypeOrange:
        {
            [self setTitleColor:kUI_COLOR_WHITE_000000 forState:UIControlStateNormal];
              self.titleLabel.font = [UIFont systemFontOfSize:14];
            self.backgroundColor = kUI_COLOR_ORANGE_ff9539;
        }
            break;
            
            
        case UIButtonCommonTypeSelectedRed:
        {
            [self setTitleColor:kUI_COLOR_GRAY_999999 forState:UIControlStateNormal];
            [self setTitleColor:kUI_COLOR_RED_e74747 forState:UIControlStateSelected];
            [self setTitleColor:kUI_COLOR_RED_e74747 forState:UIControlStateHighlighted];
       
            self.titleLabel.font = [UIFont systemFontOfSize:14];
           
        }
            break;
        case UIButtonCommonTypeSelectedRed2:
        {
            [self setTitleColor:kUI_COLOR_GRAY_666666 forState:UIControlStateNormal];
            [self setTitleColor:kUI_COLOR_WHITE_000000 forState:UIControlStateSelected];
            [self setTitleColor:kUI_COLOR_WHITE_000000 forState:UIControlStateHighlighted];
            [self setBackgroundImage:[UIImage imageWithColor:kUI_COLOR_RED_e74747] forState:UIControlStateSelected];
            [self setBackgroundImage:[UIImage imageWithColor:[UIColor whiteColor]] forState:UIControlStateNormal];
            self.titleLabel.font = [UIFont systemFontOfSize:14];
            
        }
            break;
        case UIButtonCommonTypeSelectedRedText:
        {
            [self setTitleColor:kUI_COLOR_GRAY_999999 forState:UIControlStateNormal];
            [self setTitleColor:kUI_COLOR_RED_e74747 forState:UIControlStateSelected];
            [self setTitleColor:kUI_COLOR_RED_e74747 forState:UIControlStateHighlighted];
         
            self.titleLabel.font = [UIFont systemFontOfSize:14];
        }
            break;
            
        case UIButtonCommonTypeSelectedBlue:
        {
          
            [self setBackgroundImage:[UIImage imageWithColor:kUI_COLOR_BLUE_4a8fdc ] forState:UIControlStateSelected];
              [self setTitleColor:kUI_COLOR_WHITE_000000 forState:UIControlStateSelected];
            
            [self setBackgroundImage:[UIImage imageWithColor:[UIColor clearColor]] forState:UIControlStateNormal];
              [self setTitleColor:kUI_COLOR_GRAY_b3b3b3 forState:UIControlStateNormal];
            
        }
            break;
        case UIButtonCommonTypeUpImageDownTitle:
        {
            
            self.imageEdgeInsets = UIEdgeInsetsMake(0, 15, 30, -15);
            self.imageView.contentMode = UIViewContentModeScaleAspectFit;
            self.titleEdgeInsets = UIEdgeInsetsMake(self.height/2 + 25, - self.width + 30, 0, 0);
            [self setTitleColor:kUI_COLOR_GRAY_999999 forState:UIControlStateNormal];
              self.titleLabel.font = [UIFont systemFontOfSize:14];
            
        }
            break;
        default:
            break;
    }
}


@end
