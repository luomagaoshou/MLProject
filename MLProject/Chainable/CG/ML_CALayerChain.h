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

@property (nonatomic, copy, readonly) ML_CALayerParamBlock cornerRadius;


@property (nonatomic, copy, readonly) ML_CALayerParamBlock borderWidth;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock borderColor;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock backgroundColor;


@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowColor;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowOffset;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowRadius;
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowOpacity;
@property (nonatomic, copy, readonly) ML_CALayerParamBlock shadowPath;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock affineTransform;

@property (nonatomic, copy, readonly) ML_CALayerParamBlock transform;

@end
