//  
//  UILabel+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UILabel.h"



@interface UILabel(MLChain)
+ (MLChain4UILabel *)mlc_make;

- (MLChain4UILabel *)mlc_make;

+ (MLChain4UILabel *)mlc_makeConfigs:(void(^)(MLChain4UILabel *maker))block;

- (MLChain4UILabel *)mlc_makeConfigs:(void(^)(MLChain4UILabel *maker))block;


@end
