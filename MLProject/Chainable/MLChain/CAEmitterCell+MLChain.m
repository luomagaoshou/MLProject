//  
//  CAEmitterCell.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CAEmitterCell+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAEmitterCell(MLChain)
+ (MLChain4CAEmitterCell *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAEmitterCell *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAEmitterCell *)ml_makeConfigs:(void(^)(MLChain4CAEmitterCell *maker))block
{

MLChain4CAEmitterCell *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end
