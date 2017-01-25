//
//  RootController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/8.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "RootController.h"

#import "NibToViewController.h"
#import "ScrollViewInXibController.h"
#import "MultiThreadController.h"
#import <objc/runtime.h>
#import "NSMutableString+Position.h"
#import "LoadNibController.h"
#import "UIButton+Init.h"
#import "RunTimeController.h"
#import "NSObject+CreateCode.h"
#import "NSFileManager+ML_Tools.h"
#import "ChainableController.h"
#import "ProjectManager.h"
@interface RootController ()
@property (nonatomic, strong) UIButton *startTimeButton;

@property (nonatomic, strong) NSMutableArray *dataSource;
@end

@implementation RootController


#pragma mark - ========= View LifeCycle =========
- (void)awakeFromNib
{
    
}
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

//    self.startTimeButton.frame = CGRectMake(0, 350, SCREEN_WIDTH, 50);
//    [self.view addSubview:self.startTimeButton];
//   NSString *fileString = ml_create_HeaderFileAndCodeSourceFileOfViewWithClassByFinishIsOutPutToDeskTop([NibTBCell class], YES, @"m");
    
//    NSData *JSONData = [[NSData alloc] initWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"ECPOrderJSONStr" ofType:@"json"]];
//  NSString * JSONString = [[NSString alloc] initWithData:JSONData encoding:NSUTF8StringEncoding];
//    ml_create_ModelFileToDeskTopWithJSON_className(JSONString, @"model");
   
   // ml_create_XibViewInitHelperByFinishIsOutPutToDeskTop([NibTBCell class], YES);
    
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

    self.view.hidden = YES;
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    [self.dataSource addObjectsFromArray:@[@"NibController",
                                          @"NibToView",
                                           @"ScrollViewInXib",
                                           @"LoadNibView",
                                           @"MultiThread",
                                           @"RunTimeController",
                                           @"ChainableController",
                                           @"IQKeyboardManagerController"]];
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell" forIndexPath:indexPath];
    cell.textLabel.text = self.dataSource[indexPath.row];
   
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataSource.count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    switch (indexPath.row) {
        case 0:
        {
              [ProjectManager pushStoryboardControllerWithNibName:@"MLPageViewController" storyboardID:@"MLPageViewController"];
        }
            break;
        case 1:
        {
            NibToViewController *nibToViewController = [[NibToViewController alloc] init];
            [self.navigationController pushViewController:nibToViewController animated:YES];
        }
            break;
        case 2:
        {
            ScrollViewInXibController *scrollViewInXibCtl = [[ScrollViewInXibController alloc] initWithNibName:@"ScrollViewInXibController" bundle:nil];
            [self.navigationController pushViewController:scrollViewInXibCtl animated:YES];
        }
            break;
        case 3:
        {
            LoadNibController *loadNibCtl = [[LoadNibController alloc] initWithNibName:@"LoadNibController" bundle:nil];
            [self.navigationController pushViewController:loadNibCtl animated:YES];
        }
            break;
        case 4:
        {
            MultiThreadController *multiThreadController = [[MultiThreadController alloc] initWithNibName:@"MultiThreadController" bundle:nil];
            [self.navigationController pushViewController:multiThreadController animated:YES];
        }
            break;
        case 5:
        {
            RunTimeController *runTimeController = [[RunTimeController alloc] initWithNibName:@"RunTimeController" bundle:nil];
            [self.navigationController pushViewController:runTimeController animated:YES];
        }
            break;
        case 6:
        {
            ChainableController *chainableCtl = [[ChainableController alloc] initWithNibName:@"ChainableController" bundle:nil];
            [self.navigationController pushViewController:chainableCtl animated:YES];
        }
            break;
        default:
            break;
    }
}



#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{

}

#pragma mark - ========= Setter & Getter =========
-(NSMutableArray *)dataSource
{
    if (_dataSource == nil) {
        
        _dataSource = [[NSMutableArray alloc] init];
       
    }
    return _dataSource;
}

- (UIButton *)startTimeButton
{
    if (_startTimeButton == nil) {
        
        _startTimeButton = [UIButton buttonWithType:UIButtonTypeSystem frame:CGRectMake(0, 20, 20, 0) title:@"开始时间" borderWidth:1/SCREEN_SCALE cornerRadius:0 borderColor:[UIColor grayColor]];
        
        _startTimeButton.backgroundColor = [UIColor whiteColor];
        _startTimeButton.featureIdentifier = @"开始时间按钮";
        
        _startTimeButton.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
        _startTimeButton.titleEdgeInsets = UIEdgeInsetsMake(0, 0, 0, 50);
        [_startTimeButton setTitleColor:[UIColor grayColor] forState:UIControlStateNormal];
        _startTimeButton.titleLabel.font = [UIFont systemFontOfSize:12];
        
        [_startTimeButton setImage:[UIImage imageNamed:@"test"] forState:UIControlStateNormal];
        _startTimeButton.imageEdgeInsets = UIEdgeInsetsMake(0, SCREEN_WIDTH - 50, 0, 0);
        [_startTimeButton addTarget:self action:@selector(handleSenderEvent:) forControlEvents:UIControlEventTouchUpInside];
    }
    return _startTimeButton;
}


@end
