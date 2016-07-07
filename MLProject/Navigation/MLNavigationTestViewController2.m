//
//  MLNavigationTestViewController2.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLNavigationTestViewController2.h"
#import "UINavigationBar+Appearance.h"
@interface MLNavigationTestViewController2 ()

@end

@implementation MLNavigationTestViewController2
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
    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
