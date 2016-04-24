//
//  MLChain4UIView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLChain4UIView.h"
#import "NSObject+ChainInvocation.h"
#import "UIView+MLChain4UIView.h"

@implementation MLChain4UIView
ml_chain_block_implementation(UIView, superView, @selector(setSuperview:));

@end
