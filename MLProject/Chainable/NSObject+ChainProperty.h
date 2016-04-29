//
//  NSObject+ChainProperty.h
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ChainProperty)

+ (NSString *)allChainMethodStringsForNoReturnSelName;
+ (NSString *)allChainImplementationStringsForNoReturnSelName;


+ (NSString *)ml_chainCategoryMethodString;
+ (NSString *)ml_chainCategoryImplementationString;
@end
