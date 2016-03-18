//
//  NSObject+RunTimeHelper.h
//  LotterySteward
//
//  Created by apple on 15/10/16.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^UIViewBlockSender)(UIView *sender);

typedef void (^NSObjectBlockCallback)(id msgObj);
typedef void (^NSObjectBlockCallbackOfNoneValue)(void);
@interface NSObject (RunTimeHelper)
@property (nonatomic, copy) NSObjectBlockCallback blockCallback;
@property (nonatomic, copy) UIViewBlockSender blockSender;
@property (nonatomic, copy) NSObjectBlockCallbackOfNoneValue blockCallbackOfNoneValue;
@property (nonatomic, strong) NSString *featureIdentifier;
@property (nonatomic, strong) NSString *operationIdentifier;
@property (nonatomic, strong) id associationObject;


/**
 *  取得属性列表
 *
 *  @return
 */
- (NSArray *)getIvarList;
+ (NSArray *)getIvarList;
//获取成员变量列表
- (NSArray *)getPropertyList;
+ (NSArray *)getPropertyList;
- (NSDictionary *)getPropertyKeyValueOnlyHaveValueDictionary;
+ (NSArray *)getPropertyAttributeList;
/**
 *  清对象所有成员变量值
 */
- (void)printValueForKeyListWith:(NSArray *)array;
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
 *  传入成员变量列表与model 只有赋  返回字典
 *
 *  @param ivarList
 *  @param model
 *
 *  @return 字典
 */
+ (NSDictionary *)getPropertyDictionaryJoinedWithIvarList:(NSArray *)ivarList model:(id)model;
/**
 *  设置关联
 *
 *  @param value
 *  @param key
 */
- (void)setAssociationValue:(id)value withKey:(const void *)key;

/**
 *  读取关联
 *
 *  @param key
 *
 *  @return
 */
- (id)getAssociationValueWithKey:(const void *)key;
/**
 *  移除关联
 */
- (void)removeAllAssociationValue;

+ (void)setAssociationValue:(id)value;

+ (id)getAssociationValue;
+ (void)removeAllAssociationValue;

@end

