//
//  NSObject+idSelectorCall.h
//  IdSelectorCall
//
//  Created by Awhisper on 15/12/25.
//  Copyright © 2015年 Awhisper. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (vk_msgSend)
static NSString *vk_extractStructName(NSString *typeEncodeString);
static void vk_generateError(NSString *errorInfo, NSError **error);
+ (id)vk_callSelector:(SEL)selector error:(NSError *__autoreleasing *)error,...;

+ (id)vk_callSelectorName:(NSString *)selName error:(NSError *__autoreleasing *)error,...;

- (id)vk_callSelector:(SEL)selector error:(NSError *__autoreleasing *)error,...;

- (id)vk_callSelectorName:(NSString *)selName error:(NSError *__autoreleasing *)error,...;

@end
