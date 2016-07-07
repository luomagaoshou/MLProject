//
//  MLNavigationViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLNavigationViewController.h"
#import "UINavigationBar+Appearance.h"
#import "UIControl+Block.h"
#import "ProjectManager.h"
#import "UIStoryboard+Load.h"
@interface MLNavigationViewController ()
@property (weak, nonatomic) IBOutlet UIButton *button;

@end

@implementation MLNavigationViewController
- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
        self.navigationController.navigationBar.navigationBarCommonType = UINavigationBarCommonTypeBlue;
    
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

    self.view.backgroundColor = [UIColor grayColor];
    [self.button touchUpInside:^{
      //[ProjectManager pushStoryboardControllerWithNibName:@"MLNavigation" storyboardID:@"MLNavigationTestViewController" title:@""];
        UIViewController *ctl = [UIStoryboard loadViewControllerWithNibName:@"MLNavigation"  storyboardID:@"MLNavigationTestViewController"];
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:ctl];
        [self.navigationController pushViewController:ctl animated:YES];
      //  [self presentViewController:nav animated:YES completion:nil];
        
        
    }];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========


@end
