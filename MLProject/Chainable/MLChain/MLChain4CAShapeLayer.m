//  
//  MLChain4CAShapeLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAShapeLayer.h"
#import "MLChain4CALayer.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4CAShapeLayer
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (CAShapeLayer *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
