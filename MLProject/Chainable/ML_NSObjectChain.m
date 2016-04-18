//
//  ML_NSObjectChain.m
//  MLProject
//
//  Created by apple on 16/3/10.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_NSObjectChain.h"
#import "NSObject+ChainInvocation.h"
#import "ML_Chain_Macro.h"
@implementation ML_NSObjectChain
- (instancetype)and
{
    return self;
}
- (instancetype)get
{
    return self;
}
- (instancetype)with
{
    return self;
}

- (ML_UIViewChain *)makerOfUIView
{
    if (![self isKindOfClass:NSClassFromString(@"ML_UIViewChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_UIViewChain *)self;
}

- (ML_UIButtonChain *)makerOfUIButton
{
    if (![self isKindOfClass:NSClassFromString(@"ML_UIButtonChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_UIButtonChain *)self;
}
- (ML_CALayerChain *)makerOfCALayer
{
    if (![self isKindOfClass:NSClassFromString(@"ML_CALayerChain")]) {
        NSAssert(0, @"该对象不属于该类");
    }
    return (ML_CALayerChain *)self;
}


// 第一步：我们不动态添加方法，返回NO，进入第二步；
+ (BOOL)resolveInstanceMethod:(SEL)sel
{
    return NO;
}

// 第二部：我们不指定备选对象响应aSelector，进入第三步；
- (id)forwardingTargetForSelector:(SEL)aSelector
{
    return nil;
}

// 第三步：返回方法选择器，然后进入第四部；
- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector
{
    
    return [super methodSignatureForSelector:@selector(setBackgroundColor:)];
}

// 第四部：这步我们修改调用方法
- (void)forwardInvocation:(NSInvocation *)anInvocation
{
    [anInvocation setSelector:@selector(dance)];
    // 这还要指定是哪个对象的方法
    [anInvocation invokeWithTarget:self];
}

// 若forwardInvocation没有实现，则会调用此方法
- (void)doesNotRecognizeSelector:(SEL)aSelector
{
    NSLog(@"消息无法处理：%@", NSStringFromSelector(aSelector));
}

- (id)chainGetterWith:(NSString *)selName{
__weak typeof(self) weakSelf = self;
return ^id (id firstObject, ...){
__strong typeof(weakSelf) strongSelf = weakSelf;
    SEL selector = ml_chain_default_setter_with_getter(center);
NSString *selectorName = NSStringFromSelector(selector);
id chainObject = ChainObjectOfChainMaker(strongSelf, [UIView class]);
va_list arglist;
va_start(arglist, firstObject);
    NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selectorName arglist:arglist firstObject:firstObject];
va_end(arglist);
    [NSObject excuteSettingWithTarget:chainObject selectorName:selectorName configArguments:arguments];
return weakSelf;
};
}


@end
