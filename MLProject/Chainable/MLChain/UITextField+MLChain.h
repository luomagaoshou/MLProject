//  
//  UITextField+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UITextField.h"


@interface UITextField(MLChain)
+ (MLChain4UITextField *)ml_make;

- (MLChain4UITextField *)ml_make;

- (MLChain4UITextField *)ml_makeConfigs:(void(^)(MLChain4UITextField *maker))block;


@end
