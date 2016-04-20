//
//  ML_UIViewChain.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_UIViewChain.h"
#import "NSObject+ChainInvocation.h"


@implementation ML_UIViewChain


//block实现 在链式类的m文件声明
//- (ML_UIViewParamBlock)center{
//__weak typeof(self) weakSelf = self;
//return ^ML_UIViewChain *(id firstObject, ...){
//__strong typeof(weakSelf) strongSelf = weakSelf;
//    SEL selector = ml_chain_default_setter_with_getter(center);
//NSString *selectorName = NSStringFromSelector(selector);
//id chainObject = ChainObjectOfChainMaker(strongSelf, [UIView class]);
//va_list arglist;
//va_start(arglist, firstObject);
//    NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selectorName arglist:arglist firstObject:firstObject];
//va_end(arglist);
//    [NSObject excuteSettingWithTarget:chainObject selectorName:selectorName configArguments:arguments];
//return weakSelf;
//};
//}


//ml_chain_block_implementation_default(UIView, backgroundColor);
//ml_chain_block_implementation_default(UIView, hidden);
//ml_chain_block_implementation_default(UIView, size);
//ml_chain_block_implementation_default(UIView, origin);
//ml_chain_block_implementation_default(UIView, center);
//ml_chain_block_implementation_default(UIView, bounds);
//ml_chain_block_implementation_default(UIView, frame);


@end
