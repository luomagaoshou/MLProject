




//
//  NSMutableArray+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/10/27.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSMutableArray+ML_Tools.h"

@implementation NSMutableArray (ML_Tools)
- (void)addCGPointStirngWith:(CGPoint)point
{
  
    [self addObject:NSStringFromCGPoint(point)];
    
}

-(float)getMaxFromArray:(NSMutableArray *)array
{
    float max = 0.0;
    for (int i = 0; i < array.count; i++)
    {
        float number = [array[i] floatValue];
        if (number > max)
        {
            max = number;
        }
    }
    return max;
}

-(float)getMinusFromArray:(NSMutableArray *)array
{
    float min = 0.0;
    for (int i = 0; i < array.count; i++)
    {
        float number = [array[i] floatValue];
        if (number < min)
        {
            min = number;
        }
    }
    return min;
}
@end
