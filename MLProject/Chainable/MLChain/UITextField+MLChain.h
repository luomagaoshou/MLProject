//  
//  UITextField+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UITextField.h"



@interface UITextField(MLChain)
+ (MLChain4UITextField *)mlc_make;

- (MLChain4UITextField *)mlc_make;

+ (MLChain4UITextField *)mlc_makeConfigs:(void(^)(MLChain4UITextField *maker))block;

- (MLChain4UITextField *)mlc_makeConfigs:(void(^)(MLChain4UITextField *maker))block;


@end
