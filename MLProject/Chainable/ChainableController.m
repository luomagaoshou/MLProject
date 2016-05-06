//
//  ChainableController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/26.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "ChainableController.h"
#import "UIView+GestureBlock.h"


#import "MLChain.h"
#import <AFNetworking/AFNetworking.h>
#import <Masonry/Masonry.h>

#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+ChainInvocation.h"
#import <NSObject+YYAdd.h>
#import <dyci/NSSet+ClassesList.h>
#import <objc/runtime.h>
#import "vk_msgSend.h"
#import "NSObject+vk_msgSend.h"
#import <ReactiveCocoa/NSInvocation+RACTypeParsing.h>

#import "CALayer+Line.h"
#import "UIView+DrawRectBlock.h"
#import "UIBezierPath+ML_Tools.h"
#import <YYKit/CALayer+YYAdd.h>
#import "NSObject+ChainMethod.h"
#import <Foundation/NSProxy.h>
#import "NSObject+CreateCode.h"
#import "NSFileManager+ML_Tools.h"
#import "NSString+Class.h"
#import "NSObject+ChainInvocation.h"
#import "NSObject+ChainFileCreater.h"
#import "CABasicAnimation+ML_make.h"
    typedef NSString *(^testBlcok)(NSString *);


@interface ChainableController ()

@property (weak, nonatomic) IBOutlet UIButton *xibButton;

@end

@implementation ChainableController

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
    
    #define block_macro(STRING) ^(){\
        NSLog(@"string:%@", STRING);\
    }
        

    block_macro(@"打印");
    
    ^(NSString *str){
        NSLog(@"%@", str);
    }(@"test");
    
    
  NSInteger number =   (^ (id TARGET, SEL selector){
NSMethodSignature *sig = [TARGET methodSignatureForSelector:selector];
NSInteger numberOfArguments = [sig numberOfArguments];
return numberOfArguments;
}(self.view ,@selector(setSize:)));
    
    
    NSLog(@"%ld", (long)number);
//    id obj = [self performSelectorWithArgs:@selector(getArgs::), @"sdfsdf", 11, 33, "ff", @"908"];
//    NSLog(@"%@", obj);
    
    
    
    id value = MASBoxValue(0.999);
    //id value2 = MASBoxValue(7, 98);
    

    
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
- (void)fuck:(id)str
{
    NSLog(@"%@", str);
}

#pragma mark - ========= InitialUI =========
- (void)initUI
{
    
#if 0
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    
    btn.backgroundColor = [UIColor greenColor];
    [self.view addSubview:btn];
    btn.frame = CGRectMake(0, 0, 200, 200);
    btn.ml_make.backgroundColor([UIColor redColor]);
 
    btn.ml_make.size_(150, 200);
    btn.ml_make.title_forState(@"ff", UIControlStateNormal).size_(3, 5);
    btn = btn.ml_make.button;
    btn.ml_make.tintColor([UIColor greenColor]);
    
    
  UIButton *button = UIButton.ml_make.size_(150, 200)
    .lookUpMakerOfUIButton.title_forState(@"kk", UIControlStateNormal).backgroundColor([UIColor greenColor]).lookUpMakerOfUIButton.lookUpMakerOfUIButton.backgroundColor([UIColor redColor]).lookUpMakerOfUIButton.button;
    
    button.ml_make.tintColor([UIColor redColor]);
    
    [self.view addSubview:button];
    
    
    CALayer *layer = CALayer.ml_make.backgroundColor([UIColor blueColor]).frame_(200, 200, 300, 300).layer;
    [self.view.layer addSublayer:layer];
    
    UIView.ml_make.frame_(333, 333,111, 211).backgroundColor([UIColor greenColor]);
    CALayer *layer2 = CALayer.ml_make.backgroundColor([UIColor yellowColor]).frame(CGRectMake(200, 200, 50, 50)).lookUpMakerOf(CALayer).layer;
    layer2.ml_make.affineTransform(CGAffineTransformMakeRotation(1)).affineTransform(CGAffineTransformScale(layer2.affineTransform, 5, 5));

    
    
   // NSLog(@"%@", [CALayer getIvarList]);
    
   //NSString *allChainPropertyString = [CALayer getClassMethodList];
#endif
   
    
    UIView *view = [[UIView alloc] init];
    view.frame = CGRectMake(200, 200, 200, 200);
    [self.view addSubview:view];
    view.backgroundColor = [UIColor blueColor];
    view.ml_make.lookUpMakerOf(UIView);
    CABasicAnimation *animation =  [CABasicAnimation animation].ml_make.keyPath(@"backgroundColor").lookUpMakerOfCABasicAnimation.toValue((id)[UIColor greenColor].CGColor).duration(3).lookUpMakerOfCABasicAnimation.basicAnimation;
//    CABasicAnimation *animation2 = [CABasicAnimation animation].ml_make.keyPath(M_AniKeyPath(transform.scale)).lookUpMakerOfCABasicAnimation.toValue(@3).duration(2).lookUpMakerOf(basicAnimation).basicAnimation;
  
//    view.layer.ml_make.addAnimation_forKey(animation, @"").addAnimation_forKey(animation2, @"");


    

#if 0
    NSArray *classeNames= @[[NSObject class],
                            [UIResponder class],
                            [UIControl class],
                            [UIView class],
                            [UIButton class],
                            [UITextField class],
                            [UITableView class],
                            [UITextView class],
                            [UILabel class],
                            [CALayer class],
                            [CAShapeLayer class],
                            [CAEmitterLayer class],
                            [CAEmitterCell class],
                            [CAAnimation class],
                            [CAPropertyAnimation class],
                            [CABasicAnimation class],
                            
                            
                            ];
    [NSObject ml_chainCreateChainFileWithClassNames:classeNames];
#endif
   
    
}


- (void)emitterLayer
{
    CAEmitterLayer *snowEmitter = [CAEmitterLayer layer];
    snowEmitter.backgroundColor = [UIColor blueColor].CGColor;
    //例子发射位置
    snowEmitter.emitterPosition = CGPointMake(120,200);
    //发射源的尺寸大小
    snowEmitter.emitterSize = CGSizeMake(self.view.bounds.size.width * 20, 20);
    //发射模式
    snowEmitter.emitterMode = kCAEmitterLayerSurface;
    //发射源的形状
    snowEmitter.emitterShape = kCAEmitterLayerLine;
    
    //创建雪花类型的粒子
    CAEmitterCell *snowflake = [CAEmitterCell emitterCell];
    //粒子的名字
    snowflake.name = @"snow";
    //粒子参数的速度乘数因子
    snowflake.birthRate = 1.0;
    snowflake.lifetime = 120.0;
    //粒子速度
    snowflake.velocity =10.0;
    //粒子的速度范围
    snowflake.velocityRange = 10;
    //粒子y方向的加速度分量
    snowflake.yAcceleration = 2;
    //周围发射角度
    snowflake.emissionRange = 0.5 * M_PI;
    //子旋转角度范围
    snowflake.spinRange = 0.25 * M_PI;
    snowflake.contents = (id)[[UIImage imageNamed:@"44C5FC76-E862-43F6-824E-0FBBAFADA5CA"] CGImage];
    //设置雪花形状的粒子的颜色
    snowflake.color = [[UIColor colorWithRed:0.200 green:0.258 blue:0.543 alpha:1.000] CGColor];
    
    //创建星星形状的粒子
    CAEmitterCell *snowflake1 = [CAEmitterCell emitterCell];
    //粒子的名字
    snowflake1.name = @"snow";
    //粒子参数的速度乘数因子
    snowflake1.birthRate = 1.0;
    snowflake1.lifetime = 120.0;
    //粒子速度
    snowflake1.velocity =10.0;
    //粒子的速度范围
    snowflake1.velocityRange = 10;
    //粒子y方向的加速度分量
    snowflake1.yAcceleration = 2;
    //周围发射角度
    snowflake1.emissionRange = 0.5 * M_PI;
    //子旋转角度范围
    snowflake1.spinRange = 0.25 * M_PI;
    //粒子的内容和内容的颜色
    
    snowflake1.contents = (id)[[UIImage imageNamed:@"44C5FC76-E862-43F6-824E-0FBBAFADA5CA"] CGImage];
    snowflake1.color = [[UIColor colorWithRed:0.600 green:0.658 blue:0.743 alpha:1.000] CGColor];
    
    snowEmitter.shadowOpacity = 1.0;
    snowEmitter.shadowRadius = 0.0;
    snowEmitter.shadowOffset = CGSizeMake(0.0, 1.0);
    //粒子边缘的颜色
    snowEmitter.shadowColor = [[UIColor redColor] CGColor];
    
    snowEmitter.emitterCells = [NSArray arrayWithObjects:snowflake,snowflake1,nil];
    [self.view.layer addSublayer:snowEmitter];
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
