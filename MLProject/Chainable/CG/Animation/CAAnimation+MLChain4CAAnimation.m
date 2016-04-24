//
//  CAAnimation+MLChain4CAAnimation.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/23.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CAAnimation+MLChain4CAAnimation.h"

@implementation CAAnimation (MLChain4CAAnimation)
+ (MLChain4CAAnimation *)ml_make
{
    MLChain4CAAnimation *chain = [[MLChain4CAAnimation alloc] init];
    CAAnimation *animation = [CAAnimation animation];
    chain.animation = animation;
    chain.object = animation;
    return chain;
    
}

@end
