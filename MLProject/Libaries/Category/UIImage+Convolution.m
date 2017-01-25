//
//  UIImage+Convolution.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIImage+Convolution.h"


@implementation UIImage (Convolution)

- (UIImage*)applyConvolution:(NSArray*)kernel
{
	CGImageRef inImage = self.CGImage;
	CFDataRef m_DataRef = CGDataProviderCopyData(CGImageGetDataProvider(inImage));  
	CFDataRef m_OutDataRef = CGDataProviderCopyData(CGImageGetDataProvider(inImage));  
	UInt8 * m_PixelBuf = (UInt8 *) CFDataGetBytePtr(m_DataRef);  
	UInt8 * m_OutPixelBuf = (UInt8 *) CFDataGetBytePtr(m_OutDataRef);  
	
	int h = CGImageGetHeight(inImage);
	int w = CGImageGetWidth(inImage);
	
	int kh = [kernel count] / 2;
	int kw = [[kernel objectAtIndex:0] count] / 2;
	int i = 0, j = 0, n = 0, m = 0;
	
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			int outIndex = (i*w*4) + (j*4);
			double r = 0, g = 0, b = 0;
			for (n = -kh; n <= kh; n++) {
				for (m = -kw; m <= kw; m++) {
					if (i + n >= 0 && i + n < h) {
						if (j + m >= 0 && j + m < w) {
							double f = [[[kernel objectAtIndex:(n + kh)] objectAtIndex:(m + kw)] doubleValue];
							if (f == 0) {continue;}
							int inIndex = ((i+n)*w*4) + ((j+m)*4);
							r += m_PixelBuf[inIndex] * f;
							g += m_PixelBuf[inIndex + 1] * f;
							b += m_PixelBuf[inIndex + 2] * f;
						}
					}
				}
			}
			m_OutPixelBuf[outIndex]     = SAFECOLOR((int)r);
			m_OutPixelBuf[outIndex + 1] = SAFECOLOR((int)g);
			m_OutPixelBuf[outIndex + 2] = SAFECOLOR((int)b);
			m_OutPixelBuf[outIndex + 3] = 255;
		}
	}
	
	CGContextRef ctx = CGBitmapContextCreate(m_OutPixelBuf,
											 CGImageGetWidth(inImage),
											 CGImageGetHeight(inImage),
											 CGImageGetBitsPerComponent(inImage),
											 CGImageGetBytesPerRow(inImage),
											 CGImageGetColorSpace(inImage),
											 CGImageGetBitmapInfo(inImage)
											 );
	
	CGImageRef imageRef = CGBitmapContextCreateImage(ctx);
	CGContextRelease(ctx);
	UIImage *finalImage = [UIImage imageWithCGImage:imageRef];
	CGImageRelease(imageRef);
	CFRelease(m_DataRef);
    CFRelease(m_OutDataRef);
    
	return finalImage;
}

- (UIImage*)applyFilter:(FilterFunction)filter context:(void*)context
{
    CGImageRef inImage = self.CGImage;
    CFDataRef m_DataRef = CGDataProviderCopyData(CGImageGetDataProvider(inImage));
    UInt8 *m_PixelBuf = (UInt8 *)CFDataGetBytePtr(m_DataRef);
    
    int length = CFDataGetLength(m_DataRef);
    
    for (int i=0; i<length; i+=4) {
        filter(m_PixelBuf, i, context);
    }
    
    CGContextRef ctx = CGBitmapContextCreate(m_PixelBuf,
                                             CGImageGetWidth(inImage),
                                             CGImageGetHeight(inImage),
                                             CGImageGetBitsPerComponent(inImage),
                                             CGImageGetBytesPerRow(inImage),
                                             CGImageGetColorSpace(inImage),
                                             CGImageGetBitmapInfo(inImage)
                                             );
    
    CGImageRef imageRef = CGBitmapContextCreateImage(ctx);
    CGContextRelease(ctx);
    UIImage *finalImage = [UIImage imageWithCGImage:imageRef];
    CGImageRelease(imageRef);
    CFRelease(m_DataRef);
    
    return finalImage;
}


void filterOpacity(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    double val = *((double*)context);
    
    int a = offset+3;
    
    int alpha = pixelBuf[a];
    
    pixelBuf[a] = SAFECOLOR(alpha * val);
}

void filterBrightness(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    double t = *((double*)context);
    
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    pixelBuf[r] = SAFECOLOR(red * t);
    pixelBuf[g] = SAFECOLOR(green * t);
    pixelBuf[b] = SAFECOLOR(blue * t);
}

void filterSaturation(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    double t = *((double*)context); // t (- [0, 2]
    
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    red = red * (0.3086 * (1-t) + t) + green * (0.6094 * (1-t)) + blue * (0.0820 * (1-t));
    green = red * (0.3086 * (1-t)) + green * ((0.6094 * (1-t)) + t) + blue * (0.0820 * (1-t));
    blue = red * (0.3086 * (1-t)) + green * (0.6094 * (1-t)) + blue * ((0.0820 * (1-t)) + t);
    
    pixelBuf[r] = SAFECOLOR(red);
    pixelBuf[g] = SAFECOLOR(green);
    pixelBuf[b] = SAFECOLOR(blue);
}

void filterContrast(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    double t = *((double*)context); // t (- [0, 10]
    
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    red = red * t + 128 * (1-t);
    green = green * t + 128 * (1-t);
    blue = blue * t + 128 * (1-t);
    
    pixelBuf[r] = SAFECOLOR(red);
    pixelBuf[g] = SAFECOLOR(green);
    pixelBuf[b] = SAFECOLOR(blue);
}

void filterPosterize(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    double levels = *((double*)context);
    if (levels == 0) levels = 1; // avoid divide by zero
    int step = 255 / levels;
    
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    pixelBuf[r] = SAFECOLOR((red / step) * step);
    pixelBuf[g] = SAFECOLOR((green / step) * step);
    pixelBuf[b] = SAFECOLOR((blue / step) * step);
}

void filterDesaturate(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    red = red * 0.3086 + green * 0.6094 + blue * 0.0820;
    green = red * 0.3086 + green * 0.6094 + blue * 0.0820;
    blue = red * 0.3086 + green * 0.6094 + blue * 0.0820;
    
    pixelBuf[r] = SAFECOLOR(red);
    pixelBuf[g] = SAFECOLOR(green);
    pixelBuf[b] = SAFECOLOR(blue);
}

void filterInvert(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    pixelBuf[r] = SAFECOLOR(255-red);
    pixelBuf[g] = SAFECOLOR(255-green);
    pixelBuf[b] = SAFECOLOR(255-blue);
}

void filterTint(UInt8 *pixelBuf, UInt32 offset, void *context)
{
    RGBA *rgbaArray = (RGBA*)context;
    RGBA maxRGBA = rgbaArray[0];
    RGBA minRGBA = rgbaArray[1];
    
    int r = offset;
    int g = offset+1;
    int b = offset+2;
    
    int red = pixelBuf[r];
    int green = pixelBuf[g];
    int blue = pixelBuf[b];
    
    pixelBuf[r] = SAFECOLOR((red - minRGBA.red) * (255.0 / (maxRGBA.red - minRGBA.red)));
    pixelBuf[g] = SAFECOLOR((green - minRGBA.green) * (255.0 / (maxRGBA.green - minRGBA.green)));
    pixelBuf[b] = SAFECOLOR((blue - minRGBA.blue) * (255.0 / (maxRGBA.blue - minRGBA.blue)));
}
#pragma mark - 
#pragma mark - Basic Convolutions

/* Reference : 
 * http://docs.gimp.org/en/plug-in-convmatrix.html 
 */

- (UIImage *)sharpen
{
//	double dKernel[5][5] = {
//		{0,  0.0, -1.0,  0.0, 0},
//		{0, -1.0,  5.0, -1.0, 0},
//		{0,  0.0, -1.0,  0.0, 0}
//    };
    
    double dKernel[5][5] = { 
		{0, 0.0, -0.2,  0.0, 0},
		{0, -0.2, 1.8, -0.2, 0},
		{0, 0.0, -0.2,  0.0, 0}
    };
    
	NSMutableArray *kernel = [[NSMutableArray alloc] initWithCapacity:5];
	for (int i = 0; i < 5; i++) {
		NSMutableArray *row = [[NSMutableArray alloc] initWithCapacity:5];
		for (int j = 0; j < 5; j++) {
			[row addObject:[NSNumber numberWithDouble:dKernel[i][j]]];
		}
		[kernel addObject:row];
	}
	return [self applyConvolution:kernel];
}

- (UIImage *)edgeEnhance
{
	double dKernel[5][5] = {
		{0,  0.0,  0.0,  0.0, 0},
		{0, -1.0,  1.0,  0.0, 0},
		{0,  0.0,  0.0,  0.0, 0}
    };
    
	NSMutableArray *kernel = [[NSMutableArray alloc] initWithCapacity:5];
	for (int i = 0; i < 5; i++) {
		NSMutableArray *row = [[NSMutableArray alloc] initWithCapacity:5];
		for (int j = 0; j < 5; j++) {
			[row addObject:[NSNumber numberWithDouble:dKernel[i][j]]];
		}
		[kernel addObject:row];
	}
    
	return [self applyConvolution:kernel];
}

- (UIImage *)edgeDetect
{
	double dKernel[5][5] = {
		{0,  0.0,  1.0,  0.0, 0},
		{0,  1.0, -4.0,  1.0, 0},
		{0,  0.0,  1.0,  0.0, 0}
    };
    
	NSMutableArray *kernel = [[NSMutableArray alloc] initWithCapacity:5];
	for (int i = 0; i < 5; i++) {
		NSMutableArray *row = [[NSMutableArray alloc] initWithCapacity:5];
		for (int j = 0; j < 5; j++) {
			[row addObject:[NSNumber numberWithDouble:dKernel[i][j]]];
		}
		[kernel addObject:row];
	}
    
	return [self applyConvolution:kernel];
}

- (UIImage *)emboss
{
	double dKernel[5][5] = {
		{0, -2.0, -1.0,  0.0, 0},
		{0, -1.0,  1.0,  1.0, 0},
		{0,  0.0,  1.0,  2.0, 0}
    };
    
	NSMutableArray *kernel = [[NSMutableArray alloc] initWithCapacity:5];
	for (int i = 0; i < 5; i++) {
		NSMutableArray *row = [[NSMutableArray alloc] initWithCapacity:5];
		for (int j = 0; j < 5; j++) {
			[row addObject:[NSNumber numberWithDouble:dKernel[i][j]]];
		}
		[kernel addObject:row];
	}
    
	return [self applyConvolution:kernel];
}

@end
