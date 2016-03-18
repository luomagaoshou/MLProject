//
//  ML_UIViewChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_UIViewChain.h"
#import "NSObject+ChainInvocation.h"


@implementation ML_UIViewChain


ml_chain_block_implementation_default(UIView, backgroundColor);
ml_chain_block_implementation_default(UIView, hidden);
ml_chain_block_implementation_default(UIView, size);
ml_chain_block_implementation_default(UIView, origin);
ml_chain_block_implementation_default(UIView, center);
ml_chain_block_implementation_default(UIView, bounds);
ml_chain_block_implementation_default(UIView, frame);


@end
