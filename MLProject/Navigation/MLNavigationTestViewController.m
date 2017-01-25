//
//  MLNavigationTestViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLNavigationTestViewController.h"
#import "UINavigationBar+Appearance.h"
#import "UIView+GestureBlock.h"
#import "ProjectManager.h"
#import "MLNetwork.h"
@interface MLNavigationTestViewController ()
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

@implementation MLNavigationTestViewController
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
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
   
         self.navigationController.navigationBar.navigationBarCommonType = UINavigationBarCommonTypeClear;
    
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
    self.tableView.backgroundColor = [UIColor orangeColor];
    [self.tableView tapWithEvent:^(id gesture) {
        
        [ProjectManager pushStoryboardControllerWithNibName:@"MLNavigation" storyboardID:@"MLNavigationTestViewController2" title:nil];
    }];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}



#pragma mark - ========= Setter & Getter =========

@end
