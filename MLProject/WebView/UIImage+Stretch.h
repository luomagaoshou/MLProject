//
//  UIImage+Stretch.h
//  XunKe
//
//  Created by xunke03 on 15/10/30.
//  Copyright © 2015年 xunke03. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Stretch)

+ (UIImage *)stretchWithImageNamed:(NSString *)imageName;

+ (UIImage *)stretchImageWithImageNamed:(NSString *)imageName;

+ (UIImage *)getImageWithName:(NSString *)imageName type:(NSString *)type;

+ (UIImage *)getImageWithName:(NSString *)imageName;

+ (UIImage *)getStrechImageWithName:(NSString *)imageName;

+ (UIImage *)downLoadPic:(NSURL *)url;

+ (void)downLoadPicWithUrl:(NSURL *)url success:(void (^)(UIImage *))success;

/**
 *  获取图片的二进制数据
 */
+ (NSData *)getImageData:(NSString *)path;

/**
 *  获取缓存的图片
 */
+ (UIImage *)getCacheImageWithPath:(NSString *)path;

/**
 *  设置图片圆角
 *
 *  @return 裁剪后的图片
 */
- (UIImage *)cutCircleImage;

/**
 *  判断图片类型
 *
 *  @param data 图片二进制
 *
 *  @return 类型
 */
+ (NSString *)contentTypeForImageData:(NSData *)data;

@end
