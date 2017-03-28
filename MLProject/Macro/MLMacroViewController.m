//
//  MLMacroViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/10/25.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#define FORCETYPE(x, type) *(type *)(__typeof__(x) []){ x }

#define STRINGIFY(x) \
__builtin_choose_expr( \
__builtin_types_compatible_p(__typeof__(x), CGRect), \
NSStringFromCGRect(FORCETYPE(x, CGRect)), \
\
__builtin_choose_expr( \
__builtin_types_compatible_p(__typeof__(x), CGSize), \
NSStringFromCGSize(FORCETYPE(x, CGSize)), \
\
__builtin_choose_expr( \
__builtin_types_compatible_p(__typeof__(x), CGPoint), \
NSStringFromCGPoint(FORCETYPE(x, CGPoint)), \
\
__builtin_choose_expr( \
__builtin_types_compatible_p(__typeof__(x), SEL), \
NSStringFromSelector(FORCETYPE(x, SEL)), \
\
__builtin_choose_expr( \
__builtin_types_compatible_p(__typeof__(x), NSRange), \
NSStringFromRange(FORCETYPE(x, NSRange)), \
\
[NSValue valueWithBytes: (__typeof__(x) []){ x } objCType: @encode(__typeof__(x))] \
)))))


#define POINTERIZE(x) ((__typeof__(x) []){ x })

#define BOX(x) [NSValue valueWithBytes: POINTERIZE(x) objCType: @encode(__typeof__(x))]


#define MY_ENUM \
MY_ENUM_MEMBER(kStop) \
MY_ENUM_MEMBER(kGo) \
MY_ENUM_MEMBER(kYield)

// create the actual enum
enum MyEnum {
#define MY_ENUM_MEMBER(x) x,
    MY_ENUM
#undef MY_ENUM_MEMBER
#if 0
    kStop,
    kGo,
    kYield,
#endif
};

// stringification
const char *MyEnumToString(enum MyEnum value)
{
#define MY_ENUM_MEMBER(x) if(value == (x)) return #x;
    MY_ENUM
#undef MY_ENUM_MEMBER
    return "fff";
    
}

// destringification
enum MyEnum MyEnumFromString(const char *str)
{
#define MY_ENUM_MEMBER(x) if(strcmp(str, #x) == 0) return x;
    MY_ENUM
#undef MY_ENUM_MEMBER
    
    // default value
    return -1;
}




#if 0

//http://www.jianshu.com/p/f8a788b72637
//C++实现类似于动态语言中的函数定义的宏


#define SIZE(...) BOOST_PP_TUPLE_SIZE((__VA_ARGS__))

#define _CAT(a, b) a##b
#define CAT(a, b) _CAT(a, b)

#define _STRING(a) #a
#define STRING(a) _STRING(a)

#define OP_HEAD(d, state, x) \
(BOOST_PP_SUB(BOOST_PP_TUPLE_ELEM(2, 0, state), 1), \
BOOST_PP_LIST_CONS(typename CAT(_, BOOST_PP_TUPLE_ELEM(2, 0, state)), BOOST_PP_TUPLE_ELEM(2, 1, state)))

#define OP_BODY(d, state, x) \
(BOOST_PP_SUB(BOOST_PP_TUPLE_ELEM(2, 0, state), 1), \
BOOST_PP_LIST_CONS(CAT(_, BOOST_PP_TUPLE_ELEM(2, 0, state)) x, BOOST_PP_TUPLE_ELEM(2, 1, state)))

#define FUN_HEAD(...) \
template<BOOST_PP_REMOVE_PARENS( \
BOOST_PP_LIST_TO_TUPLE( \
BOOST_PP_TUPLE_ELEM(2, 1, \
BOOST_PP_LIST_FOLD_RIGHT(OP_HEAD, (SIZE(__VA_ARGS__), BOOST_PP_LIST_NIL), \
BOOST_PP_TUPLE_TO_LIST((__VA_ARGS__))))))>

#define FUN_BODY(...) \
BOOST_PP_LIST_TO_TUPLE( \
BOOST_PP_TUPLE_ELEM(2, 1, \
BOOST_PP_LIST_FOLD_RIGHT(OP_BODY, (SIZE(__VA_ARGS__), BOOST_PP_LIST_NIL), \
BOOST_PP_TUPLE_TO_LIST((__VA_ARGS__)))))

#define FUN(f, ...) \
FUN_HEAD(__VA_ARGS__) auto f FUN_BODY(__VA_ARGS__)
#endif
#import "MLMacroViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACmetamacros.h>



@interface MLMacroViewController ()

@end

@implementation MLMacroViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========

extern void myPrint(const char *format, ...)__attribute__((format(printf, 1 ,2)));
void test(){
    myPrint("i=%d\n",6);
    myPrint("i=%s\n",6);
    myPrint("i=%s\n","abc");
    myPrint("%s,%d,%d\n",1,2);
}
- (void)configUI
{
    [self test2];
    [self macroTest];

}
- (void)test1{
    CGRect rect = FORCETYPE(CGRectMake(11, 11, 22, 22), CGRect);
    CGSize size =   CGSizeMake(100, 200);
    CGSize *sizes = (__typeof__(size) []){ size };
    id obj2 = STRINGIFY(CGRectMake(22, 22, 44, 44));
    
    
    const char *char3 = MyEnumToString(kStop);
    int enum_ = MyEnumFromString("kGo");
    NSLog(@"%@", @"fff");
}
- (void)test2{
    {
    NSObject *obj = [[NSObject alloc] init];
    NSValue *pointerValue = [NSValue valueWithPointer:(__bridge void *)obj];
        void *p1 = (__bridge void *)obj;
        void *p2 = pointerValue.pointerValue;
        
        NSObject *reverseObj1 = [NSValue value:p1 withObjCType:@encode(id)];
        NSObject *reverseObj2 = (__bridge id)p2;
        
        NSValue *getValue = [[NSValue alloc] init];
        [getValue getValue:p1];
        NSLog(@"%@", @"");
    }
    char type = POINTERIZE(333);
    NSLog(@"POINTERIZE = %c---%@", type, BOX(333));
    
    
    NSValue *value = BOX(UIEdgeInsetsMake(2, 2, 2, 2));
    value = BOX([UIColor redColor].CGColor);
    id value111 = (__bridge id)value.pointerValue;
    NSLog(@"BOX =%@", value);

}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
   
    
}
#define MTest1(...) metamacro_expand_
#define MTest2(...) __VA_ARGS__ metamacro_consume_
#define MTest3(...) MTest4
#define MTest4(...) MTest5
#define MTest5(...) metamacro_expand_


#define MTest_collect_strings(OBJ) MTest_arg_count(OBJ) (metamacro_expand_
#define MTest_collect_get_obj(...) (__VA_ARGS__)

#define MTest_arg_in_bracket(...) (__VA_ARGS__)
#define MTest_arg_in_bracket_(...) __VA_ARGS__

#define MTest_Concat_(A, B) metamacro_concat(A, B)

#define MTest_collect_strings_3(OBJ, ...) 3, OBJ

#define MTest_collect_strings_1(OBJ) 1, OBJ

#define MTest_collect_strings__(OBJ, ...) metamacro_concat(MTest_collect_strings_, __VA_ARGS__)
#define MTest_arg_count(...)   MTest_arg_count_(__VA_ARGS__) metamacro_argcount


#define MTest_arg_count_(...) __VA_ARGS__ metamacro_argcount
#define MTest_arg_count__(...) __VA_ARGS__ 1
#define MTest_arg_count___(...) metamacro_argcount


#define MLConcat metamacro_concat


#define MTest_collect_args_and_count(OBJ, firstConfig, ...)   OBJ MTest_next_expand_arg_at1_(__VA_ARGS__)
#define MTest_next_expand_argcount(...) MTest_next_expand_argcount_(__VA_ARGS__)
#define MTest_next_expand_argcount_(...) metamacro_argcount

#define MTest_next_expand_arg_at1(...) MTest_next_expand_arg_at1_(__VA_ARGS__)
#define MTest_next_expand_arg_at1_(...) metamacro_at1

//计算下一个未拓展宏参数数量
#define argcount_next_expand_macro(...)  metamacro_consume_first_brackets(__VA_ARGS__) argcount_next_expand_macro_
#define argcount_next_expand_macro_(...) metamacro_argcount(__VA_ARGS__)

//消掉第一个括号参数
#define metamacro_consume_first_brackets(...)
//取得第一个括号参数
#define metamacro_get_arg_first_brackets(...) __VA_ARGS__ metamacro_consume_
//取得下一个未拓展宏所有参数
#define get_next_expand_macro_args(...) metamacro_consume_first_brackets(__VA_ARGS__) get_next_expand_macro_args_
#define get_next_expand_macro_args_(...) __VA_ARGS__

//根据序号取下一个未拓展宏的参数
#define get_next_expand_macro_arg_at(N, ...) metamacro_concat(get_next_expand_macro_arg_at, N)


#define get_next_expand_macro_arg_at0(...) metamacro_consume_first_brackets(__VA_ARGS__)metamacro_at0

#define get_next_expand_macro_arg_at2(...) metamacro_consume_first_brackets(__VA_ARGS__) metamacro_at2

#define get_expand_arg_at1(...) metamacro_at(1, get_next_expand_macro_args)

#define MLCSS(...) MLCSS_(__VA_ARGS__, 1, get_next_expand_macro_args(__VA_ARGS__))
//#define MLCSS___(_OBJ_, _CONFIG_COUNT_, ...) MLCSS__(_OBJ_, _CONFIG_COUNT_, __VA_ARGS__)
#define MLCSS_(_OBJ_, _CONFIG_COUNT_, ...) metamacro_concat(MLCSS_, _CONFIG_COUNT_)(_OBJ_, _CONFIG_COUNT_, __VA_ARGS__)

#define MLCSS_0(...)

#define MLCSS_1(_OBJ_, _CONFIG_COUNT_, ...) MLCSS_0(__VA_ARGS__) \
    ml_css_setting(_OBJ_, _CONFIG_COUNT_, 1, __VA_ARGS__)

#define MLCSS_2(_OBJ_, _CONFIG_COUNT_, ...) MLCSS_1(__VA_ARGS__) \
ml_css_setting(_OBJ_, _CONFIG_COUNT_, 2, __VA_ARGS__)


//设置
#define ml_css_setting(_OBJC_, _CONFIG_COUNT_, _INDEX_, ...) ml_css_setting_(_OBJC_,  metamacro_at(_CONFIG_COUNT_ - _INDEX_ + 1, __VA_ARGS__))
#define ml_css_setting_(__OBJ__, ...) __OBJ__.ml_css_append_semicolon


/*
 #define MTest_collect_strings(...) MTest_collect_string_(__VA_ARGS__)
 #define MTest_collect_string_(...)  __VA_ARGS__, MTest_next_expand_argcount(metamacro_expand_)
 #define MTest_next_expand_argcount(...) metamacro_argcount(__VA_ARGS__), metamacro_expand_
 */
//为括号内的设置添加一个分号在结尾









#define ml_css_arg_index(ORDER, ...)  ml_css_arg_index_(ORDER, metamacro_argcount(__VA_ARGS__))
#define ml_css_arg_index_(ORDER, COUNT) metamacro_sub(metamacro_dec(COUNT), ORDER)



#define ml_css_setting(OBJ, COUNT, INDEX, ...)  OBJ.metamacro_at(metamacro_sub(COUNT, INDEX), __VA_ARGS__);

#define ml_css_append_semicolon(...) __VA_ARGS__;



#define ml_css_args_and_count(...) metamacro_argcount(__VA_ARGS__), ml_css_next_expand_arg_at,  ml_css_next_expand_arg_at(__VA_ARGS__)

#define ml_css_next_expand_arg_at(...) ml_css_next_expand_arg_at_(metamacro_expand_)
#define ml_css_next_expand_arg_at_ metamacro_at0

#define ml_css_config_arg(_OBJ_, _CONFIG_COUNT_, ...) ml_css_config_arg_(_OBJ_, _CONFIG_COUNT_ , __VA_ARGS__)

#define ml_css_config_arg_(_OBJ_, _CONFIG_COUNT_, ...) _OBJ_, _CONFIG_COUNT_, __VA_ARGS__


#define A(x) x B
#define B(x) C(x,
#define C(x,y) y x)




#define metamacro_sub0_0(...) 0
#define metamacro_sub0_1(...) 1
#define metamacro_sub0_2(...) 2
#define metamacro_sub0_3(...) 3
#define metamacro_sub0_4(...) 4
#define metamacro_sub0_5(...) 5
#define metamacro_sub0_6(...) 6
#define metamacro_sub0_7(...) 7
#define metamacro_sub0_8(...) 8
#define metamacro_sub0_9(...) 9
#define metamacro_sub0_10(...) 10
#define metamacro_sub0_11(...) 11
#define metamacro_sub0_12(...) 12
#define metamacro_sub0_13(...) 13
#define metamacro_sub0_14(...) 14
#define metamacro_sub0_15(...) 15
#define metamacro_sub0_16(...) 16
#define metamacro_sub0_17(...) 17
#define metamacro_sub0_18(...) 18
#define metamacro_sub0_19(...) 19
#define metamacro_sub0_20(...) 20

#define metamacro_sub0(VALUE) VALUE
#define metamacro_sub1(VALUE) metamacro_sub0(metamacro_dec(VALUE))
#define metamacro_sub2(VALUE) metamacro_sub1(metamacro_dec(VALUE))
#define metamacro_sub3(VALUE) metamacro_sub2(metamacro_dec(VALUE))
#define metamacro_sub4(VALUE) metamacro_sub3(metamacro_dec(VALUE))
#define metamacro_sub5(VALUE) metamacro_sub4(metamacro_dec(VALUE))
#define metamacro_sub6(VALUE) metamacro_sub5(metamacro_dec(VALUE))
#define metamacro_sub7(VALUE) metamacro_sub6(metamacro_dec(VALUE))
#define metamacro_sub8(VALUE) metamacro_sub7(metamacro_dec(VALUE))
#define metamacro_sub9(VALUE) metamacro_sub8(metamacro_dec(VALUE))
#define metamacro_sub10(VALUE) metamacro_sub9(metamacro_dec(VALUE))
#define metamacro_sub11(VALUE) metamacro_sub10(metamacro_dec(VALUE))
#define metamacro_sub12(VALUE) metamacro_sub11(metamacro_dec(VALUE))
#define metamacro_sub13(VALUE) metamacro_sub12(metamacro_dec(VALUE))
#define metamacro_sub14(VALUE) metamacro_sub13(metamacro_dec(VALUE))
#define metamacro_sub15(VALUE) metamacro_sub14(metamacro_dec(VALUE))
#define metamacro_sub16(VALUE) metamacro_sub15(metamacro_dec(VALUE))
#define metamacro_sub17(VALUE) metamacro_sub16(metamacro_dec(VALUE))
#define metamacro_sub18(VALUE) metamacro_sub17(metamacro_dec(VALUE))
#define metamacro_sub19(VALUE) metamacro_sub18(metamacro_dec(VALUE))
#define metamacro_sub20(VALUE) metamacro_sub19(metamacro_dec(VALUE))


#define metamacro_sub(MINUEND, SUBTRAHEND) metamacro_concat(metamacro_sub, SUBTRAHEND)(MINUEND)





#define ml_css(OBJ, ...) ml_css_(OBJ, __VA_ARGS__)

#define ml_css_(OBJ, ...) metamacro_concat(ml_css_, metamacro_argcount(__VA_ARGS__))(0, OBJ, __VA_ARGS__)

#define ml_css_0(INDEX, OBJ, ...)

#define ml_css_1(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_0(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_2(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_1(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_3(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_2(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_4(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_3(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_5(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_4(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_6(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_5(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_7(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_6(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_8(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_7(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_9(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_8(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_10(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_9(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_11(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_10(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_12(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_11(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_13(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_12(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_14(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_13(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_15(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_14(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_16(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_15(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_17(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_16(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_18(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_17(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_19(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_18(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_20(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_19(metamacro_inc(INDEX), OBJ, __VA_ARGS__)



- (void)macroTest {
    

    ml_css(self.view,
            backgroundColor = [UIColor blueColor],
           frame = CGRectMake(100, 100, 200, 300);
            )



    metamacro_drop(2, 1, 2, 3, 4, 5, 6);

    
   // ml_css_arg_index(4, @"a", @"b", @"c", @"d", @"e", 2);
 //  MTest_collect_strings(@"aaa")(@"vv", @"ggggg", @"hh");
    
    
    NSInteger i = get_next_expand_macro_arg_at0(@"===")(5,6, 7, 8);
    NSInteger j = metamacro_argcount(self.view.backgroundColor, self.view.frame = CGRectMake(0, 0, 0, 0););
    NSInteger k = argcount_next_expand_macro(@"==")(5, 6, 7, 8);
    NSInteger l = get_next_expand_macro_args(@"==")(9);
    NSInteger m = metamacro_argcount(get_next_expand_macro_args(@"==")(5, 6, 7, self.view;, self, self.view;));
   // MLCSSSetting1(self.view)(@"");
//   MLCSSM(self.view)(
//    backgroundColor = [UIColor cyanColor]
//                     
//    )
//    @"@weakify(self);";
//     @weakify(self);
//    @"@strongify(self);";
//    @strongify(self);
  
  //  NSInteger count = ml_metamacro_argcount(self;);
    NSString *str1 = MTest1(@"aaaa")(@"bbbb");
    NSString *str2 = MTest2(@"aaaa")(@"bbbb");
    NSString *str3 = MTest3(@"aaaa")(@"bbbb")(@"cccc")(@"dddd");
  
   // MTest_collect_strings(@"aa")(@"bb", @"cc", @"dd");
    ;
}

#pragma mark - ========= Setter & Getter =========

@end
