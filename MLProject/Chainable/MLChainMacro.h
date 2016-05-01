//
//  MLChainMacro.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/3.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#ifndef MLChainMacro_h
#define MLChainMacro_h
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+ChainInvocation.h"

//从Mansonry得来
static inline id _ml_chain_MASBoxValue(const char *type, ...) {
    va_list v;
    va_start(v, type);
    id obj = nil;
    if (strcmp(type, @encode(id)) == 0) {
        id actual = va_arg(v, id);
        obj = actual;
    } else if (strcmp(type, @encode(CGPoint)) == 0) {
        CGPoint actual = (CGPoint)va_arg(v, CGPoint);
        obj = [NSValue value:&actual withObjCType:type];
    } else if (strcmp(type, @encode(CGSize)) == 0) {
        CGSize actual = (CGSize)va_arg(v, CGSize);
        obj = [NSValue value:&actual withObjCType:type];
    }else if (strcmp(type, @encode(CGRect)) == 0) {
        CGRect actual = (CGRect)va_arg(v, CGRect);
        obj = [NSValue value:&actual withObjCType:type];
    }else if (strcmp(type, @encode(UIEdgeInsets)) == 0) {
        UIEdgeInsets actual = (UIEdgeInsets)va_arg(v, UIEdgeInsets);
        obj = [NSValue value:&actual withObjCType:type];
    } else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
        CGAffineTransform actual = (CGAffineTransform)va_arg(v, CGAffineTransform);
        obj = [NSValue value:&actual withObjCType:type];
    }else if (strcmp(type, @encode(CATransform3D)) == 0) {
        CATransform3D actual = (CATransform3D)va_arg(v, CATransform3D);
        obj = [NSValue value:&actual withObjCType:type];
    }else if (strcmp(type, @encode(double)) == 0) {
        double actual = (double)va_arg(v, double);
        obj = [NSNumber numberWithDouble:actual];
    } else if (strcmp(type, @encode(float)) == 0) {
        float actual = (float)va_arg(v, double);
        obj = [NSNumber numberWithFloat:actual];
    } else if (strcmp(type, @encode(int)) == 0) {
        int actual = (int)va_arg(v, int);
        obj = [NSNumber numberWithInt:actual];
    } else if (strcmp(type, @encode(long)) == 0) {
        long actual = (long)va_arg(v, long);
        obj = [NSNumber numberWithLong:actual];
    } else if (strcmp(type, @encode(long long)) == 0) {
        long long actual = (long long)va_arg(v, long long);
        obj = [NSNumber numberWithLongLong:actual];
    } else if (strcmp(type, @encode(short)) == 0) {
        short actual = (short)va_arg(v, int);
        obj = [NSNumber numberWithShort:actual];
    } else if (strcmp(type, @encode(char)) == 0) {
        char actual = (char)va_arg(v, int);
        obj = [NSNumber numberWithChar:actual];
    } else if (strcmp(type, @encode(bool)) == 0) {
        bool actual = (bool)va_arg(v, int);
        obj = [NSNumber numberWithBool:actual];
    } else if (strcmp(type, @encode(unsigned char)) == 0) {
        unsigned char actual = (unsigned char)va_arg(v, unsigned int);
        obj = [NSNumber numberWithUnsignedChar:actual];
    } else if (strcmp(type, @encode(unsigned int)) == 0) {
        unsigned int actual = (unsigned int)va_arg(v, unsigned int);
        obj = [NSNumber numberWithUnsignedInt:actual];
    } else if (strcmp(type, @encode(unsigned long)) == 0) {
        unsigned long actual = (unsigned long)va_arg(v, unsigned long);
        obj = [NSNumber numberWithUnsignedLong:actual];
    } else if (strcmp(type, @encode(unsigned long long)) == 0) {
        unsigned long long actual = (unsigned long long)va_arg(v, unsigned long long);
        obj = [NSNumber numberWithUnsignedLongLong:actual];
    } else if (strcmp(type, @encode(unsigned short)) == 0) {
        unsigned short actual = (unsigned short)va_arg(v, unsigned int);
        obj = [NSNumber numberWithUnsignedShort:actual];
    }
    va_end(v);
    return obj;
}

#define ml_chain_MASBoxValue(value) _ml_chain_MASBoxValue(@encode(__typeof__((value))), (value))


#define ml_concat(...) metamacro_concat(ml_concat, metamacro_argcount(__VA_ARGS__))(__VA_ARGS__)
#define ml_concat2(A, B) metamacro_concat(A , B)
#define ml_concat3(A, B, C) metamacro_concat(ml_concat2(A, B), C)
#define ml_concat4(A, B, C, D) metamacro_concat(ml_concat3(A, B, C), D)
#define ml_concat5(A, B, C, D, E) metamacro_concat(ml_concat4(A, B, C, D), E)



#define ml_chain_arg(PROPERTY, ...) ml_chain_arg_(PROPERTY, __VA_ARGS__)
#define ml_chain_arg_(PROPERTY, ...) ml_concat(ml_chain_arg_, metamacro_argcount(__VA_ARGS__), value)(PROPERTY, __VA_ARGS__)

#define ml_chain_arg_1value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__))
#define ml_chain_arg_2value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__), ml_to_obj_at_1(__VA_ARGS__))
#define ml_chain_arg_3value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__), ml_to_obj_at_1(__VA_ARGS__), ml_to_obj_at_2(__VA_ARGS__))
#define ml_chain_arg_4value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__), ml_to_obj_at_1(__VA_ARGS__), ml_to_obj_at_2(__VA_ARGS__), ml_to_obj_at_3(__VA_ARGS__))
#define ml_chain_arg_5value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__), ml_to_obj_at_1(__VA_ARGS__), ml_to_obj_at_2(__VA_ARGS__), ml_to_obj_at_3(__VA_ARGS__), ml_to_obj_at_4(__VA_ARGS__))
#define ml_chain_arg_6value(PROPERTY, ...) PROPERTY(ml_to_obj_at_0(__VA_ARGS__), ml_to_obj_at_1(__VA_ARGS__), ml_to_obj_at_2(__VA_ARGS__), ml_to_obj_at_3(__VA_ARGS__), ml_to_obj_at_4(__VA_ARGS__), ml_to_obj_at_5(__VA_ARGS__))

#define ml_to_obj_at_0(...) ml_chain_MASBoxValue(metamacro_at0(__VA_ARGS__))
#define ml_to_obj_at_1(...) ml_chain_MASBoxValue(metamacro_at1(__VA_ARGS__))
#define ml_to_obj_at_2(...) ml_chain_MASBoxValue(metamacro_at2(__VA_ARGS__))
#define ml_to_obj_at_3(...) ml_chain_MASBoxValue(metamacro_at3(__VA_ARGS__))
#define ml_to_obj_at_4(...) ml_chain_MASBoxValue(metamacro_at4(__VA_ARGS__))
#define ml_to_obj_at_5(...) ml_chain_MASBoxValue(metamacro_at5(__VA_ARGS__))



//block声明 在链对类的h文件声明
#define ml_chain_block_maker(CLASS) @class ml_concat(MLChain4, CLASS);\
typedef ml_concat(MLChain4, CLASS)* (^ml_concat(MLChainParamBlock4, CLASS))(id object, ...)

//block实现 自动setter方法 在链式类的m文件声明
#define ml_chain_block_implementation_default(CLASS, PROPERTY) - (ml_concat(MLChain4, CLASS, ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(MLChain4, CLASS) *(id firstObject, ...){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
SEL SELECTOR = ml_chain_default_setter_with_getter(PROPERTY);\
NSString *selectorName = NSStringFromSelector(SELECTOR);\
id chainObject = [strongSelf objectOfChainMaker];\
va_list arglist;\
va_start(arglist, firstObject);\
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selectorName arglist:arglist firstObject:firstObject];\
va_end(arglist);\
[NSObject excuteSettingWithTarget:chainObject selectorName:selectorName configArguments:arguments];\
return weakSelf;\
};\
}

//block实现 在链式类的m文件声明 自己配置selector
#define ml_chain_block_implementation(CLASS, PROPERTY, SELECTOR) - (ml_concat(MLChainParamBlock4, CLASS))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(MLChain4, CLASS) *(id firstObject, ...){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(SELECTOR);\
id chainObject = [strongSelf objectOfChainMaker];\
va_list arglist;\
va_start(arglist, firstObject);\
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selectorName arglist:arglist firstObject:firstObject];\
va_end(arglist);\
[NSObject excuteSettingWithTarget:chainObject selectorName:selectorName configArguments:arguments];\
return weakSelf;\
};\
}



//在category声明方法
#define ml_chain_category_method_declear(CLASS) NS_ASSUME_NONNULL_BEGIN\
+ (ml_concat(MLChain4, CLASS) *)ml_make;\
- (ml_concat(MLChain4, CLASS) *)ml_make;\
- (ml_concat(MLChain4, CLASS) *)ml_makeConfigs:(void(^)(ml_concat(MLChain4, CLASS) * make))block;\
NS_ASSUME_NONNULL_END

//获取默认setter的selector
#define ml_chain_default_setter_with_getter(PROPERTY) [NSObject setterSelectorWithGetterNameChar:#PROPERTY]

#endif /* MLChainMacro_h */
