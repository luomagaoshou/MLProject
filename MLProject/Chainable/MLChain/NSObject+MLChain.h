//  
//  NSObject+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"


@interface NSObject(MLChain)
+ (MLChain4NSObject *)ml_make;

- (MLChain4NSObject *)ml_make;

- (MLChain4NSObject *)ml_makeConfigs:(void(^)(MLChain4NSObject *maker))block;


@end
