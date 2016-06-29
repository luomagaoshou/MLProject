//
//  MLNestNibViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/6/17.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLNestNibViewController.h"
#import "NibTBCell.h"
#import "NestView.h"
@interface MLNestNibViewController ()
@property (weak, nonatomic) IBOutlet NestView *nestView;

@end

@implementation MLNestNibViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.nestView.button addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
    
    
}
- (void)buttonClicked:(UIButton *)button
{
    self.nestView.label.text = @"button被点击了";
    self.nestView.textView.text = @"button真的被点击了";
    [self.nestView.button setTitle:@"我真的被点击了" forState:UIControlStateNormal];
}


@end
