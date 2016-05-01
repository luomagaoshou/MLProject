//  
//  MLChain4CAEmitterLayer.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CAEmitterLayer);
@interface MLChain4CAEmitterLayer:MLChain4CALayer
@property (nonatomic, strong)CAEmitterLayer *emitterLayer;
#ifndef emitterPosition
#define emitterPosition(...) emitterPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef emitterPosition_
#define emitterPosition_(...)  emitterPosition(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterPosition;

#ifndef emitterSize
#define emitterSize(...) emitterSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef emitterSize_
#define emitterSize_(...)  emitterSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterSize;

- (MLChainParamBlock4CAEmitterLayer)emitterMode;

- (MLChainParamBlock4CAEmitterLayer)emitterShape;

#ifndef birthRate
#define birthRate(...) birthRate(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)birthRate;

#ifndef lifetime
#define lifetime(...) lifetime(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)lifetime;

- (MLChainParamBlock4CAEmitterLayer)emitterCells;

- (MLChainParamBlock4CAEmitterLayer)didChangeValueForKey;

- (MLChainParamBlock4CAEmitterLayer)renderMode;

#ifndef scale
#define scale(...) scale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)scale;

#ifndef spin
#define spin(...) spin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)spin;

- (MLChainParamBlock4CAEmitterLayer)emitterBehaviors;

- (MLChainParamBlock4CAEmitterLayer)reloadValueForKeyPath;

#ifndef emitterZPosition
#define emitterZPosition(...) emitterZPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterZPosition;

#ifndef emitterDepth
#define emitterDepth(...) emitterDepth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterDepth;

#ifndef preservesDepth
#define preservesDepth(...) preservesDepth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)preservesDepth;

#ifndef emitterPath
#define emitterPath(...) emitterPath(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterPath;

#ifndef emitterDuration
#define emitterDuration(...) emitterDuration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)emitterDuration;

#ifndef spinBias
#define spinBias(...) spinBias(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)spinBias;

#ifndef cullRect
#define cullRect(...) cullRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef cullRect_
#define cullRect_(...)  cullRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)cullRect;

#ifndef cullMinZ
#define cullMinZ(...) cullMinZ(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)cullMinZ;

#ifndef cullMaxZ
#define cullMaxZ(...) cullMaxZ(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)cullMaxZ;

#ifndef seed
#define seed(...) seed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)seed;

#ifndef velocity
#define velocity(...) velocity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterLayer)velocity;

@end
