//  
//  UIButton+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIButton.h"


@interface UIButton(MLChain)
+ (MLChain4UIButton *)ml_make;

- (MLChain4UIButton *)ml_make;

- (MLChain4UIButton *)ml_makeConfigs:(void(^)(MLChain4UIButton *maker))block;


@end
