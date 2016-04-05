//
//  UICollectionView+ML_Tools.h
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (ML_Tools)
//用类名或类注册，ID与类名一致
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array supplementaryViewOfKind:(NSString *)supplementaryViewOfKind;
- (void)ML_registerNibForCellWithArray:(NSArray *)array;

/**
 *  reuseID为key
 类为值
 *
 *  @param dictionary
 */
- (void)ML_registerClassAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
/**
 *  reuseID为key 类为值
 *
 *  @param dictionary
 */
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary supplementaryViewOfKind:(NSString *)supplementaryViewOfKind;

- (void)ML_registerNibAndCellReuseIdentifierWithArray:(NSArray *)array;
/**
 *  reuseID为key 类为值
 *
 *  @param dictionary
 */
- (void)ML_registerNibAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
/**
 *  reuseID为key 类为值
 *
 *  @param dictionary
 */
- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary supplementaryViewOfKind:(NSString *)supplementaryViewOfKind;
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier;
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier supplementaryViewOfKind:(NSString *)supplementaryViewOfKind;


@end
