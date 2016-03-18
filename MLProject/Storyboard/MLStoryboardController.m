




//
//  MLStoryboardController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/1/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLStoryboardController.h"
#import "MLSBTestCell.h"
#import "MLTBHeader.h"
#import "MLTBFooter.h"
#import "UIImage+AttributeString.h"
#import "NSMutableAttributedString+ML_Tools.h"
#import "NSString+MutAttrStr.h"
#import "UIView+GestureBlock.h"
@interface MLStoryboardController ()<UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableview;

@property (weak, nonatomic) IBOutlet MLTBHeader *tableHeader;
@property (weak, nonatomic) IBOutlet MLTBFooter *tableFooter;



@end

@implementation MLStoryboardController

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
    [self.tableview ML_registerNibAndCellReuseIdentifierWithDictionary:@{@"MLSBTestCell":@"MLSBTestCell"}];
    self.tableview.delegate = self;
    self.tableview.dataSource = self;
    
    [self.tableHeader.button1 touchDown:^{
        NSLog(@"%@", @"button1");
    }];
    
    [self.tableFooter.button touchDown:^{
        NSLog(@"footerButton");
    }];
    [self.tableFooter.button2 touchDown:^{
        NSLog(@"footerButton2");
    }];
    [self.tableHeader tapWithConfig:nil event:^(id gesture) {
        NSLog(@"sdfsdfdsf");
    }];

    
    
   NSArray *paths = [[NSBundle mainBundle] pathsForResourcesOfType:@"storyboard" inDirectory:[[NSBundle mainBundle] resourcePath]];
    NSLog(@"%@", paths);
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    MLSBTestCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MLSBTestCell" forIndexPath:indexPath];
//    if (self.<#dataSource#>.count > 0) {
//        
//        cell.selectionStyle = UITableViewCellSelectionStyleNone;
//        
//        return cell;
//    }
    
    NSMutableAttributedString *mutAttrStr = [[UIImage imageNamed:@"44C5FC76-E862-43F6-824E-0FBBAFADA5CA"] mutableAttributedStringWithBounds:CGRectMake(0, -25, 50, 50)];
    [mutAttrStr appendAttributedString:[@"  test\ntest" mutAttrStr]];
    [cell.button setAttributedTitle:mutAttrStr forState:UIControlStateNormal];
    
    [cell.label setAttributedText:mutAttrStr];
    [cell.label tapWithConfig:nil event:^(id gesture) {
        NSLog(@"%@", @"tap");
    }];
    
    cell.label.userInteractionEnabled = YES;

    [cell tapWithConfig:nil event:^(id gesture) {
        NSLog(@"cellTap");
    }];
    cell.label.numberOfLines = 0;
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 5;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 100;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}



#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========



@end
