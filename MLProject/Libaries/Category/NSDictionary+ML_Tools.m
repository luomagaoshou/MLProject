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
    NSMutableString *mutStr = [[NSMutableString alloc] init];
    NSArray *keys = [self allKeys];
    for (NSString *key in keys) {
        [mutStr appendString:key];
        [mutStr appendString:@"="];
        [mutStr appendString:[self valueForKey:key]];
        [mutStr appendString:@"&"];
    }
    if (mutStr.length > 0) {
        [mutStr deleteCharactersInRange:NSMakeRange(mutStr.length - 1, 1)];
    }
    
    return mutStr;
}
@end
