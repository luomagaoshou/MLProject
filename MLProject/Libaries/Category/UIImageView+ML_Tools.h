//
//  UIImageView+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^MLCallback)(NSArray *imageViewArrayCallback);
@interface UIImageView (ML_Tools)
/**
 *  旋转
 *
 *  @param Scale    放大倍数
 *  @param rotation 旋转度数
 */
- (void)transformWithScale:(CGFloat)Scale rotation:(CGFloat)rotation;

- (instancetype)initWithFrame:(CGRect)frame
                  contentMode:(UIViewContentMode)contentMode
                        image:(UIImage *)image;

@end
