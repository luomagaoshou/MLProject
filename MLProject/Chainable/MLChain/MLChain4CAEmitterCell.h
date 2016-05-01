//  
//  MLChain4CAEmitterCell.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CAEmitterCell);
@interface MLChain4CAEmitterCell:MLChain4NSObject
@property (nonatomic, strong)CAEmitterCell *emitterCell;
#ifndef birthRate
#define birthRate(...) birthRate(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)birthRate;

#ifndef lifetime
#define lifetime(...) lifetime(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)lifetime;

#ifndef yAcceleration
#define yAcceleration(...) yAcceleration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)yAcceleration;

#ifndef emissionRange
#define emissionRange(...) emissionRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)emissionRange;

#ifndef spinRange
#define spinRange(...) spinRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)spinRange;

- (MLChainParamBlock4CAEmitterCell)emitterCells;

- (MLChainParamBlock4CAEmitterCell)value_forKey;

- (MLChainParamBlock4CAEmitterCell)didChangeValueForKey;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)enabled;

- (MLChainParamBlock4CAEmitterCell)value_forUndefinedKey;

- (MLChainParamBlock4CAEmitterCell)value_forKeyPath;

- (MLChainParamBlock4CAEmitterCell)style;

- (MLChainParamBlock4CAEmitterCell)CAMLParser_setValue_forKey;

- (MLChainParamBlock4CAEmitterCell)encodeWithCAMLWriter;

#ifndef beginTime
#define beginTime(...) beginTime(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)beginTime;

- (MLChainParamBlock4CAEmitterCell)CA_prepareRenderValue;

#ifndef repeatDuration
#define repeatDuration(...) repeatDuration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)repeatDuration;

- (MLChainParamBlock4CAEmitterCell)fillMode;

#ifndef lifetimeRange
#define lifetimeRange(...) lifetimeRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)lifetimeRange;

#ifndef emissionLatitude
#define emissionLatitude(...) emissionLatitude(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)emissionLatitude;

#ifndef emissionLongitude
#define emissionLongitude(...) emissionLongitude(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)emissionLongitude;

#ifndef xAcceleration
#define xAcceleration(...) xAcceleration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)xAcceleration;

#ifndef zAcceleration
#define zAcceleration(...) zAcceleration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)zAcceleration;

#ifndef scale
#define scale(...) scale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)scale;

#ifndef scaleRange
#define scaleRange(...) scaleRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)scaleRange;

#ifndef scaleSpeed
#define scaleSpeed(...) scaleSpeed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)scaleSpeed;

#ifndef orientationLatitude
#define orientationLatitude(...) orientationLatitude(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)orientationLatitude;

#ifndef orientationLongitude
#define orientationLongitude(...) orientationLongitude(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)orientationLongitude;

#ifndef orientationRange
#define orientationRange(...) orientationRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)orientationRange;

#ifndef rotationRange
#define rotationRange(...) rotationRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)rotationRange;

#ifndef spin
#define spin(...) spin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)spin;

#ifndef redRange
#define redRange(...) redRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)redRange;

#ifndef redSpeed
#define redSpeed(...) redSpeed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)redSpeed;

#ifndef greenRange
#define greenRange(...) greenRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)greenRange;

#ifndef greenSpeed
#define greenSpeed(...) greenSpeed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)greenSpeed;

#ifndef blueRange
#define blueRange(...) blueRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)blueRange;

#ifndef blueSpeed
#define blueSpeed(...) blueSpeed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)blueSpeed;

#ifndef alphaRange
#define alphaRange(...) alphaRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)alphaRange;

#ifndef alphaSpeed
#define alphaSpeed(...) alphaSpeed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)alphaSpeed;

- (MLChainParamBlock4CAEmitterCell)contents;

#ifndef minificationFilterBias
#define minificationFilterBias(...) minificationFilterBias(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)minificationFilterBias;

- (MLChainParamBlock4CAEmitterCell)particleType;

#ifndef massRange
#define massRange(...) massRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)massRange;

- (MLChainParamBlock4CAEmitterCell)emitterBehaviors;

- (MLChainParamBlock4CAEmitterCell)contentsFrameMode;

#ifndef contentsFrameCount
#define contentsFrameCount(...) contentsFrameCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)contentsFrameCount;

#ifndef contentsFramesPerRow
#define contentsFramesPerRow(...) contentsFramesPerRow(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)contentsFramesPerRow;

#ifndef contentsFramesPerSecond
#define contentsFramesPerSecond(...) contentsFramesPerSecond(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)contentsFramesPerSecond;

#ifndef velocityRange
#define velocityRange(...) velocityRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)velocityRange;

#ifndef rotation
#define rotation(...) rotation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)rotation;

#ifndef mass
#define mass(...) mass(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)mass;

#ifndef duration
#define duration(...) duration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)duration;

- (MLChainParamBlock4CAEmitterCell)encodeWithCoder;

- (MLChainParamBlock4CAEmitterCell)name;

#ifndef contentsScale
#define contentsScale(...) contentsScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)contentsScale;

#ifndef color
#define color(...) color(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)color;

#ifndef timeOff
#define timeOff(...) timeOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)timeOff;

#ifndef repeatCount
#define repeatCount(...) repeatCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)repeatCount;

#ifndef autoreverses
#define autoreverses(...) autoreverses(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)autoreverses;

#ifndef contentsRect
#define contentsRect(...) contentsRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentsRect_
#define contentsRect_(...)  contentsRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)contentsRect;

- (MLChainParamBlock4CAEmitterCell)minificationFilter;

- (MLChainParamBlock4CAEmitterCell)magnificationFilter;

#ifndef velocity
#define velocity(...) velocity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)velocity;

#ifndef speed
#define speed(...) speed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAEmitterCell)speed;

@end
