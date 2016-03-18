//
//  NSString+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/21.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ML_Tools)



- (NSString *)substringFromStringEnding:(NSString *)string;
- (NSString *)substringToStringBegining:(NSString *)string;
- (NSString *)substringToStringBegining:(NSString *)string isContainEnding:(BOOL)isContainEnding;
- (NSString *)substringFromStringEnding:(NSString *)stringEnding
                       toStringBegining:(NSString *)stringBegining;


@end
