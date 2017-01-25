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




#define MY_ENUM \
MY_ENUM_MEMBER(kStop) \
MY_ENUM_MEMBER(kGo) \
MY_ENUM_MEMBER(kYield)

// create the actual enum
enum MyEnum {
#define MY_ENUM_MEMBER(x) x,
    MY_ENUM
#undef MY_ENUM_MEMBER
};

// stringification
const char *MyEnumToString(enum MyEnum value)
{
#define MY_ENUM_MEMBER(x) if(value == (x)) return #x;
    MY_ENUM
#undef MY_ENUM_MEMBER
return "ffff";
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

#import "MLMacroViewController.h"

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
- (void)configUI
{
    CGRect rect = FORCETYPE(CGRectMake(11, 11, 22, 22), CGRect);
    
    id obj2 = STRINGIFY(CGRectMake(22, 22, 44, 44));
   
    
   char *char3 = MyEnumToString(@"obj");
    
     NSLog(@"%@", @"fff");

}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
