//
//  MLPageViewController.m
//  MLProject
//
//  Created by xunke01 on 16/7/28.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPageViewController.h"
#import "MLMenuCollectionView.h"
#import "MLMenuCLLabelCell.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "MLPageSubViewController1.h"
#import "MLPageSubViewController2.h"
#import "MLPageSubViewController3.h"
#import "UINavigationBar+Appearance.h"

@interface MLPageViewStickyView : UIView
@property (weak, nonatomic) IBOutlet UIView *topView;
@property (weak, nonatomic) IBOutlet MLMenuCollectionView *menuCollectionView;

@end
@implementation MLPageViewStickyView



@end
@interface MLPageViewController ()<UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topViewTopConstraint;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet MLPageViewStickyView *stickyView;

@property (weak, nonatomic) IBOutlet UIView *pageView;
@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (nonatomic, strong) NSArray *viewControllers;
@property (nonatomic, strong) NSMutableArray *tableViewsOfSubVC;
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
    [self configureScrollView];
    [self configurePageViewController];
    [self configureStickyView];
}
- (void)configurePageViewController
{
    MLPageSubViewController1 *page1 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"MLPageSubViewController1"];
    
    MLPageSubViewController2 *page2 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"MLPageSubViewController2"];
    
    MLPageSubViewController3 *page3 = [[UIStoryboard storyboardWithName:@"MLPageViewController" bundle:nil] instantiateViewControllerWithIdentifier:@"MLPageSubViewController3"];
    
    self.pageViewController = [[UIPageViewController alloc] initWithTransitionStyle:UIPageViewControllerTransitionStyleScroll navigationOrientation:UIPageViewControllerNavigationOrientationHorizontal options:nil];
    self.pageViewController.delegate = self;
    self.pageViewController.dataSource = self;
    self.pageViewController.view.frame = self.pageView.bounds;

    [self.pageView addSubview:self.pageViewController.view];
  
    [self.pageViewController setViewControllers:@[page1] direction:UIPageViewControllerNavigationDirectionReverse animated:YES completion:nil];
    [self addChildViewController:self.pageViewController];
 
    self.viewControllers = @[page1, page2, /*page3*/];
    
    
    
    RACSignal *signal1 = RACObserve(page1, tableView);
    RACSignal *signal2 = RACObserve(page2, tableView);
    RACSignal *totalSignal = [signal1 merge:signal2];
    [totalSignal subscribeNext:^(UITableView *tableView) {
        if (tableView != nil && ![self.tableViewsOfSubVC containsObject:tableView]) {
            [self.tableViewsOfSubVC addObject:tableView];
            [RACObserve(tableView, contentOffset) subscribeNext:^(NSValue *offsetValue) {
                CGFloat y = [offsetValue CGPointValue].y;
                //当前变化的tableView
                if (y <= 0) {
                    
                }else{
                    if (tableView.window) {
                        self.topViewTopConstraint.constant = -y;
                        
                    }
                    
                }
               
            }];
            
            
        }
    }];
    

  

    
}
- (void)configureScrollView
{
    self.scrollView.delegate = self;
}
- (void)configureStickyView
{
    [self.stickyView.menuCollectionView configureCellWithClassName:@"MLMenuCLLabelCell" configBlock:^(__kindof UICollectionViewCell *cell, NSArray *cellDatas, NSIndexPath *indexPath) {
       
        ((MLMenuCLLabelCell *)cell).titleLabel.text = cellDatas[indexPath.section][indexPath.row];
    }];
    @weakify(self);
    [self.stickyView.menuCollectionView setTitles:@[@"1", @"2"] clickBlock:^(NSInteger index) {
        @strongify(self);
        NSLog(@"%ld", index);
      
        NSInteger direction = [self.viewControllers indexOfObject:self.pageViewController.viewControllers.firstObject] < index;
         [self.pageViewController setViewControllers:@[self.viewControllers[index]] direction:direction animated:YES completion:nil];
    }];
}


#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}
#pragma mark - ========= Page VieWController =========

- (UIViewController *)pageViewController:(UIPageViewController *)pageViewController viewControllerBeforeViewController:(UIViewController *)viewController
{
    
    NSInteger index = [self.viewControllers indexOfObject:viewController];
    
    if (index == 0 || index == NSNotFound) {
        return nil;
    }
   
        --index;
   
    return self.viewControllers[index];
    

  
    
}


- (UIViewController *)pageViewController:(UIPageViewController *)pageViewController viewControllerAfterViewController:(UIViewController *)viewController
{
  
    NSInteger index = [self.viewControllers indexOfObject:viewController];

    if (index >= self.viewControllers.count - 1 || index == NSNotFound) {
        return nil;
    }
    ++index;

      return self.viewControllers[index];
}
- (void)pageViewController:(UIPageViewController *)pageViewController willTransitionToViewControllers:(NSArray<UIViewController *> *)pendingViewControllers
{
    [self.stickyView.menuCollectionView setCurrentIndex:[self.viewControllers indexOfObject:pendingViewControllers.firstObject] animated:YES];
    
}

- (void)pageViewController:(UIPageViewController *)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray<UIViewController *> *)previousViewControllers transitionCompleted:(BOOL)completed

{
    NSLog(@"%@--%@", pageViewController.viewControllers, previousViewControllers);
     [self.stickyView.menuCollectionView setCurrentIndex:[self.viewControllers indexOfObject:pageViewController.viewControllers.firstObject] animated:YES];
    
    
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    NSLog(@"%@", scrollView);
    CGFloat y = scrollView.contentOffset.y;
//    if ( y <= 0 ) {
//            scrollView.contentOffset = CGPointMake(0, y);
//    }else if (y > 0) {
//        scrollView.contentOffset = CGPointMake(0, 0);
//        self.pageView.userInteractionEnabled = YES;
//        self.scrollView.scrollEnabled = NO;
//    }

}
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
        NSLog(@"%@", scrollView);
      CGFloat y = scrollView.contentOffset.y;
}


#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)tableViewsOfSubVC
{
    if (_tableViewsOfSubVC == nil) {
        _tableViewsOfSubVC = [[NSMutableArray alloc] init];
    }
    return _tableViewsOfSubVC;
}
@end
