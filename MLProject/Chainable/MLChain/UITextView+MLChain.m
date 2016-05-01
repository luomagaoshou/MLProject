//  
//  UITextView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UITextView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UITextView(MLChain)
+ (MLChain4UITextView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITextView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITextView *)ml_makeConfigs:(void(^)(MLChain4UITextView *maker))block
{

MLChain4UITextView *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end
