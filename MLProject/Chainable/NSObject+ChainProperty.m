//
//  NSObject+ChainProperty.m
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainProperty.h"
#import "NSObject+RunTimeHelper.h"
#import <objc/runtime.h>
#import <objc/objc-load.h>
#import <objc/objc-class.h>
#import <objc/List.h>
#import "MLChainMacro.h"
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
@end


@implementation NSObject (ChainProperty)
- (NSString *)allChainPropertyString
{
   return [[self class] allChainPropertyString];
}
+ (NSString *)allChainPropertyString
{
    NSMutableArray *configSelNames = [[NSMutableArray alloc] init];
    NSArray *originalConfigSelNames = [self configSelNames];
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
        if ([selName hasPrefix:@"_"] || [selName hasPrefix:@"."]) {
            continue;
        }
        SEL sel = NSSelectorFromString(selName);
        NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:sel];
        const char *returnType = [methodSignature methodReturnType];
        if (strcmp(&returnType[0], "v") == 0) {
            [resultSelNames addObject:selName];
        }
     
    }
    NSLog(@"%@", resultSelNames);
    
    
    return resultSelNames;
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


+ (NSString *)chainPropertyStringWith:(NSString *)configMethodsString
{
    SEL sel = NSSelectorFromString(configMethodsString);
    NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:sel];
  
    
    NSMutableString *chainPropertyString = [[NSMutableString alloc] init];
    
    NSString *chainSelName;
    if ([configMethodsString hasPrefix:@""]) {
      chainSelName  = [configMethodsString stringByReplacingOccurrencesOfString:@"set:" withString:@""];
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
+ (NSString *)macroDefineStringWith:(NSMethodSignature *)methodSignature chainSelName:(NSString *)chainSelName
{
    NSMutableString *resultString = [[NSMutableString alloc] init];
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
        }
    
    
    NSString *structboxValueString = nil;
    if (hasStructParam && numberOfArguments == 3) {
        
        for (NSInteger i = 2; i < numberOfArguments; i++) {
            const char *type = [methodSignature getArgumentTypeAtIndex:i];
            NSString *encodeTypeString = [NSString stringWithUTF8String:type];
            NSArray *structModels = [self structModels];
            
            for (MLChainStructModel *model in structModels) {
                if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
                    structboxValueString = [NSString stringWithFormat:@"ml_chain_MASBoxValue(%@(__VA_ARGS__)))", model.makePrefixString];
                }
            }
            
        }
    }
    
    
    
        NSString *macroDefineString;
        const char *type;
        //参数非对象时处理
        if (strcmp(type, @encode(id)) != 0) {
            
            macroDefineString = [NSString stringWithFormat:@"#ifndef %@\n#define %@(...) %@(ml_chain_MASBoxValue(__VA_ARGS__))\n#endif\n", chainSelName, chainSelName, chainSelName];
            [resultString appendFormat:@"%@", macroDefineString];
            //   NSLog(@"%@\n", macroDefineString);
            
            
            //结构体 生成make方法
            if (*type == '{') {
                NSString *encodeTypeString = [NSString stringWithUTF8String:type];
                NSArray *structModeld = [self structModels];
                for (MLChainStructModel *model in structModeld) {
                    if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
                        NSString *structMacroDefineString = [NSString stringWithFormat:@"#ifndef %@_\n #define %@_(...) %@(ml_chain_MASBoxValue(%@(__VA_ARGS__)))\n#endif\n", chainSelName, chainSelName, chainSelName, model.makePrefixString];
                        [resultString appendString:structMacroDefineString];
                        
                        
                    }
                }
            }
        }
    
    
    
    
    return resultString;

}
@end
