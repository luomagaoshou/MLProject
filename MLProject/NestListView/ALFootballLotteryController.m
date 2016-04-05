//
//  ALFootballLotteryController.m
//  LotterySteward
//
//  Created by apple on 16/4/1.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import "ALFootballLotteryController.h"
#include "ALFootballLotteryCLCell.h"
#import "UICollectionView+ML_Tools.h"
#import "AthleticsLotteryMaster.h"
#import "MJExtension.h"
#import "ALFootballLotteryView.h"
#import "NetworkCtl.h"
@interface ALFootballLotteryController ()<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) IBOutlet ALFootballLotteryView *footballLotteryView;
@property (nonatomic, strong) AthleticsLotteryMaster *athleticsLotteryMaster;
@property (nonatomic, strong) NSMutableArray *dataSource;
@property (nonatomic, strong) NSCache *subCollectionViewSelectedItems;

@end

@implementation ALFootballLotteryController

#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}
//初始化，是UIViewController的子类就会调用
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
//加载
- (void)loadView
{
    [super loadView];
    
}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
    [self downloadData];
}
//即将出现
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}
//排列SubViews
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
}
//排列SubViews完成
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
}
//已经出现
- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}
//即将消失
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}
//已经消失
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}
//内存警告
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - ========= InitialUI =========
- (void)initUI
{
    self.automaticallyAdjustsScrollViewInsets = NO;
    
    [self initCollectionView];
    
    
}

- (void)initCollectionView
{
    [self.footballLotteryView.collectionView ML_registerNibForCellWithArray:@[@"ALFootballLotteryCLCell"]];
    self.footballLotteryView.collectionView.delegate = self;
    self.footballLotteryView.collectionView.dataSource = self;
}
- (void)initDeleteButton
{
     __weak typeof(self) weakSelf = self;
    [self.footballLotteryView.deleteButton touchUpInside:^{
       
     
    }];
}
- (void)initPurchaseButton
{
    __weak typeof(self) weakSelf = self;
    [self.footballLotteryView.purchaseButton touchUpInside:^{
        
        
    }];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    [self downloadAthleticsDataWithLotteryID:self.lotteryID];
}

- (void)downloadAthleticsDataWithLotteryID:(NSString *)lotteryID
{
//    [PublicHTTP getModelWithASIHTTPRequestType:PublicHttpASIRequestTypeFootballLotteryOfWinLoseList messageObject:lotteryID success:^(NSDictionary *success) {
//
//        self.athleticsLotteryMaster = [AthleticsLotteryMaster objectWithKeyValues:success];
//        [self.dataSource removeAllObjects];
//        [self.dataSource addObjectsFromArray:self.athleticsLotteryMaster.datas];
//        [self.footballLotteryView.collectionView reloadData];
//    } failure:^(NSDictionary *failure) {
//        
//    }];
    
    [NetworkCtl postWithRequestID:@"" paramBlock:^(URLConfig *urlConfig, PostDataPackage *postDataPackage, RequestParam *requestParam, ResultModelClassManager *resultModelClassManager, NetworkMsgObjManager *msgObjManager) {
        
    } success:^(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, URLConfig *urlConfig, RequestParam *requestParam, NSString *requestID, PostDataPackage *postDataPackage) {
        
    } failure:^(NSURLSessionDataTask *task, NSError *error, URLConfig *urlConfig, RequestParam *requestParam, NSString *requestID, PostDataPackage *postDataPackage) {
        
    }];
    
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    ALFootballLotteryCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"ALFootballLotteryCLCell" forIndexPath:indexPath];
//    __block NSIndexPath *currentIndexPath = indexPath;
//     __weak typeof(self) weakSelf = self;
//   [cell configCellWillDisplayBlock:^(UICollectionView *collectionView, UICollectionViewCell *cell, NSIndexPath *indexPath) {
//       
//       for (NSIndexPath *selectIndexPath in [weakSelf.subCollectionViewSelectedItems objectForKey:currentIndexPath]) {
//           [collectionView selectItemAtIndexPath:selectIndexPath animated:NO scrollPosition:UICollectionViewScrollPositionNone];
//           [collectionView.delegate collectionView:collectionView didSelectItemAtIndexPath:selectIndexPath];
//       }
//       
//   } didEndDisplay:^(UICollectionView *collectionView, UICollectionViewCell *cell, NSIndexPath *indexPath) {
//       [weakSelf.subCollectionViewSelectedItems setObject:collectionView.indexPathsForSelectedItems forKey:currentIndexPath];
//   }];
    
    AthleticsLotteryDatas *data = self.dataSource[indexPath.section];
    
    [cell setMaster:self.athleticsLotteryMaster model:data.matchArray[indexPath.row] lotteryID:self.lotteryID];
    
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH, 100);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return self.dataSource.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    AthleticsLotteryDatas *data = self.dataSource[section];
    
    return data.matchArray.count;
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
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    
}

- (void)collectionView:(UICollectionView *)collectionView willDisplayCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
{
    ALFootballLotteryCLCell *cell_ = ( ALFootballLotteryCLCell *)cell;
    NSLog(@"%@", [self.subCollectionViewSelectedItems objectForKey:indexPath]);
    NSArray *selectedItems = [self.subCollectionViewSelectedItems objectForKey:indexPath];
    for (NSIndexPath *selectedIndexPath in selectedItems) {
        NSLog(@"%@",selectedIndexPath);
        [cell_.collectionView selectItemAtIndexPath:selectedIndexPath animated:YES scrollPosition:UICollectionViewScrollPositionNone];
        [cell_.collectionView.delegate collectionView:((ALFootballLotteryCLCell *)cell).collectionView didSelectItemAtIndexPath:selectedIndexPath];
        
      
    }
    if (cell_.collectionView.indexPathsForSelectedItems.count > 0) {
        [cell_.collectionView reloadData];
    }
}
- (void)collectionView:(UICollectionView *)collectionView didEndDisplayingCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
{
    ALFootballLotteryCLCell *cell_ = ( ALFootballLotteryCLCell *)cell;
    NSLog(@"%@", [self.subCollectionViewSelectedItems objectForKey:indexPath]);
    if (cell_.collectionView.indexPathsForSelectedItems) {
          [self.subCollectionViewSelectedItems setObject:((ALFootballLotteryCLCell *)cell).collectionView.indexPathsForSelectedItems forKey:indexPath];
    }
  
    
   if ([(NSArray *)[self.subCollectionViewSelectedItems objectForKey:indexPath] count] > 0) {
       
        }
}

#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)dataSource
{
    if (_dataSource == nil) {
        
        _dataSource = [[NSMutableArray alloc] init];
    }
    return _dataSource;
}
- (NSCache *)subCollectionViewSelectedItems
{
    if (_subCollectionViewSelectedItems == nil) {
        
        _subCollectionViewSelectedItems = [[NSCache alloc] init];
    }
    return _subCollectionViewSelectedItems;
}

@end
