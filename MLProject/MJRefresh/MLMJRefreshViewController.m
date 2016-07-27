//
//  MLMJRefreshViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLMJRefreshViewController.h"
#import "UIScrollView+Refresh.h"
#import <MJRefresh/MJRefresh.h>
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
#import "MLNetwork.h"
#import "DZNEmptyDataSeparator.h"
#import "UIView+GestureBlock.h"
#import "MBProgressHUD+Loading.h"
#import "MLMenuCollectionView.h"
#import "MLMenuCLLabelCell.h"
#import "CALayer+Line.h"

@interface MLMJRefreshViewController ()<UITableViewDelegate, UITableViewDataSource, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (weak, nonatomic) IBOutlet MLMenuCollectionView *menuCollectionView;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSMutableArray *menuTitles;
@property (nonatomic, strong) NSMutableArray *cellDatas;

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
    //[self configTableView];
    [self configMenuCollectionView];
   // [self configCollectionView];
}
- (void)configTableView
{
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    self.tableView.tableFooterView = [[UIView alloc] init];
    [self.tableView ml_registerClassForCellWithNameOrClasses:@[@"UITableViewCell"]];
    self.tableView.backgroundColor = [UIColor orangeColor];
    [MBProgressHUD showLoadingHudOnKeywindow];
    [self configEmpeyDataSet];
    
    
    //   self.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
    //       NSLog(@"%@", @"haha");
    //       dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
    //                  [self.tableView.mj_header endRefreshing];
    //           [self.tableView reloadEmptyDataSet];
    //       });
    //
    //
    //   }];
    
    //    self.tableView.emptyDataSetDelegate = self;
    //    self.tableView.emptyDataSetSource = self;
    UIView *emptyDataSetView = [self.tableView valueForKeyPath:@"emptyDataSetView"];
    //    UIControl *tapView = [UIControl new];
    //    //tapView.frame = [UIScreen mainScreen].bounds;
    //    tapView.backgroundColor = [UIColor grayColor];
    //    tapView.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    //    [emptyDataSetView addSubview:tapView];
    //    [emptyDataSetView sendSubviewToBack:tapView];
    //    NSLog(@"%@", [emptyDataSetView getPropertyKeyValueOnlyHaveValueDictionary]);
    //    [tapView tapWithEvent:^(id gesture) {
    //        NSLog(@"%@", emptyDataSetView);
    //    }];
}
- (void)configMenuCollectionView
{
//    [self.menuCollectionView setTitles:@[@"标题1", @"标题2", @"标题3"] clickBlock:^(NSInteger index) {
//        NSLog(@"%ld", index);
//    }];
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.menuCollectionView.layer drawLineWithPositionOption:CALayerDrawLinePositionOptionBottom|CALayerDrawLinePositionOptionTop|CALayerDrawLinePositionOptionLeft|CALayerDrawLinePositionOptionRight
                                                        lineColor:kUI_COLOR_GREEN_00b746 lineWidthOrHeight:2];
    });

//    self.menuCollectionView.delegate = self;
//    self.menuCollectionView.dataSource = self;
//    [self.menuTitles addObject:@[@"标题1", @"标题2", @"标题3"]];
//    [self.menuCollectionView ml_registerNibForCellWithNameOrClass:@"MLMenuCLCell"];
//    [self.menuCollectionView reloadData];
}
- (void)configCollectionView
{
    self.collectionView.delegate = self;
    self.collectionView.dataSource = self;
    [self.menuTitles addObject:@[@"标题1", @"标题2", @"标题3"]];
     [self.collectionView ml_registerNibForCellWithNameOrClass:@"MLMenuCLLabelCell"];
    [self.collectionView reloadData];
}
- (void)configEmpeyDataSet
{
    DZNEmptyDataSeparator *separator = [DZNEmptyDataSeparator separatorWithScrollView:self.tableView];
    DZNEmptyDataSeparatorModel *modelOfEmpty = [DZNEmptyDataSeparatorModel modelWithTableViewStatus:UIScrollViewStatusTypeEmptyData imageName:@"test" title:@"gagag" buttonTitle:@"fgggg" moreConfig:^(DZNEmptyDataSeparatorModel *model) {
        model.allowTouch = YES;
        [model setTapViewBlock:^{
            NSLog(@"%@", @"ffff");
        }];
    }];
    [separator configWithModels:@[modelOfEmpty]];
    self.tableView.statusType = UIScrollViewStatusTypeEmptyData;
   // [self.tableView reloadData];
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{

    
//    [MLNetwork postWithRequestID:@"ff" paramBlock:^(MLURLConfig *urlConfig, MLParamPackage *paramPackage, MLRequestParam *requestParam, NetworkMessageSender *messageSend) {
//                urlConfig.domainNameString = @"api.chunbo.com";
//               urlConfig.virtualDirectoryString = @"/Cookbook";
//        urlConfig.teacherName(@"appcookbooklist");
//        //参数
//        requestParam.page = @"%d";
//        requestParam.pagesize = @"60";
//    
//        
//    } success:^(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, MLURLConfig *urlConfig, MLRequestParam *requestParam, NSString *requestID, MLParamPackage *paramPackage) {
//        
//    } failure:^(NSURLSessionDataTask *task, NSError *error, MLURLConfig *urlConfig, MLRequestParam *requestParam, NSString *requestID, MLParamPackage *paramPackage) {
//        
//    }];
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
    return 0;
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


#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLMenuCLLabelCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"MLMenuCLLabelCell" forIndexPath:indexPath];
    cell.backgroundColor = [UIColor blueColor];
    cell.titleLabel.text = self.menuTitles[indexPath.section][indexPath.row];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(50, 50);
    return CGSizeMake(SCREEN_WIDTH/self.menuTitles.count, 50);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return self.menuTitles.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [self.menuTitles[section] count];;
}
//全部0间距

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout insetForSectionAtIndex:(NSInteger)section
{
    return UIEdgeInsetsZero;
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
    
    NSLog(@"%s --  %s",__FUNCTION__, _cmd);
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapButton:(UIButton *)button
{
    NSLog(@"%s",__FUNCTION__);
}



#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)menuTitles
{
    if (_menuTitles == nil) {
        _menuTitles = [[NSMutableArray alloc] init];
    }
    return _menuTitles;
}
- (NSMutableArray *)cellDatas
{
    if (_cellDatas == nil) {
     
        _cellDatas = [[NSMutableArray alloc] init];
        
    }
    return _cellDatas;
}

@end
