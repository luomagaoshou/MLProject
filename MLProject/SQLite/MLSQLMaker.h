//
//  MLSQLMaker.h
//  MLProject
//
//  Created by 妙龙赖 on 16/5/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#define M_SQLEXCUTE(_excuteString) [[[MLSQLMaker alloc] init]._excuteString description]
@class MLSQLMaker;
typedef MLSQLMaker *(^MLSQLMakerParaBlock)(NSString *);
@interface MLSQLMaker : NSObject
- (MLSQLMakerParaBlock)CREATE;
- (MLSQLMakerParaBlock)SELECT;
- (MLSQLMakerParaBlock)FROM;
- (MLSQLMakerParaBlock)DISTINCT;
- (MLSQLMakerParaBlock)WHERE;
- (MLSQLMakerParaBlock)AND;
- (MLSQLMakerParaBlock)OR;
- (MLSQLMakerParaBlock)BY;
- (MLSQLMakerParaBlock)INTO;
- (MLSQLMakerParaBlock)UPDATE;
- (MLSQLMakerParaBlock)SET;
- (MLSQLMakerParaBlock)IF_NOT_EXISTS;
- (MLSQLMakerParaBlock)VALUES;
- (MLSQLMakerParaBlock)TOP;
- (MLSQLMakerParaBlock)LIMIT;
- (MLSQLMakerParaBlock)TOP;
- (MLSQLMakerParaBlock)LIKE;
- (MLSQLMakerParaBlock)IN;


- (instancetype)select;
- (instancetype)order;
- (instancetype)insert;
- (instancetype)delete;
- (instancetype)not;


@end
