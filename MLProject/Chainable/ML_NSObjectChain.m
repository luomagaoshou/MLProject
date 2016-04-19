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

- (ML_UIViewChain *(^)(void))makerOfUIView
{
    return [self makerOfWithObjectClass:[UIView class]];
}
- (ML_UIButtonChain *(^)(void))makerOfUIButton
{
   return [self makerOfWithObjectClass:[UIButton class]];
}
- (ML_CALayerChain *)makerOfCALayer
{
    return [self makerOfWithObjectClass:[CALayer class]];
}
- (id)makerOfWithObjectClass:(Class)aClass
{
    NSString *makerClassString = [NSString stringWithFormat:@"ML_%@Chain", NSStringFromClass(aClass)];
    if (![self isKindOfClass:NSClassFromString(makerClassString)]) {
        NSAssert(0, @"该对象不属于该类");
    }
    __weak typeof(self) weakSelf = self;
    return ^ id (void){
        return weakSelf;
    };
}
#pragma mark - ========= SEL Helper =========
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
    
    
    return [self tryToFindMethodSignatureWith:aSelector];
}

// 第四部：这步我们修改调用方法
- (void)forwardInvocation:(NSInvocation *)anInvocation
{
//    [anInvocation setSelector:@selector(dance)];
//    // 这还要指定是哪个对象的方法
//    [anInvocation invokeWithTarget:self];
}

// 若forwardInvocation没有实现，则会调用此方法
- (void)doesNotRecognizeSelector:(SEL)aSelector
{
    NSLog(@"消息无法处理：%@", NSStringFromSelector(aSelector));
}

- (NSMethodSignature *)tryToFindMethodSignatureWith:(SEL)originalSelector
{
    NSString *originalSelectorString = NSStringFromSelector(originalSelector);
    id object = ((ML_NSObjectChain *)self).object;
    SEL sel1 = NSSelectorFromString([NSString stringWithFormat:@"%@:",originalSelectorString]);
    NSString *setterSELName = [NSString stringWithFormat:@"set%@%@:", [[originalSelectorString capitalizedString] substringToIndex:1], [originalSelectorString substringWithRange:NSMakeRange(1, originalSelectorString.length - 1)]];
     SEL sel2 = NSSelectorFromString(setterSELName);
    if ([object respondsToSelector:sel1]) {
        return [object methodSignatureForSelector:sel1];
    }else if ([object respondsToSelector:sel2]){
        return [object methodSignatureForSelector:sel2];
    }
    
    return nil;
    
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
