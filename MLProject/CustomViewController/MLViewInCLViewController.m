//
//  MLViewInCLViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLViewInCLViewController.h"
#import "UIScrollView+Refresh.h"
#import "MLViewInCLView.h"
#import "MLCustomCLCell.h"
#import "MLCustomCLLayout.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "UIView+GestureBlock.h"
@interface MLViewInCLViewController ()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) IBOutlet MLViewInCLView *vcInCLView;

@end

@implementation MLViewInCLViewController
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
    
    __block NSInteger i = 0;
    [self.vcInCLView.menuCollectionView tapWithEvent:^(id gesture) {
        [UIView animateWithDuration:1 animations:^{
            i++;
            
            self.vcInCLView.menuViewTopContraint.constant = -100 *(i % 2);
            //   self.vcInCLView.collectionViewTopConstaint.constant = 0;
            
            [self.view layoutIfNeeded];
        }];
    }];
 
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
    self.automaticallyAdjustsScrollViewInsets = NO;
    [self configureCollectionView];
}
- (void)configureCollectionView
{
    self.vcInCLView.collectionView.delegate = self;
    self.vcInCLView.collectionView.dataSource = self;
    self.vcInCLView.collectionView.bounces = NO;
    self.vcInCLView.collectionView.pagingEnabled = YES;
    self.vcInCLView.collectionView.backgroundColor = [UIColor cyanColor];

    UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
        layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
   
    self.vcInCLView.collectionView.collectionViewLayout = layout;
    [self.vcInCLView.collectionView registerNib:[UINib nibWithNibName:@"CSAlwaysOnTopHeader" bundle:nil] forSupplementaryViewOfKind:CSStickyHeaderParallaxHeader withReuseIdentifier:@"CSAlwaysOnTopHeader"];
    
    [self.vcInCLView.collectionView ml_registerNibForCellWithNameOrClass:@"MLCustomCLCell"];
    NSArray *cellDatas = @[@[@"1", @"2", @"3"]];
    [self.vcInCLView.collectionView.cellDatas addObjectsFromArray:cellDatas];
    [self.vcInCLView.collectionView reloadData];
      //[self reloadLayout];
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}

#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLCustomCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"MLCustomCLCell" forIndexPath:indexPath];
    
    [RACObserve(cell.tableView, contentOffset) subscribeNext:^(id x) {
        CGPoint offset = [x CGPointValue];
       CGFloat y = offset.y;
        NSLog(@"%@", x);
        [self.vcInCLView bringSubviewToFront:self.vcInCLView.topView];
        [self.vcInCLView.OffsetDic setObject:x forKey:@(indexPath.row)];
       
        if (y > 0) {
            [UIView beginAnimations:@"" context:nil];
            [UIView setAnimationDuration:0.3];
            if (y < 100) {
                    self.vcInCLView.menuViewTopContraint.constant = -y;
            }else
            {
                self.vcInCLView.menuViewTopContraint.constant = -100;
                    [self.view layoutIfNeeded];
            }
                 [UIView commitAnimations];
        }
        
        if (y < 0) {
           
            [UIView animateWithDuration:0.3 animations:^{
                
                
                self.vcInCLView.menuViewTopContraint.constant = 0;
                
                            [self.view layoutIfNeeded];
            }];
            
            
        }
    
   
        
    }];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH, collectionView.height );
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return collectionView.cellDatas.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [collectionView.cellDatas[section] count];
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
    
    
    if ([kind isEqualToString:CSStickyHeaderParallaxHeader]) {
        UICollectionReusableView *cell = [collectionView dequeueReusableSupplementaryViewOfKind:kind
                                                                            withReuseIdentifier:@"CSAlwaysOnTopHeader"
                                                                                   forIndexPath:indexPath];
        cell.backgroundColor = [UIColor cyanColor];
        
        return cell;
    }
    return nil;
    
}
#pragma mark - ========= ScrollView Delegate =========
- (void)scrollViewWillEndDragging:(UIScrollView *)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)targetContentOffset
{
    
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    NSLog(@"%@", NSStringFromCGPoint(scrollView.contentOffset));
    if (scrollView == self.vcInCLView.collectionView) {
//        if (scrollView.contentOffset.y >= 102) {
//            scrollView.scrollEnabled = NO;
//            for (NSInteger i = 0; i <  [self.vcInCLView.collectionView visibleCells].count; i++) {
//                MLCustomCLCell *cell = [self.vcInCLView.collectionView visibleCells][i];
//                cell.tableView.scrollEnabled = YES;
//            }
//        }else{
//            scrollView.scrollEnabled = YES;
//            for (NSInteger i = 0; i <  [self.vcInCLView.collectionView visibleCells].count; i++) {
//                MLCustomCLCell *cell = [self.vcInCLView.collectionView visibleCells][i];
//                cell.tableView.scrollEnabled = NO;
//            }
//        }
//        if (scrollView.contentOffset.y <= 0) {
//            scrollView.scrollEnabled = NO;
//        }else{
//            scrollView.scrollEnabled = YES;
//        }
//        
//        if (scrollView.contentOffset.x <= 0) {
//            scrollView.scrollEnabled = NO;
//        }else
//        {
//            scrollView.scrollEnabled = YES;
//        }
    }
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    NSLog(@"%@", NSStringFromCGPoint(scrollView.contentOffset));
        if (scrollView == self.vcInCLView.collectionView) {
//            if (scrollView.contentOffset.y >= 102) {
//                scrollView.scrollEnabled = NO;
//                for (NSInteger i = 0; i <  [self.vcInCLView.collectionView visibleCells].count; i++) {
//                    MLCustomCLCell *cell = [self.vcInCLView.collectionView visibleCells][i];
//                    cell.tableView.scrollEnabled = YES;
//                }
//            }else{
//                scrollView.scrollEnabled = YES;
//                for (NSInteger i = 0; i <  [self.vcInCLView.collectionView visibleCells].count; i++) {
//                    MLCustomCLCell *cell = [self.vcInCLView.collectionView visibleCells][i];
//                    cell.tableView.scrollEnabled = NO;
//                }
//            }
        }
    
}
#pragma mark - ========= Setter & Getter =========

@end
