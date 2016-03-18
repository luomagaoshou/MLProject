//
//  NSString+NumberFormat.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/15.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSString+NumberFormat.h"

@implementation NSString (NumberFormat)
- (NSString *)stringWithNumberFormat:(NSString *)numberFormat
{
    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
    [numberFormatter setPositiveFormat:numberFormat];
    NSString *resultStr = [numberFormatter stringFromNumber:@([self integerValue])];
    return resultStr;
    
}
@end
