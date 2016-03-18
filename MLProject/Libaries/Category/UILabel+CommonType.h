//
//  UILabel+CommonType.h
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UILabelCommonType) {
    UILabelCommonTypeGreenDotView,
    UILabelCommonTypeGrayDotView,
    
    UILabelCommonTypeGreenTextLabel,
    UILabelCommonTypeRedTextLabel,
    UILabelCommonTypeBlueTextLabel,
    UILabelCommonTypeLightGrayDateTextLabel,
    UILabelCommonTypeLightGrayTextLabel,
    UILabelCommonTypeGrayTextLabel,
    UILabelCommonTypeBlackTextLabel,
    
    UILabelCommonTypeOrangeTextlabel,

};
@interface UILabel (CommonType)
@property (nonatomic, assign) UILabelCommonType labelCommonType;
@end
