//
//  MLChain4CAAnimation.h
//  MLProject
//
//  Created by 妙龙赖 on 16/4/23.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MLChain4NSObject.h"
#import "MLChain.h"
ml_chain_block_maker(CAAnimation);
@interface MLChain4CAAnimation : MLChain4NSObject

@property (nonatomic, strong) CAAnimation *animation;


#define enabled(...) enabled(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)enabled;

- (MLChain4CAAnimationParamBlock)delegate;

#define removedOnCompletion(...) removedOnCompletion(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)removedOnCompletion;

#define beginTime(...) beginTime(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)beginTime;

#define repeatDuration(...) repeatDuration(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)repeatDuration;

- (MLChain4CAAnimationParamBlock)fillMode;

#define defaultDuration(...) defaultDuration(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)defaultDuration;

- (MLChain4CAAnimationParamBlock)beginTimeMode;

#define duration(...) duration(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)duration;

- (MLChain4CAAnimationParamBlock)timingFunction;

#define frameInterval(...) frameInterval(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)frameInterval;

#define timeOffset(...) timeOffset(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)timeOffset;

#define repeatCount(...) repeatCount(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)repeatCount;

#define autoreverses(...) autoreverses(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)autoreverses;

#define speed(...) speed(MLChain_MASBoxValue(__VA_ARGS__)))
- (MLChain4CAAnimationParamBlock)speed;



@end
