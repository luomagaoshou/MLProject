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
            case UILabelCommonTypeGrayDotView:
        {
            
            self.clipsToBounds = YES;
            self.layer.cornerRadius = CGRectGetWidth(self.bounds)/2;
            self.backgroundColor = [UIColor greenColor];
            self.textColor = [UIColor whiteColor];
            self.textAlignment = NSTextAlignmentCenter;
            
        }
            break;
        case UILabelCommonTypeGreenLabel:
        {
            self.textColor = [UIColor greenColor];
            self.textAlignment = NSTextAlignmentCenter;
            self.numberOfLines = 0;
        }
            break;
        default:
            break;
    }
}

@end
