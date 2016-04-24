//
//  MLChain4UIButton.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MLChainMacro.h"
#import "MLChain4UIView.h"

ml_chain_block_maker(UIButton);
@interface MLChain4UIButton : MLChain4UIView

@property (nonatomic, strong) UIButton *button;
#define titleForState(...) ml_chain_arg(titleForState, __VA_ARGS__)
//不是简单的setXX不适用自动添加方法
@property (nonatomic, strong) MLChain4UIButtonParamBlock titleForState;

- (MLChain4UIButtonParamBlock)tintColor;

@end
