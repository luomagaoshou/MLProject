//
//  MLMJRefreshViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLMJRefreshViewController.h"
#import "UITableView+Refresh.h"
#import <MJRefresh/MJRefresh.h>
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
@interface MLMJRefreshViewController ()<UITableViewDelegate, UITableViewDataSource, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

@implementation MLMJRefreshViewController
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
    self.tableView.tableFooterView = [[UIView alloc] init];
    [self.tableView ML_registerClassForCellWithArray:@[@"UITableViewCell"]];
   self.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
       NSLog(@"%@", @"haha");
       dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                  [self.tableView.mj_header endRefreshing];
           [self.tableView reloadEmptyDataSet];
       });
       

   }];

    self.tableView.emptyDataSetDelegate = self;
    self.tableView.emptyDataSetSource = self;
//    self.tableView.mj_header image
//    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
    cell.textLabel.text = [NSString stringWithFormat:@"%lu--%lu", indexPath.section, indexPath.row];
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 5;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}
#pragma mark - DZNEmptyDataSetSource Methods

- (NSAttributedString *)titleForEmptyDataSet:(UIScrollView *)scrollView
{
    NSString *text = @"No colors Found";
    
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont boldSystemFontOfSize:17.0],
                                 NSForegroundColorAttributeName: [UIColor colorWithRed:170/255.0 green:171/255.0 blue:179/255.0 alpha:1.0],
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}

- (NSAttributedString *)descriptionForEmptyDataSet:(UIScrollView *)scrollView
{
    NSString *text = @"Make sure that all words are\nspelled correctly.";
    
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont systemFontOfSize:15.0],
                                 NSForegroundColorAttributeName: [UIColor colorWithRed:170/255.0 green:171/255.0 blue:179/255.0 alpha:1.0],
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}

- (NSAttributedString *)buttonTitleForEmptyDataSet:(UIScrollView *)scrollView forState:(UIControlState)state
{
    NSString *text = @"Add a New Color";
    UIColor *color = nil;
    
    if (state == UIControlStateNormal) color = [UIColor colorWithRed:44/255.0 green:137/255.0 blue:202/255.0 alpha:1.0];
    if (state == UIControlStateHighlighted) color = [UIColor colorWithRed:106/255.0 green:187/255.0 blue:227/255.0 alpha:1.0];
    
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont boldSystemFontOfSize:14.0],
                                 NSForegroundColorAttributeName: color,
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}

- (UIImage *)imageForEmptyDataSet:(UIScrollView *)scrollView
{
    if (UIDeviceOrientationIsLandscape([UIDevice currentDevice].orientation)) {
        return nil;
    }
    return [UIImage imageNamed:@"search_icon"];
}

- (UIColor *)imageTintColorForEmptyDataSet:(UIScrollView *)scrollView
{
    return [UIColor grayColor];
}

- (UIColor *)backgroundColorForEmptyDataSet:(UIScrollView *)scrollView
{
    return [UIColor whiteColor];
}

- (UIView *)customViewForEmptyDataSet:(UIScrollView *)scrollView
{
    return nil;
}


#pragma mark - DZNEmptyDataSetSource Methods

- (BOOL)emptyDataSetShouldAllowTouch:(UIScrollView *)scrollView
{
    return YES;
}

- (BOOL)emptyDataSetShouldAllowScroll:(UIScrollView *)scrollView
{
    return NO;
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapView:(UIView *)view
{
    
    [self.searchDisplayController setActive:NO animated:YES];
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapButton:(UIButton *)button
{
    NSLog(@"%s",__FUNCTION__);
}



#pragma mark - ========= Setter & Getter =========


@end
