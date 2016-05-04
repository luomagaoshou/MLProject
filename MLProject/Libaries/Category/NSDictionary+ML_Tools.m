//
//  NSDictionary+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/11/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSDictionary+ML_Tools.h"

@implementation NSDictionary (ML_Tools)
- (NSString *)dictionaryToURLparameterString
{
    NSMutableArray *mutArr = [[NSMutableArray alloc] init];
    NSArray *keys = [self allKeys];
    for (NSString *key in keys) {
        NSString *keyValue = [NSString stringWithFormat:@"%@=%@",key, [self valueForKey:key]];
        [mutArr addObject:keyValue];
    }

    
    return [mutArr componentsJoinedByString:@"&"];
}
@end
