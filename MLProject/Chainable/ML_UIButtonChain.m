//
//  ML_UIButtonChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_UIButtonChain.h"
#import "NSObject+ChainInvocation.h"
@implementation ML_UIButtonChain

ml_chain_block_implementation(UIButton, titleForState, @selector(setTitle:forState:));

@end
