//
//  MLAssembleComputerController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/6.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAssembleComputerController.h"
#import "MLAssembleComputerView.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface MLAssembleComputerController ()<UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) IBOutlet MLAssembleComputerView *view_;

@end

@implementation MLAssembleComputerController
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
 
    [self configureTableView];
    [self configureChooseMenuView];
 
}

- (void)configureTableView{
    self.view_.tableView.delegate = self;
    self.view_.tableView.dataSource = self;
    self.view_.tableView.tableFooterView = [[UIView alloc] init];
    [self.view_.tableView ml_registerClassForCellWithNameOrClass:[UITableViewCell class]];
    [self.view_.tableView.cellDatas addObjectsFromArray:
     @[@[@"CPU",
         @"主板",
         @"显卡",
         @"固态硬盘",
         @"硬盘",
         @"内存",
         @"电源",
         @"机箱",
         @"显示器"]]];
    [self.view_.tableView reloadData];
}

- (void)configureChooseMenuView{
   
    
    
        @weakify(self);
        [self.view_.chooseMenuView setCellDatas:nil clickBlock:^(UITableView *tableView, NSIndexPath *indexPath) {
            @strongify(self);
            
            [self.view_.chooseMenuView dismiss];
        }];
        // self.view_.chooseMenuView.hidden = YES;

    
}
- (NSArray *)pricesDatas{
    NSArray *pricesOfCPU = @[@{@"i7-6700k盒装":@"2599"}];
    
    NSArray *pricesOfMainBoard = @[];
    
    NSArray *pricesOfDisplayCard = @[];
    
    NSArray *pricesOfSSD = @[];
    
    NSArray *pricesOfHardDiss = @[];
    
    NSArray *pricesOfMemory = @[];
    
    NSArray *pricesOfPower = @[];
    
    NSArray *pricesOfBox = @[];
    
    NSArray *pricesOfScreen = @[];
    
    return
     @[pricesOfCPU,
       pricesOfMainBoard,
       pricesOfDisplayCard,
       pricesOfSSD,
       pricesOfMemory,
       pricesOfHardDiss,
       pricesOfPower,
       pricesOfBox,
       pricesOfScreen,
       ];
    
}

#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
  
    cell.textLabel.text = tableView.cellDatas[indexPath.section][indexPath.row];
    
    
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
    return 40;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (![[self pricesDatas][indexPath.row] count]) {
        return;
    }
    [self.view_.chooseMenuView.tableView.cellDatas removeAllObjects];
    [self.view_.chooseMenuView.tableView.cellDatas addObject:[self pricesDatas][indexPath.row]];
    [self.view_.chooseMenuView show];
    [self.view_.chooseMenuView.tableView reloadData];
    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========


@end
