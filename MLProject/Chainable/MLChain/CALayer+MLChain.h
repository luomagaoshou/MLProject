//  
//  CALayer+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"


@interface CALayer(MLChain)
+ (MLChain4CALayer *)ml_make;

- (MLChain4CALayer *)ml_make;

- (MLChain4CALayer *)ml_makeConfigs:(void(^)(MLChain4CALayer *maker))block;


@end
