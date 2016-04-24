
//
//  UIButton+MLChain4UIButton.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIButton+MLChain4UIButton.h"
#import "NSObject+MLChain4NSObject.h"
@implementation UIButton (MLChain4UIButton)
- (MLChain4UIButton *)ml_make
{
//    MLChain4UIButton *chain = [[MLChain4UIButton alloc] init];
//    chain.object = self;
//    chain.view = self;
//    chain.button = self;
//    return chain;
      return (id)[super ml_make];
}

+ (MLChain4UIButton *)ml_make
{
//    MLChain4UIButton *chain = [[MLChain4UIButton alloc] init];
//    UIButton *button  = [[UIButton alloc] init];
//    chain.object = button;
//    chain.view = button;
//    chain.button = button;
//    return chain;
      return (id)[super ml_make];
}

- (MLChain4UIButton *)ml_makeConfigs:(void (^)(MLChain4UIButton *))block
{
    MLChain4UIButton *chain = self.ml_make;
    block(chain);
    return chain;
}
@end
