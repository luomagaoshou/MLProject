//
//  UILabel_CommonType.h
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UILabelCommonType) {
    UILabelCommonTypeGreenDotView,
    UILabelCommonTypeGreenLabel,
};
@interface UILabel ()
@property (nonatomic, assign) UILabelCommonType labelCommonType;
@end
