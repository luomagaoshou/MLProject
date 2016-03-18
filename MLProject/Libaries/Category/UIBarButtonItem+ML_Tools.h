//
//  UIBarButtonItem+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^BBICallback)(UIButton* ButtonCallback);
@interface UIBarButtonItem (ML_Tools)


- (instancetype)initWithCustomViewSize:(CGSize)size Image:(UIImage *)image;

@end
