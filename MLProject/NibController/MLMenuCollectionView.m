//
//  MLMenuCollectionView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLMenuCollectionView.h"
#import "MLMenuCLCell.h"
#import "UICollectionView+ML_Tools.h"
@interface MLMenuCollectionView()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, copy) NSMutableArray *menutitles;
@property (nonatomic, copy) MLMenuClickBlock clickBlock;
@property (nonatomic, strong) UIView *animationView;
@end
@implementation MLMenuCollectionView

- (void)awakeFromNib
{
    self.delegate = self;
    self.dataSource = self;
    self.backgroundColor = [UIColor whiteColor];
    self.bounces = NO;
    [self ml_registerNibForCellWithNameOrClass:@"MLMenuCLCell"];
}
- (void)setTitles:(NSArray *)titles clickBlock:(MLMenuClickBlock)clickBlock
{
    self.clickBlock = clickBlock;
    [self.menutitles removeAllObjects];
    [self.menutitles addObject:titles];
   
    [self reloadData];
    if (titles.count) {
        [self.delegate collectionView:self didSelectItemAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:0]];
    }
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLMenuCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"MLMenuCLCell" forIndexPath:indexPath];
    
    cell.titleLabel.text = self.menutitles[indexPath.section][indexPath.row];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH/self.menutitles.count, self.height);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return self.menutitles.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [self.menutitles[section] count];;
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
    UICollectionViewCell *cell = [collectionView cellForItemAtIndexPath:indexPath];
    [UIView animateWithDuration:0.3 animations:^{
        self.animationView.frame = CGRectMake(cell.left + 5, cell.bottom - 4, cell.width - 10, 3);
    }];
    if (self.clickBlock) {
        self.clickBlock(indexPath.row);
    }
}

#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)menutitles
{
    if (_menutitles == nil) {
        
        _menutitles = [[NSMutableArray alloc] init];
    }
    return _menutitles;
}
- (UIView *)animationView
{
    if (_animationView == nil) {
        
        _animationView = [[UIView alloc] init];
        _animationView.backgroundColor = [UIColor redColor];
    }
    return _animationView;
}

@end
