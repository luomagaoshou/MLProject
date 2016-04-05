//
//  RunTimeController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/12.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "RunTimeController.h"
#import "NSObject+Add.h"
#import <objc/objc.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "SomeClass.h"
#import "SBHSplitOrderMaster.h"
#import "SBHSplitOrderModel.h"
#import "MJExtension.h"


@interface RunTimeController ()

@property (nonatomic, copy) NSString *JSONString;
@property (nonatomic, strong) SBHSplitOrderMaster *splitOrderMaster;
@property (nonatomic, strong) SBHSplitOrderModel *splitOrderModel;
@property (nonatomic, strong) NSMutableArray *dataSource;
@end

@implementation RunTimeController

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
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cell"];
    [[self class] addPropertyWithClass:[NSString class] ownerShipType:PropertyOwnershipTypeCopy propertyName:@"addString"];
    
   
//    [self performSelector:NSSelectorFromString(@"setAddString:") withObject:@"test"];
//    [self performSelector:NSSelectorFromString(@"addString")];
//
    

    [self setValue:@"test" forKey:@"addString"];
    NSLog(@"%@", [self valueForKey:@"addString"]);
//    NSLog(@"%@",     [self performSelector:NSSelectorFromString(@"addString")]);
   // testRunTime();
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
//    self.JSONString = [[NSString alloc] initWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"ECPOrderJSONStr" ofType:@"rtf"] encoding:NSUTF8StringEncoding error:nil];
    NSData *JSONData = [[NSData alloc] initWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"ECPOrderJSONStr" ofType:@"json"]];
    self.JSONString = [[NSString alloc] initWithData:JSONData encoding:NSUTF8StringEncoding];
    NSJSONSerialization *JSONObj = [NSJSONSerialization JSONObjectWithData:JSONData options:NSJSONReadingMutableContainers error:nil];


    
    NSLog(@"%@", self.JSONString);
    
 }
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:indexPath];
//    if (self.<#dataSource#>.count > 0) {
//        
//        cell.selectionStyle = UITableViewCellSelectionStyleNone;
//        
//        return cell;
//    }
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}



#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
- (void)createClassWithSuperClass:(Class)superClass name:(char *)name
{
    Class rumTimeClass = objc_allocateClassPair(superClass, name, 0);

}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)dataSource
{
    if (_dataSource == nil) {
        
        _dataSource = [[NSMutableArray alloc] init];
    }
    return _dataSource;
}

@end


