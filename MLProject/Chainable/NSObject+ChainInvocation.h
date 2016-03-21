//
//  NSObject+ChainInvocation.h
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Invocation)

//在va_start与va_end中使用 而且只能用一次
id getObjectFromVarlistAtIndex(va_list list, id firstObject, NSInteger index);
+ (NSArray *)argumentsWithTarget:(id)target selectorName: (NSString *)selectorName arglist:(va_list)arglist firstObject:(id)firstObject;
+ (void)excuteSettingWithTarget:(id)target selectorName: (NSString *)selectorName configArguments:(NSArray *)configArguments;

+ (NSArray *)argumentTypesWithTarget:(id)target selectorName: (NSString *)selectorName;
+ (NSArray *)pullArgumentsWithArgumentList:(va_list)argumentList firstObject:(id)firstObject target:(id)target selName:(NSString *)selName argumentOperationTypes:(NSArray *)argumentOperationTypes;
+ (void)excuteSettingWith:(NSMethodSignature *)methodSignature configArguments:(NSArray *)configArguments;

+ (SEL)setterSelectorWithGetterNameChar:(char *)getterNameChar;
+ (NSString *)tryToFixSelNameWithTarget:(id)target selectorName:(NSString *)selectorName;

NSString * ChainObjectNameOfClass(Class class);
id ChainObjectOfChainMaker(id maker, Class class);
@end
