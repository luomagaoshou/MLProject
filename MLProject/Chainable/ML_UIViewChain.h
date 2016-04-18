//
//  ML_UIViewChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ML_Chain_Macro.h"
ml_chain_block_maker(UIView);
@interface ML_UIViewChain : ML_NSObjectChain
@property (nonatomic, strong) UIView *view;

@property (nonatomic, strong, readonly) ML_UIViewParamBlock backgroundColor;

#define origin_(...) origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
@property (nonatomic, strong, readonly) ML_UIViewParamBlock origin;
#define center_(...) center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
@property (nonatomic, strong, readonly) ML_UIViewParamBlock center;
#define size_(...) size(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
@property (nonatomic, strong, readonly) ML_UIViewParamBlock size;
#define frame_(...) frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
@property (nonatomic, strong, readonly) ML_UIViewParamBlock frame;
#define bounds_(...) bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
@property (nonatomic, strong, readonly) ML_UIViewParamBlock bounds;
#define hidden(...) hidden(ml_chain_MASBoxValue(__VA_ARGS__)
@property (nonatomic, strong, readonly) ML_UIViewParamBlock hidden;


@end

