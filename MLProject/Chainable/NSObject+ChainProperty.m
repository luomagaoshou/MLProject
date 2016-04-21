//
//  NSObject+ChainProperty.m
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainProperty.h"
#import "NSObject+RunTimeHelper.h"
#import <CALayer+YYAdd.h>
#import <objc/runtime.h>
@interface ML_ChainStructModel:NSObject
@property (nonatomic, copy) NSString *structName;
@property (nonatomic, copy) NSString *encodeTypeString;
@property (nonatomic, copy) NSString *makePrefixString;
+ (instancetype)modelWithStructName:(NSString *)structName encodeTypeString:(NSString *)encodeTypeString makePrefixString:(NSString *)makePrefixString;
@end
@implementation ML_ChainStructModel
+ (instancetype)modelWithStructName:(NSString *)structName encodeTypeString:(NSString *)encodeTypeString makePrefixString:(NSString *)makePrefixString
{
    ML_ChainStructModel *model = [[ML_ChainStructModel alloc] init];
    model.structName = structName;
    model.encodeTypeString = encodeTypeString;
    model.makePrefixString = makePrefixString;
    return model;
}
@end
@implementation NSObject (ChainProperty)
- (NSString *)chainPropertyString
{
   return [[self class] chainPropertyString];
}
+ (NSString *)chainPropertyString
{
    NSArray *setterMethods = [self setterMethods];
    
    
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
            macroDefineString = [NSString stringWithFormat:@"#define %@(...) %@(ml_chain_MASBoxValue(__VA_ARGS__)))", property, property];
            [chainPropertyGetterSting appendFormat:@"%@\n", macroDefineString];
            //   NSLog(@"%@\n", macroDefineString);
            
            //结构体 生成make方法 宏定义可能会重复  有重复的话要删掉
            if (*type == '{') {
                NSString *encodeTypeString = [NSString stringWithUTF8String:type];
                NSArray *structModeld = [self structModels];
                for (ML_ChainStructModel *model in structModeld) {
                    if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
                        macroDefineString = [NSString stringWithFormat:@"#define %@_(...) %@(ml_chain_MASBoxValue(%@(__VA_ARGS__))", property, property, model.makePrefixString];
                        [chainPropertyGetterSting appendFormat:@"%@\n", macroDefineString];
                        //  NSLog(@"%@", macroDefineString);
                        
                    }
                }
            }
        }
        
        
        NSString *chainPropertyString = [NSString stringWithFormat:@"- (ML_%@ParamBlock)%@;", NSStringFromClass([self class]), property];
        [chainPropertyGetterSting appendFormat:@"%@\n",chainPropertyString];
        [chainPropertyGetterStings addObject:chainPropertyGetterSting];
        // NSLog(@"%@\n", chainPropertyString);
        
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
        ML_ChainStructModel *model1 = [ML_ChainStructModel modelWithStructName:@"CGPoint" encodeTypeString:[NSString stringWithUTF8String:@encode(CGPoint)]  makePrefixString:@"CGPointMake"];
        
        ML_ChainStructModel *model2 = [ML_ChainStructModel modelWithStructName:@"CGSize" encodeTypeString:[NSString stringWithUTF8String:@encode(CGSize)]  makePrefixString:@"CGSizeMake"];
        
        ML_ChainStructModel *model3 = [ML_ChainStructModel modelWithStructName:@"CGRect" encodeTypeString:[NSString stringWithUTF8String:@encode(CGRect)]  makePrefixString:@"CGRectMake"];
        
        ML_ChainStructModel *model4 = [ML_ChainStructModel modelWithStructName:@"CGAffineTransform" encodeTypeString:[NSString stringWithUTF8String:@encode(CGAffineTransform)]  makePrefixString:@"CGAffineTransformMake"];
        
        ML_ChainStructModel *model5 = [ML_ChainStructModel modelWithStructName:@"CATransform3D" encodeTypeString:[NSString stringWithUTF8String:@encode(CATransform3D)]  makePrefixString:nil];
        
        ML_ChainStructModel *model6 = [ML_ChainStructModel modelWithStructName:@"NSRange" encodeTypeString:[NSString stringWithUTF8String:@encode(NSRange)]  makePrefixString:@"NSMakeRange"];
        
        ML_ChainStructModel *model7 = [ML_ChainStructModel modelWithStructName:@"UIOffset" encodeTypeString:[NSString stringWithUTF8String:@encode(UIOffset)]  makePrefixString:@"UIOffsetMake"];
        ML_ChainStructModel *model8 = [ML_ChainStructModel modelWithStructName:@"UIEdgeInsets" encodeTypeString:[NSString stringWithUTF8String:@encode(UIEdgeInsets)]  makePrefixString:@"UIEdgeInsetsMake"];
        
        [structModels addObjectsFromArray:@[model1, model2, model3, model4, model5, model6 ,model7 ,model8]];
    });
    
    return structModels;
}


@end
