//
//  ML_CALayerChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_NSOjbectChain.h"
#import "ML_Chain_Macro.h"
ml_chain_block_maker(CALayer);
@interface ML_CALayerChain : ML_NSOjbectChain
@property (nonatomic, strong) CALayer *layer;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock bounds;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock frame;
#define cornerRadius(...) ml_chain_arg(cornerRadius, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock cornerRadius;

#define borderWidth(...) ml_chain_arg(borderWidth, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock borderWidth;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock borderColor;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock backgroundColor;


@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowColor;
#define shadowOffset(...) ml_chain_arg(shadowOffset, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowOffset;
#define shadowRadius(...) ml_chain_arg(shadowRadius, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowRadius;
#define shadowOpacity(...) ml_chain_arg(shadowOpacity, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowOpacity;
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowPath;
#define affineTransform(...) ml_chain_arg(affineTransform, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock affineTransform;
#define transform(...) ml_chain_arg(transform, __VA_ARGS__)
@property (nonatomic, copy, readonly) ML_CALayerParamBlock transform;

@end
