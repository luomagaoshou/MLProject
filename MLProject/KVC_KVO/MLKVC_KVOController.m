//
//  MLKVC_KVOController.m
//  MLProject
//
//  Created by apple on 16/4/28.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLKVC_KVOController.h"
@interface MLTestProduct : NSObject
@property NSString *name;
@property double price;
@property (nonatomic, copy) NSArray *array;
//@property NSDate *launchedOn;
+ (instancetype)productWithName:(NSString *)name price:(double)price;
@end

@implementation MLTestProduct
+ (instancetype)productWithName:(NSString *)name price:(double)price
{
    MLTestProduct *product = [[MLTestProduct alloc] init];
    product.name = name;
    product.price = price;
    product.array = @[@"1", @"2", @"3", @"4"];
    return product;
}

@end
@interface MLKVC_KVOController ()

@end

@implementation MLKVC_KVOController

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
    [self example2];
}
- (void)example1
{
    NSArray *array = [NSArray arrayWithObjects:@"10.11",
                      @"20.22", nil];
    NSArray *resultArray = [array valueForKeyPath:@"doubleValue.intValue"];
    NSLog(@"%@", resultArray);
}
- (void)example2
{
    MLTestProduct *p1 = [MLTestProduct productWithName:@"iPhone5" price:1111];
      MLTestProduct *p2 = [MLTestProduct productWithName:@"iPhone5" price:2222];
      MLTestProduct *p3 = [MLTestProduct productWithName:@"iPhone4" price:3333];
    MLTestProduct *p4 = [MLTestProduct productWithName:@"iPhone6" price:4444];
    NSArray *products = @[p1, p2, p3, p4];
//    NSArray *result0 = [products valueForKeyPath:@"@unionOfObjects"];
   NSArray *result1 = [products valueForKeyPath:@"@unionOfObjects.name"];
      NSArray *result2 = [products valueForKeyPath:@"@distinctUnionOfObjects.name"];
    
    NSMutableArray *prices = [[NSMutableArray alloc] init];
    NSArray *operationOfPrices = @[@"count", @"avg", @"sum", @"min", @"max"];
    for (NSString *operation in operationOfPrices) {
        NSString *keyPath = [NSString stringWithFormat:@"@%@.%@", operation, @"price"];
        NSString *result = [products valueForKeyPath:keyPath];
        [prices addObject:result];
    }
    NSArray *cpOfPrices = [products valueForKeyPath:@"@unionOfObjects.name"];

    NSArray *result3 = [products valueForKeyPath:@"@unionOfArrays.array"];
    //NSArray *result3 = [products valueForKeyPath:@"@sum.price.doubleValue"];
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
