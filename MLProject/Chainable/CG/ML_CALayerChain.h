//
//  ML_CALayerChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_NSObjectChain.h"
#import "ML_Chain_Macro.h"
ml_chain_block_maker(CALayer);
@interface ML_CALayerChain : ML_NSObjectChain
@property (nonatomic, strong) CALayer *layer;


@property (nonatomic, strong, readonly) ML_CALayerParamBlock superLayer;
- (ML_CALayerParamBlock)bounds;

- (ML_CALayerParamBlock)frame;
#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)cornerRadius;

#define borderWidth(...) borderWidth(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)borderWidth;

- (ML_CALayerParamBlock)borderColor;

- (ML_CALayerParamBlock)backgroundColor;
#define position(...) position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)position;
#define anchorPoint(...) anchorPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)anchorPoint;

- (ML_CALayerParamBlock)shadowColor;
#define shadowOffset(...) shadowOffset(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)shadowOffset;
#define shadowRadius(...) shadowRadius(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowRadius;
#define shadowOpacity(...) shadowOpacity(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowOpacity;
- (ML_CALayerParamBlock)shadowPath;
#define affineTransform(...) affineTransform(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)affineTransform;
#define transform(...) transform(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)transform;

@end
