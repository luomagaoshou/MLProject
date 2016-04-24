//
//  MLChain4NSObject.h
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MLChainMacro.h"
@class MLChain4NSObject;
@class MLChain4UIView;
@class MLChain4UIButton;
@class MLChain4CALayer;

ml_chain_block_maker(NSObject);
@interface MLChain4NSObject : NSObject

@property (nonatomic, strong) id object;
- (instancetype)and;
- (instancetype)with;

///找回指针
- (MLChain4UIView *)popMakerOfUIView;
- (MLChain4UIButton *)popMakerOfUIButton;
- (MLChain4CALayer *)popMakerOfCALayer;
@end
