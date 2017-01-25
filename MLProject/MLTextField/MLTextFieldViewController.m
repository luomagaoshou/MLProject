//
//  MLTextFieldViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTextFieldViewController.h"
#import "MLTextField.h"
#import "MLTextField+CommonType.h"
@interface MLTextFieldViewController ()
@property (weak, nonatomic) IBOutlet MLTextField *textField;

@end

@implementation MLTextFieldViewController
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
    dispatch_async(dispatch_get_main_queue(), ^{
      //   [self setUpLabel];
    });
   

}

- (void)setUpLabel{
    
    for (NSInteger i = 0; i < 100; i++) {
        UILabel *label = [[UILabel alloc] init];
        label.frame = CGRectMake(80, 0 + i * 20, 60 + i * 1, 20);
        [self.view addSubview:label];
        label.lineBreakMode = NSLineBreakByTruncatingTail;
        label.text = @"地球米饭不哈";
    }
}
- (void)setUpTextField{
    
    self.textField.textFieldCommonOption = UITextFieldCommonOptionLeftImageView | UITextFieldCommonOptionRightImageView;
    self.textField.leftViewMode = UITextFieldViewModeAlways;
    self.textField.rightViewMode = UITextFieldViewModeAlways;
    self.textField.backgroundColor = [UIColor greenColor];
    self.textField.clipsToBounds = NO;
    
    
    
    
    ((UIImageView *) self.textField.leftView).image = [UIImage imageNamed:@"test"];
    ((UIImageView *) self.textField.rightView).image = [UIImage imageNamed:@"test"];
    
    //    self.textField.leftViewOffset = CGPointMake(50, 0);
    //    self.textField.rightViewOffset = CGPointMake(-50, 0);
    //
    self.textField.textFieldCommonOption = UITextFieldCommonOptionLeftImageView | UITextFieldCommonOptionRightImageView;
    self.textField.leftViewMode = UITextFieldViewModeAlways;
    self.textField.rightViewMode = UITextFieldViewModeAlways;
    self.textField.backgroundColor = [UIColor greenColor];
    self.textField.clipsToBounds = NO;
    
    
    
    
    ((UIImageView *) self.textField.leftView).image = [UIImage imageNamed:@"test"];
    ((UIImageView *) self.textField.rightView).image = [UIImage imageNamed:@"test"];
    
    //    self.textField.leftViewOffset = CGPointMake(50, 0);
    //    self.textField.rightViewOffset = CGPointMake(-50, 0);
    //
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
   
    [self.view endEditing:YES];
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========


@end
