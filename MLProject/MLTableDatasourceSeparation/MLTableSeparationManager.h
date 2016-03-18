//
//  MLTableSeparationManager.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
//cell
typedef __kindof UITableViewCell * (^MLTableViewCellConfigureBlock)(UITableView *tableView, NSIndexPath *indexPath) ;
typedef CGFloat (^MLTableViewCellHeightBlock)(UITableView *tableView, NSIndexPath *indexPath) ;
typedef void    (^MLTableViewDidSelectCellBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef NSInteger (^MLTableViewNumberOfSectionsBlock)(UITableView *tableView);
typedef NSInteger (^MLTableViewNumberOfRowsInSectionBlock)(UITableView *tableView, NSInteger section);

//Header
typedef __kindof UITableViewHeaderFooterView * (^MLTableViewSectionHeaderBlock)(UITableView *tableView, NSInteger section);
typedef CGFloat (^MLTableViewSectionHeaderHeightBlock)(UITableView *tableView, NSInteger section);

//Footer
typedef __kindof UITableViewHeaderFooterView * (^MLTableViewSectionFooterBlock)(UITableView *tableView, NSInteger section);
typedef CGFloat (^MLTableViewSectionFooterHeightBlock)(UITableView *tableView, NSInteger section);

//cell
@interface MLTableSeparationManager : NSObject<UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, copy) MLTableViewCellConfigureBlock cellConfigBlock;
@property (nonatomic, copy) MLTableViewNumberOfSectionsBlock numberOfSectionsBlock;
@property (nonatomic, copy) MLTableViewNumberOfRowsInSectionBlock numberOfRowsInSectionBlock;
@property (nonatomic, copy) MLTableViewCellHeightBlock cellHeightBlock;
@property (nonatomic, copy) MLTableViewDidSelectCellBlock didSelectedBlock;
//header
@property (nonatomic, copy) MLTableViewSectionHeaderBlock sectionHeaderBlock;
@property (nonatomic, copy) MLTableViewSectionHeaderHeightBlock sectionHeaderHeightBlock;

//footer
@property (nonatomic, copy) MLTableViewSectionFooterBlock sectionFooterBlock;
@property (nonatomic, copy) MLTableViewSectionFooterHeightBlock sectionFooterHeightBlock;

@end
