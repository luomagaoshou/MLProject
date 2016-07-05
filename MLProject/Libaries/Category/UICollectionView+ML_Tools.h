//
//  UICollectionView+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (ML_Tools)
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

- (void)ml_registerClassForSupplementaryViewWithNameOrClass:(id)nameOrClass forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind;
- (void)ml_registerClassForSupplementaryViewWithNameOrClasses:(NSArray *)nameOrClasses forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind;

#pragma mark - ========= Nib For HeaderFooterView =========

- (void)ml_registerNibForSupplementaryViewWithNameOrClass:(id)nameOrClass forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind;
- (void)ml_registerNibForSupplementaryViewWithNameOrClasses:(NSArray *)nameOrClasses forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind;



@end
