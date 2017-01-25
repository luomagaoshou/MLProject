//
//  UIImage+FaceDetector.h
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/12/8.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (FaceDetector)
- (UIImage *)ml_cropFaceImage;
- (UIImage *)ml_cropFaceImageWithEdgeInsets:(UIEdgeInsets)edgeInsets;

/**
 使用百分比设置

 @param edgeInsets <#edgeInsets description#>
 @return <#return value description#>
 */
- (UIImage *)ml_cropFaceImageWithEdgeInsetsProportion:(UIEdgeInsets)edgeInsetsRotation;
@end
