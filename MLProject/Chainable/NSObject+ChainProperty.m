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
    
    static  NSArray *structModels = nil;
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
        
        structModels = @[model1, model2, model3, model4, model5, model6 ,model7 ,model8];
    });
    
    return structModels;
}

@end




@implementation NSObject (ChainProperty)
+ (NSString *)allChainPropertyStringsForNoReturnSelName
{
    
    NSArray *noReturnSelNames = [self noReturnValueSelNames];
   return [self allChainPropertyStringsWithNoReturnSelNames:noReturnSelNames];
  
}

+ (NSString *)allChainPropertyStringsWithNoReturnSelNames:(NSArray *)noReturnSelNames
{
   
    
    
    NSMutableArray *chainPropertyGetterStings = [[NSMutableArray alloc] init];
    for (NSString *selName in noReturnSelNames) {
        
        NSString *chainPropertyString = [self chainSelNameAndMacroDefineWithSelName:selName];
        
        if (chainPropertyString) {
            [chainPropertyGetterStings addObject:chainPropertyString];
        }
    }
    
    NSString *resultChainPropertiesString = [chainPropertyGetterStings componentsJoinedByString:@"\n"];
    NSLog(@"================\n\n\n\n\n%@\n\n\n\n\n================", resultChainPropertiesString);
    return resultChainPropertiesString;
}
//所有返回值为空函数视为设置函数
+ (NSArray *)noReturnValueSelNames
{
    //防止重复selName
   
    
    NSArray *selNames = [self getInstanceMethodList];
    NSMutableArray *resultSelNames = [[NSMutableArray alloc] init];
    
    for (NSString *selName in selNames) {
        if ([selName containsString:@"substring"]) {
            
        }
        //过滤私有sel
        if ([selName hasPrefix:@"_"] || [selName hasPrefix:@"."] || [NSStringFromClass(self) containsString:@"Candidate"]) {
            continue;
        }
        if ([NSStringFromClass(self) hasPrefix:@"MLChain4"]) {
            continue;
        }
       
        SEL sel = NSSelectorFromString(selName);
        
       //过滤无返回methodSignature的sel
        NSMethodSignature *methodSignature = nil;
        @try {
          methodSignature  = [self instanceMethodSignatureForSelector:sel];
        } @catch (NSException *exception) {
            
        } @finally {
            if (methodSignature == nil) {
                continue;
            }
        }
        [[NSString alloc] getCString:@"ff"];
        //添加返回值为空的sel
        if ([selName containsString:@"getCString"]) {
            
        }
        DEPRECATED_MSG_ATTRIBUTE(<#s#>)
        const char *returnType = [methodSignature methodReturnType];
        if (strcmp(&returnType[0], "v") == 0) {
            //重名只添加一次
            if (![resultSelNames containsObject:selName]) {
                 [resultSelNames addObject:selName];
            }
           
        }
     
    }

    return resultSelNames;
}

/**
 *  链式方法与宏定义
 *
 *  @param selName <#selName description#>
 *
 *  @return <#return value description#>
 */
+ (NSString *)chainSelNameAndMacroDefineWithSelName:(NSString *)selName
{

    NSString *chainSelName = [self chainSelNameWith:selName];
    NSString *macroDefineString = [self macroDefineStringWithSelName:selName chainSelName:chainSelName];
    
     NSMutableString *resultString = [[NSMutableString alloc] init];
    if (macroDefineString) {
        [resultString appendString:macroDefineString];
    }
    
    NSString *getterString = [NSString stringWithFormat:@"- (MLChainParamBlock4%@)%@;", NSStringFromClass([self class]), chainSelName];
    [resultString appendFormat:@"%@\n",getterString];
    
    
    
    return resultString;
}
/**
 *  链式方法名
 *
 *  @param selName <#selName description#>
 *
 *  @return <#return value description#>
 */

+ (NSString *)chainSelNameWith:(NSString *)selName
{
    
    NSString *chainSelName = nil;
    //去除开头set
    if ([selName hasPrefix:@"set"] &&
        ![selName hasPrefix:@"setup"] &&
        ![selName isEqualToString:@"set"]) {
        chainSelName  = [selName stringByReplacingOccurrencesOfString:@"set" withString:@""];
        chainSelName = [NSString stringWithFormat:@"%@%@", [chainSelName substringToIndex:1].lowercaseString, [chainSelName substringFromIndex:1]];
    }else
    {
        chainSelName = selName;
    }
    
    if ([chainSelName hasSuffix:@":"]) {
        chainSelName = [chainSelName substringToIndex:chainSelName.length - 1];
    }
    chainSelName = [chainSelName stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    
    return chainSelName;
}

/**
 *  生成链式宏定义(参数非对象时需要)
 *
 *  @param selName      <#selName description#>
 *  @param chainSelName <#chainSelName description#>
 *
 *  @return <#return value description#>
 */
+ (NSString *)macroDefineStringWithSelName:(NSString *)selName chainSelName:(NSString *)chainSelName
{
 
    NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:NSSelectorFromString(selName)];
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
    
    
       NSMutableString *resultString = [[NSMutableString alloc] init];
    [resultString appendFormat:@"#ifndef %@\n#define %@(...) %@(%@)\n#endif\n", chainSelName, chainSelName, chainSelName, boxValueString];
    if (structboxValueString) {
       
          [resultString appendFormat:@"#ifndef %@_\n#define %@_(...)  %@(%@)\n#endif\n", chainSelName, chainSelName, chainSelName, structboxValueString];
    }

    return resultString;

}

@end
