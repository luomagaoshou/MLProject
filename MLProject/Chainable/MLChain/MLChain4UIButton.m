//  
//  MLChain4UIButton.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIButton.h"
#import "MLChain4UIControl.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4UIButton
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UIButton *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
