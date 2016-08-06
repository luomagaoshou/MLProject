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
    

    NSDateFormatter* formatter = [self normalDateFormatter];
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
- (NSString *)timeStringWithDateFormat:(NSString *)dateFormat
{
    
   return [self timeStringWithDateFormat:dateFormat isIntellectual:NO];

}
- (NSString *)timeStringWithDateFormat:(NSString *)dateFormat isIntellectual:(BOOL)isIntellectual
{
    NSDateFormatter* formatter = [[self class] normalDateFormatter];
    [formatter setDateFormat:dateFormat];
    
    if (isIntellectual == NO) {
        NSString *dateSting = [formatter stringFromDate:self];
        return dateSting;
    }
    NSCalendar * calendar = [NSCalendar currentCalendar];
    
    // 时间片段 ：年  月  日  时 分 秒
    int unit = NSCalendarUnitYear | NSCalendarUnitMonth  | NSCalendarUnitDay | NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond;
       NSDateComponents *dateComponents = [calendar components:unit fromDate:self toDate:[NSDate date] options:0];
    
    if (dateComponents.day == 0) {
        return [self timeStringWithDateFormat:@"H:m"];
    }
    if (dateComponents.day > 1) {
        return [self timeStringWithDateFormat:@"M/d"];
    }
    if (dateComponents.day == 1) {
        return @"昨天";
    }
    
    return nil;
}

+ (NSString *)timeLongStringWithTimestamp:(id)timestampValue
{
  
    
    // 日历
    NSCalendar * calendar = [NSCalendar currentCalendar];
    
    // 时间片段 ：年  月  日  时 分 秒
    int unit = NSCalendarUnitYear | NSCalendarUnitMonth  | NSCalendarUnitDay | NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond;
    
    NSDateComponents *dateComponents = [calendar components:unit fromDate:[NSDate date] toDate:[NSDate dateWithTimeInterval:[timestampValue floatValue] sinceDate:[NSDate date]] options:0];
    
    NSMutableString *mutString = [[NSMutableString alloc] init];
    if (dateComponents.year > 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld年", dateComponents.year]];
    }
    if (dateComponents.month > 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld月", dateComponents.month]];
    }
    if (dateComponents.day > 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld日", dateComponents.day]];
    }
    if (dateComponents.hour > 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld小时", dateComponents.hour]];
    }
    if (dateComponents.minute > 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld分", dateComponents.minute]];
    }
    if (dateComponents.second >= 0) {
        [mutString appendString:[NSString stringWithFormat:@"%ld秒", dateComponents.second]];
    }
    return mutString;
}


+ (NSDateFormatter *)normalDateFormatter
{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.timeZone = [NSTimeZone systemTimeZone];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    return formatter;
}

@end
