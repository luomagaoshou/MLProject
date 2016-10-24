//
//  IQKeyboardManagerController.m
//  MLProject
//
//  Created by apple on 16/1/29.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "IQKeyboardManagerController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface IQKeyboardManagerController ()<UITextViewDelegate>
@property (weak, nonatomic) IBOutlet UITextView *textView11;

@end

@implementation IQKeyboardManagerController


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
    [self configureTextView];
   
}
- (void)configureTextView{
    self.textView11.delegate = self;
    [RACObserve(self.textView11, text) subscribeNext:^(id x) {
        UITextViewTextDidChangeNotification;
    }];
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
#pragma mark - TextView delegate
- (void)textViewDidChange:(UITextView *)textView{
    NSLog(@"%@", textView.text);
}
- (void)textViewDidEndEditing:(UITextView *)textView{
      NSLog(@"%@", textView.text);
}
- (void)textViewDidBeginEditing:(UITextView *)textView{
      NSLog(@"%@", textView.text);
}
- (BOOL)textViewShouldBeginEditing:(UITextView *)textView{
    return textView.text.length < 10;
}


#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========


@end
