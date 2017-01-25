




//
//  MLCPPViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCPPViewController.h"
#include <string.h>
#include <strings.h>
#include <stringlist.h>
#include <sys/queue.h>
typedef struct {
    int index;
}testStruct;
@interface MLCPPViewController ()

@end

@implementation MLCPPViewController
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
    [self socketTest];
    testStruct x[100];
    x[0].index = 100;
    x[10].index = 89;
    x[12].index = 88;
    
}
- (void)socketTest{
    char *url = "www.baidu.com";
    char *name = "/img/bdlogo.gif";
    
    
}



#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
