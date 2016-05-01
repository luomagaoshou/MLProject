//  
//  CAEmitterCell+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAEmitterCell.h"


@interface CAEmitterCell(MLChain)
+ (MLChain4CAEmitterCell *)ml_make;

- (MLChain4CAEmitterCell *)ml_make;

- (MLChain4CAEmitterCell *)ml_makeConfigs:(void(^)(MLChain4CAEmitterCell *maker))block;


@end
