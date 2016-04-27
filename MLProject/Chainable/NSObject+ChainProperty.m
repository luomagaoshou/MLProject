//
//  NSObject+ChainProperty.m
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainProperty.h"
#import "NSObject+RunTimeHelper.h"
#import "MLChainMacro.h"
#import "NSObject+CreateCode.h"
@interface MLChainStructModel:NSObject
@property (nonatomic, copy) NSString *structName;
@property (nonatomic, copy) NSString *encodeTypeString;
@property (nonatomic, copy) NSString *makePrefixString;
+ (instancetype)modelWithStructName:(NSString *)structName encodeTypeString:(NSString *)encodeTypeString makePrefixString:(NSString *)makePrefixString;
@end
@implementation MLChainStructModel
+ (instancetype)modelWithStructName:(NSString *)structName encodeTypeString:(NSString *)encodeTypeString makePrefixString:(NSString *)makePrefixString
{
    MLChainStructModel *model = [[MLChainStructModel alloc] init];
    model.structName = structName;
    model.encodeTypeString = encodeTypeString;
    model.makePrefixString = makePrefixString;
    return model;
}

+ (NSArray *)structModels
{
    
    static  NSMutableArray *structModels = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        structModels = [[NSMutableArray alloc] init];
        MLChainStructModel *model1 = [MLChainStructModel modelWithStructName:@"CGPoint" encodeTypeString:[NSString stringWithUTF8String:@encode(CGPoint)]  makePrefixString:@"CGPointMake"];
        
        MLChainStructModel *model2 = [MLChainStructModel modelWithStructName:@"CGSize" encodeTypeString:[NSString stringWithUTF8String:@encode(CGSize)]  makePrefixString:@"CGSizeMake"];
        
        MLChainStructModel *model3 = [MLChainStructModel modelWithStructName:@"CGRect" encodeTypeString:[NSString stringWithUTF8String:@encode(CGRect)]  makePrefixString:@"CGRectMake"];
        
        MLChainStructModel *model4 = [MLChainStructModel modelWithStructName:@"CGAffineTransform" encodeTypeString:[NSString stringWithUTF8String:@encode(CGAffineTransform)]  makePrefixString:@"CGAffineTransformMake"];
        
        MLChainStructModel *model5 = [MLChainStructModel modelWithStructName:@"CATransform3D" encodeTypeString:[NSString stringWithUTF8String:@encode(CATransform3D)]  makePrefixString:nil];
        
        MLChainStructModel *model6 = [MLChainStructModel modelWithStructName:@"NSRange" encodeTypeString:[NSString stringWithUTF8String:@encode(NSRange)]  makePrefixString:@"NSMakeRange"];
        
        MLChainStructModel *model7 = [MLChainStructModel modelWithStructName:@"UIOffset" encodeTypeString:[NSString stringWithUTF8String:@encode(UIOffset)]  makePrefixString:@"UIOffsetMake"];
        MLChainStructModel *model8 = [MLChainStructModel modelWithStructName:@"UIEdgeInsets" encodeTypeString:[NSString stringWithUTF8String:@encode(UIEdgeInsets)]  makePrefixString:@"UIEdgeInsetsMake"];
        
        [structModels addObjectsFromArray:@[model1, model2, model3, model4, model5, model6 ,model7 ,model8]];
    });
    
    return structModels;
}

@end




@implementation NSObject (ChainProperty)
+ (NSString *)allChainPropertyString
{
    NSMutableArray *configSelNames = [[NSMutableArray alloc] init];
    NSArray *originalConfigSelNames = [self configSelNames];
    //去重复selName
    for (NSInteger i = 0; i < originalConfigSelNames.count; i ++) {
        if (![configSelNames containsObject:originalConfigSelNames[i]]) {
            [configSelNames addObject:originalConfigSelNames[i]];
        }
    }
    
    
    
    NSMutableArray *chainPropertyGetterStings = [[NSMutableArray alloc] init];
    for (NSString *configSelName in configSelNames) {
        
        NSString *chainPropertyString = [self chainPropertyStringWith:configSelName];
        
        if (chainPropertyString) {
            [chainPropertyGetterStings addObject:chainPropertyString];
        }
    }
    
    NSString *resultChainPropertiesString = [chainPropertyGetterStings componentsJoinedByString:@"\n"];
    NSLog(@"================\n\n\n\n\n%@\n\n\n\n\n================", resultChainPropertiesString);
    return resultChainPropertiesString;
}
//所有返回值为空函数视为设置函数
+ (NSArray *)configSelNames
{
   
    NSArray *selNames = [self getInstanceMethodList];
    NSMutableArray *resultSelNames = [[NSMutableArray alloc] init];
    for (NSString *selName in selNames) {
        if ([selName hasPrefix:@"_"] || [selName hasPrefix:@"."] || [NSStringFromClass(self) containsString:@"Candidate"]) {
            continue;
        }
        if ([NSStringFromClass(self) hasPrefix:@"MLChain4"]) {
            continue;
        }
       
        SEL sel = NSSelectorFromString(selName);
       
        NSMethodSignature *methodSignature = nil;
        @try {
          methodSignature  = [self instanceMethodSignatureForSelector:sel];
        } @catch (NSException *exception) {
            
        } @finally {
            if (methodSignature == nil) {
                continue;
            }
        }
        
        const char *returnType = [methodSignature methodReturnType];
        if (strcmp(&returnType[0], "v") == 0) {
            [resultSelNames addObject:selName];
        }
     
    }
//    NSLog(@"%@", resultSelNames);
    
    
    return resultSelNames;
}

/**
 *  获取链式方法名称
 *
 *  @param configMethodsString 原设置方法
 *
 *  @return
 */
+ (NSString *)chainPropertyStringWith:(NSString *)configMethodsString
{
    SEL sel = NSSelectorFromString(configMethodsString);
    NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:sel];
  
    
    NSMutableString *chainPropertyString = [[NSMutableString alloc] init];
    
    NSString *chainSelName;
    if ([configMethodsString hasPrefix:@"set"] && ![configMethodsString isEqualToString:@"set"]) {
      chainSelName  = [configMethodsString stringByReplacingOccurrencesOfString:@"set" withString:@""];
        chainSelName = [NSString stringWithFormat:@"%@%@", [chainSelName substringToIndex:1].lowercaseString, [chainSelName substringFromIndex:1]];
    }else
    {
        chainSelName = configMethodsString;
    }
    
    
    
    NSString *macroDefineString = [self macroDefineStringWith:methodSignature chainSelName:chainSelName];
    if (macroDefineString) {
        [chainPropertyString appendString:macroDefineString];
    }
    
    NSString *getterString = [NSString stringWithFormat:@"- (MLChain4%@ParamBlock)%@;", NSStringFromClass([self class]), chainSelName];
    [chainPropertyString appendFormat:@"%@\n",getterString];
    
    
    
    return chainPropertyString;
}
/**
 *  生成链式方法和宏定义
 *
 *  @param methodSignature <#methodSignature description#>
 *  @param chainSelName    <#chainSelName description#>
 *
 *  @return <#return value description#>
 */
+ (NSString *)macroDefineStringWith:(NSMethodSignature *)methodSignature chainSelName:(NSString *)chainSelName
{
 
    NSUInteger numberOfArguments = [methodSignature numberOfArguments];
    //无参数情况
    if (numberOfArguments == 2) {
        return nil;
    }
    
    BOOL isNeedMacroDefine = NO;
    for (NSInteger i = 2; i < numberOfArguments; i++) {
        const char *type = [methodSignature getArgumentTypeAtIndex:i];
        if (strcmp(type, @encode(id)) != 0) {
            isNeedMacroDefine = YES;
        }
    }
    //参数皆为对象情况
    if (!isNeedMacroDefine) {
        return nil;
    }
    
    
    BOOL hasStructParam = NO;
    NSMutableString *boxValueString = [[NSMutableString alloc] init];
    for (NSInteger i = 2; i < numberOfArguments; i++) {
       const char *type = [methodSignature getArgumentTypeAtIndex:i];
        if (*type == '{') {
            hasStructParam = YES;
        }
                [boxValueString appendFormat:@"ml_chain_MASBoxValue(metamacro_at(%ld, __VA_ARGS__))", i - 2];
        [boxValueString appendString:@", "];
        }
    [boxValueString deleteCharactersInRange:NSMakeRange(boxValueString.length - 2, 2)];
    
    NSString *structboxValueString = nil;
    if (hasStructParam && numberOfArguments == 3) {
        
        for (NSInteger i = 2; i < numberOfArguments; i++) {
            const char *type = [methodSignature getArgumentTypeAtIndex:i];
            NSString *encodeTypeString = [NSString stringWithUTF8String:type];
            NSArray *structModels = [MLChainStructModel structModels];
            
            for (MLChainStructModel *model in structModels) {
                if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
                    structboxValueString = [NSString stringWithFormat:@"ml_chain_MASBoxValue(%@(__VA_ARGS__)))", model.makePrefixString];
                }
            }
            
        }
    }
    
    
    NSString *chainMothodProperty = [self chainMothodPropertyWith:chainSelName numberOfArguments:numberOfArguments];
    
    
    
       NSMutableString *resultString = [[NSMutableString alloc] init];
    [resultString appendFormat:@"#ifndef %@\n#define %@(...) %@(%@)\n#endif\n", chainMothodProperty, chainMothodProperty, chainMothodProperty, boxValueString];
    if (structboxValueString) {
       
          [resultString appendFormat:@"#ifndef %@_\n#define %@(...)  %@(%@)\n#endif\n", chainMothodProperty, chainMothodProperty, chainMothodProperty, structboxValueString];
    }

    return resultString;

}
/**
 *  根据原sel生成链式方法名称,多参数用_(下划线)连接,并去除最后一个:(冒号)
 *
 *  @param chainSelName      <#chainSelName description#>
 *  @param numberOfArguments <#numberOfArguments description#>
 *
 *  @return <#return value description#>
 */

+ (NSString *)chainMothodPropertyWith:(NSString *)chainSelName numberOfArguments:(NSUInteger)numberOfArguments
{
    if ([chainSelName containsString:@"forgetExternalDataForObjectID:"]) {
        
    }
    //去掉最后一个冒号
    if (numberOfArguments >= 3) {
        chainSelName = [chainSelName substringToIndex:chainSelName.length - 1];
        chainSelName = [chainSelName stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    }
    
    if ([chainSelName hasPrefix:@"set"]) {
        chainSelName = [chainSelName stringByReplacingOccurrencesOfString:@"set" withString:@""];
        chainSelName = [NSString stringWithFormat:@"%@%@", [chainSelName substringToIndex:1].lowercaseString, [chainSelName substringFromIndex:1]];
        
    }
   
    
    return chainSelName;
}

@end
