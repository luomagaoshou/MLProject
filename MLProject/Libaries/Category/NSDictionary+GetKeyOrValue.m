//
//  NSDictionary+GetKeyOrValue.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/17.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSDictionary+GetKeyOrValue.h"

@implementation NSDictionary (GetKeyOrValue)


#pragma mark - ========= Setter & Getter =========
- (id)firstKey
{
    return [[self allKeys] firstObject];
}
- (id)firstValue
{
    return [[self allValues] firstObject];
}
@end
