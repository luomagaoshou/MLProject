//
//  ML_NSObjectChain.m
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_NSObjectChain.h"

@implementation ML_NSObjectChain
- (instancetype)and
{
    return self;
}
- (instancetype)get
{
    return self;
}
- (instancetype)with
{
    return self;
}

- (ML_UIViewChain *)makerOfUIView
{
    if (![self isKindOfClass:NSClassFromString(@"ML_UIViewChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_UIViewChain *)self;
}

- (ML_UIButtonChain *)makerOfUIButton
{
    if (![self isKindOfClass:NSClassFromString(@"ML_UIButtonChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_UIButtonChain *)self;
}
- (ML_CALayerChain *)makerOfCALayer
{
    if (![self isKindOfClass:NSClassFromString(@"ML_CALayerChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_CALayerChain *)self;
}
@end
