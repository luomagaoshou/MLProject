//
//  MLBooksExerciseViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/9/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLBooksExerciseViewController.h"

@interface MLBooksExerciseViewController ()

@end

@implementation MLBooksExerciseViewController
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
    [self multithreadingAndMemoryManagementTest];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
#pragma mark - Pro Multithreading and Memory Management for iOS and OS X with ARC, Grand Central Dispatch, and Blocks

- (void)multithreadingAndMemoryManagementTest{
    [self autoRelease];
}
- (void)autoRelease{
    id obj1 = nil;
    {
        id __strong obj = @"haha".mutableCopy;
        obj1 = obj;
        NSLog(@"%@", obj1);
    }
     NSLog(@"%@", obj1);
    
  
    id __weak obj2 = nil;
    {
        id __strong obj = @"haha".mutableCopy;
        obj2 = obj;
        NSLog(@"%@", obj2);
    }
    NSLog(@"%@", obj2);
    
    id __weak obj3 = nil;
    @autoreleasepool{
        id __strong obj = @"haha".mutableCopy;
        obj3 = obj;
        NSLog(@"%@", obj3);
    }
    NSLog(@"%@", obj3);
    
    _objc_autoreleasePoolPrint();
}
#pragma mark - ========= Setter & Getter =========


@end
