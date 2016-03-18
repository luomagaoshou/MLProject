//
//  NSNumber+String.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/15.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSNumber+String.h"

@implementation NSNumber (String)
- (NSString *)changeToStringWithFormat:(NSString *)format
{
    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
    [numberFormatter setPositiveFormat:format];
    NSString *resultStr = [numberFormatter stringFromNumber:self];
    return resultStr;
    
}
@end
