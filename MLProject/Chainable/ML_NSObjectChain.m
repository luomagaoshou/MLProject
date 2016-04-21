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
- (instancetype)with
{
    return self;
}

- (ML_UIViewChain *)popMakerOfUIView
{
    return (ML_UIViewChain *)self;
}
- (ML_UIButtonChain *)popMakerOfUIButton
{
    return (ML_UIButtonChain *)self;
}
- (ML_CALayerChain *)popMakerOfCALayer
{
    return (ML_CALayerChain *)self;
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
//// 第一步：我们不动态添加方法，返回NO，进入第二步；
+ (BOOL)resolveInstanceMethod:(SEL)sel
{
    
    return [self canFindSELWithSelector:sel];


}
//
//// 第二部：我们不指定备选对象响应aSelector，进入第三步；
//- (id)forwardingTargetForSelector:(SEL)aSelector
//{
//    return nil;
//}
//
//// 第三步：返回方法选择器，然后进入第四部；
//- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector
//{
//    
//    
//    return nil;
//}
//
//// 第四部：这步我们修改调用方法
//- (void)forwardInvocation:(NSInvocation *)anInvocation
//{
////    [anInvocation setSelector:@selector(dance)];
////    // 这还要指定是哪个对象的方法
////    [anInvocation invokeWithTarget:self];
//}

// 若forwardInvocation没有实现，则会调用此方法
- (void)doesNotRecognizeSelector:(SEL)aSelector
{
//    
//    if (![self tryToFindSELWith:aSelector]) {
//         NSLog(@"消息无法处理：%@", NSStringFromSelector(aSelector));
//        NSAssert(0, @"消息无法处理");
//    }
//    SEL fixedSel = [self tryToFindSELWith:aSelector];
//    [self chainGetterWith:NSStringFromSelector(fixedSel)];
    
   
}

+ (BOOL)canFindSELWithSelector:(SEL)sel
{
    
    NSArray *instanceMethod = [ChainObjectClassOfChainMaker(self) getInstanceMethodList];
    __block  NSString *selString = NSStringFromSelector(sel);
    __block NSString *setterString = [NSString stringWithFormat:@"set%@%@:", [selString substringToIndex:1].uppercaseString, [selString substringFromIndex:1]];
    __block BOOL isFindMethod = NO;
    [instanceMethod enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSString *methodString = obj;
        if ([methodString isEqualToString:setterString]) {
            isFindMethod = YES;
            IMP chainGetter = class_getMethodImplementation([self class], @selector(chainGetter));
            class_addMethod([self class], sel, chainGetter, "@@:");
            *stop = YES;
        }
        
    }];
    if (!isFindMethod && [self class] != [self superclass] && self != [ML_NSObjectChain class]) {
        [[self superclass] canFindSELWithSelector:sel];
    }
    
    return isFindMethod;
}


- (id(^)(id, ...))chainGetter{


__weak typeof(self) weakSelf = self;
return ^id (id firstObject, ...){
__strong typeof(weakSelf) strongSelf = weakSelf;
    NSString *selectorString = [NSString stringWithFormat:@"set%@%@:", [NSStringFromSelector(_cmd) substringToIndex:1].uppercaseString, [NSStringFromSelector(_cmd) substringFromIndex:1]];
    SEL selector = NSSelectorFromString(selectorString);
    
NSString *selectorName = NSStringFromSelector(selector);
id chainObject = ChainObjectOfChainMaker(strongSelf, ChainObjectClassOfChainMaker(self));
va_list arglist;
va_start(arglist, firstObject);
    NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selectorName arglist:arglist firstObject:firstObject];
va_end(arglist);
    [NSObject excuteSettingWithTarget:chainObject selectorName:selectorName configArguments:arguments];
 
return weakSelf;
};
  
}


@end
