//  
//  UILabel+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UILabel.h"


@interface UILabel(MLChain)
+ (MLChain4UILabel *)ml_make;

- (MLChain4UILabel *)ml_make;

- (MLChain4UILabel *)ml_makeConfigs:(void(^)(MLChain4UILabel *maker))block;


@end
