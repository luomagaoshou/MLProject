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
#import "UIImage+FX.h"
#import "UIImage+Color.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+AppearTime.h"
#import <Aspects/Aspects.h>
@interface MLNavigationViewController ()
@property (weak, nonatomic) IBOutlet UIButton *button;

@end

@implementation MLNavigationViewController
#pragma mark - ========= View LifeCycle =========
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    
    }
    return self;
}
- (void)loadView{
    [super loadView];
    
}
- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    self.navigationBarCommonType = arc4random() % 3 + 1;
    [UINavigationBar setUpIndependentNavigationBarWithViewController:self type:self.navigationBarCommonType];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
 
    self.navigationController.navigationBar.navigationBarCommonType = UINavigationBarCommonTypeClear;
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
static int alpha = 0;
- (void)configUI
{
    self.view.backgroundColor = kCOLOR_RANDOM_COLOR;
    
    [self bindButtonEvent];
}
- (void)bindButtonEvent{
    
    @weakify(self);
    [self.button touchUpInside:^{
        @strongify(self);
        
        UIViewController *ctl = [UIStoryboard loadViewControllerWithNibName:@"MLNavigation"  storyboardID:@"MLNavigationViewController"];
        ctl = [MLNavigationViewController new];
        [self.navigationController pushViewController:ctl animated:YES];
        
        
    }];
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
//      UIViewController *ctl = [UIStoryboard loadViewControllerWithNibName:@"MLNavigation"  storyboardID:@"MLNavigationViewController"];
//    //ctl = [MLNavigationViewController new];
//    [self.navigationController pushViewController:ctl animated:YES];
    [ProjectManager pushStoryboardControllerWithNibName:@"MLNavigation" storyboardID:@"MLNavigationViewController"];
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
