//
//  ML_NSObjectChain.h
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class ML_UIViewChain;
@class ML_UIButtonChain;
@class ML_NSObjectChain;
@class ML_CALayerChain;


@interface ML_NSObjectChain : NSObject
@property (nonatomic, strong) id object;
- (instancetype)and;
- (instancetype)with;

///找回指针
- (ML_UIViewChain *)popMakerOfUIView;
- (ML_UIButtonChain *)popMakerOfUIButton;
- (ML_CALayerChain *)popMakerOfCALayer;
@end
