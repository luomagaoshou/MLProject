//
//  MLSQLiteController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/5/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLSQLiteController.h"
#import <FMDB.h>
#import "MLSQLMaker.h"
@interface MLSQLiteController ()

@end

@implementation MLSQLiteController
{
    FMDatabase *_db;
}
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

- (void)initUI
{
    NSString* docsdir = [NSSearchPathForDirectoriesInDomains( NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString* dbpath = [docsdir stringByAppendingPathComponent:@"user.sqlite"];
    NSLog(@"%@", dbpath);
    _db = [FMDatabase databaseWithPath:dbpath];
    [_db open];
    
    //NSString *excuteString = M_SQLEXCUTE(SELECT(@"*").FROM(@"table1").order.BY(@"name"));
    
   // NSLog(@"%@", excuteString);

    NSString *createTable = M_SQLEXCUTE(CREATE(@"table").IF_NOT_EXISTS(@"QF (NO integer primary key autoincrement, Name text, Score float)"));
    [_db executeUpdate:createTable];
  
    
    NSString *insertOperation = M_SQLEXCUTE(insert.INTO(@"QF (NO, Name, Score)").VALUES(@"(?, ?, ?)"));
    [_db executeUpdate:insertOperation, @99,@"zhangsan",@68.0];
    for (NSInteger i = 10; i < 30; i++) {
          [_db executeUpdate:insertOperation, @(i), [NSString stringWithFormat:@"zhangsan%ld", i],@(68.0 + i)];
    }
    NSString *selectOperation = M_SQLEXCUTE(SELECT(@"*").FROM(@"QF").order.BY(@"NO"));
    FMResultSet *set = [_db executeQuery:selectOperation];
    while ([set next]) {
        NSLog(@"%@  %@  %@", [set stringForColumn:@"NO"], [set stringForColumn:@"Name"], [set stringForColumn:@"Score"]);
    }
    NSLog(@"%@", set);
                                            
   // [self selectTop];
    //[self queryLike];
    [self queryIn];
}

- (void)selectTop
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"QF").LIMIT(@"3"));
  FMResultSet *set =  [_db executeQuery:sql];
    [self travelFMResultSet:set];
    
}
- (void)queryLike
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"QF").WHERE(@"NO").LIKE(@"'2%'"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryIn
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"QF").WHERE(@"Name").order.BY(@"NO"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)travelFMResultSet:(FMResultSet *)set
{
    while ([set next]) {
        NSLog(@"%@  %@  %@", [set stringForColumn:@"NO"], [set stringForColumn:@"Name"], [set stringForColumn:@"Score"]);
    }
}

@end
