//  
//  UIImageView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIImageView.h"



@interface UIImageView(MLChain)
+ (MLChain4UIImageView *)mlc_make;

- (MLChain4UIImageView *)mlc_make;

+ (MLChain4UIImageView *)mlc_makeConfigs:(void(^)(MLChain4UIImageView *maker))block;

- (MLChain4UIImageView *)mlc_makeConfigs:(void(^)(MLChain4UIImageView *maker))block;


@end
