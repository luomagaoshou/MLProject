//
//  MLTableViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/10/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTableViewController.h"
#import "MLTableView.h"
#import "MLTBTestCell.h"
@interface MLTableViewController ()<UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) IBOutlet MLTableView *view_;

@end

@implementation MLTableViewController

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
    [self.view_.tableView ml_registerNibForCellWithNameOrClass:@"MLTBTestCell"];
    self.view_.tableView.delegate = self;
    self.view_.tableView.dataSource = self;
    self.view_.tableView.delaysContentTouches = NO;
    
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    MLTBTestCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MLTBTestCell" forIndexPath:indexPath];
    
    [cell.leftButton touchUpInside:^{
        NSLog(@"%@", @"fff");
    }];
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 20;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 60;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
}



#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
