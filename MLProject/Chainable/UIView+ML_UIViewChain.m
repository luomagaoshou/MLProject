//
//  UIView+ML_UIViewChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIView+ML_UIViewChain.h"

@implementation UIView (ML_UIViewChain)

+ (ML_UIViewChain *)ml_make
{
    ML_UIViewChain *chain = [[ML_UIViewChain alloc] init];
    UIView *view = [[UIView alloc] init];
    chain.object = view;
    chain.view = view;
    return chain;
    
}
- (ML_UIViewChain *)ml_make
{
    ML_UIViewChain *chain = [[ML_UIViewChain alloc] init];
    chain.object = self;
    chain.view = self;
    return chain;
}
- (ML_UIViewChain *)ml_makeConfigs:(void (^)(ML_UIViewChain *))block
{
    ML_UIViewChain *chain = self.ml_make;
    block(chain);
    return chain;
}



@end
