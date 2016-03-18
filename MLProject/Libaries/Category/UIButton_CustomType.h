//
//  UIButton_CustomType.h
//  MLProject
//
//  Created by 妙龙赖 on 15/11/10.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, UIButtonCustomType) {
    UIButtonCustomTypeBlue,
};

@interface UIButton ()
@property (nonatomic, assign) UIButtonCustomType buttonCustomType;
@end
