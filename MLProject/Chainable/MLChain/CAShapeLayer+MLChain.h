//  
//  CAShapeLayer+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAShapeLayer.h"



@interface CAShapeLayer(MLChain)
+ (MLChain4CAShapeLayer *)mlc_make;

- (MLChain4CAShapeLayer *)mlc_make;

+ (MLChain4CAShapeLayer *)mlc_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block;

- (MLChain4CAShapeLayer *)mlc_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block;


@end
