//
//  UIImage+FaceDetector.m
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/12/8.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "UIImage+FaceDetector.h"

@implementation UIImage (FaceDetector)
- (UIImage *)ml_cropFaceImage{
    
    return [self ml_cropFaceImageWithEdgeInsets:UIEdgeInsetsZero];
}

- (UIImage *)ml_cropFaceImageWithEdgeInsets:(UIEdgeInsets)edgeInsets{
    CIImage *ci_image = [CIImage imageWithCGImage:self.CGImage];
    NSDictionary *options = @{CIDetectorAccuracy: CIDetectorAccuracyHigh};
    CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeFace context:nil options:options];
    NSArray *feactures = [detector featuresInImage:ci_image];
    
    
    for (CIFaceFeature *feacture in feactures) {
        
        CGRect newBounds = feacture.bounds;
      
          //UIKit CG框架 y轴坐标转换
        newBounds.origin.y = MIN(self.size.height - feacture.bounds.origin.y - feacture.bounds.size.height, self.size.height);
 
            newBounds = UIEdgeInsetsInsetRect(newBounds, edgeInsets);
        CGImageRef subImageRef = CGImageCreateWithImageInRect(self.CGImage, newBounds);
       
        UIImage *image = [UIImage imageWithCGImage:subImageRef];
        CGImageRelease(subImageRef);
        return image;
    }
    return nil;
    
}

- (UIImage *)ml_cropFaceImageWithEdgeInsetsProportion:(UIEdgeInsets)edgeInsetsRotation{
    CGFloat width = self.size.width;
    CGFloat height = self.size.height;
   return [self ml_cropFaceImageWithEdgeInsets:UIEdgeInsetsMake(edgeInsetsRotation.top * height, edgeInsetsRotation.left * width, edgeInsetsRotation.bottom * height, edgeInsetsRotation.right * width)];
}


@end
