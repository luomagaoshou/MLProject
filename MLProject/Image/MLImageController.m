


//
//  MLImageController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/3/27.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLImageController.h"
#import "MLImageNextController.h"
#import "ProjectManager.h"
#import "UIImage+Convolution.h"
@interface MLImageController ()
@property (weak, nonatomic) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UIImageView *imageview;
@property (weak, nonatomic) IBOutlet UIImageView *imageView2;

@end

@implementation MLImageController

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
    [self alipayTest];
}
- (void)alipayTest{
    
  UIImage *image = [UIImage imageNamed:@"alipay"];
    self.imageview.image = image;
    self.imageView2.image = [image emboss];
//    [self.nextButton touchUpInside:^{
//        self.imageView2.image = [image sharpen];
//    }];
}
- (void)pushNextVC{
    [self.nextButton touchUpInside:^{
        UIImage *image = [self screenShot];
        MLImageNextController *ctl =   [ProjectManager pushStoryboardControllerWithNibName:@"MLImage" storyboardID:@"MLImageNextController" title:@"下一页"];
        ctl.image = image;
    }];
}
- (UIImage *)screenShot
{
//
//    UIGraphicsBeginImageContext(self.view.size);
//    CGContextRef ref = UIGraphicsGetCurrentContext();
//    [self.view.layer renderInContext:ref];
//    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
//    UIGraphicsEndImageContext();
//    return image;
    UIGraphicsBeginImageContext(self.view.size);
    CGContextRef ref = UIGraphicsGetCurrentContext();
    [self.view.layer renderInContext:ref];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
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
