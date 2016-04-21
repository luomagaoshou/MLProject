//
//  NSObject+ChainInvocation.m
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainInvocation.h"
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
+ (NSArray *)argumentsWithTarget:(id)target selectorName:(NSString *)selectorName arglist:(va_list)arglist firstObject:(id)firstObject
{
    NSMethodSignature *methodSig = [target methodSignatureForSelector:NSSelectorFromString(selectorName)];
    NSMutableArray *arguments = [[NSMutableArray alloc] init];
    [arguments addObject:target];
    [arguments addObject:selectorName];
    NSInteger count = 2;
    for (id currentObject = firstObject; currentObject != nil; currentObject = va_arg(arglist, id)){
        [arguments addObject:currentObject];
        count++;
        if (count >= methodSig.numberOfArguments) {
            break;
        }
    }
    return arguments;
}
+ (void)excuteSettingWithTarget:(id)target selectorName:(NSString *)selectorName configArguments:(NSArray *)configArguments
{
   
    
    NSMethodSignature *methodSignature = [target methodSignatureForSelector:NSSelectorFromString(selectorName)];
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
    NSUInteger count = [methodSignature numberOfArguments];
    for (NSInteger i = 0; i < count; i++) {
        if ([selectorName containsString:@"hadowOpacity"] && i >= 2) {
            
        }
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
                float arg = [configArguments[i] floatValue];
                [invocation setArgument:&arg atIndex:i];
            }
                break;
 
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
    
    
//     ((void (*)(id, SEL, id))objc_msgSend)((id)configArguments[0], NSSelectorFromString(configArguments[1]), configArguments[0]);
    
    
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
Class ChainObjectClassOfChainMaker(id maker)
{
    NSMutableString *makerClassString = [NSStringFromClass([maker class]) mutableCopy];
    [makerClassString replaceOccurrencesOfString:@"ML_" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, makerClassString.length)];
       [makerClassString replaceOccurrencesOfString:@"Chain" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, makerClassString.length)];
    return NSClassFromString(makerClassString);
}

    NSString * ChainObjectNameOfClass(Class class)
{

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
   
         NSException *exception = [NSException exceptionWithName:@"NilClass" reason:@"不支持该类，目前只支持系统类" userInfo:nil];
            @throw exception;
            
        }
        NSLog(@"%@", resultStr);
        return resultStr;

}
@end
