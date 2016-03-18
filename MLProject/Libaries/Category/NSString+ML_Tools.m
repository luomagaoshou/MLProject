//
//  NSString+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/21.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "NSString+ML_Tools.h"

@implementation NSString (ML_Tools)

- (NSString *)substringFromStringEnding:(NSString *)string
{
    NSString *substring;
    if ([self rangeOfString:string].location != NSNotFound) {
        NSRange range = [self rangeOfString:string];
       substring = [self substringFromIndex:range.location + range.length];
    }
    return substring;
}
- (NSString *)substringToStringBegining:(NSString *)string
{
    return [self substringToStringBegining:string isContainEnding:NO];
}
- (NSString *)substringToStringBegining:(NSString *)string isContainEnding:(BOOL)isContainEnding
{
    NSString *substring;
    if ([self rangeOfString:string].location != NSNotFound) {
        NSRange range = [self rangeOfString:string];
        if (isContainEnding) {
              substring = [self substringToIndex:range.location + 1];
        }
        else
        {
        substring = [self substringToIndex:range.location];
        }
    }
    return substring;
}


- (NSString *)substringFromStringEnding:(NSString *)stringEnding toStringBegining:(NSString *)stringBegining
{
    NSString *sub = [self substringFromStringEnding:stringEnding];
    sub = [sub substringToStringBegining:stringBegining];
    return sub;
}
//tojson 将集合的数据转换成json字符串
+(NSString *) toJson:(NSDictionary *)params
{
    NSError *error = nil;
    //ios5.0 自带的NSJSONSerialization序列化
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:params options:NSJSONWritingPrettyPrinted error:&error];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

//toDictionary 将json字符串数据转换成Dictionary字典
+(NSDictionary *) toDictionary:(NSString *)json
{
    NSError *error = nil;
    //ios5.0 自带的NSJSONSerialization序列化
    NSData *jsonData = [json dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *jsonDic = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableContainers error:&error];
    return jsonDic;
}
@end
