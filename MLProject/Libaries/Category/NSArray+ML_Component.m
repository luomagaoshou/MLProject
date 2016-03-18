//
//  NSArray+ML_Component.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/29.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSArray+ML_Component.h"

@implementation NSArray (ML_Component)
- (NSString *)componentsJoinedByString:(NSString *)separator keyOfObjectInArr:(NSString *)key
{
    NSMutableArray *mutArr = [[NSMutableArray alloc] init];
    for (id obj in self) {
        id value = [obj valueForKey:key];
        NSAssert(value, @"值为空");
        [mutArr addObject:value];
        
    }
    NSString *resultStr = [mutArr componentsJoinedByString:separator];
    return  resultStr;
    
}
@end
