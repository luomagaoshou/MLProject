//
//  UIImage+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ML_Tools)
/**
 *  以中心点起拉伸图片
 *
 *
 *
 *  @return 已拉伸的图片
 */
- (UIImage *)stretchableImageWithCenterPoint;
/**
 *  以中心块为边缘拉伸图片
 */
- (UIImage *)stretchableImageWithCenterInsets;
/**
 *  等比例缩放
 *
 *  @param image
 *  @param reSize
 *
 *  @return
 */
+ (UIImage *)reSizeImage:(UIImage *)image toSize:(CGSize)reSize;

@end
