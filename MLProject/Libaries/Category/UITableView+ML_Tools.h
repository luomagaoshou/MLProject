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
 *  类名与ID一致
 *
 *  @param array 
 */
- (void)ML_registerNibForCellWithArray:(NSArray *)array;
- (void)ML_registerNibAndCellReuseIdentifierWithArray:(NSArray *)array;
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array;
- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array;
/**
 *  reuseID为key
 类为值
 *
 *  @param dictionary 
 */
- (void)ML_registerClassForCellWithArray:(NSArray *)array;
- (void)ML_registerClassAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
- (void)ML_registerNibAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary;
/**
 *  reuseID为key 类为值
 *
 *  @param dictionary
 */
- (void)ML_registerClassAndCellReuseIdentifierWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier;
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier;
- (void)ML_registerClassAndCellReuseIdentifierWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier;
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier;

@end
