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
    
    [self createTable];
//    if (!_db.databasePath) {
          [self createData];
//    }
   
  //  [self queryAll];
    //[self queryTop3];
    //[self queryMAX];
   // [self queryGroup];
                                            
   // [self selectTop];
    //[self queryLike];
   // [self queryGlob];
   // [self queryIn];
   // [self queryBetween];
    [self queryCount];
    
   
}

- (void)createTable
{
    NSString* docsdir = [NSSearchPathForDirectoriesInDomains( NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString* dbpath = [docsdir stringByAppendingPathComponent:@"user.sqlite"];
    NSLog(@"%@", dbpath);
    _db = [FMDatabase databaseWithPath:dbpath];
    [_db open];
    
    //NSString *excuteString = M_SQLEXCUTE(SELECT(@"*").FROM(@"table1").order.BY(@"name"));
    
    // NSLog(@"%@", excuteString);
    
    NSString *createTable = M_SQLEXCUTE(CREATE_TABLE_IF_NOT_EXISTS(@"SQF (NO integer primary key autoincrement, Name text, Score float)"));
    [_db executeUpdate:createTable];
}
- (void)createData
{
  
    NSString *insertOperation = M_SQLEXCUTE(insert.INTO(@"SQF (NO, Name, Score)").VALUES(@"(?, ?, ?)"));
    [_db executeUpdate:insertOperation, @99,@"zhangsan",@68.0];
    [_db executeUpdate:insertOperation, @101,@"zhangsan",@68.0];
    for (NSInteger i = 10; i < 30; i++) {
        [_db executeUpdate:insertOperation, @(i), [NSString stringWithFormat:@"zhangsan%ld", i],@(68.0 + i)];
    }
}
#pragma mark - ========= Query =========
- (void)queryAll
{
    NSString *selectOperation = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF"));
    FMResultSet *set = [_db executeQuery:selectOperation];
    [self travelFMResultSet:set];
    
    
}
//排序
- (void)queryOrderBy
{
    NSString *selectOperation = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").order.BY(@"NO"));
    FMResultSet *set = [_db executeQuery:selectOperation];
    while ([set next]) {
        NSLog(@"%@  %@  %@", [set stringForColumn:@"NO"], [set stringForColumn:@"Name"], [set stringForColumn:@"Score"]);
    }
    NSString *selectOperationAsc = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").order.BY(@"NO").asc);
    FMResultSet *setAsc = [_db executeQuery:selectOperationAsc];
    while ([setAsc next]) {
        NSLog(@"%@  %@  %@", [set stringForColumn:@"NO"], [set stringForColumn:@"Name"], [set stringForColumn:@"Score"]);
    }
    
}
- (void)selectTop
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").LIMIT(@"3"));
  FMResultSet *set =  [_db executeQuery:sql];
    [self travelFMResultSet:set];
    
}
- (void)queryLike
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").WHERE(@"NO").LIKE(@"'2%'"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryGlob
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").WHERE(@"Name").GLOB(@"zh*2*"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryIn
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").WHERE(@"NO").IN(@"(20, 21)"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryNotIn
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").WHERE(@"NO").not.IN(@"(30, 80)"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryBetween
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").WHERE(@"NO").BETWEEN(@"20").AND(@"30"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
- (void)queryTop3
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"*").FROM(@"SQF").order.BY(@"NO").WHERE(@"rownum < 3"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
//重组
- (void)queryGroup
{
    NSString *sql = M_SQLEXCUTE(SELECT(@"Name, NO").FROM(@"SQF").GROUP_BY(@"Name"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];

}
- (void)queryHaving
{
     NSString *sql = M_SQLEXCUTE(SELECT(@"Name, NO").FROM(@"SQF").GROUP_BY(@"Name").HAVING(@""));
}
#pragma mark - ========= Function =========
- (void)queryCount
{
    NSString *sql = M_SQLEXCUTE(select.COUNT(@"*").FROM(@"SQF"));
    NSInteger count = [_db intForQuery:sql];
    NSLog(@"%d", count);
}
- (void)queryMAX
{
    NSString *sql = M_SQLEXCUTE(select.MAX_(@"NO").FROM(@"SQF"));
    FMResultSet *set = [_db executeQuery:sql];
    [self travelFMResultSet:set];
}
#pragma mark - ========= 遍历 =========
- (void)travelFMResultSet:(FMResultSet *)set
{
 id dic =  [set resultDictionary];
   int count = [set columnCount];
    while ([set next]) {
        NSLog(@"%@  %@  %@", [set stringForColumn:@"NO"], [set stringForColumn:@"Name"], [set stringForColumn:@"Score"]);
    }
}

@end
