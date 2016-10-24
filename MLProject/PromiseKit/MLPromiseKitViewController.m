//
//  MLPromiseKitViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/10/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPromiseKitViewController.h"
#import "MLPromiseKitView.h"
#import <PromiseKit/PromiseKit.h>

@interface MLPromiseKitViewController ()
@property (strong, nonatomic) IBOutlet MLPromiseKitView *view_;

@end

@implementation MLPromiseKitViewController
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
    [self viewPromistTest];
    
}

- (void)viewPromistTest{
    [UIView promiseWithDuration:1 animations:^{
      self.view_.button1.backgroundColor = [UIColor greenColor];
    }]
    .then(^{
        NSLog(@"%@--%@",self, NSStringFromSelector(_cmd));
    }).thenOn(dispatch_get_main_queue(), ^{
        NSLog(@"%@", @"fff");
    })
    ;
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
