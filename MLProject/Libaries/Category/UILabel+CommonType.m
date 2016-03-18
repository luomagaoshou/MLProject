//
//  UILabel+CommonType.m
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UILabel+CommonType.h"

@implementation UILabel (CommonType)
@dynamic labelCommonType;

- (void)setLabelCommonType:(UILabelCommonType)labelCommonType
{
    
    switch (labelCommonType) {
        case UILabelCommonTypeGreenDotView:
        {
            
            self.clipsToBounds = YES;
            self.layer.cornerRadius = CGRectGetWidth(self.bounds)/2;
            self.backgroundColor = kUI_OBJECT_COLOR_GREEN;
            self.textColor = [UIColor whiteColor];
            self.textAlignment = NSTextAlignmentCenter;
            
        }
            break;
        case UILabelCommonTypeGrayDotView:
        {
            self.clipsToBounds = YES;
            self.layer.cornerRadius = CGRectGetWidth(self.bounds)/2;
            self.backgroundColor = kUI_OBJECT_BACKGROUND_COLOR_GRAY;
            self.textColor = [UIColor whiteColor];
            self.textAlignment = NSTextAlignmentCenter;
        }
            break;
        case UILabelCommonTypeGreenTextLabel:
        {
            self.textColor = kUI_OBJECT_COLOR_GREEN;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeRedTextLabel:
        {
            self.textColor = kUI_TEXT_WARNING_COLOR_RED;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeBlueTextLabel:
        {
            self.textColor = kUI_OBJECT_COLOR_BLUE;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeLightGrayDateTextLabel:
        {
            self.textColor = kUI_TEXT_DATE_COLOR_GRAY;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.font = [UIFont systemFontOfSize:11];
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeLightGrayTextLabel:
        {
            self.textColor = kUI_TEXT_COLOR_LIGHT_GRAY;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.font = [UIFont systemFontOfSize:11];
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeGrayTextLabel:
        {
            self.textColor = kUI_TEXT_COLOR_GRAY;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.font = [UIFont systemFontOfSize:11];
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeBlackTextLabel:
        {
            self.textColor = kUI_TEXT_COLOR_BLACK;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.font = [UIFont systemFontOfSize:13];
            self.numberOfLines = 0;
        }
            break;
        case UILabelCommonTypeOrangeTextlabel:
        {
            self.textColor = kUI_TEXT_HINT_COLOR_ORANGE;
            self.backgroundColor = [UIColor clearColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.font = [UIFont systemFontOfSize:13];
            self.numberOfLines = 0;
        }
            break;
        default:
            break;
    }
}

@end
