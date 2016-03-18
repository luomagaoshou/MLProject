//
//  UICollectionView+Multiselect.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/15.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (Multiselect)
/**
 *  已选择的indexPatch
 */
@property (nonatomic, strong) NSMutableArray *multiSelectedIndexPaths;
/**
 *  最大选择indexPatch数量
 */
@property (nonatomic, assign) NSInteger maxMultiSelectedIndexPath;
@property (nonatomic, copy) void (^selectedCellConfig) (NSIndexPath *indexPath, UICollectionViewCell * selectedCell);
@property (nonatomic, copy) void (^deselectedConfig) (NSIndexPath *indexPath, UICollectionViewCell * deselectedCell);
/**
 *  添加已选择indexPathc
 *
 *  @param indexPath <#indexPath description#>
 */
- (void)addMultiSelectedIndexPath:(NSIndexPath *)indexPath;
/**
 *  移除indexPatch
 *
 *  @param indexPath <#indexPath description#>
 */
- (void)removeMultiSelectedIndexPath:(NSIndexPath *)indexPath;
/**
 *  自动处理点击事件，如已选择再次点击变未选择
 *
 *  @param indexPath <#indexPath description#>
 */
- (void)autoHandleMultiSelectedIndexPath:(NSIndexPath *)indexPath;
/**
 *  设置已选择与未选择时,cell的状态
 *
 *  @param selectedConfig   <#selectedConfig description#>
 *  @param deselectedConfig <#deselectedConfig description#>
 */
- (void)setSelectedItemConfig:(void (^)(NSIndexPath *indexPath ,UICollectionViewCell * selectedCell))selectedConfig deselectedItemConfig:(void (^)(NSIndexPath *indexPath ,UICollectionViewCell * deselectedCell))deselectedConfig;


@end
