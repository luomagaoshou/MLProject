//
//  UITableView+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/10/23.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UITableView (ML_Tools)
/**
 *  本文件皆使用与cell class同名的reuseID注册
 *
 *
 */

#pragma mark - ========= Class For Cell =========
- (void)ml_registerClassForCellWithNameOrClass:(id)nameOrClass;
- (void)ml_registerClassForCellWithNameOrClasses:(NSArray *)nameOrClasses;
#pragma mark - ========= Nib For Cell =========

- (void)ml_registerNibForCellWithNameOrClass:(id)nameOrClass;
- (void)ml_registerNibForCellWithNameOrClasses:(NSArray *)nameOrClasses;
#pragma mark - ========= Class For HeaderFooterView =========

- (void)ml_registerClassForHeaderFooterViewWithNameOrClass:(id)nameOrClass;
- (void)ml_registerClassForHeaderFooterViewWithNameOrClasses:(NSArray *)nameOrClasses;

#pragma mark - ========= Nib For HeaderFooterView =========

- (void)ml_registerNibForHeaderFooterViewWithNameOrClass:(id)nameOrClass;
- (void)ml_registerNibForHeaderFooterViewWithNameOrClasses:(NSArray *)nameOrClasses;



@end
