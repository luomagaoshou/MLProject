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
    NSMutableArray *setterMethods = [[NSMutableArray alloc] init];
    NSArray *originalSetterMethods = [self setterMethods];
    for (NSInteger i = 0; i < originalSetterMethods.count; i ++) {
        if (![setterMethods containsObject:originalSetterMethods[i]]) {
            [setterMethods addObject:originalSetterMethods[i]];
        }
    }
    
    
    
    NSMutableArray *chainPropertyGetterStings = [[NSMutableArray alloc] init];
    for (NSString *setterMothodsStirng in setterMethods) {
        
        SEL setterSel = NSSelectorFromString(setterMothodsStirng);
        Method method = class_getInstanceMethod([self class], setterSel);
        if (method_getNumberOfArguments(method) != 3) {
            continue;
        }
        
        NSMutableString *chainPropertyGetterSting = [[NSMutableString alloc] init];
        
        NSString *property = [setterMothodsStirng substringWithRange:NSMakeRange(3, setterMothodsStirng.length -4)];
        property = [NSString stringWithFormat:@"%@%@", [property substringToIndex:1].lowercaseString, [property substringFromIndex:1]];
        
        const char *type = method_copyArgumentType(method, 2);
        NSString *macroDefineString;
        if (strcmp(type, @encode(id)) != 0) {
            //非结构体
            macroDefineString = [NSString stringWithFormat:@"#ifndef %@\n#define %@(...) %@(ml_chain_MASBoxValue(__VA_ARGS__))\n#endif\n", property, property, property];
            [chainPropertyGetterSting appendFormat:@"%@", macroDefineString];
            //   NSLog(@"%@\n", macroDefineString);


            //结构体 生成make方法
            if (*type == '{') {
                NSString *encodeTypeString = [NSString stringWithUTF8String:type];
                NSArray *structModeld = [self structModels];
                for (MLChainStructModel *model in structModeld) {
                    if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
                       NSString *structMacroDefineString = [NSString stringWithFormat:@"#ifndef %@_\n #define %@_(...) %@(ml_chain_MASBoxValue(%@(__VA_ARGS__)))\n#endif\n", property, property, property, model.makePrefixString];
                        [chainPropertyGetterSting appendString:structMacroDefineString];
    
                        
                    }
                }
            }
        }
        
        
        NSString *chainPropertyString = [NSString stringWithFormat:@"- (MLChain4%@ParamBlock)%@;", NSStringFromClass([self class]), property];
        [chainPropertyGetterSting appendFormat:@"%@\n",chainPropertyString];
        [chainPropertyGetterStings addObject:chainPropertyGetterSting];
        // NSLog(@"%@\n", allChainPropertyString);
        
    }
    
    
    NSString *resultChainPropertiesString = [chainPropertyGetterStings componentsJoinedByString:@"\n"];
    NSLog(@"================\n\n\n\n\n%@\n\n\n\n\n================", resultChainPropertiesString);
    return resultChainPropertiesString;
}
+ (NSArray *)setterMethods
{
    Protocol *protocol = objc_getProtocol("YYAdd");
  
    
    NSArray *methods = [self getInstanceMethodList];
    NSMutableArray *setterMethods = [[NSMutableArray alloc] init];
    for (NSString *method in methods) {
        if ([method hasPrefix:@"set"]) {
            [setterMethods addObject:method];
        }
    }
    NSLog(@"%@", setterMethods);
    
    
    return setterMethods;
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
