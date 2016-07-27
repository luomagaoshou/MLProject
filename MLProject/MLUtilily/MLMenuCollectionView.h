//
//  MLMenuCollectionView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^MLMenuClickBlock)(NSInteger index);
typedef void (^MLMenuCellConfigBlock)(__kindof UICollectionViewCell *cell, NSArray *cellDatas, NSIndexPath *indexPath);
@interface MLMenuCollectionView : UICollectionView
//先配置cell 再setTitle
- (void)configureCellWithClassName:(NSString *)className configBlock:(MLMenuCellConfigBlock)configBlock;

- (void)setTitles:(NSArray *)titles clickBlock:(MLMenuClickBlock)clickBlock;

@property (nonatomic, strong) UIView *animationView;

@property (nonatomic, strong) UIColor *titleColor;

@property (nonatomic, assign) NSUInteger currentIndex;
- (void)setCurrentIndex:(NSUInteger)currentIndex animated:(BOOL)animated;
@end
