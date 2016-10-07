//
//  MLCLPointerController.m
//  MLProject
//
//  Created by apple on 16/5/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCLPointerController.h"

@interface MLCLPointerController ()

@end

@implementation MLCLPointerController

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
   // [self pointerAddressValue];
  
    //[self swapTest];
      [self allocTest1];
    [self allocTest2];
}
- (void)swapTest{
    int p = 1111;
    int q = 2222;
    [self swap:p :q];
    NSLog(@"%d---%d", p, q);
    
    int p2 = 3333;
    int q2 = 4444;
    [self swapWithPoint:&p2 :&q2];
    NSLog(@"%d---%d", p2, q2);
    
    @"";
    int *o = &p2;
    *o = 555;
    NSLog(@"%d", p2);
}
- (void)pointerAddressValue
{
    int  a[5] = {1,2,3,4,5};
    int *ptr =  (int*)(&a+1);
    
    printf("%d %d" , *(a+1), *(ptr-1) );
}
- (void)swap:(int)p :(int)q
{
    int *temp = &p;
    p = q;
    q = *temp;
}
- (void)swapWithPoint:(int *)p :(int *)q
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

#pragma mark -  alloc
- (void)allocTest1{
    char *p, *q;
    p = (char *)malloc(10);
    q = p;
    p = (char *)realloc(p, 10);
    printf("p=0x%x\n",p);
    printf("q=0x%x\n",q);
}
- (void)allocTest2{
    char *p, *q;
    p = (char *)malloc(10);
    q = p;
    p = (char *)realloc(p, 17);
    printf("p=0x%x\n",p);
    printf("q=0x%x\n",q);
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
