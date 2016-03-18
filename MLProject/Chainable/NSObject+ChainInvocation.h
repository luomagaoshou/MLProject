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

+ (NSArray *)argumentTypesWithTarget:(id)target selectorName: (NSString *)selectorName;
+ (NSArray *)pullArgumentsWithArgumentList:(va_list)argumentList firstObject:(id)firstObject target:(id)target selName:(NSString *)selName argumentOperationTypes:(NSArray *)argumentOperationTypes;
+ (void)excuteSettingWith:(NSMethodSignature *)methodSignature configArguments:(NSArray *)configArguments;
id ChainObjectOfChainMaker(id maker, Class class);
+ (NSString *)tryToFixSelNameWithTarget:(id)target selectorName:(NSString *)selectorName;
@end
