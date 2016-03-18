//
//  UIColor+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/10/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (ML_Tools)
+ (UIColor *) colorWithHex:(NSInteger)hexValue;
+ (UIColor *) colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
+ (NSString *) hexFromUIColor: (UIColor*) color;
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
@end
