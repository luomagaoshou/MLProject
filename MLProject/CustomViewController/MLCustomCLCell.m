//
//  MLCustomCLCell.m
//  MLProject
//
//  Created by xunke01 on 16/7/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCustomCLCell.h"
#import <MJRefresh/MJRefresh.h>
@interface MLCustomCLCell()<UITableViewDelegate, UITableViewDataSource>
@end
@implementation MLCustomCLCell
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes *)layoutAttributes
{
    NSLog(@"%@", layoutAttributes);
    
}
- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    [self.tableView ml_registerClassForCellWithNameOrClass:[UITableViewCell class]];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    self.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
        NSLog(@"%@", @"刷新");
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [self.tableView.mj_header endRefreshing];
        });
       
    }];
}

#pragma mark - ========= TableView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
    cell.textLabel.text = [NSString stringWithFormat:@"%ld -- %ld", indexPath.section, indexPath.row];
    cell.backgroundColor = kCOLOR_RANDOM_COLOR;
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 30;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}



@end
