//
//  CALayer+MLChain4CALayer.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CALayer+MLChain4CALayer.h"

@implementation CALayer (MLChain4CALayer)
+ (MLChain4CALayer *)ml_make
{
    MLChain4CALayer *chain = [[MLChain4CALayer alloc] init];
    CALayer *layer = [[CALayer alloc] init];
    chain.object = layer;
    chain.layer = layer;
    return chain;
}
- (MLChain4CALayer *)ml_make
{
    MLChain4CALayer *chain = [[MLChain4CALayer alloc] init];
    chain.object = self;
    chain.layer = self;
    return chain;
}
- (MLChain4CALayer *)ml_makeConfigs:(void (^)(MLChain4CALayer *))block
{
    MLChain4CALayer *chain = [[MLChain4CALayer alloc] init];
    block(chain);
    return chain;
}
@end

@implementation CALayer (MLChain4CALayerMothod)

- (void)superLayer:(CALayer *)superLayer
{
    [superLayer addSublayer:self];
}

@end
