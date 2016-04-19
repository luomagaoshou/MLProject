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
- (instancetype)get;
- (instancetype)with;
///找回指针
- (ML_UIViewChain *)restorationMakerOfUIView;
- (ML_UIButtonChain *)restorationMakerOfUIButton;
- (ML_CALayerChain *)restorationMakerOfCALayer;
@end
