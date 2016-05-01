//  
//  CAEmitterLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CAEmitterLayer+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAEmitterLayer(MLChain)
+ (MLChain4CAEmitterLayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAEmitterLayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAEmitterLayer *)ml_makeConfigs:(void(^)(MLChain4CAEmitterLayer *maker))block
{

MLChain4CAEmitterLayer *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end
