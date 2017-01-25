//  
//  MLChain4UIScrollView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4UIScrollView.h"
#import "MLChain4UIView.h"
@implementation MLChain4UIScrollView
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UIScrollView *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
