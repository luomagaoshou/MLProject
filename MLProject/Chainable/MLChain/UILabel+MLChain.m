//  
//  UILabel.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UILabel+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UILabel(MLChain)
+ (MLChain4UILabel *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UILabel *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UILabel *)ml_makeConfigs:(void(^)(MLChain4UILabel *maker))block
{

MLChain4UILabel *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end
