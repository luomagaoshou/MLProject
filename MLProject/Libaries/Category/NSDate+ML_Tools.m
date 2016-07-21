//
//  NSDate+ML_Tools.m
//  EndlessCollectionView
//
//  Created by 妙龙赖 on 15/9/1.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "NSDate+ML_Tools.h"

@implementation NSDate (ML_Tools)

+ (NSString *)getCurrentTimeWithDateFormat:(NSString *)dateFormat
{
    NSTimeInterval  currentTimeInterval = [NSDate date].timeIntervalSince1970;
    return [self timeStringWithTimestamp:@(currentTimeInterval) dateFormat:dateFormat];
}

+ (instancetype)dateWithDateString:(NSString *)dateString dateFormat:(NSString *)dateFormat
{
    NSDateFormatter *dateFormatter = [self normalDateFormatter];
    dateFormatter.dateFormat = dateFormat;
    NSDate *date = [dateFormatter dateFromString:dateString];
    return date;
    
}
+ (NSString *)timeStringWithTimestamp:(id)timestampValue dateFormat:(NSString *)dateFormat
{
    
    NSTimeZone* timeZone = [NSTimeZone timeZoneWithName:@"Asia/Shanghai"];
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    [formatter setTimeZone:timeZone];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    [formatter setDateFormat:dateFormat];
     double timestamp;
    if ([timestampValue isKindOfClass:[NSString class]]) {
        timestamp = [timestampValue doubleValue];
    }
    else
    {
        timestamp = [timestampValue doubleValue];
    }
      //判断是不是毫秒时间戳 如果得到的时间戳大于当前时间戳的100倍
    if (timestamp > [[NSDate date] timeIntervalSince1970] * 100) {
        timestamp =  timestamp / 1000;
    }
    NSDate* date = [NSDate dateWithTimeIntervalSince1970:timestamp];

    NSString* dateString = [formatter stringFromDate:date];
    return dateString;
}


+ (NSDateFormatter *)normalDateFormatter
{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    return formatter;
}
@end
