//
//  MLReuseVCViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/26.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLReuseVCViewController.h"
#import "MLReuseVCView.h"

#import "UIScrollView+Refresh.h"
@interface MLReuseVCViewController ()<MLReuseViewControllerDelegate>
@property (weak, nonatomic) IBOutlet MLReuseVCView *reuseVCView;


@end

@implementation MLReuseVCViewController
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
    [self configureReuseVCView];
    
}

- (void)configureReuseVCView
{
    self.reuseVCView.delegate = self;
    
    [self.reuseVCView ml_registerViewControllerForStoryboardWithClassOrName:@"MLViewInCLViewController" nibName:@"MLCustomCLViewController"];
        [self.reuseVCView ml_registerViewControllerForStoryboardWithClassOrName:@"MLCustomCLViewController" nibName:@"MLCustomCLViewController"];

    [self.reuseVCView.collectionView.cellDatas addObjectsFromArray:@[@[@"1", @"2", @"3"]]];
   [self.reuseVCView.collectionView reloadData];
   
//    MLReuseVCView *reuseVCView = [[MLReuseVCView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
//    [self.view addSubview:reuseVCView];
//    //[reuseVCView ml_registerViewControllerForNibWithClassOrName:@"MLViewInCLViewController"];
//    [reuseVCView.collectionView reloadData];
    
}
#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}
#pragma mark - ========= Reuse VC =========
- (UIViewController *)reuseVCView:(MLReuseVCView *)reuseVCView viewControlerAtIndexPath:(NSIndexPath *)indexPath
{
    UIViewController *viewController = nil;
    switch (indexPath.row) {
        case 1:
        {
            viewController = [reuseVCView ml_dequeueReusableCellWithReuseIdentifier:@"MLViewInCLViewController" indexPath:indexPath];
            
        }
            break;
            
            case 0:
        {
            viewController = [reuseVCView ml_dequeueReusableCellWithReuseIdentifier:@"MLCustomCLViewController" indexPath:indexPath];
        }
             break;
        default:
        {
            viewController = [reuseVCView ml_dequeueReusableCellWithReuseIdentifier:@"MLCustomCLViewController" indexPath:indexPath];
        }
            break;
    }
 
   
    return viewController;
}
- (NSString *)reuseVCView:(MLReuseVCView *)reuseVCView reuseIdentifierAtIndexPath:(NSIndexPath *)indexPath
{
    return @"MLCustomCLViewController";
}


- (CGSize)reuseVCView:(MLReuseVCView *)reuseVCView viewSizeAtIndexPath:(NSIndexPath *)indexPath
{
     return CGSizeMake(SCREEN_WIDTH, SCREEN_HEIGHT);
}

#pragma mark - ========= Setter & Getter =========

@end
