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
#import <Masonry/Masonry.h>

#define ml_concat(...) metamacro_concat(ml_concat, metamacro_argcount(__VA_ARGS__))(__VA_ARGS__)
#define ml_concat2(A, B) metamacro_concat(A , B)
#define ml_concat3(A, B, C) metamacro_concat(ml_concat2(A, B), C)
#define ml_concat4(A, B, C, D) metamacro_concat(ml_concat3(A, B, C), D)
#define ml_concat5(A, B, C, D, E) metamacro_concat(ml_concat4(A, B, C, D), E)

//ARRAY
#define IDARRAY(...) (id []){ __VA_ARGS__ }
#define IDCOUNT(...) (sizeof(IDARRAY(__VA_ARGS__)) / sizeof(id))
#define ARRAY(...) [NSArray arrayWithObjects: IDARRAY(__VA_ARGS__) count: IDCOUNT(__VA_ARGS__)]

//Block_make
#define ml_chain_block_make_all(CLASS) @class ml_concat(ML_, CLASS, Chain);\
ml_chain_block_make_1Param(CLASS);\
ml_chain_block_make_2Param(CLASS);\
ml_chain_block_make_3Param(CLASS);\
ml_chain_block_make_4Param(CLASS);\
ml_chain_block_make_5Param(CLASS);\
ml_chain_block_make_6Param(CLASS)

#define ml_chain_block_make(CLASS, NUMBER) ml_chain_block_make_(CLASS, NUMBER)
#define ml_chain_block_make_(CLASS, NUMBER) ml_concat(ml_chain_block_make_, NUMBER, Param)(CLASS)

#define ml_chain_block_make_1Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 1ParamBlock))(id object)
#define ml_chain_block_make_2Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 2ParamBlock))(id param1, id param2)
#define ml_chain_block_make_3Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 3ParamBlock))(id param1, id param2, id param3)
#define ml_chain_block_make_4Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 4ParamBlock))(id param1, id param2, id param3,  id param4)
#define ml_chain_block_make_5Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 5ParamBlock))(id param1, id param2, id param3,  id param4, id param5)
#define ml_chain_block_make_6Param(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, 6ParamBlock))(id param1, id param2, id param3,  id param4, id param5, id param6)

#define ml_to_obj_at_0(...) MASBoxValue(metamacro_at0(__VA_ARGS__))
#define ml_to_obj_at_1(...) MASBoxValue(metamacro_at1(__VA_ARGS__))
#define ml_to_obj_at_2(...) MASBoxValue(metamacro_at2(__VA_ARGS__))
#define ml_to_obj_at_3(...) MASBoxValue(metamacro_at3(__VA_ARGS__))
#define ml_to_obj_at_4(...) MASBoxValue(metamacro_at4(__VA_ARGS__))
#define ml_to_obj_at_5(...) MASBoxValue(metamacro_at5(__VA_ARGS__))


//ml_chain_implementation
#define ml_chain_implementation(NUMBEROFARGUMENT, CLASS,  PROPERTY, SELECTOR , ...) ml_chain_implementation_(NUMBEROFARGUMENT, CLASS,  PROPERTY, SELECTOR,  __VA_ARGS__)
#define ml_chain_implementation_(NUMBEROFARGUMENT, CLASS,  PROPERTY, SELECTOR, ...) ml_concat(ml_chain_implementation_, NUMBEROFARGUMENT, Param)(CLASS,  PROPERTY, __VA_ARGS__) )



#define ml_chain_implementation_1Param(CLASS, PROPERTY, SELECTOR, ...) - (ml_concat(ML_, CLASS, 1ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id param1){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
id ChainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
[NSObject invocationForArguments:ChainObject, NSStringFromSelector(SELECTOR), param1];\
return weakSelf;\
};\
}

#define ml_chain_implementation_2Param(CLASS, PROPERTY, SELECTOR, ...) - (ml_concat(ML_, CLASS, 2ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id param1, id param2){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
id ChainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
[NSObject invocationForArguments:ChainObject, NSStringFromSelector(SELECTOR), param1, param2];\
return weakSelf;\
};\
}

#define ml_chain_implementation_3Param(CLASS, PROPERTY, SELECTOR, ...) - (ml_concat(ML_, CLASS, 3ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id param1, id param2, id param3){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
id ChainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
[NSObject invocationForArguments:ChainObject, NSStringFromSelector(SELECTOR), param1, param2, param3, ];\
return weakSelf;\
};\
}

#define ml_chain_implementation_4Param(CLASS, PROPERTY, SELECTOR, ...) - (ml_concat(ML_, CLASS, 4ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id param1, id param2, id param3, id param4){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
id ChainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
[NSObject invocationForArguments:ChainObject, NSStringFromSelector(SELECTOR), param1, param2, param3, param4];\
return weakSelf;\
};\
}




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

#define ml_chain_block_maker(CLASS) typedef ml_concat(ML_, CLASS, Chain)* (^ml_concat(ML_, CLASS, ParamBlock))(id object, ...)

#define ml_chain_block_implementation(CLASS, PROPERTY, SELECTOR) - (ml_concat(ML_, CLASS, ParamBlock))PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^ml_concat(ML_, CLASS, Chain) *(id firstObject, ...){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(SELECTOR);\
id chainObject = ChainObjectOfChainMaker(strongSelf, [CLASS class]);\
NSArray *argumentTypes = [NSObject argumentTypesWithTarget:chainObject selectorName:selectorName];\
va_list arglist;\
va_start(arglist, firstObject);\
NSArray *argments = [NSObject pullArgumentsWithArgumentList:arglist firstObject:firstObject target:strongSelf.view selName:selectorName argumentOperationTypes:argumentTypes];\
va_end(arglist);\
NSMethodSignature *sig = [chainObject methodSignatureForSelector:SELECTOR];\
[NSObject excuteSettingWith:sig configArguments:argments];\
return weakSelf;\
};\
}

#define ml_chain_category_method_declear(CLASS) + (ml_concat(ML_, CLASS, Chain) *) ml_make;\
- (ml_concat(ML_, CLASS, Chain) *)ml_make;\
- (ml_concat(ML_, CLASS, Chain) *)ml_makeConfigs:(void(^)(ml_concat(ML_, CLASS, Chain) * make))block

#endif /* ML_Chain_Macro_h */
