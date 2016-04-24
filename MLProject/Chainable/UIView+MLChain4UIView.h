//
//  UIView+MLChain4UIView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "MLChain4UIView.h"
#import "MLChainMacro.h"

@interface UIView (MLChain4UIView)

ml_chain_category_method_declear(UIView);

@end
@interface UIView (ChainMethod)

- (void)setSuperview:(UIView * _Nullable)superview;

@end