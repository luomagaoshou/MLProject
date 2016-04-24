//
//  NSArray+MLChain4NSArray.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/17.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSArray+MLChain4NSArray.h"

@implementation NSArray (MLChain4NSArray)
+ (MLChain4NSArray *)ml_make
{
    MLChain4NSArray *chain = [[MLChain4NSArray alloc] init];
    NSArray *array = [[NSArray alloc] init];
    chain.object = array;
    chain.array = array;
    return chain;
}
- (MLChain4NSObject *)ml_make
{
    MLChain4NSArray *chain = [[MLChain4NSArray alloc] init];
    chain.object = self;
    chain.array = self;
    return chain;
}
- (MLChain4NSArray *)ml_makeConfigs:(void (^)(MLChain4NSArray *))block
{
    MLChain4NSArray *chain = [[MLChain4NSArray alloc] init];
    block(chain);
    return chain;
}

@end
