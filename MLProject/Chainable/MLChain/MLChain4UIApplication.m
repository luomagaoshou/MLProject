//  
//  MLChain4UIApplication.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIApplication.h"
#import "MLChain4UIResponder.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4UIApplication
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UIApplication *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
