//
//  NSDictionary+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/11/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSDictionary+ML_Tools.h"

@implementation NSDictionary (ML_Tools)
- (NSString *)urlParameterString
{
    NSMutableArray *mutArr = [[NSMutableArray alloc] init];
    NSArray *keys = [self allKeys];
    for (NSString *key in keys) {
        NSString *keyValue = [NSString stringWithFormat:@"%@=%@",key, [self valueForKey:key]];
        [mutArr addObject:keyValue];
    }
    
    
    return [mutArr componentsJoinedByString:@"&"];
}
- (NSString *)jsonString
{
    NSError *parseError = nil;
    
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self options:0 error:&parseError];
    
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}
- (id)firstValue
{
    return self.allValues.firstObject;
}
- (id)firstKey
{
    return self.allKeys.firstObject;
}
@end
