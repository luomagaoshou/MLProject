//
//  UIView+MLChain4UIView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIView+MLChain4UIView.h"
#import "NSObject+ChainInvocation.h"
#import "NSObject+MLChain4NSObject.h"
@implementation UIView (MLChain4UIView)



+ (MLChain4UIView *)ml_make
{
//    MLChain4UIView *chain = [[MLChain4UIView alloc] init];
//    UIView *view = [[UIView alloc] init];
//    chain.object = view;
//    chain.view = view;
    return (id)[super ml_make];
    
}
- (MLChain4UIView *)ml_make
{
//    MLChain4UIView *chain = [[MLChain4UIView alloc] init];
//    chain.object = self;
//    chain.view = self;
  
    
    
    return (id)[super ml_make];
}
- (MLChain4UIView *)ml_makeConfigs:(void (^)(MLChain4UIView * maker))block
{
    MLChain4UIView *chain = self.ml_make;
    block(chain);
    return chain;
}

@end

@implementation UIView (ChainMethod)

- (void)setSuperview:(UIView *)superview
{
 
    [superview addSubview:self];
}

@end
