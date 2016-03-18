//
//  NSArray+ML_NSArrayChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/17.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSArray+ML_NSArrayChain.h"

@implementation NSArray (ML_NSArrayChain)
+ (ML_NSArrayChain *)ml_make
{
    ML_NSArrayChain *chain = [[ML_NSArrayChain alloc] init];
    NSArray *array = [[NSArray alloc] init];
    chain.object = array;
    chain.array = array;
    return chain;
}
- (ML_NSOjbectChain *)ml_make
{
    ML_NSArrayChain *chain = [[ML_NSArrayChain alloc] init];
    chain.object = self;
    chain.array = self;
    return chain;
}
- (ML_NSArrayChain *)ml_makeConfigs:(void (^)(ML_NSArrayChain *))block
{
    ML_NSArrayChain *chain = [[ML_NSArrayChain alloc] init];
    block(chain);
    return chain;
}

@end
