//
//  NSObject+ChainInvocation.m
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainInvocation.h"
#define kObjectBlockType @"ObjectBlock"
#define kSizeBlockType @"SizeBlock"
#define kPointBlockType @"PointBlock"
#define kRectBlockType @"RectBlock"
#define kSetObjectForStateType @"SetObjectForStateBlock"
#import <YYKit/NSObject+YYAdd.h>
#import <YYKit/NSObject+YYModel.h>
#import <Masonry/Masonry.h>
#import "ML_Chain_Macro.h"
#import "NSObject+vk_msgSend.h"

@interface ML_ChainManager : NSObject
@property (nonatomic, strong) NSMutableArray *chainConfigs;
@property (nonatomic, weak) id chainObject;
+ (instancetype)shareInstance;
- (void)makeConfigsRecordWithInvocation:(NSInvocation *)invocation;
@end
@implementation ML_ChainManager

+ (instancetype)shareInstance
{
    static ML_ChainManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[ML_ChainManager alloc] init];
    });
    return manager;
}
- (void)makeConfigsRecordWithInvocation:(NSInvocation *)invocation
{
  __autoreleasing  id chainObject;
    [invocation getArgument:&chainObject atIndex:0];
  
    SEL selector;
    [invocation getArgument:&selector atIndex:1];
    
   NSMethodSignature *methodSignature = [chainObject methodSignatureForSelector:selector];
    
    if (self.chainObject != chainObject) {
        
        for (NSString *chainConfigStr in self.chainConfigs) {
            NSLog(@"%@", chainConfigStr);
            
        }
        self.chainObject = chainObject;
    }
    else
        {
        
        NSString *chainObjectName = ChainObjectNameOfClass([chainObject class]);
        NSString *selectorName = NSStringFromSelector(selector);
        NSMutableString *configDetailMutStr = [[NSMutableString alloc] init];
        [configDetailMutStr appendFormat:@"[%@ %@]",chainObjectName, selectorName];
        [self.chainConfigs addObject:configDetailMutStr];
        }
    
//  
//    NSMutableArray *argumentStrMutArr = [[NSMutableArray alloc] init];
//        for (NSInteger i = 2; i < methodSignature.numberOfArguments; i++) {
//            
//            char *type = (char *)[methodSignature getArgumentTypeAtIndex:i];
//            while (*type == 'r' || // const
//                   *type == 'n' || // in
//                   *type == 'N' || // inout
//                   *type == 'o' || // out
//                   *type == 'O' || // bycopy
//                   *type == 'R' || // byref
//                   *type == 'V') { // oneway
//                type++; // cutoff useless prefix
//            }
//            
//            BOOL unsupportedType = NO;
//            switch (*type) {
//                case 'v': // 1: void
//                case 'B': // 1: bool
//                case 'c': // 1: char / BOOL
//                case 'C': // 1: unsigned char
//                case 's': // 2: short
//                case 'S': // 2: unsigned short
//                case 'i': // 4: int / NSInteger(32bit)
//                case 'I': // 4: unsigned int / NSUInteger(32bit)
//                case 'l': // 4: long(32bit)
//                case 'L': // 4: unsigned long(32bit)
//                { // 'char' and 'short' will be promoted to 'int'.
//                    int arg = [configArguments[i] intValue];
//                    [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case 'q': // 8: long long / long(64bit) / NSInteger(64bit)
//                case 'Q': // 8: unsigned long long / unsigned long(64bit) / NSUInteger(64bit)
//                {
//                
//                long long arg = [configArguments[i] longLongValue];
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case 'f': // 4: float / CGFloat(32bit)
//                { // 'float' will be promoted to 'double'.
//                    double arg = [configArguments[i] doubleValue];
//                    [invocation setArgument:&arg atIndex:i];
//                }
//                    
//                case 'd': // 8: double / CGFloat(64bit)
//                {
//                double arg = [configArguments[i] doubleValue];
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case 'D': // 16: long double
//                {
//                
//                long double  arg = [configArguments[i] longLongValue];
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case '*': // char *
//                case '^': // pointer
//                {
//                id pointerObject = configArguments[i];
//                if (strcmp(type, @encode(CGColorRef)) == 0) {
//                    CGColorRef arg = [pointerObject CGColor];
//                    [invocation setArgument:&arg atIndex:i];
//                    
//                }else
//                    {
//                    void *arg = [pointerObject pointerValue];
//                    
//                    [invocation setArgument:&arg atIndex:i];
//                    }
//                
//                
//                } break;
//                    
//                case ':': // SEL
//                {
//                SEL arg = NSSelectorFromString(configArguments[i]);
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case '#': // Class
//                {
//                Class arg = [configArguments[i] class];
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case '@': // id
//                {
//                id arg = configArguments[i];
//                [invocation setArgument:&arg atIndex:i];
//                } break;
//                    
//                case '{': // struct
//                {   id structObj = configArguments[i];
//                    if (strcmp(type, @encode(CGPoint)) == 0) {
//                        CGPoint arg = [structObj CGPointValue];
//                        [invocation setArgument:&arg atIndex:i];
//                        
//                    } else if (strcmp(type, @encode(CGSize)) == 0) {
//                        CGSize arg = [structObj CGSizeValue];
//                        [invocation setArgument:&arg atIndex:i];
//                    } else if (strcmp(type, @encode(CGRect)) == 0) {
//                        CGRect arg = [structObj CGRectValue];
//                        [invocation setArgument:&arg atIndex:i];
//                    } else if (strcmp(type, @encode(CGVector)) == 0) {
//                        CGVector arg = [structObj CGVectorValue];
//                        [invocation setArgument:&arg atIndex:i];
//                    } else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
//                        CGAffineTransform arg = [structObj CGAffineTransformValue];
//                        [invocation setArgument:&arg atIndex:i];
//                    }/* else if (strcmp(argumentType, @encode(CATransform3D)) == 0) {
//                      #define  pull_value_from_array(ARRAY)  ml_c_struct_value_in_array_of(CATransform3D, ARRAY)
//                      
//                      }*/ else if (strcmp(type, @encode(NSRange)) == 0) {
//                          NSRange arg = [structObj rangeValue];
//                          [invocation setArgument:&arg atIndex:i];
//                          
//                      } else if (strcmp(type, @encode(UIOffset)) == 0) {
//                          UIOffset arg = [structObj UIOffsetValue];
//                          [invocation setArgument:&arg atIndex:i];
//                          
//                      } else if (strcmp(type, @encode(UIEdgeInsets)) == 0) {
//                          UIEdgeInsets arg = [structObj UIEdgeInsetsValue];
//                          [invocation setArgument:&arg atIndex:i];
//                      }
//                }
//                    break;
//                    
//                case '(': // union
//                {
//                unsupportedType = YES;
//                } break;
//                    
//                case '[': // array
//                {
//                unsupportedType = YES;
//                } break;
//                    
//                default: // what?!
//                {
//                unsupportedType = YES;
//                } break;
//            }
//            
//            if (unsupportedType) {
//                // Try with some dummy type...
//                
//                NSUInteger size = 0;
//                NSGetSizeAndAlignment(type, &size, NULL);
//                
//            }
//        }
//        
//        
//
//      
//    }
    
    
}
- (NSMutableArray *)chainConfigs
{
    if (_chainConfigs == nil) {
        
        _chainConfigs = [[NSMutableArray alloc] init];
    }
    return _chainConfigs;
}
@end

@implementation NSObject (Invocation)

#pragma mark - ========= Config Argument=========

+ (NSArray *)pullArgumentsWithArgumentList:(va_list)argumentList firstObject:(id)firstObject target:(id)target selName:(NSString *)selName argumentOperationTypes:(NSArray *)argumentOperationTypes
{
    

    NSMutableArray *configArgs = [[NSMutableArray alloc] init];
    [configArgs addObject:target];
    [configArgs addObject:selName];
   
    
    NSInteger count = 2;
    NSString *argumentOperationType;
    
    NSMutableArray *structStorer = [[NSMutableArray alloc] init];
    for (id currentObject = firstObject; currentObject != nil; currentObject = va_arg(argumentList, id)) {
        
        argumentOperationType = argumentOperationTypes[count];
       
        if ([argumentOperationType isEqualToString:@"NSObject"]) {
            [configArgs addObject:currentObject];
        }
#ifndef ml_chain_make_struct
#define ml_chain_make_struct(TYPE, STRUCTSTORER, CURRENTOBJECT, CONFIGARGS, MAXCOUNT)     [STRUCTSTORER addObject:CURRENTOBJECT];\
        if (STRUCTSTORER.count >= MAXCOUNT) {\
            CURRENTOBJECT = ml_chain_MASBoxValue(ml_c_struct_value_in_array_of(TYPE, STRUCTSTORER));\
            [STRUCTSTORER removeAllObjects];\
            [CONFIGARGS addObject:CURRENTOBJECT];\
        }
#endif
        
        else if ([argumentOperationType isEqualToString:@"CGPoint"]){
            ml_chain_make_struct(CGPoint, structStorer, currentObject, configArgs, 2);
            
        } else if ([argumentOperationType isEqualToString:@"CGSize"]){
            ml_chain_make_struct(CGSize, structStorer, currentObject, configArgs, 2);
        }else if ([argumentOperationType isEqualToString:@"CGRect"]){
            
            ml_chain_make_struct(CGRect, structStorer, currentObject, configArgs, 4);
        }
        else if ([argumentOperationType isEqualToString:@"CGVector"]){
            
            ml_chain_make_struct(CGVector, structStorer, currentObject, configArgs, 2);
        }
        else if ([argumentOperationType isEqualToString:@"CGAffineTransform"]){
            
              ml_chain_make_struct(CGAffineTransform, structStorer, currentObject, configArgs, 6);
        }
        else if ([argumentOperationType isEqualToString:@"CATransform3D"]){
            [configArgs addObject:currentObject];
        }
        else if ([argumentOperationType isEqualToString:@"NSRange"]){
            
            ml_chain_make_struct(NSRange, structStorer, currentObject, configArgs, 2);
        }
        else if ([argumentOperationType isEqualToString:@"UIOffset"]){
            
            ml_chain_make_struct(UIOffset, structStorer, currentObject, configArgs, 2);
        }
        else if ([argumentOperationType isEqualToString:@"UIEdgeInsets"]){
            
            ml_chain_make_struct(UIEdgeInsets, structStorer, currentObject, configArgs, 4);
        }
        
       
      count++;
        if (count >= argumentOperationTypes.count) {
            break;
        }
        
    }
    
    
    return configArgs;
}


+ (NSArray *)argumentTypesWithTarget:(id)target selectorName: (NSString *)selectorName
{
    SEL selector = NSSelectorFromString(selectorName);
    NSMethodSignature *methodSig = [target methodSignatureForSelector:selector];
    NSInteger argCount = [methodSig numberOfArguments];
    if (!methodSig) {
        
    }

    
#ifndef ml_chain_argumentsTypeCount
#define  ml_chain_argumentsTypeCount(MUTARR, TYPE, COUNT) for (NSInteger i = 0; i < COUNT; i++) {\
     [MUTARR addObject:[NSString stringWithUTF8String:#TYPE]];\
}
#endif
    NSMutableArray *argumentOperationTypes = [[NSMutableArray alloc] init];
    for (NSInteger i = 0 ; i < argCount; i++){
        char *argumentType = (char *)[methodSig getArgumentTypeAtIndex:i];
        switch (*argumentType) {
            case '{':
            {
  
                if (strcmp(argumentType, @encode(CGPoint)) == 0) {
       
                    ml_chain_argumentsTypeCount(argumentOperationTypes, CGPoint, 2);
                    
                } else if (strcmp(argumentType, @encode(CGSize)) == 0) {
         
                      ml_chain_argumentsTypeCount(argumentOperationTypes, CGSize, 2);
                } else if (strcmp(argumentType, @encode(CGRect)) == 0) {
    
                      ml_chain_argumentsTypeCount(argumentOperationTypes, CGRect, 4);
                    
                } else if (strcmp(argumentType, @encode(CGVector)) == 0) {
        
                    ml_chain_argumentsTypeCount(argumentOperationTypes, CGVector, 2);
                } else if (strcmp(argumentType, @encode(CGAffineTransform)) == 0) {
                      ml_chain_argumentsTypeCount(argumentOperationTypes, CGAffineTransform, 6);
                }else if (strcmp(argumentType, @encode(CATransform3D)) == 0) {
                   ml_chain_argumentsTypeCount(argumentOperationTypes, CATransform3D, 1);
                  
                  }else if (strcmp(argumentType, @encode(NSRange)) == 0) {
                      ml_chain_argumentsTypeCount(argumentOperationTypes, NSRange, 2);
                  } else if (strcmp(argumentType, @encode(UIOffset)) == 0) {
                        ml_chain_argumentsTypeCount(argumentOperationTypes, UIOffset, 2);
                  } else if (strcmp(argumentType, @encode(UIEdgeInsets)) == 0) {
                        ml_chain_argumentsTypeCount(argumentOperationTypes, UIEdgeInsets, 4);
                  }
            }
                break;
                
            default:{
                 [argumentOperationTypes addObject:@"NSObject"];
            }
                break;
        }

       
        
    }
    
    return argumentOperationTypes;
}

#pragma mark - ========= 执行 =========
+ (void)excuteSettingWith:(NSMethodSignature *)methodSignature configArguments:(NSArray *)configArguments
{
      NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
       NSUInteger count = [methodSignature numberOfArguments];
    for (NSInteger i = 0; i < count; i++) {
     
            char *type = (char *)[methodSignature getArgumentTypeAtIndex:i];
            while (*type == 'r' || // const
                   *type == 'n' || // in
                   *type == 'N' || // inout
                   *type == 'o' || // out
                   *type == 'O' || // bycopy
                   *type == 'R' || // byref
                   *type == 'V') { // oneway
                type++; // cutoff useless prefix
        }
            
            BOOL unsupportedType = NO;
            switch (*type) {
                case 'v': // 1: void
                case 'B': // 1: bool
                case 'c': // 1: char / BOOL
                case 'C': // 1: unsigned char
                case 's': // 2: short
                case 'S': // 2: unsigned short
                case 'i': // 4: int / NSInteger(32bit)
                case 'I': // 4: unsigned int / NSUInteger(32bit)
                case 'l': // 4: long(32bit)
                case 'L': // 4: unsigned long(32bit)
                { // 'char' and 'short' will be promoted to 'int'.
                    int arg = [configArguments[i] intValue];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case 'q': // 8: long long / long(64bit) / NSInteger(64bit)
                case 'Q': // 8: unsigned long long / unsigned long(64bit) / NSUInteger(64bit)
                {
                    
                    long long arg = [configArguments[i] longLongValue];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case 'f': // 4: float / CGFloat(32bit)
                { // 'float' will be promoted to 'double'.
                    double arg = [configArguments[i] doubleValue];
                    [invocation setArgument:&arg atIndex:i];
                }
                    
                case 'd': // 8: double / CGFloat(64bit)
                {
                    double arg = [configArguments[i] doubleValue];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case 'D': // 16: long double
                {
                    
                    long double  arg = [configArguments[i] longLongValue];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case '*': // char *
                case '^': // pointer
                {
                id pointerObject = configArguments[i];
                if (strcmp(type, @encode(CGColorRef)) == 0) {
                    CGColorRef arg = [pointerObject CGColor];
                    [invocation setArgument:&arg atIndex:i];
                    
                }else
                    {
                    void *arg = [pointerObject pointerValue];
                    
                    [invocation setArgument:&arg atIndex:i];
                    }
                
                
                } break;
                    
                case ':': // SEL
                {
                    SEL arg = NSSelectorFromString(configArguments[i]);
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case '#': // Class
                {
                    Class arg = [configArguments[i] class];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case '@': // id
                {
                    id arg = configArguments[i];
                    [invocation setArgument:&arg atIndex:i];
                } break;
                    
                case '{': // struct
                {   id structObj = configArguments[i];
                    if (strcmp(type, @encode(CGPoint)) == 0) {
                        CGPoint arg = [structObj CGPointValue];
                        [invocation setArgument:&arg atIndex:i];
                        
                    } else if (strcmp(type, @encode(CGSize)) == 0) {
                        CGSize arg = [structObj CGSizeValue];
                        [invocation setArgument:&arg atIndex:i];
                    } else if (strcmp(type, @encode(CGRect)) == 0) {
                        CGRect arg = [structObj CGRectValue];
                        [invocation setArgument:&arg atIndex:i];
                    } else if (strcmp(type, @encode(CGVector)) == 0) {
                        CGVector arg = [structObj CGVectorValue];
                        [invocation setArgument:&arg atIndex:i];
                    } else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
                        CGAffineTransform arg = [structObj CGAffineTransformValue];
                        [invocation setArgument:&arg atIndex:i];
                    } else if (strcmp(type, @encode(CATransform3D)) == 0) {
                        CATransform3D arg = [structObj CATransform3DValue];
                        [invocation setArgument:&arg atIndex:i];
                      
                      } else if (strcmp(type, @encode(NSRange)) == 0) {
                          NSRange arg = [structObj rangeValue];
                          [invocation setArgument:&arg atIndex:i];
                          
                      } else if (strcmp(type, @encode(UIOffset)) == 0) {
                          UIOffset arg = [structObj UIOffsetValue];
                          [invocation setArgument:&arg atIndex:i];
                          
                      } else if (strcmp(type, @encode(UIEdgeInsets)) == 0) {
                          UIEdgeInsets arg = [structObj UIEdgeInsetsValue];
                          [invocation setArgument:&arg atIndex:i];
                      }
                }
                    break;
            
        case '(': // union
            {
                unsupportedType = YES;
            } break;
            
        case '[': // array
            {
                unsupportedType = YES;
            } break;
            
        default: // what?!
            {
                unsupportedType = YES;
            } break;
        }
        
        if (unsupportedType) {
            // Try with some dummy type...
            
            NSUInteger size = 0;
            NSGetSizeAndAlignment(type, &size, NULL);
            
        }
    }
    
  
 
        
        [invocation invoke];

    


}
#pragma mark - ========= Helper =========
+ (SEL)setterSelectorWithGetterNameChar:(char *)getterNameChar
{
    return [self setterSelectorWithGetterNameString:[NSString stringWithUTF8String:getterNameChar]];
}
+ (SEL)setterSelectorWithGetterNameString:(NSString *)getterNameString
{
    NSString *upcaseGetterFirstLetter = [[getterNameString substringToIndex:1].uppercaseString stringByAppendingString:[getterNameString substringFromIndex:1]];
    NSMutableString *setterNameString = [NSMutableString stringWithFormat:@"set%@:", upcaseGetterFirstLetter];
 
    return NSSelectorFromString(setterNameString);
}
+ (NSString *)tryToFixSelNameWithTarget:(id)target selectorName:(NSString *)selectorName
{
    return nil;
}
id getObjectFromVarlistAtIndex(va_list list, id firstObject, NSInteger index)
{
    NSInteger count = 0;
    for (id currentObj = firstObject; currentObj != nil; currentObj = va_arg(list, id)) {
       
        if (count == index) {
            return currentObj;
        }
        count++;
    }
    return nil;
}
id ChainObjectOfChainMaker(id maker, Class class)
{
    NSString *chainObjectName = ChainObjectNameOfClass([class class]);
    id chainObject = [maker valueForKey:chainObjectName];
    return chainObject;
    
}


    NSString * ChainObjectNameOfClass(Class class)
{
    NSString *chainObjectName =  (NSString *)^(Class class){
        NSArray *suppurtClassPrefix = @[@"NS", @"UI", @"CA"];
        NSString *resultStr;
        NSString *classNameStr = NSStringFromClass(class);
        for (NSString *prefix in suppurtClassPrefix) {
            if ([classNameStr hasPrefix:prefix]) {
                resultStr = [classNameStr stringByReplacingOccurrencesOfString:prefix withString:@""];
                resultStr = [[[resultStr substringToIndex:1] lowercaseString] stringByAppendingString:[resultStr substringFromIndex:1]];
            }
        }
        if (!resultStr) {
        
        }
        NSLog(@"%@", resultStr);
        return resultStr;
    }(class);
    return chainObjectName;
}
@end
