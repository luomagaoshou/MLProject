//
//  BGTTBEmbedCLCell.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/3/1.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "BGTTBEmbedCLCell.h"

@interface BGTTBEmbedCLCell()<UITableViewDelegate, UITableViewDataSource>
@end
@implementation BGTTBEmbedCLCell
- (void)prepareForReuse {
    
}
- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    [self configureUI];
}
- (void)configureUI {
    
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    self.tableView.estimatedRowHeight = 81;
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:self.nestTBCellName forIndexPath:indexPath];
    if ([cell respondsToSelector:@selector(setMaster:model:)]) {
        [cell setMaster:nil model:tableView.cellDatas[indexPath.section][indexPath.row]];
    }
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return tableView.cellDatas.count;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return tableView.cellDatas[section].count;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return UITableViewAutomaticDimension;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    
}

#pragma mark - setter & getter
- (void)setNestTBCellName:(NSString *)nestTBCellName {
        _nestTBCellName = nestTBCellName;
        NSAssert(NSClassFromString(_nestTBCellName), @"嵌套cell类不存在");
    [self.tableView ml_registerNibForCellWithNameOrClass:_nestTBCellName];
   
}

    

@end
