//
//  MLHookViewController.m
//  MLProject
//
//  Created by xunke01 on 16/8/20.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLHookViewController.h"

@interface MLHookViewController ()

@end

@implementation MLHookViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configureUI];
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


#pragma mark - ========= Configure UI =========
- (void)configureUI
{
    
}


#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
