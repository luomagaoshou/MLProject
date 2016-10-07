
//
//  MLBlocksKitViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/9/30.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLBlocksKitViewController.h"
#import <BlocksKit/BlocksKit.h>
#import <BlocksKit/A2BlockInvocation.h>
@interface MLBlocksKitViewController ()

@end

@implementation MLBlocksKitViewController
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
    [self test];
}
- (void)test{
    NSSet *set = [NSSet setWithObjects:@1, @2, @3, nil];
    NSString *string = @"11";
    [set bk_each:^(id obj) {
        (^{ __block CFMutableDictionaryRef BK_eachTable = nil;
            (void)BK_eachTable;
            
            if(BK_eachTable)
                CFRelease(BK_eachTable);
        }());
    }];
    __block int a = 1;
    [set bk_all:^BOOL(id obj) {
        NSLog(@"%@", obj);
        a++;
        
        return a > 2;
    }];
    BK_EACH(set, NSLog(@"%@", obj););
    
    
    
    NSMethodSignature *sig = [A2BlockInvocation methodSignatureForBlock:^double (CGFloat num){
        return num *= num;
    }];
    NSLog(@"%@", sig);
    
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========


@end
