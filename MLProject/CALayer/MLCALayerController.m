//
//  MLCALayerController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCALayerController.h"
#import <objc/runtime.h>
#import "UIBezierPath+ML_Tools.h"
#import "UIView+GestureBlock.h"
#import "CALayer+Line.h"
#import "MLCALayerView.h"
#import <BlocksKit/BlocksKit.h>
#define WIDTH 50

@interface MLCALayerController ()
@property (strong, nonatomic) IBOutlet MLCALayerView *view_;

@end

@implementation MLCALayerController

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
- (void)initUI{
  
  //  [self transformTest1];
  //  [self gradientLayerTest];
   
//    [self testButton];
  //  [self testCAAnimation];
   // [self testLabel];
    
    NSString *string = @"11哈哈哈12&ddsfsdf&&";
    NSData *data = [string dataUsingEncoding:NSUTF8StringEncoding];
 
  
   NSString *unicodeStr = [NSString stringWithCString:[string UTF8String] encoding:NSUnicodeStringEncoding];
    NSString *resStr = [string stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    NSString *resStr2 = [data base64EncodedStringWithOptions:NSDataBase64Encoding64CharacterLineLength];
    const char *unicodeData = [string cStringUsingEncoding:NSUnicodeStringEncoding];
    NSString *resStr3 = [NSString stringWithCString:unicodeData encoding:NSUTF8StringEncoding];
                        NSLog(@"%@", @"");
    
    

}



- (void)testLabel{
    dispatch_async(dispatch_get_main_queue(), ^{
        self.view_.testLabel.textColor = [UIColor yellowColor];
        NSArray *colors = @[(__bridge id)[UIColor redColor].CGColor,
                            (__bridge id)[UIColor blueColor].CGColor,
                            (__bridge id)[UIColor redColor].CGColor];
#if 1
        CAGradientLayer *layer = [CAGradientLayer layer];
        layer.frame = self.view_.testLabel.layer.frame;
        layer.colors = colors;
        layer.startPoint = CGPointMake(0, 1);
        layer.endPoint = CGPointMake(1, 1);
       // layer.locations = @[@0, @0.1, @0.2];
        
         [self.view_.layer addSublayer:layer];
    
        layer.mask = self.view_.testLabel.layer;
        self.view_.testLabel.frame = layer.bounds;
#else
        
        // 创建渐变层
        CAGradientLayer* gradientLayer = [CAGradientLayer layer];
        gradientLayer.frame = self.view_.testLabel.frame;
        gradientLayer.colors = colors;
        gradientLayer.startPoint = CGPointMake(0, 1);
        gradientLayer.endPoint = CGPointMake(1, 1);
        [self.view_.layer addSublayer:gradientLayer];
        
        gradientLayer.mask = self.view_.testLabel.layer;
        self.view_.testLabel.frame = gradientLayer.bounds;
#if 0
        CABasicAnimation *animaiton = [CABasicAnimation animationWithKeyPath:@"transform.translation.x"];
        animaiton.toValue = @100;
        animaiton.duration = 3;
        animaiton.repeatCount = HUGE_VAL;
        [self.view_.testLabel.layer addAnimation:animaiton forKey:nil];
#endif
        
        [UIView animateWithDuration:3 animations:^{
            self.view_.testLabel.left += 100;
        }];
#endif
    });

    
}

- (void)testLabel2{
    
}


- (void)testCAAnimation{
    self.view_.testView.layer.backgroundColor = [UIColor redColor].CGColor;
    CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:@"backgroundColor"];
 //   animation.fromValue = (__bridge id)[UIColor blueColor].CGColor;
    animation.toValue = (__bridge id)[UIColor greenColor].CGColor;
    [self.view_.testView.layer addAnimation:animation forKey:nil];
}
- (void)testButton{
    //create opaque button
    UIButton *button1 = [self customButton];
    //button1.alpha = 0.5;
    button1.center = CGPointMake(50, 150);
    [self.view_ addSubview:button1];
    
    //create translucent button
    UIButton *button2 = [self customButton];
    button2.center = CGPointMake(250, 150);
    button2.alpha = 0.5;
    [self.view_ addSubview:button2];
    //enable rasterization for the translucent button
    
    button2.layer.shouldRasterize = YES;
    button2.layer.rasterizationScale = [UIScreen mainScreen].scale;
}

- (UIButton *)customButton {
    //create button
    CGRect frame = CGRectMake(0, 0, 150, 50);
    UIButton *button = [[UIButton alloc] initWithFrame:frame]; button.backgroundColor = [UIColor whiteColor];
    button.layer.cornerRadius = 10;
    //add label
    frame = CGRectMake(20, 10, 110, 30);
    UILabel *label = [[UILabel alloc] initWithFrame:frame]; label.text = @"Hello World";
    label.textAlignment = NSTextAlignmentCenter;
    label.backgroundColor = [UIColor greenColor];
    label.alpha = 0.25;
    [button addSubview:label];
    return button;
}

- (void)transformTest1{
    
  
    CATransform3D transfrom = CATransform3DIdentity;
    transfrom.m34 = -1.0/500;
    transfrom = CATransform3DRotate(transfrom, M_PI_4, 0, 1, 0);
    CALayer *layer = [CALayer layer];
    layer.backgroundColor = [UIColor redColor].CGColor;
    layer.frame = self.view.layer.bounds;
    layer.transform = transfrom;
    [self.view.layer addSublayer:layer];
}
- (void)gradientLayerTest{
    self.view_.testView.backgroundColor = [UIColor greenColor];
    
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.frame = self.view_.testView.bounds;
    [self.view_.testView.layer addSublayer:gradientLayer];
    gradientLayer.colors = @[(__bridge id)[UIColor redColor].CGColor,
                             (__bridge id)[UIColor yellowColor].CGColor,
                             (__bridge id)[UIColor greenColor].CGColor,
                             (__bridge id)[UIColor blueColor].CGColor];
    gradientLayer.locations = @[@0, @0.2, @0.5, @0.8];
    gradientLayer.startPoint = CGPointMake(0, 0);
    gradientLayer.endPoint = CGPointMake(1, 1);
    
    
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
