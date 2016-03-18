//
//  UITableView+MLSeparationManager.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLTableSeparationManager.h"
@interface UITableView (ML)
@property (nonatomic, strong) MLTableSeparationManager *separationManager;
- (void)configCellWith:(MLTableViewCellConfigureBlock)cellConfig
                 cellHeigth:(MLTableViewCellHeightBlock)cellHeight
            numberOfSection:(MLTableViewNumberOfSectionsBlock)numberOfSection
       numberOfRowsInSection:(MLTableViewNumberOfRowsInSectionBlock)numberOfRowsInSection
                didSelected:(MLTableViewDidSelectCellBlock)didSelected;

- (void)configSectionHeaderWith:(MLTableViewSectionHeaderBlock)sectionHeader
                               sectionHeaderHeight:(MLTableViewSectionHeaderHeightBlock)sectionHeaderHeight;

- (void)configSectionFooterWith:(MLTableViewSectionFooterBlock)sectionFooter
                             sectionFooterHeight:(MLTableViewSectionFooterHeightBlock)sectionFooterHeight;
@end
