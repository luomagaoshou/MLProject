//
//  NSObject+MLChain4NSObject.h
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MLChain4NSObject.h"
#import "MLChainMacro.h"

@interface NSObject (MLChain4NSObject)
ml_chain_category_method_declear(NSObject);
- (id)makerWithConnetAllProperty;
@end
