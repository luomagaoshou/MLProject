//
//  MultiThreadController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/19.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "MultiThreadController.h"

@interface MultiThreadController ()
@property (nonatomic, strong) NSMutableArray *dataSource;
@end

@implementation MultiThreadController
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
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cell"];
    [self.dataSource addObjectsFromArray:@[@"GCD串行同步",
                                           @"GCD串行异步",
                                           @"GCD并行同步",
                                           @"GCD并行异步",
                                           @"block同步"
                                           ]];
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
            [self GCDTaskRunInSerialQueueBySynchronously];
        }
            break;
        case 1:
        {
            [self GCDTaskRunInSerialQueueByAsynchronously];
        }
            break;
        case 2:
        {
            [self GCDTaskRunInParallelQueueBySynchronously];
        }
            break;
        case 3:
        {
            [self GCDTaskRunInParallelQueueByAynchronously];
        }
            break;
        case 4:
        {
        [self asynExcuteBlock];
        }
            break;
        default:
            break;
    }
    
}


#pragma mark - ========= GCD =========
- (void)GCDTaskRunInSerialQueueBySynchronously
{
    dispatch_queue_t queue = dispatch_queue_create("serial", DISPATCH_QUEUE_SERIAL);(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_sync(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"串行队列，同步操作1:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
        
    });
    [NSThread sleepForTimeInterval:1.0f];
    NSLog(@"\n\n中场休息\n\n");
    [NSThread sleepForTimeInterval:1.0f];
    
    dispatch_sync(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"串行队列，同步操作2:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
}
- (void)GCDTaskRunInSerialQueueByAsynchronously
{
    
    dispatch_queue_t queue = dispatch_queue_create("serial", DISPATCH_QUEUE_SERIAL);(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"串行队列，异步操作1:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
        
    });
    [NSThread sleepForTimeInterval:1.0f];
    NSLog(@"\n\n中场休息\n\n");
    [NSThread sleepForTimeInterval:1.0f];
    
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"串行队列，异步操作2:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"串行队列，异步操作3:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });

}


- (void)GCDTaskRunInParallelQueueBySynchronously
{
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_sync(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，同步操作1:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
        
    });
    [NSThread sleepForTimeInterval:1.0f];
    NSLog(@"\n\n中场休息\n\n");
    [NSThread sleepForTimeInterval:1.0f];
    
    dispatch_sync(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，同步操作2:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
    dispatch_sync(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，同步操作3:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
}

- (void)GCDTaskRunInParallelQueueByAynchronously
{
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，异步操作1:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
   
    });
     [NSThread sleepForTimeInterval:1.0f];
     NSLog(@"\n\n中场休息\n\n");
      [NSThread sleepForTimeInterval:1.0f];
    
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，异步操作2:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
    dispatch_async(queue, ^{
        for (NSInteger i = 0; i < 9; i++) {
            NSLog(@"并行队列，异步操作3:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
    });
}
- (void)asynExcuteBlock
{
    
   
    
    
    
    
    
    
        typedef void (^MultiThreadTestBlock)(void);
    
      NSLog(@"=====groupStart======");
    dispatch_group_t group = dispatch_group_create();
     dispatch_group_enter(group);
    MultiThreadTestBlock groupBlock  = ^{
       
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_global_queue(0, 0), ^{
             NSLog(@"%@", @"group");
                 dispatch_group_leave(group);
        });
        
        
      
    };
    
            groupBlock();
     
    
  
   
    dispatch_group_wait(group, DISPATCH_TIME_FOREVER);
         NSLog(@"=====groupEnd======");

  
    dispatch_group_notify(group, dispatch_get_main_queue(), ^{
        NSLog(@"=====group2======");
    });
    
    NSLog(@"=====groupEnd2======");
    
    
    
    
//    
//    dispatch_semaphore_t sema = dispatch_semaphore_create(0);
//    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
//        allocationBlock();
//        dispatch_semaphore_signal(sema);
//    });
//    dispatch_semaphore_wait(sema, DISPATCH_TIME_FOREVER);
//    
     NSLog(@"======semaphoreStart======");

    dispatch_semaphore_t semaphore = dispatch_semaphore_create(0);
    
    MultiThreadTestBlock blockOfSemapore = ^(void){
   
            NSLog(@"%@", @"sempa");
           dispatch_semaphore_signal(semaphore);
    
     
    };
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        blockOfSemapore();
    });
    

        dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);
    NSLog(@"======semaphoreEnd======");
    
    
    
    NSOperationQueue *operationQueue = [[NSOperationQueue alloc] init];
    
    
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
