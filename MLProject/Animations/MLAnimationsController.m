//
//  MLAnimationsController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAnimationsController.h"
#import "UIView+GestureBlock.h"
#import <UIKit/UIKit.h>
#import "CABasicAnimation+ML_make.h"
@interface MLAnimationsController ()
@property (weak, nonatomic) IBOutlet UIImageView *flipImageView;
@property (weak, nonatomic) IBOutlet UIImageView *tranferImageView;
@property (weak, nonatomic) IBOutlet UIButton *animationButton;
@property (weak, nonatomic) IBOutlet UIButton *transferButton;
@property (weak, nonatomic) IBOutlet UIView *cuteControlView;

@end

@implementation MLAnimationsController

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
    [self createCuteEffect];
    [self animationMaker];
}
- (void)animationMaker
{

   
    

    
}
- (void)transitionFromViewController:(UIViewController *)fromViewController toViewController:(UIViewController *)toViewController duration:(NSTimeInterval)duration options:(UIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL))completion
{
    self.flipImageView.image = [UIImage imageNamed:@"44C5FC76-E862-43F6-824E-0FBBAFADA5CA"];
    
    self.tranferImageView.backgroundColor = [UIColor redColor];
    [self.flipImageView tapWithConfig:nil event:^(id gesture) {
        
        [UIView transitionWithView:self.flipImageView duration:2 options:UIViewAnimationOptionTransitionFlipFromLeft animations:^{
            self.flipImageView.image = [UIImage imageNamed:@"test"];
        } completion:^(BOOL finished) {
            
            [UIView transitionFromView:self.flipImageView toView:self.tranferImageView duration:2 options:UIViewAnimationOptionTransitionFlipFromTop completion:^(BOOL finished) {
                
                
            }];
            
        }];
    }];
    
    
    [self.animationButton touchDown:^{
        
        for (NSInteger i = 0; i < 5; i++) {
            UIView *view = [[UIView alloc] initWithFrame:CGRectMake(20 + i * 60, 50, 50, 50)];
            view.backgroundColor = kCOLOR_RANDOM_COLOR;
            [self.view addSubview:view];
            
            [UIView animateWithDuration:2 delay:0.5 usingSpringWithDamping:0.6 initialSpringVelocity:0.8 options:UIViewAnimationOptionCurveEaseInOut + i animations:^{
                view.y = 50 + 200;
            } completion:nil];
        }
        
        
    }];
    
    
    [self.transferButton touchUpInside:^{
        UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(SCREEN_WIDTH/2, SCREEN_HEIGHT/2, 80, 80)];
        imageView.image = [UIImage imageNamed:@"44C5FC76-E862-43F6-824E-0FBBAFADA5CA"];
        [self.view addSubview:imageView];
        __block UIImageView *blockImageView = imageView;
        [self rotationEndlesslyWithView:blockImageView];
        
    }];
    

}
- (void)rotationEndlesslyWithView:(UIView *)view
{
    static CGFloat i = -1;
    i++;
    CGAffineTransform transform = CGAffineTransformConcat(CGAffineTransformMake(1, 0, 0, 1, 0,0), CGAffineTransformMakeRotation(M_PI * (i * 0.5) ));
    [UIView animateWithDuration:1 delay:0 options:UIViewAnimationOptionCurveLinear animations:^{
        view.transform  = transform;
    } completion:^(BOOL finished) {
        [self rotationEndlesslyWithView:view];
    }];
    
   
    
    
}

#pragma mark - ========= 果冻 =========
- (void)createCuteEffect
{
    // 更新_shapeLayer形状
    UIBezierPath *tPath = [UIBezierPath bezierPath];
    [tPath moveToPoint:CGPointMake(0, 350)];                              // r1点
    [tPath addLineToPoint:CGPointMake(SCREEN_WIDTH, 350)];            // r2点
    [tPath addLineToPoint:CGPointMake(SCREEN_WIDTH,  450)];  // r4点
    [tPath addQuadCurveToPoint:CGPointMake(0, 450)
                  controlPoint:CGPointMake(self.cuteControlView.x, self.cuteControlView.y)]; // r3,r4,r5确定的一个弧线
    [tPath closePath];
    CAShapeLayer *shapeLayer = [[CAShapeLayer alloc] init];
    shapeLayer.fillColor = [UIColor colorWithRed:57/255.0 green:67/255.0 blue:89/255.0 alpha:1.0].CGColor;
    shapeLayer.path = tPath.CGPath;
    [self.view.layer addSublayer:shapeLayer];
    
 
    CGPoint storedCenter = self.cuteControlView.center;
    
    [self.view panWithConfig:nil event:^(UIPanGestureRecognizer * gesture) {
        if (gesture.state == UIGestureRecognizerStateChanged) {
           
            CGPoint point =  [gesture translationInView:self.view];
            NSLog(@"%@", [NSValue valueWithCGPoint:storedCenter]);
            self.cuteControlView.center = CGPointMake(storedCenter.x + point.x, storedCenter.y + point.y);
        }
        
        
    }];
    
    
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
