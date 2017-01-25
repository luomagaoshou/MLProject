//  
//  MLChain4CAGradientLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4CAGradientLayer.h"
#import "MLChain4CALayer.h"
@implementation MLChain4CAGradientLayer
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (CAGradientLayer *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
