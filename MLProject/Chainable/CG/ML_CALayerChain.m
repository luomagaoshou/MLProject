//
//  ML_CALayerChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_CALayerChain.h"

@implementation ML_CALayerChain
ml_chain_block_implementation(CALayer, superLayer, @selector(setSuperLayer:));

ml_chain_block_implementation_default(CALayer, frame);
ml_chain_block_implementation_default(CALayer, bounds);
ml_chain_block_implementation_default(CALayer, cornerRadius);
ml_chain_block_implementation_default(CALayer, borderWidth);
ml_chain_block_implementation_default(CALayer, borderColor);
ml_chain_block_implementation_default(CALayer, backgroundColor);

ml_chain_block_implementation_default(CALayer, shadowColor);
ml_chain_block_implementation_default(CALayer, shadowOffset);
ml_chain_block_implementation_default(CALayer, shadowRadius);
ml_chain_block_implementation_default(CALayer, shadowOpacity);
ml_chain_block_implementation_default(CALayer, affineTransform);
ml_chain_block_implementation_default(CALayer, transform);
@end
