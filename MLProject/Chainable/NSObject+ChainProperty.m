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


@interface ML_EncodeTypeStringHelper : NSObject
+ (NSString *)encodeTypeString:(const char *)encodeType;
+ (NSString *)wrapValueStringWithEncodeTypeString:(const char *)encodeType argumentName:(NSString *)argumentName selName:(NSString *)selName;

@end

@implementation ML_EncodeTypeStringHelper


+ (NSString *)encodeTypeString:(const char *)encodeType
{
    while (*encodeType == 'r' || // const
           *encodeType == 'n' || // in
           *encodeType == 'N' || // inout
           *encodeType == 'o' || // out
           *encodeType == 'O' || // bycopy
           *encodeType == 'R' || // byref
           *encodeType == 'V') { // oneway
        encodeType++; // cutoff useless prefix
    }
    NSString *encodeTypeString = [NSString stringWithUTF8String:encodeType];
    
    if ([self isNumberWithEncodeTypeString:encodeTypeString]) {
        
        return [[self numberEncodeTypeDictionary] valueForKey:encodeTypeString];
        
    }else if ([self isStructWithEncodeTypeString:encodeTypeString]){
        
        return [self structGetValueMethodNameWith:encodeTypeString];
        
    }else if ([self isPointerWithEncodeTypeString:encodeTypeString]){
        
        return [self pointerGetValueMethodNameWith:encodeTypeString];
    }
    
    return nil;
}

+ (NSString *)wrapValueStringWithEncodeTypeString:(const char *)encodeType argumentName:(NSString *)argumentName selName:(NSString *)selName
{
    
    NSString *resultString = nil;
    if ([self encodeTypeString:encodeType]) {
        resultString = [NSString stringWithFormat:@"[%@ %@] ", argumentName ,[self encodeTypeString:encodeType]];
    }else
    {
        resultString = argumentName;
    }
    return resultString;
}

#pragma mark - ========= 判断类型 =========

+ (BOOL)isNumberWithEncodeTypeString:(NSString *)encodeTypeString
{
    if ([[self numberEncodeTypeDictionary].allKeys containsObject:encodeTypeString]) {
        return YES;
    }
    return NO;
}
+ (BOOL)isStructWithEncodeTypeString:(NSString *)encodeTypeString
{
    if ([encodeTypeString hasPrefix:@"{"]) {
        return YES;
    }
    return NO;
}
+ (BOOL)isPointerWithEncodeTypeString:(NSString *)encodeTypeString
{
    if ([encodeTypeString hasPrefix:@"^"]) {
        return YES;
    }
    return NO;
}
+ (BOOL)isSelectorWithEncodeTypeString:(NSString *)encodeTypeString
{
    if ([encodeTypeString hasPrefix:@":"]) {
        return YES;
    }
    return NO;
}
+ (BOOL)isClassWithEncodeTypeString:(NSString *)encodeTypeString
{
    if ([encodeTypeString hasPrefix:@"#"]) {
        return YES;
    }
    return NO;
}

#pragma mark - ========= 取valueName =========
+ (NSString *)structGetValueMethodNameWith:(NSString *)encodeTypeString
{
    if ([[self strctEncodeTypeDictionaryOfSpecail].allKeys containsObject:encodeTypeString]) {
        return [[self strctEncodeTypeDictionaryOfSpecail] valueForKey:encodeTypeString];
    }
        NSUInteger startIndex = [encodeTypeString rangeOfString:@"{"].location + 1;
        NSUInteger endIndex = [encodeTypeString rangeOfString:@"="].location;
        NSString *structName = [encodeTypeString substringWithRange:NSMakeRange(startIndex, endIndex - startIndex)];
    NSString *getValueMethodName = [NSString stringWithFormat:@"%@Value", structName];
        return getValueMethodName;
  
}

+ (NSString *)pointerGetValueMethodNameWith:(NSString *)encodeTypeString
{
   
   
    NSUInteger startIndex = [encodeTypeString rangeOfString:@"{"].location + 1;
    NSUInteger endIndex = [encodeTypeString rangeOfString:@"="].location;
    if (startIndex != NSNotFound && endIndex != NSNotFound) {
        NSString *structName = [encodeTypeString substringWithRange:NSMakeRange(startIndex, endIndex - startIndex)];
        NSString *getValueMethodName = [NSString stringWithFormat:@"%@", structName];
        return getValueMethodName;
    }
    return encodeTypeString;
    
    
}

#pragma mark - ========= encode type字典 =========
+ (NSDictionary *)numberEncodeTypeDictionary
{
    
    NSDictionary *encodeTypeDic = @{@"B":@"boolValue",
                                    @"c":@"charValue",
                                    @"C":@"unsignedCharValue",
                                    @"s":@"shortValue",
                                    @"S":@"unsignedShortValue",
                                    @"i":@"intValue",
                                    @"I":@"unsignedIntValue",
                                    @"l":@"longValue",
                                    @"L":@"unsignedLongValue",
                                    @"q":@"longLongValue",
                                    @"Q":@"unsignedLongLongValue",
                                    @"f":@"floatValue",
                                    @"d":@"doubleValue",
                                    @"D":@"longLongValue",};
    return encodeTypeDic;
}
+ (NSDictionary *)strctEncodeTypeDictionaryOfSpecail
{
    NSString *rangeEncodeString = [NSString stringWithUTF8String:@encode(NSRange)];
    NSDictionary *encodeTypeDic = @{rangeEncodeString:@"rangeValue"};
    return encodeTypeDic;
}
+ (NSDictionary *)encodeTypeDictionary
{
    
    NSDictionary *encodeTypeDictionary = @{
                                           @"*":@"",
                                           @"^":@"",
                                           @":":@"",
                                           @"#":@"",
                                           @"@":@"",
                                           @"(":@"",
                                           @"[":@""};
    return encodeTypeDictionary;
}


@end


@implementation NSObject (ChainProperty)
+ (NSString *)ml_chainCategoryMethodString
{
    NSMutableArray *resultStrings = [[NSMutableArray alloc] init];
    NSString *methodString1 = [NSString stringWithFormat:@"+ (MLChain4%@ *)ml_make;", NSStringFromClass(self)];
     NSString *methodString2 = [NSString stringWithFormat:@"- (MLChain4%@ *)ml_make;", NSStringFromClass(self)];
    NSString *methodString3 = [NSString stringWithFormat:@"- (MLChain4%@ *)ml_makeConfigs:(void(^)(MLChain4%@ *maker))block;", NSStringFromClass(self), NSStringFromClass(self)];
    [resultStrings addObject:@[methodString1, methodString2, methodString3]];
    return [resultStrings componentsJoinedByString:@"\n"];
    
}

+ (NSString *)ml_chainCategoryImplementationString
{
    NSMutableArray *resultStrings = [[NSMutableArray alloc] init];
    NSString *implementationString1 = [NSString stringWithFormat:@"+ (MLChain4%@ *)ml_make\n{\n\nreturn (id)[super ml_make];\n\n}", NSStringFromClass(self)];
    NSString *implementationString2 = [NSString stringWithFormat:@"+ (MLChain4%@ *)ml_make\n{\n\nreturn (id)[super ml_make];\n\n}", NSStringFromClass(self)];
    NSString *implementationString3 = [NSString stringWithFormat:@"- (MLChain4%@ *)ml_makeConfigs:(void(^)(MLChain4%@ *maker))block\n{\n\n" @"MLChain4%@ *chain = self.ml_make;\nblock(chain);\nreturn chain;\n" @"\n}", NSStringFromClass(self), NSStringFromClass(self), NSStringFromClass(self)];
    [resultStrings addObject:@[implementationString1, implementationString2, implementationString3]];
    return [resultStrings componentsJoinedByString:@"\n"];
}
+ (NSString *)allChainMethodStringsForNoReturnSelName
{
    
    NSArray *noReturnSelNames = [self noReturnValueSelNames];
   return [self allChainMethodStringsForNoReturnSelNameWithNoReturnSelNames:noReturnSelNames];
  
}

+ (NSString *)allChainMethodStringsForNoReturnSelNameWithNoReturnSelNames:(NSArray *)noReturnSelNames
{
   
    NSMutableArray *chainPropertyGetterStings = [[NSMutableArray alloc] init];
    for (NSString *selName in noReturnSelNames) {
        
        NSString *chainPropertyString = [self chainSelNameAndMacroDefineWithSelName:selName];
        
        if (chainPropertyString) {
            [chainPropertyGetterStings addObject:chainPropertyString];
        }
    }
    
    NSString *resultString = [chainPropertyGetterStings componentsJoinedByString:@"\n"];
    
    NSLog(@"================\n\n\n\n\n%@\n\n\n\n\n================", resultString);
    return resultString;
}
+ (NSString *)allChainImplementationStringsForNoReturnSelName
{
    return [self allChainImplementationStringsForNoReturnSelNameWithSelNams:[self noReturnValueSelNames]];
}
+ (NSString *)allChainImplementationStringsForNoReturnSelNameWithSelNams:(NSArray *)selNames
{
    NSMutableArray *methodImplementationStrings = [[NSMutableArray alloc] init];
    
    for (NSString *selName in selNames) {
        NSMutableString *implementationString = [[NSMutableString alloc] init];
        NSString *chainSelName = [self chainSelNameWith:selName];
        NSString *chainGetterString = [NSString stringWithFormat:@"- (MLChainParamBlock4%@)%@", NSStringFromClass([self class]), chainSelName];
        [implementationString appendFormat:@"%@{\n", chainGetterString];
        [implementationString appendString:@"__weak typeof(self) weakSelf = self;\n"];
        [implementationString appendFormat:@"return ^ MLChain4%@ *(id irstObject, ...){\n", NSStringFromClass(self)];
        [implementationString appendString:@"__strong typeof(weakSelf) strongSelf = weakSelf;\n"];
        [implementationString appendString:@"id chainObject = [strongSelf objectOfChainMaker];\n"];
        [implementationString appendString:@"va_list arglist;\n"];
        [implementationString appendString:@"va_start(arglist, firstObject);\n"];
        [implementationString appendString:@"NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];\n"];
        [implementationString appendString:@"va_end(arglist);\n"];
        
        [implementationString appendString:[self chainObjectImplementationStringWithSelName:selName]];
        [implementationString appendString:@"\n"];
        [implementationString appendString:@"return weakSelf;\n}\n}"];
        
        [methodImplementationStrings addObject:implementationString];
    }
    
    return [methodImplementationStrings componentsJoinedByString:@"\n\n"];
}
+ (NSString *)chainObjectImplementationStringWithSelName:(NSString *)selName
{
    NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:NSSelectorFromString(selName)];
    NSMutableString *mutSelName = [selName mutableCopy];
    NSInteger numberOfArguments = [methodSignature numberOfArguments];
    
   
    NSInteger lastInsertedIndex = 0;
    for (NSInteger i = 0; i < numberOfArguments - 2; i++) {
         const char *encodeType = [methodSignature getArgumentTypeAtIndex:i + 2];
       
        for (NSInteger j = lastInsertedIndex; j < mutSelName.length; j++) {
            if ([[mutSelName substringWithRange:NSMakeRange(j, 1)] isEqualToString:@":"]) {
                
                NSString *argument = [NSString stringWithFormat:@"arguments[%ld]", i];
              
                 NSString *insertedString = [ML_EncodeTypeStringHelper wrapValueStringWithEncodeTypeString:encodeType argumentName:argument selName:selName];
                  [mutSelName insertString:insertedString atIndex:j + 1];
                lastInsertedIndex = j + insertedString.length;
                   break;
            }
            
        }
        
    }
    if ([mutSelName hasSuffix:@" "]) {
        [mutSelName deleteCharactersInRange:NSMakeRange(mutSelName.length - 1, 1)];
    }
    NSString *implementationString = [NSString stringWithFormat:@"[(%@ *)chainObject %@]", NSStringFromClass(self), mutSelName];
    
    return implementationString;
}
//所有返回值为空函数视为设置函数
+ (NSArray *)noReturnValueSelNames
{
    NSArray *selNames = [self getInstanceMethodList];
    NSMutableArray *resultSelNames = [[NSMutableArray alloc] init];
    
    for (NSString *selName in selNames) {
        if ([selName containsString:@"substring"]) {
            
        }
        //过滤私有sel
        if ([selName hasPrefix:@"_"] ||
            [selName hasPrefix:@"."]) {
            continue;
        }
        //过滤链式类
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
