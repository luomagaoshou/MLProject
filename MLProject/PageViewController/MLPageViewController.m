//
//  MLPageViewController.m
//  MLProject
//
//  Created by xunke01 on 16/7/28.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPageViewController.h"

@interface MLPageViewController ()<UIPageViewControllerDataSource, UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (nonatomic, assign) NSUInteger currentIndex;
@end

@implementation MLPageViewController
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
    UIViewController *page1 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"page1"];
    
    UIViewController *page2 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"page2"];
    
    UIViewController *page3 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"page3"];
    
    UIViewController *page4 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"page4"];
    self.pageViewController = [[UIPageViewController alloc] initWithTransitionStyle:UIPageViewControllerTransitionStyleScroll navigationOrientation:UIPageViewControllerNavigationOrientationHorizontal options:nil];
    self.pageViewController.delegate = self;
    self.pageViewController.dataSource = self;
    self.pageViewController.view.frame = self.view.bounds;
    [self.pageViewController setViewControllers:@[page1, page2] direction:UIPageViewControllerNavigationDirectionReverse animated:YES completion:nil];
    [self addChildViewController:self.pageViewController];
    [self.view addSubview:self.pageViewController.view];
}


#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}
- (UIViewController *)pageViewController:(UIPageViewController *)pageViewController viewControllerAfterViewController:(UIViewController *)viewController
{
    return nil;
}
- (UIViewController *)pageViewController:(UIPageViewController *)pageViewController viewControllerBeforeViewController:(UIViewController *)viewController
{
    return nil;
}

#pragma mark - ========= Setter & Getter =========

@end
