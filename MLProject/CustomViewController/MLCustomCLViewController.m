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
                          @"Song 1",
                          @"Song 2",
                          @"Song 3",
                          @"Song 4",
                          @"Song 5",
                          @"Song 6",
                          @"Song 7",
                          @"Song 8",
                          @"Song 9",
                          @"Song 10",
                          @"Song 11",
                          @"Song 12",
                          @"Song 13",
                          @"Song 14",
                          @"Song 15",
                          @"Song 16",
                          @"Song 17",
                          @"Song 18",
                          @"Song 19",
                          @"Song 20",
                          ],
                      ];
    [self.cellDatas addObjectsFromArray:datas];
    self.customCLView.collectionView.delegate = self;
    self.customCLView.collectionView.dataSource = self;
    self.customCLView.collectionView.collectionViewLayout = [[CSStickyHeaderFlowLayout alloc] init];
    [self.customCLView.collectionView registerNib:[UINib nibWithNibName:@"CSAlwaysOnTopHeader" bundle:nil] forSupplementaryViewOfKind:CSStickyHeaderParallaxHeader withReuseIdentifier:@"CSAlwaysOnTopHeader"];
     [self.customCLView.collectionView registerNib:[UINib nibWithNibName:@"MLCustomCLHeader" bundle:nil]  forSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:@"MLCustomCLHeader"];
    
    
    [self.customCLView.collectionView ml_registerNibForCellWithNameOrClass:@"ReuseButtonCLCell"];
    
    [self.customCLView.collectionView reloadData];
    [self reloadLayout];
}

- (void)reloadLayout {
    
    CSStickyHeaderFlowLayout *layout = (id)self.customCLView.collectionView.collectionViewLayout;
    
    if ([layout isKindOfClass:[CSStickyHeaderFlowLayout class]]) {
        layout.parallaxHeaderReferenceSize = CGSizeMake(self.view.frame.size.width, 426);
        layout.parallaxHeaderMinimumReferenceSize = CGSizeMake(self.view.frame.size.width, 0);
        layout.itemSize = CGSizeMake(self.view.frame.size.width, layout.itemSize.height);
        layout.parallaxHeaderAlwaysOnTop = YES;
        
        // If we want to disable the sticky header effect
        layout.disableStickyHeaders = NO;
    }
    
}
#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    ReuseButtonCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"ReuseButtonCLCell" forIndexPath:indexPath];
    
    [cell.tagButton setTitle:self.cellDatas[indexPath.section][indexPath.row] forState:UIControlStateNormal];
    cell.backgroundColor = [UIColor grayColor];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH * 2, 100);
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
        [cell.leftButton touchDown:^{
            self.customCLView.collectionView.contentOffset = CGPointMake(SCREEN_WIDTH /2 , 0);
        }];
        
        [cell.rightButton touchDown:^{
             self.customCLView.collectionView.contentOffset = CGPointMake(0 , 0);
        }];
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
    return CGSizeMake(400, 200);
}


#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)cellDatas
{
    if (_cellDatas == nil) {
        
        _cellDatas = [[NSMutableArray alloc] init];
    }
    return _cellDatas;
}
@end
