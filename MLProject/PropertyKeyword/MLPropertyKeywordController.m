
//
//  MLPropertyKeywordController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/5/20.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPropertyKeywordController.h"

@interface MLPropertyKeywordController ()
@property(nonatomic, strong) NSString *stringOfStrong;
@property(nonatomic, copy) NSString *stringOfCopy;

@property(nonatomic, strong) NSArray *arrayOfStrong;
@property(nonatomic, copy) NSArray *arrayOfCopy;
@end

@implementation MLPropertyKeywordController

#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}
//初始化，是UIViewController的子类就会调用
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
//加载
- (void)loadView
{
    [super loadView];
    
}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
}

//即将出现
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}
//排列SubViews
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
}
//排列SubViews完成
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
}
//已经出现
- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}
//即将消失
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}
//已经消失
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}
//内存警告
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)initUI
{
    


    
    [self stringTest];
 //   [self arrayTest];
}
- (void)stringTest
{
    NSString *testString = @"haha";
    self.stringOfStrong = testString;
    self.stringOfCopy = testString;
    NSLog(@"%p--%p--%p", testString, self.stringOfStrong, self.stringOfCopy);
    testString = @"gaga";
    NSLog(@"%p--%p--%p", testString, self.stringOfStrong, self.stringOfCopy);
    
    NSMutableString *testMutString = [NSMutableString stringWithString:@"lala"];
    self.stringOfStrong = testMutString;
    self.stringOfCopy = testMutString;
    NSLog(@"%p--%p--%p", testMutString, self.stringOfStrong, self.stringOfCopy);
    [testMutString appendString:@"tata"];
    NSLog(@"%p--%p--%p", testMutString, self.stringOfStrong, self.stringOfCopy);
}
- (void)arrayTest
{
    NSMutableArray *mutArr = [[NSMutableArray alloc] init];
    mutArr = [NSMutableArray new];
    [mutArr addObject:@"haha"];
    self.arrayOfStrong = mutArr;
    self.arrayOfCopy = mutArr;
    [mutArr addObject:@"gaga"];
    NSLog(@"%p--%p--%p", mutArr, self.arrayOfStrong, self.arrayOfCopy);
    
}
@end
