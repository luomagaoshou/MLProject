//
//  MLRACViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLRACViewController.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
@interface MLRACViewController ()
@property (weak, nonatomic) IBOutlet UILabel *testLabel;
@property (weak, nonatomic) IBOutlet UITextField *testTextField;

@end

@implementation MLRACViewController
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
    [self testRACSignal];
}

- (void)testRACSignal
{

 //  RAC(self.testLabel, text) = self.testTextField.rac_textSignal;
    
    
//    [self.testTextField.rac_textSignal subscribeNext:^(id x) {
//        self.testLabel.text = x;
//    }];
    
//    [RACObserve(self.testTextField, text) subscribeNext:^(id x) {
//        self.testLabel.text = x;
//    }];
    
//    [[self.testTextField.rac_textSignal filter:^BOOL(id value) {
//        
//        return [value length] > 5;
//    }] subscribeNext:^(id x) {
//              self.testLabel.text = x;
//    }];
//    
  

   // RAC(self.testTextField, alpha) = self.testTextField.rac_textSignal;
    self.testTextField.backgroundColor = [UIColor blueColor];
    RACSignal *signal = RACObserve(self.testTextField, text);
    RAC(self.testTextField, alpha) = [signal map:^id(id value) {
        
        return @(([value length] %10)/10.0f);
        
    }];
    
    
    
    
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
