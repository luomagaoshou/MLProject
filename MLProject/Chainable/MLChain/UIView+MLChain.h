//  
//  UIView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"


@interface UIView(MLChain)
+ (MLChain4UIView *)ml_make;

- (MLChain4UIView *)ml_make;

- (MLChain4UIView *)ml_makeConfigs:(void(^)(MLChain4UIView *maker))block;


@end
