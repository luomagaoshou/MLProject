//
//  NSObject+RunTimeHelper.h
//  LotterySteward
//
//  Created by apple on 15/10/16.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (RunTimeHelper)



/**
 *  取得属性列表
 *
 *  @return
 */

+ (NSArray *)arrayOfIvars;

//获取成员变量列表

+ (NSArray *)arrayOfProperties;




+ (NSArray *)arrayOfInstanceMethods;
+ (NSArray *)arrayOfClassMethods;


+ (NSArray *)arrayOfProtocols;

+ (NSArray *)arrayOfClassesWithPrefixs:(NSArray *)prefixs;
+ (NSArray *)arrayOfAllClass;
+ (NSArray *)arrayOfSubClasses;


- (NSDictionary *)dictionaryOfPropertyKeyValues;
+ (NSArray *)arrayOfPropertyAttributes;

/**
 *  清对象所有成员变量值
 */

- (void)setObjectPropertyAllKeyValueNil;
/**
 *  复制一个对象
 *
 *
 *
 *  @return
 */
- (id)createSameObject;
/**
 *  传入成员变量列表与object   返回对应字典
 *
 *  @param ivarList
 *  @param model
 *
 *  @return 字典
 */
- (NSDictionary *)dictionaryWithIvarList:(NSArray *)ivarList;

@property (nonatomic, strong) NSString *featureIdentifier;
@property (nonatomic, strong) NSString *operationIdentifier;

@end



