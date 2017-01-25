//
//  UIImage+Convolution.h
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
#define SAFECOLOR(color) MIN(255,MAX(0,color))
typedef struct _singleRGBA
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
} RGBA;
typedef void (*FilterFunction)(UInt8 *pixelBuf, UInt32 offset, void *context);
@interface UIImage (Convolution)
- (UIImage*)applyConvolution:(NSArray*)kernel;
- (UIImage*)applyFilter:(FilterFunction)filter context:(void*)context;

void filterOpacity(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterBrightness(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterSaturation(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterContrast(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterPosterize(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterDesaturate(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterInvert(UInt8 *pixelBuf, UInt32 offset, void *context);
void filterTint(UInt8 *pixelBuf, UInt32 offset, void *context);
- (UIImage *)sharpen;
- (UIImage *)edgeEnhance;
- (UIImage *)edgeDetect;
- (UIImage *)emboss;
@end
