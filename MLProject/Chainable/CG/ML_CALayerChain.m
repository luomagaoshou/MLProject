//
//  ML_CALayerChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_CALayerChain.h"

@implementation ML_CALayerChain




ml_chain_block_implementation(CALayer, borderWidth, @selector(setBorderWidth:));
ml_chain_block_implementation(CALayer, borderColor, @selector(setBorderColor:));
ml_chain_block_implementation(CALayer, backgroundColor, @selector(setBackgroundColor:));

ml_chain_block_implementation_default(CALayer, shadowColor);
ml_chain_block_implementation_default(CALayer, shadowOffset)
@end
