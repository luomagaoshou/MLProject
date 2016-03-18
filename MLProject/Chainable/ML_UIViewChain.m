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

ml_chain_block_implementation(UIView, backgroundColor, @selector(setBackgroundColor:))

ml_chain_block_implementation(UIView, hidden, @selector(setHidden:));

ml_chain_block_implementation(UIView, size, @selector(setSize:));
ml_chain_block_implementation(UIView, origin, @selector(setOrigin:));


ml_chain_block_implementation(UIView, center, @selector(setCenter:))
ml_chain_block_implementation(UIView, frame, @selector(setFrame:));
ml_chain_block_implementation(UIView, bounds, @selector(setBounds:));

@end
