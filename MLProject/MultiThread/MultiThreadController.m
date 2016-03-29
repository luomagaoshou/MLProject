//
//  MultiThreadController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/19.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "MultiThreadController.h"
#import "NetworkCtl.h"
#import <AFNetworking/AFNetworking.h>
  typedef void (^MultiThreadTestBlock)(void);
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
    NSLog(@"%@ %@", [NSThread currentThread], [NSOperationQueue currentQueue]);
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^{
           NSLog(@"%@ %@", [NSThread currentThread], [NSOperationQueue currentQueue]);
    });
        NSLog(@"%@ %@", [NSThread currentThread], [NSOperationQueue currentQueue]);}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cell"];
    [self.dataSource addObjectsFromArray:@[@"GCD串行同步",
                                           @"GCD串行异步",
                                           @"GCD并行同步",
                                           @"GCD并行异步",
                                           @"GCDsema",
                                           @"GCD_barrier",
                                           @"gcdAfter",
                                           @"NSCondition",
                                           @"gcdGroup",
                                           @"operationQueue",
                                           @"AFNGetRequest"
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
        [self gcdSema];
        }
            break;
        case 5:
        {
        [self gcdBarrie];
        }
            break;
        case 6:
        {
        [self gcdAfter];
        }
            break;
        case 7:
        {
        [self condition];
        }
            break;
        case 8:
        {
        [self gcdGroup];
        }
            break;
        case 9:
        {
            [self operationQueue];
        }
            break;
        case 10:
        {
            [self downloadAnImage];
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

- (void)gcdBarrie
{
    
    dispatch_queue_t concurrentQueue = dispatch_queue_create("my.concurrent.queue", DISPATCH_QUEUE_CONCURRENT);
//    dispatch_queue_t concurrentQueue = dispatch_get_global_queue(0, 0);
    NSLog(@"%@", DISPATCH_QUEUE_CONCURRENT);
    dispatch_async(concurrentQueue, ^(){
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            
        });
        NSLog(@"dispatch-1");
    });
    dispatch_async(concurrentQueue, ^(){
        sleep(3);
        NSLog(@"dispatch-2");
    });
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"%@", concurrentQueue);
    });
    dispatch_barrier_async(concurrentQueue, ^(){
        NSLog(@"dispatch-barrier");
    });
    dispatch_async(dispatch_get_main_queue(), ^{
        NSLog(@"%@", concurrentQueue);
    });
    dispatch_async(concurrentQueue, ^(){
        NSLog(@"dispatch-3");
    });
    dispatch_async(concurrentQueue, ^(){
        NSLog(@"dispatch-4");
    });
    
}
- (void)gcdGroup
{
    
    
    
    
    NSLog(@"=====groupStart======");
    dispatch_group_t group = dispatch_group_create();
    dispatch_group_enter(group);
    MultiThreadTestBlock groupBlock  = ^{
        
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_global_queue(0, 0), ^{
            NSLog(@"%@", @"group");
            
            dispatch_group_leave(group);
        });
        
        
        
    };
    
    
    [self waitTwoSecondWithBlock:^{
        dispatch_group_leave(group);
    }];
    //  groupBlock();
    
    
    
    
//    dispatch_group_wait(group, DISPATCH_TIME_FOREVER);
//    NSLog(@"=====groupEnd======");
    
    
    dispatch_group_notify(group, dispatch_get_main_queue(), ^{
        NSLog(@"=====group2======");
    });
    
    NSLog(@"=====groupEnd2======");
    
    
    
}
- (void)gcdSema
{
    
    
    
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
    

    [self waitTwoSecondWithBlock:^{
        dispatch_semaphore_signal(semaphore);
    }];
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{
        NSLog(@"%@", @"mainqueue");
    });
        dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);
    NSLog(@"======semaphoreEnd======");
    
    
}

- (void)gcdAfter
{
   
    //创建串行队列
    dispatch_queue_t queue = dispatch_queue_create("me.tutuge.test.gcd", DISPATCH_QUEUE_CONCURRENT);
    NSLog(@"%@", queue);
    //立即打印一条信息
    NSLog(@"Begin add block...");
    //提交一个block
    dispatch_async(queue, ^{
        //Sleep 10秒
        [NSThread sleepForTimeInterval:10];
        NSLog(@"First block done...");
    });
    //5 秒以后提交block
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), queue, ^{
        NSLog(@"After...");
    });
}
- (void)waitTwoSecondWithBlock:(MultiThreadTestBlock)block
{
            dispatch_async(dispatch_get_main_queue(), ^{
                NSLog(@"%@", [NSThread currentThread]);
            });
    dispatch_sync(dispatch_get_global_queue(0, 0), ^{
        block();
    });

    sleep(2);
}
- (void)condition
{
    NSCondition *condition = [[NSCondition alloc] init];
    [condition lock];
    if (condition <= 0) {
        [condition wait];
    }
    dispatch_async(dispatch_get_main_queue(), ^{
         dispatch_async(dispatch_get_main_queue(), ^{
            [condition lock];
            [condition signal];
            [condition unlock];
        });
    });
  
    [condition unlock];
}
- (void)operationQueue
{
    NSOperationQueue *queue = [[NSOperationQueue alloc] init];
    queue.maxConcurrentOperationCount = 2;
    NSBlockOperation *block1 = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"%@", @"block1 Statr");
        for (NSInteger i = 0; i < 100000; i++) {
            NSString *str = @"22";
        }
        NSLog(@"%@", @"block1 End");
    }];
  
    NSBlockOperation *block2 = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"%@", @"block2 Statr");
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            for (NSInteger i = 0; i < 100000; i++) {
                NSString *str = @"22";
            }
        });
        
        NSLog(@"%@", @"block2 End");
    }];
    
    NSBlockOperation *block3 = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"%@", @"block3 Statr");
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            for (NSInteger i = 0; i < 100000; i++) {
                NSString *str = @"22";
            }
        });
        
        NSLog(@"%@", @"block3 End");
    }];
    
    [queue addOperation:block1];
    [queue addOperation:block2];
    [queue addOperation:block3];

    [block1 waitUntilFinished];
    [block2 waitUntilFinished];
    [block3 waitUntilFinished];
    
    [block1 addDependency:block2];
    [block2 addDependency:block3];
    NSLog(@"%@", @"finish");
    
    
}

- (void)downloadAnImage
{
//NSBlockOperation *block1 = [NSBlockOperation blockOperationWithBlock:^{
    

    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    [manager setCompletionGroup:dispatch_group_create()];
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];

    dispatch_semaphore_t sema = dispatch_semaphore_create(0);
 
        
      
    [manager GET:@"https://www.baidu.com/img/bd_logo1.png" parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
        NSLog(@"%@", downloadProgress);
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        NSLog(@"%@", responseObject);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        NSLog(@"%@", error);
    }];
        


//}];
//    [block1 waitUntilFinished];
   dispatch_semaphore_wait(sema, DISPATCH_TIME_FOREVER);
    NSLog(@"%@", @"finish");
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
