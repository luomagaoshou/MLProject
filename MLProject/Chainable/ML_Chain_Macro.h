//
//  ML_Chain_Macro.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/3.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#ifndef ML_Chain_Macro_h
#define ML_Chain_Macro_h
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "ML_NSOjbectChain.h"
#import "NSObject+ML_NSOjbectChain.h"
#import "NSObject+ChainInvocation.h"
#import <Masonry/Masonry.h>
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
    } else if (strcmp(type, @encode(double)) == 0) {
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





#define ml_to_obj_at_0(...) ml_chain_MASBoxValue(metamacro_at0(__VA_ARGS__))
#define ml_to_obj_at_1(...) ml_chain_MASBoxValue(metamacro_at1(__VA_ARGS__))
#define ml_to_obj_at_2(...) ml_chain_MASBoxValue(metamacro_at2(__VA_ARGS__))
#define ml_to_obj_at_3(...) ml_chain_MASBoxValue(metamacro_at3(__VA_ARGS__))
#define ml_to_obj_at_4(...) ml_chain_MASBoxValue(metamacro_at4(__VA_ARGS__))
#define ml_to_obj_at_5(...) ml_chain_MASBoxValue(metamacro_at5(__VA_ARGS__))




//
#define ml_c_struct_value_in_array_of(TYPE, ARRAY) ml_c_struct_value_in_array_of_(TYPE, ARRAY)

#define ml_c_struct_value_in_array_of_(TYPE, ARRAY) metamacro_concat(ml_c_struct_value_in_array_of_, TYPE)(ARRAY)
//CGPiont
#define ml_c_struct_value_in_array_of_CGPoint(ARRAY) CGPointMake([ARRAY[0] floatValue], [ARRAY[1] floatValue])
//CGize
#define ml_c_struct_value_in_array_of_CGSize(ARRAY) CGSizeMake([ARRAY[0] floatValue], [ARRAY[1] floatValue])
//CGRect
#define ml_c_struct_value_in_array_of_CGRect(ARRAY) CGRectMake([ARRAY[0] floatValue], [ARRAY[1] floatValue], [ARRAY[2] floatValue], [ARRAY[3] floatValue])
//CGVector
#define ml_c_struct_value_in_array_of_CGVector(ARRAY) CGVectorMake([ARRAY[0] floatValue], [ARRAY[1] floatValue])
//CGAffineTransform
#define ml_c_struct_value_in_array_of_CGAffineTransform(ARRAY) CGAffineTransformMake([ARRAY[0] floatValue], [ARRAY[1] floatValue], [ARRAY[2] floatValue], [ARRAY[3] floatValue], [ARRAY[4] floatValue], [ARRAY[5] floatValue])
//NSRange
#define ml_c_struct_value_in_array_of_NSRange(ARRAY) NSMakeRange([ARRAY[0] floatValue], [ARRAY[1] floatValue])
//UIOffset
#define ml_c_struct_value_in_array_of_UIOffset(ARRAY) UIOffsetMake([ARRAY[0] floatValue], [ARRAY[1] floatValue])
//UIEdgeInsets
#define ml_c_struct_value_in_array_of_UIEdgeInsets(ARRAY) UIEdgeInsetsMake([ARRAY[0] floatValue], [ARRAY[1] floatValue], [ARRAY[2] floatValue], [ARRAY[3] floatValue])



#define get_selector_number_of_argument(TARGET, SELECTOER)    ^ (id target, SEL selector){\
NSMethodSignature *sig = [target methodSignatureForSelector:selector];\
NSInteger numberOfArguments = [sig numberOfArguments];\
return numberOfArguments;\
}(TARGET ,SELECTOER)



//block声明 在链对类的h文件声明
#define ml_chain_block_maker(CLASS) @class ml_concat(ML_, CLASS, Chain);\
typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, ParamBlock))(id object, ...)
//block实现 默认setter方法 在链式类的m文件声明
#define ml_chain_default_setter_with_getter(PROPERTY) [NSObject setterSelectorWithGetterNameChar:#PROPERTY]
#define ml_chain_block_implementation_default(CLASS, PROPERTY) ml_chain_block_implementation(CLASS, PROPERTY, ml_chain_default_setter_with_getter(PROPERTY))

//block实现 在链式类的m文件声明
#define ml_chain_block_implementation(CLASS, PROPERTY, SELECTOR) - (ml_concat(ML_, CLASS, ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id firstObject, ...){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(SELECTOR);\
id chainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
NSArray *argumentTypes = [NSObject argumentTypesWithTarget:chainObject selectorName:selectorName];\
va_list arglist;\
va_start(arglist, firstObject);\
NSArray *argments = [NSObject pullArgumentsWithArgumentList:arglist firstObject:firstObject target:chainObject selName:selectorName argumentOperationTypes:argumentTypes];\
va_end(arglist);\
NSMethodSignature *sig = [chainObject methodSignatureForSelector:SELECTOR];\
[NSObject excuteSettingWith:sig configArguments:argments];\
return weakSelf;\
};\
}

//在category声明方法
#define ml_chain_category_method_declear(CLASS) + (ml_concat(ML_, CLASS, Chain) *) ml_make;\
- (ml_concat(ML_, CLASS, Chain) *)ml_make;\
- (ml_concat(ML_, CLASS, Chain) *)ml_makeConfigs:(void(^)(ml_concat(ML_, CLASS, Chain) * make))block

#endif /* ML_Chain_Macro_h */
