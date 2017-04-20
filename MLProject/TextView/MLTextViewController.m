//
//  MLTextViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/4/11.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "MLTextViewController.h"

@interface MLTextViewController ()

@end

@implementation MLTextViewController

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
    [self printClassInfo:[NSLayoutManager class]];
   
    
    
}
- (void)printClassInfo:(Class)class {
    NSLog(@"%@", [class arrayOfIvars]);
    NSLog(@"%@", [class arrayOfProperties]);
    NSLog(@"%@", [class arrayOfInstanceMethods]);
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


@end
