//  
//  CAShapeLayer+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAShapeLayer.h"


@interface CAShapeLayer(MLChain)
+ (MLChain4CAShapeLayer *)ml_make;

- (MLChain4CAShapeLayer *)ml_make;

- (MLChain4CAShapeLayer *)ml_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block;


@end
