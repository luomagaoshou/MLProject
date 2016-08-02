//
//  MLPageSubViewController1.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/31.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPageSubViewController1.h"
#import "UIImage+FileName.h"
#import "UIImage+AttributeString.h"
@interface MLPageSubViewController1 ()<UITableViewDelegate, UITableViewDataSource>


@end

@implementation MLPageSubViewController1
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.tableView ml_registerClassForCellWithNameOrClass:[UITableViewCell class]];
    [self.tableView.cellDatas addObjectsFromArray:@[@[@"1", @"2", @"3", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4", @"4"]]];
      [self.tableView addObserver:self forKeyPath:@"contentOffset" options:NSKeyValueObservingOptionNew|NSKeyValueObservingOptionNew context:nil];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}

#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
     cell.textLabel.text = [NSString stringWithFormat:@"%@-%ld-%ld", NSStringFromClass([self class]), indexPath.section, indexPath.row];
    UIImage *image = [UIImage imageNamed:@"test"];
    NSMutableAttributedString *mutAttrStr = [image mutableAttributedStringWithBounds:CGRectMake(0, 0, 20, 20)];
    NSString *text = [NSString stringWithFormat:@"%@-%ld-%ld", NSStringFromClass([self class]), indexPath.section, indexPath.row];
    [mutAttrStr appendAttributedString:[[NSAttributedString alloc] initWithString:text]];
    cell.textLabel.attributedText = mutAttrStr;
    cell.accessoryView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"test"]];
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return tableView.cellDatas.count;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return tableView.cellDatas[section].count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}
- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSString *,id> *)change context:(void *)context
{
    [[NSNotificationCenter defaultCenter] postNotificationName:@"SubPageViewTableViewContentOffsetChanged" object:object];
}


#pragma mark - ========= Setter & Getter =========

@end
