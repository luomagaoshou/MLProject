//  
//  MLChain4UITextField.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4UITextField.h"
#import "MLChain4UIControl.h"
@implementation MLChain4UITextField
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UITextField *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
