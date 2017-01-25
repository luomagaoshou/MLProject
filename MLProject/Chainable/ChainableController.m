//
//  ChainableController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/26.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "ChainableController.h"
#import "UIView+GestureBlock.h"



#import <AFNetworking/AFNetworking.h>
#import <Masonry/Masonry.h>

#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+ChainInvocation.h"
#import <NSObject+YYAdd.h>

#import <objc/runtime.h>
#import "vk_msgSend.h"
#import "NSObject+vk_msgSend.h"
#import <ReactiveCocoa/NSInvocation+RACTypeParsing.h>

#import "CALayer+Line.h"
#import "UIView+DrawRectBlock.h"
#import "UIBezierPath+ML_Tools.h"
#import <YYKit/CALayer+YYAdd.h>
#import <Foundation/NSProxy.h>
#import "NSObject+CreateCode.h"
#import "NSFileManager+ML_Tools.h"
#import "NSString+Class.h"
#import "CABasicAnimation+ml_make.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "NSObject+ChainFileCreater.h"
#import "MLChain.h"
    typedef NSString *(^testBlcok)(NSString *);

#define mlkeypath(...) \
metamacro_if_eq(1, metamacro_argcount(__VA_ARGS__))(mlkeypath1(__VA_ARGS__))(mlkeypath2(__VA_ARGS__))

#define mlkeypath1(PATH) \
(((void)(NO && ((void)PATH, NO)), strchr(# PATH, '.') + 1))

#define mlkeypath2(OBJ, PATH) \
(((void)(NO && ((void)OBJ.PATH, NO)), # PATH))



@class ChainableController;
@protocol MLTestViewChain <NSObject>
@optional
- (NSObject  <MLTestViewChain> * (^)(id args,...))testView;
- (ChainableController *(^)())testView2;
@end

@protocol MLTestButtonChain <MLTestViewChain>
@optional
- (NSObject <MLTestButtonChain> * (^)(id args,...))testButton;
- (instancetype (^)())testButton2;
@end

@interface ChainableController ()<MLTestButtonChain, MLTestViewChain>

@property (weak, nonatomic) IBOutlet UIButton *xibButton;
- (ChainableController * (^)())chain;
@end

@implementation ChainableController

#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
//        self.testButton(@"").testView(@"").testView(@"");
//        [[self.testView2(@"") testButton2](@"") testView](@"").testView(@"").testView2(@"");
//        self.testView2();
//        self.chain(@"").chain().self.chain();
    }
    self.testView2().testView2().testView2().testView2();
  
    
    
    id obj = ^{
      return @"333";
    }();
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
    [NSObject mlc_chainCreateChainFileWithClassNames:
     @[[UITableView class],
       [UICollectionView class],
       [UITextField class],
       [UITableViewCell class],
       [UICollectionView class],
       [CABasicAnimation class],
       [CAShapeLayer class],
       [CAGradientLayer class],
       [UILabel class],
       [UIButton class],
       [UIApplication class],
       [UIImageView class]]];
   // [self initUI];
    //[self downloadData];

}
#if 1
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
     self.view.hidden = YES;
    //[self changeFile];
    [self chainMethodAdd];
    
#if 0
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    
    btn.backgroundColor = [UIColor greenColor];
    [self.view addSubview:btn];
    btn.frame = CGRectMake(0, 0, 200, 200);
    btn.mlc_make.backgroundColor([UIColor redColor]);
 
    btn.mlc_make.size_(150, 200);
    btn.mlc_make.title_forState(@"ff", UIControlStateNormal).size_(3, 5);
    btn = btn.mlc_make.button;
    btn.mlc_make.tintColor([UIColor greenColor]);
    
    
  UIButton *button = UIButton.mlc_make.size_(150, 200)
    .title_forState(@"kk", UIControlStateNormal).backgroundColor([UIColor greenColor]).backgroundColor([UIColor redColor]).button;
    
    button.mlc_make.tintColor([UIColor redColor]);
    
    [self.view addSubview:button];
    
    
    CALayer *layer = CALayer.mlc_make.backgroundColor([UIColor blueColor]).frame_(200, 200, 300, 300).layer;
    [self.view.layer addSublayer:layer];
    
    UIView.mlc_make.frame_(333, 333,111, 211).backgroundColor([UIColor greenColor]);
    CALayer *layer2 = CALayer.mlc_make.backgroundColor([UIColor yellowColor]).frame(CGRectMake(200, 200, 50, 50)).layer;
    layer2.mlc_make.affineTransform(CGAffineTransformMakeRotation(1)).affineTransform(CGAffineTransformScale(layer2.affineTransform, 5, 5));

    
    
   // NSLog(@"%@", [CALayer getIvarList]);
    
   //NSString *allChainPropertyString = [CALayer getClassMethodList];
#endif


    UIView *view = [[UIView alloc] init];
    
    view.frame = CGRectMake(200, 200, 200, 200);
    [self.view addSubview:view];
    view.backgroundColor = [UIColor blueColor];
   
    
    
    CABasicAnimation *animation =  [CABasicAnimation animation].mlc_make.keyPath(@"backgroundColor").toValue((id)[UIColor greenColor].CGColor).duration(3).chainObject;

//    CABasicAnimation *animation2 = [CABasicAnimation animation].mlc_make.keyPath(M_AniKeyPath(transform.scale))(@3).duration(2).basicAnimation;
  
//    view.layer.mlc_make.addAnimation_forKey(animation, @"").addAnimation_forKey(animation2, @"");




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
    
#if 0
    NSArray *classeNames= @[
                            [UIView class],
                            [NSObject class],
                            
                            
                            ];
    [NSObject mlc_chainCreateChainFileWithClassNames:classeNames];
#endif
    
    
}


- (void)chainMethodAdd{
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(100, 100, 200, 200)];
    view.backgroundColor = [UIColor cyanColor];
    [self.view addSubview:view];
    //view.mlc_make.frame(10, 10, 20, 200);
  
    view.mlc_make.frame(CGRectMake(200, 200, 50, 300));
  view.mlc_make.frame_(10, 10, 20, 200);
    @"";
}
- (void)changeFile{
    
     NSString *filePath = [[NSBundle mainBundle] pathForResource:@"ChainInfo" ofType:@"plist"];
    NSDictionary *dic = [[NSDictionary alloc] initWithContentsOfFile:filePath];
    NSArray *directoryPaths = NSSearchPathForDirectoriesInDomains
    (NSDocumentDirectory, NSUserDomainMask, YES);
    
    NSString *fileStr = [[NSString alloc] initWithData:[[NSFileManager defaultManager] contentsAtPath:filePath] encoding:NSUTF8StringEncoding];
    fileStr = [fileStr stringByAppendingString:fileStr];
    
    {
        fileStr = @"aha";
    }
    [[NSFileManager defaultManager] writefileString:filePath ToFileWithDiretory:fileStr fileName:@"MLChainTest" fileType:@"h" moveToTrashWhenFileExists:NO];
    
    
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


#endif
@end
