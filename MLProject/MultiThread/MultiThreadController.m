//
//  MultiThreadController.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/19.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "MultiThreadController.h"
#import "MLNetwork.h"
#import <AFNetworking/AFNetworking.h>
#import "UIView+DrawRectBlock.h"
#import "ProjectManager.h"
  typedef void (^MultiThreadTestBlock)(void);
@interface MultiThreadController ()
@property (nonatomic, strong) NSMutableArray *dataSource;
@property (weak, nonatomic) IBOutlet UIButton *button;
@property (weak, nonatomic) IBOutlet UIButton *leaveButton;

@property (nonatomic, strong) dispatch_group_t group;
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
    
    [self.button addTarget:self action:@selector(gcdWorking:) forControlEvents:UIControlEventTouchUpInside];
    [self.button addTarget:self action:@selector(test:) forControlEvents:UIControlEventTouchUpInside];
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
    
    int b = 2;
    __block int a = b;
    void (^block)(int *p) = ^(int *p){
        *p = 3;
    };
    NSLog(@"%d", a);
    block(&a);
    NSLog(@"%d", a);
    @"";

    
    
    dispatch_queue_t queue = dispatch_queue_create("sq", DISPATCH_QUEUE_SERIAL);
    NSLog(@"%@", @"1");
    dispatch_async(queue, ^{
        NSLog(@"%@", @"2");
        dispatch_sync(queue, ^{
             NSLog(@"%@", @"3");
        });
  
    });
     NSLog(@"%@", @"5");
    

//    NSLog(@"1"); // 任务1
//    dispatch_async(dispatch_get_global_queue(0, 0), ^{
//        NSLog(@"2"); // 任务2
//        dispatch_sync(dispatch_get_main_queue(), ^{
//            NSLog(@"3"); // 任务3
//        });
//        NSLog(@"4"); // 任务4
//    });
//    NSLog(@"5"); // 任务5
    
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
    
  
   dispatch_async(queue, ^{
      
       NSLog(@"%@", @"aaa");
       dispatch_async(queue, ^{
           NSLog(@"%@", @"bbb");
       });
        NSLog(@"%@", @"ccc");
   });
    
    
    dispatch_sync(queue, ^{
        dispatch_async(queue, ^{
            NSLog(@"%@", @"dddd");
        });
        for (NSInteger i = 0; i < 3; i++) {
            NSLog(@"串行队列，同步操作1:%ld\n%@", i, [NSThread currentThread]);
            [NSThread sleepForTimeInterval:0.5f];
        }
      
    });
//    [NSThread sleepForTimeInterval:1.0f];
//    NSLog(@"\n\n中场休息\n\n");
//    [NSThread sleepForTimeInterval:1.0f];
//    
    dispatch_sync(queue, ^{
        dispatch_async(queue, ^{
            NSLog(@"%@", @"eeee");
        });
        for (NSInteger i = 0; i < 3; i++) {
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
        for (NSInteger i = 0; i < 1000; i++) {
                NSLog(@"%@", @"excute block1");
        }
        NSLog(@"%@", @"block1 End");
    }];
  
    NSBlockOperation *block2 = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"%@", @"block2 Statr");
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            for (NSInteger i = 0; i < 1000; i++) {
                       NSLog(@"%@", @"excute block2");
            }
        });
        
        NSLog(@"%@", @"block2 End");
    }];
    
    NSBlockOperation *block3 = [NSBlockOperation blockOperationWithBlock:^{
        NSLog(@"%@", @"block3 Statr");
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            for (NSInteger i = 0; i < 1000; i++) {
               // NSString *str = @"22";
                NSLog(@"%@", @"excute block3");
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
    dispatch_queue_t queue2 = dispatch_queue_create("com.person.syncQueue", DISPATCH_QUEUE_SERIAL);
    
    dispatch_sync(queue2, ^{
        NSLog(@"%@",  @"同步串行");
    });
    NSLog(@"sfdsf");
//NSBlockOperation *block1 = [NSBlockOperation blockOperationWithBlock:^{
    
//
    dispatch_queue_t serielQueue = dispatch_queue_create("ffdd", DISPATCH_QUEUE_SERIAL);
    dispatch_async(serielQueue, ^{
       dispatch_async(dispatch_get_main_queue(), ^{
           NSLog(@"sdfdsf");
       });
    });
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];

    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
   

    
    
    dispatch_group_t group = dispatch_group_create();
//
   // dispatch_group_enter(group);
//    [manager GET:@"https://www.baidu.com/img/bd_logo1.png" parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
//        NSLog(@"%@", downloadProgress);
//        
//    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
//        NSLog(@"%@", responseObject);
//  dispatch_group_leave(group);
//    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
//        NSLog(@"%@", error);
//          dispatch_group_leave(group);
//    }];
//

   // [manager setCompletionQueue:queue];

//    dispatch_async(dispatch_get_main_queue(), ^{
//        NSLog(@"%@", @"main queue");
//          dispatch_group_leave(group);
//    });
//  
    dispatch_barrier_async(dispatch_get_main_queue(), ^(){
        NSLog(@"dispatch-barrier");
    });
  
    dispatch_group_wait(group, DISPATCH_TIME_FOREVER);
    NSLog(@"%@", @"finish");
    

}


- (IBAction)gcdWorking:(id)sender {
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
    
    self.group = dispatch_group_create();
#warning 下面下载一样的
    // 计数+1
    dispatch_group_enter(self.group);
    [manager GET:@"https://www.baidu.com/img/bd_logo1.png" parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
        NSLog(@"等我下完你再BB");
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    }];
    
    // 计数+1
    dispatch_group_enter(self.group);
    [manager GET:@"https://www.baidu.com/img/bd_logo1.png" parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
        NSLog(@"等我下完你再BB");
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    }];
    
    // 计数+1
    dispatch_group_enter(self.group);
    [manager GET:@"https://www.baidu.com/img/bd_logo1.png" parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
        NSLog(@"等我下完你再BB");
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        // 计数-1
        NSLog(@"下完");
        dispatch_group_leave(self.group);
    }];
#warning 上面下载一样的
    // 突然想着有事没做，先等着// 计数+1
    dispatch_group_enter(self.group);
    
    dispatch_group_notify(self.group, dispatch_get_main_queue(), ^{
        NSLog(@"%@", @"finish");
    });
    NSLog(@"%@", @"这里");
    
}
- (IBAction)test:(id)sender {
    // 没事了，都做完了
    dispatch_group_leave(self.group);
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
