//  
//  MLChain4CABasicAnimation.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CABasicAnimation.h"
#import "MLChain4CAPropertyAnimation.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4CABasicAnimation
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (CABasicAnimation *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
