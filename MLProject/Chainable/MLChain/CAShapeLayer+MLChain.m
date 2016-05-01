//  
//  CAShapeLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CAShapeLayer+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAShapeLayer(MLChain)
+ (MLChain4CAShapeLayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAShapeLayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAShapeLayer *)ml_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block
{

MLChain4CAShapeLayer *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end
