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
 #define MAS_SHORTHAND_GLOBALS
    typedef NSString *(^testBlcok)(NSString *);

@interface ChainableController ()


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
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    btn.backgroundColor = [UIColor greenColor];
    [self.view addSubview:btn];
    btn.frame = CGRectMake(0, 0, 200, 200);
   
  //  btn.ml_make.backgroundColor([UIColor redColor]).frame(self.view.width/2, self.view.height/2,200, 200).backgroundColor([UIColor redColor]);
    btn.ml_make.center(200 ,200);
   
   // id point = ml_chain_MASBoxValue(CGPointMake(200, 200));
   // btn.ml_make.titleForState(@"sfsdf", UIControlStateNormal);

    UIView *view = [[UIView alloc] init];
    [self.view addSubview:view];
    view.backgroundColor = [UIColor blueColor];
 
    NSLog(@"%@", [CALayer getIvarList]);

    
    

//    CALayer *layer =[[CALayer alloc] init];
//    layer.ml_make.frame(100, 100, 200, 200);
//
//    layer.ml_make.affineTransform(1.1, 2.2, 3.3, 4.4, 5.5, 6.6);
   //layer.ml_make.frame(100 ,100 ,200, 100).backgroundColor([UIColor yellowColor]).shadowRadius(19).shadowColor([UIColor blueColor]).shadowOffset(-50, 50).borderWidth(10).shadowOpacity(1).borderColor([UIColor cyanColor]).shadowColor([UIColor greenColor]);
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
