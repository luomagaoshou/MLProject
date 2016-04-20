//
//  ML_UIButtonChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ML_Chain_Macro.h"
#import "ML_UIViewChain.h"

ml_chain_block_maker(UIButton);
@interface ML_UIButtonChain : ML_UIViewChain

@property (nonatomic, strong) UIButton *button;
#define titleForState(...) ml_chain_arg(titleForState, __VA_ARGS__)

@property (nonatomic, strong) ML_UIButtonParamBlock titleForState;

- (ML_UIButtonParamBlock)tintColor;
+ (NSString *)fuck;
+ (NSArray *)ll;
@end
