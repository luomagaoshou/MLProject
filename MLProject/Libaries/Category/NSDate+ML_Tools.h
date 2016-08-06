//
//  NSDate+ML_Tools.h
//  EndlessCollectionView
//
//  Created by 妙龙赖 on 15/9/1.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (ML_Tools)
+ (instancetype)dateWithDateString:(NSString *)dateString dateFormat:(NSString *)dateFormat;


- (NSString *)timeStringWithDateFormat:(NSString *)dateFormat;
- (NSString *)timeStringWithDateFormat:(NSString *)dateFormat isIntellectual:(BOOL)isIntellectual;
+ (NSString *)currentTimeStringWithDateFormat:(NSString *)dateFormat;

+ (NSString *)timeStringWithTimestamp:(id)timestampValue dateFormat:(NSString *)dateFormat;



+ (NSString *)timeLongStringWithTimestamp:(id)timestampValue;



@end
