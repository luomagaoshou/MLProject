//
//  PaiLie.m
//  LotterySteward
//
//  Created by ytx on 13-8-21.
//  Copyright (c) 2013年 ytx. All rights reserved.
//

#import "PaiLie.h"

@implementation PaiLie



- (void)matCombin:(NSArray *)array withArray:(NSMutableArray *)arrayOut{
    

    _arrayOut = arrayOut;
    if (array.count > 0) {
        for (NSMutableString *str in [array objectAtIndex:0]) {
            NSMutableDictionary *array2 = [NSMutableDictionary dictionary];
            [array2 setObject:str forKey:[NSString stringWithFormat:@"%i", 0]];
            [self matCombin:array withN:0 withString:array2];
        }
    }
    
}

- (void)matCombin:(NSArray *)array withN:(int)n withString:(NSMutableDictionary *)array2{
    
    @autoreleasepool {

 
        n++;
        if (n != array.count) {
            for (NSMutableString *str2 in [array objectAtIndex:n]) {
                [array2 setObject:str2 forKey:[NSString stringWithFormat:@"%i", n]];
                [self matCombin:array withN:n withString:array2];
            }
        }
        if (![_arrayOut containsObject:[array2 allValues]]) {
            [_arrayOut addObject:[array2 allValues]];
        }
        
    }
}


@end
