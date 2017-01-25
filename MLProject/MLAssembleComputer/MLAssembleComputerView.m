



//
//  MLAssembleComputerView.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/6.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAssembleComputerView.h"
#import "NSDictionary+ML_Tools.h"
@implementation MLAssembleComputerView

- (void)awakeFromNib{
    [super awakeFromNib];
    [self configureChooseMenuView];
}

- (void)configureChooseMenuView{
   
}
#pragma mark - ========= Setter & Getter =========
- (MLChooseMenuView *)chooseMenuView{
    if (_chooseMenuView == nil) {
        _chooseMenuView = [MLChooseMenuView chooseTabelViewWithTitle:@"选择"];
        [_chooseMenuView configureCellWithClassName:@"UITableViewCell" configBlock:^(UITableView *tableView, __kindof UITableViewCell *cell, NSArray *cellDatas, NSIndexPath *indexPath) {
            NSDictionary *dic = cellDatas[indexPath.section][indexPath.row];
                                 cell.textLabel.text = [NSString stringWithFormat:@"%@-%@", [dic firstKey], [dic firstValue]];
            
        }];
    }
    return _chooseMenuView;
}
@end
