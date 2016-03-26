//
//  ChainableController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/26.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "ChainableController.h"
#import "UIView+GestureBlock.h"


#define kObject @"kObject"
#define kInt @"kInt"
#define kDouble @"kDouble"
#import <AFNetworking/AFNetworking.h>
#import <Masonry/Masonry.h>


#import "ML_UIViewChain.h"
#import "UIView+ML_UIViewChain.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+ChainInvocation.h"
#import "UIButton+ML_UIButtonChain.h"
#import <NSObject+YYAdd.h>
#import <dyci/NSSet+ClassesList.h>
#import <objc/runtime.h>
#import "vk_msgSend.h"
#import "NSObject+vk_msgSend.h"
#import <ReactiveCocoa/NSInvocation+RACTypeParsing.h>
#import "CALayer+ML_CALayerChain.h"
#import "CALayer+Line.h"
#import "UIView+DrawRectBlock.h"
#import "UIBezierPath+ML_Tools.h"
 #define MAS_SHORTHAND_GLOBALS
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
    
    
    NSLog(@"%ld", number);
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

#pragma mark - ========= InitialUI =========
- (void)initUI
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
    snowflake.contents = (id)[[UIImage imageNamed:@"DazFlake"] CGImage];
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
    snowflake1.contents = (id)[[UIImage imageNamed:@"DazStarOutline"] CGImage];
    snowflake1.color = [[UIColor colorWithRed:0.600 green:0.658 blue:0.743 alpha:1.000] CGColor];
    
    snowEmitter.shadowOpacity = 1.0;
    snowEmitter.shadowRadius = 0.0;
    snowEmitter.shadowOffset = CGSizeMake(0.0, 1.0);
    //粒子边缘的颜色
    snowEmitter.shadowColor = [[UIColor redColor] CGColor];
    
    snowEmitter.emitterCells = [NSArray arrayWithObjects:snowflake,snowflake1,nil];
    [self.view.layer addSublayer:snowEmitter];
    // Do any additional setup after loading the view.
    
    
    
//    [self.xibButton setNeedsLayout];
//    [self.xibButton setNeedsUpdateConstraints];
//    CALayer *subLayer = [[CALayer alloc] init];
//    subLayer.backgroundColor = [UIColor redColor].CGColor;
//    subLayer.frame = self.xibButton.bounds;
//    [self.xibButton.layer addSublayer:subLayer];
//    self.xibButton.layer.frame = self.xibButton.bounds;
    //  self.xibButton.layer.masksToBounds = YES;
  //  [subLayer makeLineWithPositionType:CALayerDrawLineTypePositionBottom lineWidthOrHeight:10 insets:UIEdgeInsetsMake(0, 0, 0, 0)  lineColor:[UIColor yellowColor]];
    self.xibButton.drawRectBlock = ^(CGContextRef ref, CGRect rect){
        [self.xibButton configDrawRectBlock:^(CGContextRef ref, CGRect rect) {
            [UIBezierPath drawLineOnTopWithView:self.xibButton lineColor:[UIColor greenColor] lineWidth:10 ];
            [UIBezierPath drawLineOnLeftWithView:self.xibButton lineColor:[UIColor redColor] lineWidth:20 ];
            [UIBezierPath drawLineOnBottomWithView:self.xibButton lineColor:[UIColor cyanColor] lineWidth:10 ];
            [UIBezierPath drawLineOnRightWithView:self.xibButton lineColor:[UIColor yellowColor] lineWidth:20 ];
        }];
     
//        [UIBezierPath drawLineOnView:self.xibButton withSide:UIBezierPathDrawLineOptionSideBottom|UIBezierPathDrawLineOptionSideLeft|UIBezierPathDrawLineOptionSideRight|UIBezierPathDrawLineOptionSideTop lineColor:[UIColor greenColor] lineWidth:10 insets:UIEdgeInsetsMake(1, 20, 0, 20)];
    };
    
    
//    [self.xibButton configDrawRectBlock:^(CGContextRef ref, CGRect rect) {
//        
//    }];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    btn.backgroundColor = [UIColor greenColor];
    [self.view addSubview:btn];
    btn.frame = CGRectMake(0, 0, 200, 200);
    btn.ml_make.backgroundColor([UIColor redColor]);
    
  //  btn.ml_make.backgroundColor([UIColor redColor]).frame(self.view.width/2, self.view.height/2,200, 200).backgroundColor([UIColor redColor]);
   // btn.ml_make.center(200 ,200).frame(100, 100, 300, 300);
   
   // id point = ml_chain_MASBoxValue(CGPointMake(200, 200));
   // btn.ml_make.titleForState(@"sfsdf", UIControlStateNormal);

    UIView *view = [[UIView alloc] init];
    [self.view addSubview:view];
    view.backgroundColor = [UIColor blueColor];
 
    NSLog(@"%@", [CALayer getIvarList]);

    
   
    CALayer *layer =[[CALayer alloc] init];
  //  layer.ml_make.frame(100, 100, 200, 200);
    layer.ml_make.backgroundColor([UIColor redColor]);
    
  // layer.ml_make.frame(100 ,100 ,200, 100).backgroundColor([UIColor yellowColor]).borderWidth(10).borderColor([UIColor cyanColor]).superLayer(self.view.layer);
//    layer.ml_make.shadowOffset(-50, 50).shadowRadius(10).shadowColor([UIColor blueColor]).shadowColor([UIColor redColor]).shadowOpacity(0.8);
//    self.xibButton.clipsToBounds = NO;
//    self.xibButton.layer.masksToBounds = NO;
//    layer.masksToBounds = NO;
//    layer.ml_make.affineTransform(CGAffineTransformMake(0, 1, 1, 0, 0, 0));
    
//    layer.shadowOffset = CGSizeMake(-50, 50);
   // layer.shadowColor = [UIColor orangeColor].CGColor;
   // layer.shadowOpacity = 0.8;  // 阴影透明度
//    layer.shadowRadius = 20;    // 阴影的半径
    
  //  layer.ml_make.transform(CATransform3DMakeAffineTransform(<#CGAffineTransform m#>));

   // layer.transform = CATransform3DMakeAffineTransform(CGAffineTransformMake(2, 0, 0, 1, 2, 2));

   // CATransform3D transform = CATransform3DMakeTranslation(2, 2, 2);
 //   layer.transform = transform;
 //   layer.ml_make.transform(transform);
    
    
//    // 圆角
//    layer.cornerRadius = 20;
//    
//    // 阴影
//    //layer.shadowOffset = CGSizeMake(-50, 50);
//   // layer.shadowColor = [UIColor orangeColor].CGColor;
//    layer.shadowOpacity = 1.0;  // 阴影透明度
//    layer.shadowRadius = 20;    // 阴影的半径
    
    //[self.view.layer addSublayer:layer];

    
//
//    CGFloat originalMoney = 1.4;
//    CGFloat interestRate = 0.12;
//    CGFloat interestForThisYear = 0;
//    CGFloat storeMoney = 0;
//    CGFloat beginMoneyForEveryYear = 0;
//    
//    double amount;
//    for (int i = 1; i <= 25; i++) {
//        amount += originalMoney;
//        beginMoneyForEveryYear = amount;
//        interestForThisYear = beginMoneyForEveryYear * interestRate;
//        amount += interestForThisYear;
//        storeMoney += originalMoney;
//        printf("第%d年，总投资:%.4lf万元，复利前总额:%.4lf   当年利息:%.4lf 复利后总额（本金加利息）:%.4lf万元\n", i, storeMoney, beginMoneyForEveryYear, interestForThisYear, amount);
//    }
//    NSLog(@"%lf", amount);
}

- (char *)getArgumentTypeWith:(SEL)selector target:(id)target index:(NSInteger)index
{
    
    
    return "";
}


- (void)getWithType:(char *)type number:(id)number
{
    
}
- (void)type:(char *)type arr:(NSArray *)arr
{
    if (strcmp(type, @encode(CGSize))) {
        for (NSInteger i = 0; i < arr.count; i++) {
        
        }
        
    }
}





- (void)mutableArgumentsFunction:(NSString *)arg1, ... NS_REQUIRES_NIL_TERMINATION
{
    // 定义一个指向可选参数列表的指针
    va_list args;
    
    // 获取第一个可选参数的地址，此时参数列表指针指向函数参数列表中的第一个可选参数
    va_start(args, arg1);
    if(arg1)
    {
        // 遍历参数列表中的参数，并使参数列表指针指向参数列表中的下一个参数
        NSString *nextArg;
        while((nextArg = va_arg(args, NSString *)))
        {
            NSLog(@"ARG :%@", nextArg);
        }
    }
    // 结束可变参数的获取(清空参数列表)
    va_end(args);
}
#pragma mark - ========= GetArgs =========
- (void)getArgs:(id)obj :(id)obj2
{
    NSLog(@"%@", obj);
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
