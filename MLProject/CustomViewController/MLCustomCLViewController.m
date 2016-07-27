//
//  MLCustomCLViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCustomCLViewController.h"
#import <CSStickyHeaderFlowLayout/CSStickyHeaderFlowLayout.h>
#import "UICollectionView+ML_Tools.h"
#import "MLCustomCLView.h"
#import "ReuseButtonCLCell.h"
#import "MLCustomCLHeader.h"
#import "UIControl+Block.h"
#import "CircleLayout.h"
#import "MLCustomCLLayout.h"
#import "MLCustomCLCell.h"
#import <MJRefresh/MJRefresh.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface MLCustomCLViewController ()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) IBOutlet MLCustomCLView *customCLView;

@property (nonatomic, strong) NSMutableArray *cellDatas;
@end

@implementation MLCustomCLViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configureUI];
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


#pragma mark - ========= Configure UI =========
- (void)configureUI
{
    NSArray *datas = @[
                      @[
                          @"Song 1"
                          ],
                      ];
    [self.cellDatas addObjectsFromArray:datas];
    self.customCLView.collectionView.delegate = self;
    self.customCLView.collectionView.dataSource = self;
    self.customCLView.collectionView.pagingEnabled = YES;
   CSStickyHeaderFlowLayout *layout = [[CSStickyHeaderFlowLayout alloc] init];
    
 layout = [[UICollectionViewFlowLayout alloc] init];
   //   layout = [[MLCustomCLLayout alloc] init];
   layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;

    self.customCLView.collectionView.collectionViewLayout = layout;
   
//    self.customCLView.collectionView.collectionViewLayout = [[CircleLayout alloc] init];
   // self.customCLView.collectionView.collectionViewLayout = [[MLCustomCLLayout alloc] init];
    [self.customCLView.collectionView registerNib:[UINib nibWithNibName:@"CSAlwaysOnTopHeader" bundle:nil] forSupplementaryViewOfKind:CSStickyHeaderParallaxHeader withReuseIdentifier:@"CSAlwaysOnTopHeader"];
     [self.customCLView.collectionView registerNib:[UINib nibWithNibName:@"MLCustomCLHeader" bundle:nil]  forSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:@"MLCustomCLHeader"];
    
    
    [self.customCLView.collectionView ml_registerNibForCellWithNameOrClasses:@[@"ReuseButtonCLCell", @"MLCustomCLCell"]];
    
    [self.customCLView.collectionView reloadData];
    [self reloadLayout];
}

- (void)reloadLayout {
    
    CSStickyHeaderFlowLayout *layout = (id)self.customCLView.collectionView.collectionViewLayout;
    
    if ([layout isKindOfClass:[CSStickyHeaderFlowLayout class]]) {
        layout.parallaxHeaderReferenceSize = CGSizeMake(self.view.frame.size.width, 166);
        layout.parallaxHeaderMinimumReferenceSize = CGSizeMake(self.view.frame.size.width, 50);
        layout.itemSize = CGSizeMake(self.view.frame.size.width, layout.itemSize.height);
        layout.parallaxHeaderAlwaysOnTop = YES;
        
        // If we want to disable the sticky header effect
        layout.disableStickyHeaders = YES;
    }
    
}
#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLCustomCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"MLCustomCLCell" forIndexPath:indexPath];
    [self.customCLView bringSubviewToFront:cell];
   // cell.tableView.backgroundColor = [UIColor colorWithWhite:indexPath.row * 0.4 alpha:1];
    cell.tableView.scrollEnabled = YES;
    [RACObserve(cell.tableView, contentOffset) subscribeNext:^(id x) {
        CGPoint offset = [x CGPointValue];
        [UIView beginAnimations:@"" context:nil];
        BOOL isUp;
        BOOL isDown;
        if (offset.y < 0) {
            isDown = YES;
        }
        if (offset.y > 0) {
            isUp = YES;
        }
        
        if (isUp) {
            if (offset.y > 50) {
                   self.customCLView.topViewConstaint.constant = -50;
            }else
            {
            self.customCLView.topViewConstaint.constant = -offset.y ;
            }
        }
      
        if (isDown) {
            if (offset.y < -20) {
                self.customCLView.topViewConstaint.constant = 20;
            }else
            {
                self.customCLView.topViewConstaint.constant = -offset.y;
            }
        }
       
          [UIView commitAnimations];
    }];
  
    //cell.backgroundSrcollView.contentSize = CGSizeMake(SCREEN_WIDTH * 2, 0.01);
    //cell.backgroundSrcollView.contentOffset = CGPointMake(100, 0);
    
    
//    [cell.tagButton setTitle:self.cellDatas[indexPath.section][indexPath.row] forState:UIControlStateNormal];
//    cell.backgroundColor = [UIColor grayColor];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH , SCREEN_HEIGHT);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return self.cellDatas.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [self.cellDatas[section] count];
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

#pragma mark - ========= TabelView HeaderView =========
- (UICollectionReusableView *)collectionView:(UICollectionView *)collectionView viewForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath {
 

    if ([kind isEqualToString:UICollectionElementKindSectionHeader]) {
        
        MLCustomCLHeader *cell = [collectionView dequeueReusableSupplementaryViewOfKind:kind
                                                                   withReuseIdentifier:@"MLCustomCLHeader"
                                                                          forIndexPath:indexPath];
        cell.backgroundColor = [UIColor greenColor];
     
        return cell;
        
    } else if ([kind isEqualToString:CSStickyHeaderParallaxHeader]) {
        UICollectionReusableView *cell = [collectionView dequeueReusableSupplementaryViewOfKind:kind
                                                                            withReuseIdentifier:@"CSAlwaysOnTopHeader"
                                                                                   forIndexPath:indexPath];
        cell.backgroundColor = [UIColor cyanColor];
        
        return cell;
    }
    return nil;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout referenceSizeForHeaderInSection:(NSInteger)section
{
    return CGSizeZero;
    return CGSizeMake(50, 200);
}
#pragma mark - ========= ScrollView Delegate =========
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    MLCustomCLCell *cell = (MLCustomCLCell *)[self.customCLView.collectionView cellForItemAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:0]];
   
 
}
//- (void)scrollViewDidScroll:(UIScrollView *)scrollView
//{
//    MLCustomCLCell *cell = (MLCustomCLCell *)[self.customCLView.collectionView cellForItemAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:0]];
//    if (scrollView == cell.leftTableView || scrollView == cell.rightTableView) {
//        if (scrollView.contentOffset.y <= 0 && self.customCLView.collectionView.contentOffset.y <=-64) {
//            cell.leftTableView.scrollEnabled = YES;
//            cell.rightTableView.scrollEnabled = YES;
//        }else
//        {
//            cell.leftTableView.scrollEnabled = NO;
//            cell.rightTableView.scrollEnabled = NO;
//        }
//    }
//    
//}
//
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)cellDatas
{
    if (_cellDatas == nil) {
        
        _cellDatas = [[NSMutableArray alloc] init];
    }
    return _cellDatas;
}
@end
