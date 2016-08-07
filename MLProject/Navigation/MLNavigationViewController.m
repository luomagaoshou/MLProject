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
    UIBarButtonItem *BBI = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"test"] style:UIBarButtonItemStylePlain target:self action:@selector(haha:)];
   // self.navigationItem.backBarButtonItem = BBI;
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
      //  self.navigationController.navigationBar.navigationBarCommonType = UINavigationBarCommonTypeBlue;
    
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

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    MLNavigationViewController *vc =  [ProjectManager pushStoryboardControllerWithNibName:@"MLNavigation" storyboardID:@"MLNavigationViewController"];
    NSInteger nextNavigationBarCommonType = self.navigationBarCommonType + 1;
    if (nextNavigationBarCommonType == 2) {
        nextNavigationBarCommonType = 101;
    }else if (nextNavigationBarCommonType == 103)
    {
        nextNavigationBarCommonType = 0;
    }
    vc.navigationBarCommonType = nextNavigationBarCommonType;
   // self.navigationController.navigationBar.navigationBarCommonType = nextNavigationBarCommonType;
    UIImage *image = [UIImage imageNamed:@"test"];
   UIGraphicsBeginImageContextWithOptions(CGSizeMake(14 + 3, 20), NO, 0.f);
    [image drawInRect:CGRectMake(0, 0, 14, 20)];
    [[UIImage imageWithColor:[UIColor redColor]] drawInRect:CGRectMake(14, 0, 3, 20)];
    UIImage *targetImage  =  UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
   // targetImage = [targetImage resizableImageWithCapInsets:UIEdgeInsetsMake(0, image.size.width - 1, 0, 0) resizingMode:UIImageResizingModeTile];
    targetImage = [targetImage stretchableImageWithLeftCapWidth:14 topCapHeight:0];
    [[UIBarButtonItem appearance] setBackButtonBackgroundImage:targetImage forState:UIControlStateNormal barMetrics:UIBarMetricsDefault];
    //[UINavigationBar appearance].backItem.backBarButtonItem.image = image;
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [vc.button setImage:targetImage forState:UIControlStateNormal];
        LayerCornerRadius_borderWidth_borderColor(vc.button.layer, vc.button.height/2, vc.button.height/3, [UIColor greenColor]);
        vc.button.layer.masksToBounds = NO;
    });
    
   
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========


@end
