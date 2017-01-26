//  
//  CAGradientLayer+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAGradientLayer.h"



@interface CAGradientLayer(MLChain)
+ (MLChain4CAGradientLayer *)mlc_make;

- (MLChain4CAGradientLayer *)mlc_make;

+ (MLChain4CAGradientLayer *)mlc_makeConfigs:(void(^)(MLChain4CAGradientLayer *maker))block;

- (MLChain4CAGradientLayer *)mlc_makeConfigs:(void(^)(MLChain4CAGradientLayer *maker))block;


@end
