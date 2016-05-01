//  
//  MLChain4CAShapeLayer.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CAShapeLayer);
@interface MLChain4CAShapeLayer:MLChain4CALayer
@property (nonatomic, strong)CAShapeLayer *shapeLayer;
- (MLChainParamBlock4CAShapeLayer)didChangeValueForKey;

#ifndef strokeStart
#define strokeStart(...) strokeStart(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)strokeStart;

#ifndef strokeEnd
#define strokeEnd(...) strokeEnd(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)strokeEnd;

#ifndef lineDashPhase
#define lineDashPhase(...) lineDashPhase(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)lineDashPhase;

#ifndef miterLimit
#define miterLimit(...) miterLimit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)miterLimit;

#ifndef strokeColor
#define strokeColor(...) strokeColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)strokeColor;

- (MLChainParamBlock4CAShapeLayer)lineCap;

- (MLChainParamBlock4CAShapeLayer)lineJoin;

- (MLChainParamBlock4CAShapeLayer)lineDashPattern;

#ifndef path
#define path(...) path(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)path;

#ifndef lineWidth
#define lineWidth(...) lineWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)lineWidth;

#ifndef fillColor
#define fillColor(...) fillColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAShapeLayer)fillColor;

- (MLChainParamBlock4CAShapeLayer)fillRule;

@end
