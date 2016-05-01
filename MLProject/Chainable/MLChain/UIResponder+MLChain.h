//  
//  UIResponder+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"


@interface UIResponder(MLChain)
+ (MLChain4UIResponder *)ml_make;

- (MLChain4UIResponder *)ml_make;

- (MLChain4UIResponder *)ml_makeConfigs:(void(^)(MLChain4UIResponder *maker))block;


@end
