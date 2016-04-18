//
//  NSObject+ML_NSObjectChain.m
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ML_NSObjectChain.h"

@implementation NSObject (ML_NSObjectChain)
- (ML_NSObjectChain *)ml_make
{
    ML_NSObjectChain *chain = [[ML_NSObjectChain alloc] init];
    
    chain.object = self;
    return chain;
}
@end
