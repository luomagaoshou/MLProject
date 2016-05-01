//
//  NSObject+ChainProperty.h
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ChainProperty)

+ (NSString *)ml_allChainMethodStringsForNoReturnSelName;
+ (NSString *)ml_allChainImplementationStringsOfSelectorTypeForNoReturnSelName;
+ (NSString *)ml_allChainImplementationStringsOfInvocatioTypeForNoReturnSelName;


+ (NSString *)ml_chainMethodStringInCategory;
+ (NSString *)ml_chainImplementationStringInCategory;

+ (NSString *)ml_chainLookUpMakerMethodStringOfNSObjectWithClassNames:(NSArray *)classNames;
+ (NSString *)ml_chainLookUpMakerImplementationStringOfNSObjectWithClassNames:(NSArray *)classNames;

+ (NSString *)ml_chainClassDeclearStringOfNSObjectWithClassNames:(NSArray *)classNames;
+ (NSString *)ml_chainTotalHFileWithClassNames:(NSArray *)classNames;
@end
