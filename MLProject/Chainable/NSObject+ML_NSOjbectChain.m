//
//  NSObject+ML_NSOjbectChain.m
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ML_NSOjbectChain.h"

@implementation NSObject (ML_NSOjbectChain)
- (ML_NSOjbectChain *)ml_make
{
    ML_NSOjbectChain *chain = [[ML_NSOjbectChain alloc] init];
    
    chain.object = self;
    return chain;
}
@end
