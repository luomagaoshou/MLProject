//
//  NSObject+MLChain4NSObject.m
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+MLChain4NSObject.h"
#import "NSObject+ChainInvocation.h"
@implementation NSObject (MLChain4NSObject)
+ (MLChain4NSObject *)ml_make
{
   
    id chainObject = [[[self class] alloc] init];
    
   id chainMaker = [chainObject makerWithConnetAllProperty];
    return chainMaker;
}
- (MLChain4NSObject *)ml_make
{
    id chainMaker = [self makerWithConnetAllProperty];
    return chainMaker;
}
- (MLChain4NSObject *)ml_makeConfigs:(void (^)(MLChain4NSObject * _Nonnull))block
{
     id chainMaker = [[self class] createChainMaker];
    block(chainMaker);
    return chainMaker;
}
#pragma mark - ========= Connet Property =========
- (id)makerWithConnetAllProperty
{
    id chainMaker = [[self class] createChainMaker];
    for (Class currentClass = [chainMaker class]; [currentClass class] != [MLChain4NSObject class]; currentClass = [[currentClass class] superclass]) {
        [chainMaker setValue:self forKey: [[self class] objectPropertyNameInChainMaker]];
    }
    return  chainMaker;
}
@end
