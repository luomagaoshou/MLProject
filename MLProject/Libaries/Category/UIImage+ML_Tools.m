//
//  UIImage+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIImage+ML_Tools.h"

@implementation UIImage (ML_Tools)
- (UIImage *)stretchableImageWithCenterPoint
{
    UIImage *image = [[UIImage alloc] init];
    if ([NSStringFromCGSize(self.size) isEqualToString:NSStringFromCGSize(CGSizeMake(1, 1))]) {
        
        image = [self stretchableImageWithLeftCapWidth:0.5 topCapHeight:0.5];
    }
    else
    {
          image = [self stretchableImageWithLeftCapWidth:self.size.width/2.0f topCapHeight:self.size.height/2.0f];
    }
  

    return image;
}

- (UIImage *)stretchableImageWithCenterInsets
{
  
    CGFloat top = self.size.height / 2;
    CGFloat left = self.size.width / 2;
    CGFloat bottom = top - 1;
    CGFloat right = left - 1;
      UIImage *image = [[UIImage alloc] init];
    image = [self resizableImageWithCapInsets:UIEdgeInsetsMake(top, left, bottom, right) resizingMode:UIImageResizingModeStretch];
    
   
    return image;
}

+ (UIImage *)reSizeImage:(UIImage *)image toSize:(CGSize)reSize{
    UIGraphicsBeginImageContext(CGSizeMake(reSize.width, reSize.height));
    [image drawInRect:CGRectMake(0, 0, reSize.width, reSize.height)];
    UIImage *reSizeImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return reSizeImage;
}

@end
