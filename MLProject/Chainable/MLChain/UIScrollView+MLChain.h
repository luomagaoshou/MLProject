//  
//  UIScrollView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"



@interface UIScrollView(MLChain)
+ (MLChain4UIScrollView *)mlc_make;

- (MLChain4UIScrollView *)mlc_make;

+ (MLChain4UIScrollView *)mlc_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block;

- (MLChain4UIScrollView *)mlc_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block;


@end
