//
//  UICollectionView+MLCollectionSeparationManager.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UICollectionView+MLCollectionSeparationManager.h"

@implementation UICollectionView (MLTableSeparationManager)
- (void)configCellWith:(MLCollectionViewCellConfigureBlock)cellConfig
              cellSize:(MLCollectionViewCellSizeBlock)cellSize numberOfSection:(MLCollectionViewNumberOfSectionsBlock)numberOfSection
numberOfItemsInSection:(MLCollectionViewNumberOfItemsInSectionBlock)numberOfRowsInSection
           didSelected:(MLCollectionViewDidSelectCellBlock)didSelected
{
    MLCollectionSeparationManager *manager = self.separationManager;
    manager.cellConfigBlock = cellConfig;
    manager.cellSizeBlock = cellSize;
    manager.numberOfSectionsBlock = numberOfSection;
    manager.numberOfItemsInSectionBlock = numberOfRowsInSection;
    manager.didSelectedBlock = didSelected;
}

- (void)configSectionHeaderWith:(MLCollectionViewSectionHeaderBlock)sectionHeader sectionHeaderSize:(MLCollectionViewSectionHeaderSizeBlock)sectionHeaderSize
{
    MLCollectionSeparationManager *manager = self.separationManager;
    manager.sectionHeaderBlock = sectionHeader;
    manager.sectionHeaderSizeBlock = sectionHeaderSize;
}
- (void)configCellLayoutWithMinimumInteritemSpacing:(MLCollectionViewMinimumInteritemSpacingBlock)minimumInteritemSpacing minimumLineSpacing:(MLCollectionViewMinimumLineSpacingBlock)minimumLineSpacing insetForSection:(MLCollectionViewInsetForSection)insetForSection
{
    MLCollectionSeparationManager *manager = self.separationManager;
    manager.minimumInteritemSpacingBlock = minimumInteritemSpacing;
    manager.minimumLineSpacingBlock = minimumLineSpacing;
    manager.insetForSectionBlock = insetForSection;
}
- (void)configSectionFooterWith:(MLCollectionViewSectionFooterBlock)sectionFooter sectionFooterSize:(MLCollectionViewSectionFooterSizeBlock)sectionFooterSize
{
     MLCollectionSeparationManager *manager = self.separationManager;
    manager.sectionFooterBlock = sectionFooter;
    manager.sectionFooterSizeBlock = sectionFooterSize;
}
#pragma mark - ========= Setter & Getter =========
- (void)setSeparationManager:(MLCollectionSeparationManager *)separationManager
{
    objc_setAssociatedObject(self, @selector(separationManager), separationManager, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (MLCollectionSeparationManager *)separationManager
{
    if (objc_getAssociatedObject(self, @selector(separationManager)) == nil) {
        
        MLCollectionSeparationManager * manager = [[MLCollectionSeparationManager alloc] init];
        self.delegate = manager;
        self.dataSource = manager;
        [self setSeparationManager:manager];
        
    }
    return objc_getAssociatedObject(self, @selector(separationManager));
}
@end
