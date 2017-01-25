//
//  MLAssembleComputerView.h
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/6.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLChooseMenuView.h"
@interface MLAssembleComputerView : UIView
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) MLChooseMenuView *chooseMenuView;
@end
