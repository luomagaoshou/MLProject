//
//  MLPageViewController2.m
//  MLProject
//
//  Created by 妙龙赖 on 16/8/2.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLPageViewController2.h"
#import "MLMenuCLLabelCell.h"
#import "MLMenuCollectionView.h"
#import "MLPageSubViewController1.h"
#import "MLPageSubViewController2.h"
#import "MLPageSubViewController3.h"
@interface MLPageViewStickyView2 : UIView
@property (weak, nonatomic) IBOutlet UIView *topView;
@property (weak, nonatomic) IBOutlet MLMenuCollectionView *menuCollectionView;
@end

@implementation MLPageViewStickyView2



@end
@interface MLPageViewController2 ()<UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet MLPageViewStickyView2 *stickyView;
@property (weak, nonatomic) IBOutlet UIView *pageVCContainerView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *stickyViewTopConstraint;

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (nonatomic, strong) NSArray *viewControllers;
@end

@implementation MLPageViewController2
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
    self.pageViewController.view.frame = self.pageVCContainerView.bounds;
    
    [self.pageVCContainerView addSubview:self.pageViewController.view];
    
    [self.pageViewController setViewControllers:@[page1] direction:UIPageViewControllerNavigationDirectionReverse animated:YES completion:nil];
    [self addChildViewController:self.pageViewController];
    
    self.viewControllers = @[page1, page2, page3];
    
    
    [[NSNotificationCenter defaultCenter] addObserverForName:@"SubPageViewTableViewContentOffsetChanged" object:nil queue:nil usingBlock:^(NSNotification * _Nonnull note) {
        NSLog(@"%@\n%@\n%@\n", note.name, note.userInfo, note.object);
        UITableView *tableView = note.object;
        CGFloat y = ((UITableView *)note.object).contentOffset.y;
//        if (y < 100 && y > 0) {
//            self.stickyViewTopConstraint.constant = -y;
//        }else if (y < 0)
//        {
//            self.stickyViewTopConstraint.constant = -y;
//        }
//        else if(y > 100){
//            self.stickyViewTopConstraint.constant = -100;
//        }
        
        if (self.stickyViewTopConstraint.constant == -100) {
            if (y > 0) {
                return ;
            }
        }
//        if (self.stickyViewTopConstraint.constant < 0 && self.stickyViewTopConstraint.constant != -100) {
//            if (-self.stickyViewTopConstraint.constant > y) {
//                return;
//            }
//        }
        
        if (y < 100 && y > 0) {
            self.stickyViewTopConstraint.constant = -y;
        }else if (y < 0)
        {
           [UIView animateWithDuration:0.2 animations:^{
                  self.stickyViewTopConstraint.constant = 0;
               [self.view layoutIfNeeded];
            }];
          
        }
        else if(y > 100){
            self.stickyViewTopConstraint.constant = -100;
        }
        
    }];
    
    //     [page2.tableView addObserver:self forKeyPath:@"contentOffset" options:NSKeyValueObservingOptionNew|NSKeyValueObservingOptionNew context:nil];
    //     [page3.tableView addObserver:self forKeyPath:@"contentOffset" options:NSKeyValueObservingOptionNew|NSKeyValueObservingOptionNew context:nil];
    
    
    //    [RACObserve(page1.tableView, contentOffset) subscribeNext:^(id x) {
    //        NSLog(@"%@", x);
    //    }];
    //    [RACObserve(page2.tableView, contentOffset) subscribeNext:^(id x) {
    //        NSLog(@"%@", x);
    //    }];
    //    [RACObserve(page3.tableView, contentOffset) subscribeNext:^(id x) {
    //        NSLog(@"%@", x);
    //    }];
    
}

- (void)configureStickyView
{
    [self.stickyView.menuCollectionView configureCellWithClassName:@"MLMenuCLLabelCell" configBlock:^(__kindof UICollectionViewCell *cell, NSArray *cellDatas, NSIndexPath *indexPath) {
        
        ((MLMenuCLLabelCell *)cell).titleLabel.text = cellDatas[indexPath.section][indexPath.row];
    }];
    @weakify(self);
    [self.stickyView.menuCollectionView setTitles:@[@"1", @"2", @"3"] clickBlock:^(NSInteger index) {
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



#pragma mark - ========= Setter & Getter =========




@end
