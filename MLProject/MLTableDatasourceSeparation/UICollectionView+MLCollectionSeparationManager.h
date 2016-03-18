//
//  UICollectionView+MLCollectionSeparationManager.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLCollectionSeparationManager.h"
@interface UICollectionView (MLCollectionSeparationManager)

@property (nonatomic, strong) MLCollectionSeparationManager *separationManager;
- (void)configCellWith:(MLCollectionViewCellConfigureBlock)cellConfig
            cellSize:(MLCollectionViewCellSizeBlock)cellSize
       numberOfSection:(MLCollectionViewNumberOfSectionsBlock)numberOfSection
 numberOfItemsInSection:(MLCollectionViewNumberOfItemsInSectionBlock)numberOfRowsInSection
           didSelected:(MLCollectionViewDidSelectCellBlock)didSelected;

- (void)configCellLayoutWithMinimumInteritemSpacing:(MLCollectionViewMinimumInteritemSpacingBlock)minimumInteritemSpacing
                         minimumLineSpacing:(MLCollectionViewMinimumLineSpacingBlock)minimumLineSpacing
             insetForSection:(MLCollectionViewInsetForSection)insetForSection;
- (void)configSectionHeaderWith:(MLCollectionViewSectionHeaderBlock)sectionHeader
              sectionHeaderSize:(MLCollectionViewSectionHeaderSizeBlock)sectionHeaderSize;

- (void)configSectionFooterWith:(MLCollectionViewSectionFooterBlock)sectionFooter
            sectionFooterSize:(MLCollectionViewSectionFooterSizeBlock)sectionFooterSize;
@end
