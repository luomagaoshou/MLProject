//  
//  CABasicAnimation+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CABasicAnimation.h"



@interface CABasicAnimation(MLChain)
+ (MLChain4CABasicAnimation *)mlc_make;

- (MLChain4CABasicAnimation *)mlc_make;

+ (MLChain4CABasicAnimation *)mlc_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block;

- (MLChain4CABasicAnimation *)mlc_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block;


@end
