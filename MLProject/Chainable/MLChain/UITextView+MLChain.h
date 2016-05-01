//  
//  UITextView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UITextView.h"


@interface UITextView(MLChain)
+ (MLChain4UITextView *)ml_make;

- (MLChain4UITextView *)ml_make;

- (MLChain4UITextView *)ml_makeConfigs:(void(^)(MLChain4UITextView *maker))block;


@end
