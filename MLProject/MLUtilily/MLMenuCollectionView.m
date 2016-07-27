//
//  MLMenuCollectionView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLMenuCollectionView.h"
#import "MLMenuCLLabelCell.h"
#import "UICollectionView+ML_Tools.h"
@interface MLMenuCollectionView()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, copy) NSMutableArray *menuTitles;
@property (nonatomic, copy) MLMenuClickBlock clickBlock;
@property (nonatomic, copy) MLMenuCellConfigBlock cellConfigBlock;
@property (nonatomic, copy) NSString *cellClassName;
@end
@implementation MLMenuCollectionView

- (void)awakeFromNib
{
    self.delegate = self;
    self.dataSource = self;
    self.backgroundColor = [UIColor whiteColor];
    self.bounces = NO;
    [self addSubview:self.animationView];

}
- (void)setTitles:(NSArray *)titles clickBlock:(MLMenuClickBlock)clickBlock
{
    NSAssert(self.cellConfigBlock, @"请先设置cellConfigBlock");
    self.clickBlock = clickBlock;
    [self.menuTitles removeAllObjects];
    [self.menuTitles addObject:titles];
    
       [self setAnimationViewPoistionWithTitlesCount:[self.menuTitles[0] count] index:0 animated:NO];
    [self reloadData];

}
- (void)configureCellWithClassName:(NSString *)className configBlock:(MLMenuCellConfigBlock)configBlock
{
    NSAssert(NSClassFromString(className), @"不存在该类");
     [self ml_registerNibForCellWithNameOrClass:className];
    self.cellClassName = className;
    self.cellConfigBlock = configBlock;
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    MLMenuCLLabelCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:self.cellClassName forIndexPath:indexPath];
    
    if (self.cellConfigBlock) {
        self.cellConfigBlock(cell, self.menuTitles, indexPath);
    }
    
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
- (void)setCurrentIndex:(NSUInteger)currentIndex animated:(BOOL)animated
{
    [self setCurrentIndex:currentIndex];
    
        [self setAnimationViewPoistionWithTitlesCount:[self.menuTitles[0] count] index:currentIndex animated:animated];
    
}

- (void)setAnimationViewPoistionWithTitlesCount:(NSInteger)titlesCount index:(NSInteger)index animated:(BOOL)animated
{
    dispatch_async(dispatch_get_main_queue(), ^{
        [self bringSubviewToFront:self.animationView];
        
        if (animated) {
            [UIView animateWithDuration:0.3 animations:^{
                self.animationView.frame = CGRectMake(SCREEN_WIDTH/titlesCount * index, self.height - 2, SCREEN_WIDTH/titlesCount, 2);
            }];
        }else
        {
            self.animationView.frame = CGRectMake(SCREEN_WIDTH/titlesCount * index, self.height - 2, SCREEN_WIDTH/titlesCount, 2);
        }
    });
   
    
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
