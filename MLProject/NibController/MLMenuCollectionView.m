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
@property (nonatomic, copy) NSMutableArray *menuTitles;
@property (nonatomic, copy) MLMenuClickBlock clickBlock;
@property (nonatomic, strong) UIView *animationView;
@end
@implementation MLMenuCollectionView

- (void)awakeFromNib
{
    self.delegate = self;
    self.dataSource = self;
    self.backgroundColor = [UIColor redColor];
    self.bounces = NO;
    [self addSubview:self.animationView];

}
- (void)setTitles:(NSArray *)titles clickBlock:(MLMenuClickBlock)clickBlock
{
    self.clickBlock = clickBlock;
    [self.menuTitles removeAllObjects];
    [self.menuTitles addObject:titles];
       [self ml_registerNibForCellWithNameOrClass:@"MLMenuCLCell"];
       [self setAnimationViewPoistionWithTitlesCount:[self.menuTitles[0] count] index:0 animated:NO];
    [self reloadData];
//    if (titles.count) {
//        [self.delegate collectionView:self didSelectItemAtIndexPath:[NSIndexPath indexPathForRow:0 inSection:0]];
//    }
}

#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLMenuCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"MLMenuCLCell" forIndexPath:indexPath];
    cell.backgroundColor = [UIColor blueColor];
    cell.titleLabel.text = self.menuTitles[indexPath.section][indexPath.row];
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
   
    return CGSizeMake(SCREEN_WIDTH/[self.menuTitles[indexPath.section] count], self.height);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return self.menuTitles.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [self.menuTitles[section] count];
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
    
   
    [self setAnimationViewPoistionWithTitlesCount:[self.menuTitles[indexPath.section] count] index:indexPath.row animated:YES];
    if (self.clickBlock) {
        self.clickBlock(indexPath.row);
    }
}
#pragma mark - ========= AnimationView Position =========
- (void)setAnimationViewPoistionWithTitlesCount:(NSInteger)titlesCount index:(NSInteger)index animated:(BOOL)animated
{
     [self bringSubviewToFront:self.animationView];
    if (animated) {
        [UIView animateWithDuration:0.3 animations:^{
            self.animationView.frame = CGRectMake(SCREEN_WIDTH/titlesCount * index, self.height - 5, SCREEN_WIDTH/titlesCount, 3);
        }];
    }else
    {
          self.animationView.frame = CGRectMake(SCREEN_WIDTH/titlesCount * index, self.height - 5, SCREEN_WIDTH/titlesCount, 3);
    }
    
}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)menuTitles
{
    if (_menuTitles == nil) {
        
        _menuTitles = [[NSMutableArray alloc] init];
    }
    return _menuTitles;
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
