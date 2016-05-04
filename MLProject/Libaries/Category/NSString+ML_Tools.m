//
//  NSString+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/21.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "NSString+ML_Tools.h"

@implementation NSString (ML_Tools)

- (NSString *)substringFromString:(NSString *)string
{
    return [self substringFromString:string offset:0];
}
- (NSString *)substringFromString:(NSString *)string offset:(NSInteger)offset
{
    NSString *substring;
    if ([self rangeOfString:string].location != NSNotFound) {
        NSRange range = [self rangeOfString:string];
        substring = [self substringFromIndex:range.location + offset];
    }
    return substring;
}

- (NSString *)substringToString:(NSString *)string
{
    return [self substringToString:string offset:0];
}
- (NSString *)substringToString:(NSString *)string offset:(NSInteger)offset
{
    NSString *substring;
    if ([self rangeOfString:string].location != NSNotFound) {
        NSRange range = [self rangeOfString:string];
      
            substring = [self substringToIndex:range.location + offset];
      
    }
    return substring;
}


- (NSString *)substringBeweentFrontString:(NSString *)frontString
                               backString:(NSString *)backString
{
    NSString *subString = [self substringFromString:frontString  offset:frontString.length];
    subString = [subString substringToString:backString];
    return subString;
}

- (NSMutableAttributedString *)mutableAttributedString
{
    return [[NSMutableAttributedString alloc] initWithString:self];
}
- (NSAttributedString *)attributedString
{
    return [[NSAttributedString alloc] initWithString:self];
}



@end
