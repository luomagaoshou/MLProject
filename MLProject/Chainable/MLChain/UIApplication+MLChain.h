//  
//  UIApplication+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIApplication.h"



@interface UIApplication(MLChain)
+ (MLChain4UIApplication *)mlc_make;

- (MLChain4UIApplication *)mlc_make;

+ (MLChain4UIApplication *)mlc_makeConfigs:(void(^)(MLChain4UIApplication *maker))block;

- (MLChain4UIApplication *)mlc_makeConfigs:(void(^)(MLChain4UIApplication *maker))block;


@end
