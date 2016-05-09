//
//  MLResponderChainController.m
//  MLProject
//
//  Created by apple on 16/5/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLResponderChainController.h"
#import "UIView+GestureBlock.h"
#import "UIControl+Block.h"
@interface MLResponderChainController ()
@property (weak, nonatomic) IBOutlet UILabel *bottomView;
@property (weak, nonatomic) IBOutlet UIButton *centerButton;

@property (weak, nonatomic) IBOutlet UILabel *topView;
@end

@implementation MLResponderChainController

#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}
//初始化，是UIViewController的子类就会调用
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
//加载
- (void)loadView
{
    [super loadView];
    
}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
    [self downloadData];
}
//即将出现
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}
//排列SubViews
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
}
//排列SubViews完成
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
}
//已经出现
- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}
//即将消失
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}
//已经消失
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}
//内存警告
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - ========= InitialUI =========
- (void)initUI
{
    
    [self situation3];
    
}
- (void)situation1
{
    [self.bottomView tapWithConfig:nil event:^(id gesture) {
        NSLog(@"%@", @"bottonView");
    }];
    
}
- (void)situation2
{
    [self.bottomView tapWithConfig:nil event:^(id gesture) {
        NSLog(@"%@", @"bottonView");
    }];
    [self.centerButton touchDown:^{
        NSLog(@"%@", @"centerButton");
    }];
}
//自己能处理就不会传递
- (void)situation3
{
    [self.bottomView tapWithConfig:nil event:^(id gesture) {
        NSLog(@"%@", @"bottonView");
    }];
    self.centerButton.userInteractionEnabled = NO;
    self.topView.userInteractionEnabled = YES;
  
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}



#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========



@end
