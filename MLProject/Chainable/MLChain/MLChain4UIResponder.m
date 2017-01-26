//  
//  MLChain4UIResponder.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"
#import "MLChain4NSObject.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4UIResponder
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UIResponder *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
