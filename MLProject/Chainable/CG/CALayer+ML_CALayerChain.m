//
//  CALayer+ML_CALayerChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CALayer+ML_CALayerChain.h"

@implementation CALayer (ML_CALayerChain)
+ (ML_CALayerChain *)ml_make
{
    ML_CALayerChain *chain = [[ML_CALayerChain alloc] init];
    CALayer *layer = [[CALayer alloc] init];
    chain.object = layer;
    chain.layer = layer;
    return chain;
}
- (ML_CALayerChain *)ml_make
{
    ML_CALayerChain *chain = [[ML_CALayerChain alloc] init];
    chain.object = self;
    chain.layer = self;
    return chain;
}
- (ML_CALayerChain *)ml_makeConfigs:(void (^)(ML_CALayerChain *))block
{
    ML_CALayerChain *chain = [[ML_CALayerChain alloc] init];
    block(chain);
    return chain;
}
@end

@implementation CALayer (ML_CALayerChainMothod)

- (void)superLayer:(CALayer *)superLayer
{
    [superLayer addSublayer:self];
}

@end
