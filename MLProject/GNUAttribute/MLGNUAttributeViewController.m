//
//  MLGNUAttributeViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/2/7.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "MLGNUAttributeViewController.h"

@interface MLGNUAttributeViewController ()
{
    NSString *strArr[6];
}
@end

@implementation MLGNUAttributeViewController
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

/* like printf() but to standard error only */
extern void eprintf(const char *format, ...)
__attribute__((format(printf, 1, 2)));  /* 1=format 2=params */

/* printf only if debugging is at the desired level */
extern void mlprintf(int dlevel, const char *format, ...)
__attribute__((format(printf, 2, 3)));  /* 2=format 3=params */


//C中的使用方法
extern int my_printf (void *my_object, const char *my_format, ...) __attribute__((format(printf, 2, 3)));
//这个的意思是第二个参数my_format参数是一个格式化字符串，从第三个参数开始检查
//在Objective-C 中我们使用__string来禁代替format  NSString +stringWithFormat: 和 NSLog()都是一个很好的例子

// 指定一个cleanup方法，注意入参是所修饰变量的地址，类型要一样
// 对于指向objc对象的指针(id *)，如果不强制声明__strong默认是__autoreleasing，造成类型不匹配
static void stringCleanUp(__strong NSString **string) {
    NSLog(@"%@", *string);
}


static void blockCleanUp(__strong void(^ *block)(void)){
    (*block)();
}

#pragma mark - ========= Config UI =========
- (void)configUI
{
    NSLog(@"%@--Start", NSStringFromSelector(_cmd));
    {
    // 在某个方法中：
    
        __strong NSString *string __attribute__((cleanup(stringCleanUp))) = @"stringCleanUp";
     // 当运行到这个作用域结束时，自动调用stringCleanUp
    }
    
        __strong void(^block)() __attribute((cleanup(blockCleanUp))) = ^{
            NSLog(@"%@", @"blockCleanUp");
        };
    
    _objc_autoreleasePoolPrint();
    NSLog(@"%@--End", NSStringFromSelector(_cmd));
    
    __weak NSString *testStr1;
   
    __weak NSString *testStr2;
     NSString *testStr3;
    NSString *testStr4;
    _objc_autoreleasePoolPrint();
    {
        testStr1 = @"testStr1".mutableCopy;
        testStr3 = @"testStr3".mutableCopy;
        _objc_autoreleasePoolPrint();
    }
    @autoreleasepool {
         testStr2 = @"testStr2".mutableCopy;
        testStr4 = @"testStr4".mutableCopy;
        _objc_autoreleasePoolPrint();
    }
    _objc_autoreleasePoolPrint();
    NSLog(@"%@%@%@%@", testStr1, testStr2, testStr3, testStr4);
    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end


