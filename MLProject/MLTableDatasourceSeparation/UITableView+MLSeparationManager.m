//
//  UITableView+MLSeparationManager.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UITableView+MLSeparationManager.h"

@implementation UITableView (MLSeparationManager)
  
- (void)configCellWith:(MLTableViewCellConfigureBlock)cellConfig cellHeigth:(MLTableViewCellHeightBlock)cellHeight
            numberOfSection:(MLTableViewNumberOfSectionsBlock)numberOfSection
      numberOfRowsInSection:(MLTableViewNumberOfRowsInSectionBlock)numberOfRowsInSection
                didSelected:(MLTableViewDidSelectCellBlock)didSelected
{
    
    MLTableSeparationManager *manager = self.separationManager;
    manager.cellConfigBlock = cellConfig;
    manager.cellHeightBlock = cellHeight;
    manager.numberOfSectionsBlock = numberOfSection;
    manager.numberOfRowsInSectionBlock = numberOfRowsInSection;
    manager.didSelectedBlock = didSelected;
   
}
- (void)configSectionHeaderWith:(MLTableViewSectionHeaderBlock)sectionHeader sectionHeaderHeight:(MLTableViewSectionHeaderHeightBlock)sectionHeaderHeight
{
     MLTableSeparationManager *manager = self.separationManager;
    manager.sectionHeaderBlock = sectionHeader;
    manager.sectionHeaderHeightBlock= sectionHeaderHeight;
}

- (void)configSectionFooterWith:(MLTableViewSectionFooterBlock)sectionFooter sectionFooterHeight:(MLTableViewSectionFooterHeightBlock)sectionFooterHeight
{
     MLTableSeparationManager *manager = self.separationManager;
    manager.sectionFooterBlock = sectionFooter;
    manager.sectionFooterHeightBlock = sectionFooterHeight;
}

#pragma mark - ========= Setter & Getter =========
- (void)setSeparationManager:(MLTableSeparationManager *)separationManager
{
     objc_setAssociatedObject(self, @selector(separationManager), separationManager, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (MLTableSeparationManager *)separationManager
{
    if (objc_getAssociatedObject(self, @selector(separationManager)) == nil) {
        
     MLTableSeparationManager * manager = [[MLTableSeparationManager alloc] init];
        self.delegate = manager;
        self.dataSource = manager;
        [self setSeparationManager:manager];
        
    }
    return objc_getAssociatedObject(self, @selector(separationManager));
}
@end
