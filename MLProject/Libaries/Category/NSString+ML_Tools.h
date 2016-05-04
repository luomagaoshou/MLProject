//
//  NSString+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/21.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ML_Tools)
- (NSString *)substringFromString:(NSString *)string;
- (NSString *)substringFromString:(NSString *)string offset:(NSInteger)offset;

- (NSString *)substringToString:(NSString *)string;
- (NSString *)substringToString:(NSString *)string offset:(NSInteger)offset;

- (NSString *)substringBeweentFrontString:(NSString *)frontString
                     backString:(NSString *)backString;


- (NSMutableAttributedString *)mutableAttributedString;
- (NSAttributedString *)attributedString;




@end
