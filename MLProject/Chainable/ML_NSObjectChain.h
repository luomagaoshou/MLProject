//
//  ML_NSObjectChain.h
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ML_UIViewChain;
@class ML_UIButtonChain;
@class ML_NSObjectChain;
@class ML_CALayerChain;
@interface ML_NSObjectChain : NSObject
@property (nonatomic, strong) id object;
- (instancetype)and;
- (instancetype)get;
- (instancetype)with;
- (ML_UIViewChain *)makerOfUIView;
- (ML_UIButtonChain *)makerOfUIButton;
- (ML_CALayerChain *)makerOfCALayer;
@end
