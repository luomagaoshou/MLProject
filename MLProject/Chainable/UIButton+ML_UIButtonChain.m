
//
//  UIButton+ML_UIButtonChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIButton+ML_UIButtonChain.h"

@implementation UIButton (ML_UIButtonChain)
- (ML_UIButtonChain *)ml_make
{
    ML_UIButtonChain *chain = [[ML_UIButtonChain alloc] init];
    chain.object = self;
    chain.button = self;
    chain.view = self;
    return chain;
}
@end
