//  
//  UITableViewCell+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UITableViewCell.h"



@interface UITableViewCell(MLChain)
+ (MLChain4UITableViewCell *)mlc_make;

- (MLChain4UITableViewCell *)mlc_make;

+ (MLChain4UITableViewCell *)mlc_makeConfigs:(void(^)(MLChain4UITableViewCell *maker))block;

- (MLChain4UITableViewCell *)mlc_makeConfigs:(void(^)(MLChain4UITableViewCell *maker))block;


@end
