//
//  UIImage+Stretch.m
//  XunKe
//
//  Created by xunke03 on 15/10/30.
//  Copyright © 2015年 xunke03. All rights reserved.
//

#import "UIImage+Stretch.h"
#import "SDWebImageManager.h"

@implementation UIImage (Stretch)

+ (UIImage *)stretchWithImageNamed:(NSString *)imageName
{
    UIImage *image = [UIImage imageNamed:imageName];
    // 左端盖宽度
    NSInteger leftCapWidth = image.size.width * 0.5f;
    // 顶端盖高度
    NSInteger topCapHeight = image.size.height * 0.5f;

    return [image stretchableImageWithLeftCapWidth:leftCapWidth topCapHeight:topCapHeight];
}

+ (UIImage *)stretchImageWithImageNamed:(NSString *)imageName
{
    UIImage *image = [UIImage imageNamed:imageName];
    CGFloat top = 25; // 顶端盖高度
    CGFloat bottom = 25 ; // 底端盖高度
    CGFloat left = 10; // 左端盖宽度
    CGFloat right = 10; // 右端盖宽度
    UIEdgeInsets insets = UIEdgeInsetsMake(top, left, bottom, right);
    // 指定为拉伸模式，伸缩后重新赋值
    image = [image resizableImageWithCapInsets:insets resizingMode:UIImageResizingModeStretch];
    
    return image;
}

+ (UIImage *)getImageWithName:(NSString *)imageName type:(NSString *)type
{
    NSString *imagePath = nil;
    
    for (int i = [[UIScreen mainScreen] scale]; i > 0; i--) {
        // 当前屏幕倍数
        NSString *scale = (i == 1) ? @"" : [NSString stringWithFormat:@"@%dx",i];
        
        // 当前屏幕倍数图片名
        NSString *name = [NSString stringWithFormat:@"%@%@", imageName, scale];
        
        // 图片路径
        imagePath = [[NSBundle mainBundle] pathForResource:name ofType:type];
        
        if (imagePath) {
            break;
        }
    }
    
    if (imagePath) {
        return [UIImage imageWithContentsOfFile:imagePath];
    }
    return nil;
    
}

+ (UIImage *)getImageWithName:(NSString *)imageName
{
    return [self getImageWithName:imageName type:@"png"];
}

+ (UIImage *)getStrechImageWithName:(NSString *)imageName
{
    UIImage *image = [UIImage getImageWithName:imageName];
    
    // 左端盖宽度
    NSInteger leftCapWidth = image.size.width * 0.5f;
    // 顶端盖高度
    NSInteger topCapHeight = image.size.height * 0.5f;
    
    return [image stretchableImageWithLeftCapWidth:leftCapWidth topCapHeight:topCapHeight];
}

+ (void)downLoadPicWithUrl:(NSURL *)url success:(void (^)(UIImage *))success {
    SDWebImageManager *manager = [SDWebImageManager sharedManager];
//    if ([manager diskImageExistsForURL:url]) {
//        UIImage *image = [[manager imageCache] imageFromDiskCacheForKey:url.absoluteString];
//        if (success) {
//            success(image);
//        }
//    }else{
        [manager downloadImageWithURL:url options:SDWebImageRetryFailed progress:^(NSInteger receivedSize, NSInteger expectedSize) {
            
        } completed:^(UIImage *image, NSError *error, SDImageCacheType cacheType, BOOL finished, NSURL *imageURL) {
            if (success) {
                success(image);
            }
        }];
//    }
}

+ (NSData *)getImageData:(NSString *)path {
    NSString *cacheImageKey = [[SDWebImageManager sharedManager] cacheKeyForURL:[NSURL URLWithString:path]];
    if (cacheImageKey.length) {
        NSString *cacheImagePath = [[SDImageCache sharedImageCache] defaultCachePathForKey:cacheImageKey];
        if (cacheImagePath.length) {
             return [NSData dataWithContentsOfFile:cacheImagePath];
        }
    }
    return nil;
}

+ (UIImage *)downLoadPic:(NSURL *)url {
    SDWebImageManager *manager = [SDWebImageManager sharedManager];
    [manager diskImageExistsForURL:url];
    if ([manager diskImageExistsForURL:url]) {
        
        return [[manager imageCache] imageFromDiskCacheForKey:url.absoluteString];
    }else{
        NSData *data = [NSData dataWithContentsOfURL:url];
        return [UIImage imageWithData:data];
    }
}

+ (UIImage *)getCacheImageWithPath:(NSString *)path {
    NSURL *url = [NSURL URLWithString:path];
    SDWebImageManager *manager = [SDWebImageManager sharedManager];
    
    if ([manager diskImageExistsForURL:url]) {
        return [[manager imageCache] imageFromDiskCacheForKey:url.absoluteString];
    }
    return nil;
}


- (UIImage *)cutCircleImage {
    UIGraphicsBeginImageContextWithOptions(self.size, NO, 0.0);
    // 获取上下文
    CGContextRef ctr = UIGraphicsGetCurrentContext();
    
    // 设置圆形
    CGRect rect = CGRectMake(0, 0, self.size.width, self.size.height);
    CGContextAddEllipseInRect(ctr, rect);
    
    // 裁剪
    CGContextClip(ctr);
    
    // 将图片画上去
    [self drawInRect:rect];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

+ (NSString *)contentTypeForImageData:(NSData *)data {
    uint8_t c;
    [data getBytes:&c length:1];
    switch (c) {
        case 0xFF:
            return @"jpeg";
        case 0x89:
            return @"png";
        case 0x47:
            return @"gif";
        case 0x49:
        case 0x4D:
            return @"tiff";
        case 0x52:
            if ([data length] < 12) {
                return nil;
            }
            NSString *testString = [[NSString alloc] initWithData:[data subdataWithRange:NSMakeRange(0, 12)] encoding:NSASCIIStringEncoding];
            if ([testString hasPrefix:@"RIFF"] && [testString hasSuffix:@"WEBP"]) {
                return @"webp";
            }
            return nil;
    }
    return nil;
}


@end
