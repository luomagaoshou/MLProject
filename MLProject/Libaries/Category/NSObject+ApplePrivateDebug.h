//
//  NSObject+ApplePrivateDebug.h
//  MLMacroDemo
//
//  Created by 妙龙赖 on 2017/4/20.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ApplePrivateDebug)

/**
 ivar信息

 @return <#return value description#>
 */
- (NSString *)ml_ivarDescription;

/**
 只返回传入类拥有的ivar描述

 @param klass <#klass description#>
 @return <#return value description#>
 */
- (NSString *)ml_ivarDescriptionForClass:(Class)klass;


/**
 property描述

 @return <#return value description#>
 */
- (NSString *)ml_propertyDescription;
/**
 只返回传入类拥有的property描述
 
 @return <#return value description#>
 */
- (NSString *)ml_propertyDescriptionForClass:(Class)klass;


/**
 打印method描述

 @return <#return value description#>
 */
- (NSString *)ml_methodDescription;
/**
只返回传入类拥有的method描述
 
 @return <#return value description#>
 */
- (NSString *)ml_methodDescriptionForClass:(Class)klass;


@end
