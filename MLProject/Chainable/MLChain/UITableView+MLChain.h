//  
//  UITableView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UITableView.h"



@interface UITableView(MLChain)
+ (MLChain4UITableView *)mlc_make;

- (MLChain4UITableView *)mlc_make;

+ (MLChain4UITableView *)mlc_makeConfigs:(void(^)(MLChain4UITableView *maker))block;

- (MLChain4UITableView *)mlc_makeConfigs:(void(^)(MLChain4UITableView *maker))block;


@end
