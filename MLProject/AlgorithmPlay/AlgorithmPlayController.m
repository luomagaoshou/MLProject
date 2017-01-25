//
//  AlgorithmPlayController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "AlgorithmPlayController.h"
#import "PaiLie.h"

@interface AlgorithmPlayController ()<UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) NSMutableArray *dataSource;
@end

@implementation AlgorithmPlayController

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
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.tableView ml_registerClassForCellWithNameOrClasses:@[@"UITableViewCell"]];
    
    [self.dataSource addObjectsFromArray:@[@"水仙花数",
                                           @"韩信点兵",
                                           @"倒三角形",
                                           @"子序列的和",
                                           @"排列组合",
                                           @"竖式乘法",
                                           @"排列组合2",]];
    [self moneyManager];
    [self moneyManager2];
    [self moneyManager3];
}

- (void)moneyManager{

    CGFloat rotation = 0.03;
    CGFloat daysOfYear = 365;
    CGFloat originalMoney = 1;
    for (NSInteger i = 1; i <= daysOfYear; i++) {
        originalMoney = originalMoney * (1 + rotation/ daysOfYear);
    }
    NSLog(@"%f--%f", originalMoney, pow(1+ rotation/daysOfYear, daysOfYear));
}

- (void)moneyManager2{
    CGFloat rotation = 0.04;
    CGFloat monthCount = 6;
    CGFloat originalMoney = 1;
    CGFloat resultMoney = 0;
    for (NSInteger i = 1; i <= monthCount; i++) {
        CGFloat currentRotation = pow(1 + rotation/monthCount, monthCount - i + 1);
        currentRotation = rotation/monthCount + 1;
        resultMoney += originalMoney/monthCount * currentRotation;
    }
    NSLog(@"%f", resultMoney);
}
- (void)moneyManager3{
    double rotation = 0.086;
    double monthCount = 12;
    double originalMoney = 10000;
    double resultMoney = 0;
    double rotationOfMonth = rotation/monthCount;
    for (NSInteger i = 1; i <= monthCount; i++) {
       
        double everyTimeMoney = (originalMoney * (monthCount - i) / monthCount) * rotationOfMonth * pow(1 + rotationOfMonth, monthCount - i)
        /
        (pow(1 + rotationOfMonth, monthCount - i) - 1);
        resultMoney += everyTimeMoney;
        
    }
    NSLog(@"%f", resultMoney);
    
    resultMoney = originalMoney * (1 + rotation)/12;
    
    
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{


}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
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
            NSMutableArray *results = [[NSMutableArray alloc] init];
            for (NSInteger i = 100; i <1000 ; i++) {
             
                NSInteger testNumber = pow(i/100, 3) + pow(i/10%10, 3) + pow(i%10, 3);
             //   NSLog(@"%@", @(testNumber));
                if (i == testNumber) {
                    [results addObject:@(i)];
                    NSLog(@"%@", @(i));
                }
            }
        
        }
            break;
        case 1:
        {
            NSInteger mod3 = arc4random()%3;
            NSInteger mod5 = arc4random()%5;
            NSInteger mod7 = arc4random()%7;
            
            NSMutableArray *mutArr = [[NSMutableArray alloc] init];
            for (NSInteger i = 10; i <= 100; i++) {
                if (i%3 == mod3 && i%5 == mod5 && i%7 == mod7) {
                    [mutArr addObject:@(i)];
                   // NSLog(@"%ld %ld %ld   得数%@", mod3, mod5, mod7, @(i));
                }
                else
                {
                   // NSLog(@"%ld %ld %ld", mod3, mod5, mod7);
                }
            }
            if ([mutArr count] == 0) {
                  NSLog(@"%ld %ld %ld 无结果 ", mod3, mod5, mod7);
            }
            else
            {
            for (id obj in mutArr) {
                static NSInteger i = 0;
                 NSLog(@"%ld %ld %ld   得数%@", mod3, mod5, mod7, obj);
                i++;
            }
            }
            
        }
            break;
        case 2:
        {
            NSInteger n = arc4random()%20;
            printf("%ld\n", n);
            for (NSInteger i = 0; i <= n; i++) {
                for (NSInteger k = 0; k < i ; k++) {
              
                    printf("%s", " ");
                }
                for (NSInteger j = 0 ; j < 2 * (n - i) - 1; j++) {
                    printf("%s", "*");
                }
                printf("\n");
            }
        }
            break;
            
        case 3:
        {
            NSInteger i = arc4random() % (NSInteger )pow(10, 6);
            NSInteger j = arc4random() % (NSInteger )pow(10, 6);
            NSInteger min = MIN(i, j);
            NSInteger max = MAX(i, j);
            NSLog(@"min = %ld max = %ld", min, max);
            double result;
            for (NSInteger i = min; i < max; i++ ) {
                result += 1/pow(i, 2);
            }
            NSLog(@"%lf", result);
            
        }
            break;
        case 4:
        {
        
     //      [self combineWithArray:numbers n:9 m:1 tempArray:nil tempM:1];
       // [self permutationsAndCombinationsWithTotalCount:10 chosenCount:4];
        int list[10] = {1,2,3,4,5,6};
       
       // perm(list, 0, 4 , nil);
        
        NSArray *letters = @[@"A", @"B", @"C", @"D", @"E", @"F", @"G"];
        [self ml_permWithList:letters count:7 choose:2  chosen:0 currentIndex:0 currentList:nil];
        }
      
            break;
        case 5:
        {
            [self verticalCalculate];
        
        }
            break;
        case 6:
        {
        
           NSArray *letters = @[@"A", @"B", @"C", @"D", @"E", @"F", @"G"];
        [self zuHeSuanFa:[NSMutableArray arrayWithArray:letters] chooseCount:3];
        
        }
            break;
        default:
            break;
    }
}
#if 0
- (void)combineWithArray:(NSArray *)array n:(NSInteger)n m:(NSInteger)m tempArray:(NSArray *)tempArray tempM:(NSInteger)tempM
{
   
//    for(int i=n; i>=m; i--)   // 注意这里的循环范围
//    {
//        b[m-1] = i - 1;
//        if (m > 1)
//            combine(a,i-1,m-1,b,M);
//        else                     // m == 1, 输出一个组合
//        {
//            for(int j=M-1; j>=0; j--)
//                cout << a[b[j]] << " ";
//            cout << endl;
//        }
//    }
//    
    for (NSInteger i = n; i >= m; i--) {
        if (m > 1) {
            NSArray *tempArray = array subarrayWithRange:NSMakeRange(<#NSUInteger loc#>, <#NSUInteger len#>)
           [self combineWithArray:array n:n m:m tempArray:<#(NSArray *)#> tempM:<#(NSInteger)#>]
        }
    }
}
#endif
- (void)verticalCalculate
{
    int count = 0;
    char buf[99];
  //  scanf("%s", s);
   char *s = "245";
    for (int abc = 111; abc <= 999; abc++) {
        for (int de = 11; de <= 99; de++) {
            int x = abc * (de % 10), y = abc * (de/10), z = abc * de;
            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            for (int i = 0; i < strlen(buf); i++) {
                if (strchr(s, buf[i]) == NULL) {
                    ok = 0;
                   
                }
                if (ok) {
                    printf("<%d>\n", ++count);
                    printf("%5d\nX%4d\n------\n%5d\n%4d\n------\n%5d\n\n",abc,de,x,y, z);
                                printf("The number of solution = %d\n", count);
                }
            }

        }
    }
}

- (void)permutationsAndCombinationsWithTotalCount:(NSInteger)totalCount chosenCount:(NSInteger)chosenCount
{
    
    
    
    for (NSInteger i = 0;  i <= (totalCount - chosenCount); i++) {
        
        static NSMutableArray *subTotalCounts = nil;
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            subTotalCounts = [[NSMutableArray alloc] init];
        });
        [subTotalCounts addObject:@(i)];
        if (i < totalCount - chosenCount)
            {
            [self permutationsAndCombinationsWithTotalCount:i+1 chosenCount:chosenCount-1];
            }
        else{
            for (int j = 0; j < chosenCount; j++) {
                printf("%c", [subTotalCounts[j] intValue] + 65);
            }
            printf("\n");
            [subTotalCounts removeAllObjects];
        }
    }
    
    
}
#define MAX_NUM 20

int comb[MAX_NUM];


void combination(int m, int n)

{
    
    int i, j;
    
    
    
    for (i = m; i >= n; i--){
        
        comb[n] = i;        /* 选择当前的“头”元素 */
        
        if (n > 1){
            
            /* 进入下一次更小的组合问题 */
            
            combination(i - 1, n - 1);
            
        }else{
            
            /* 满了需要的组合数，输出 */
            
            for (j = comb[0]; j > 0; j--){
                
                printf("%c", comb[j] + 64);
                
            }
            
            printf(" \n");
            
        }
        
    }
    
    
    
    return;
    
}



- (void)ml_permWithList:(NSArray *)list count:(NSInteger)count choose:(NSInteger)choose chosen:(NSInteger)chosen currentIndex:(NSInteger)currentIndex currentList:(NSMutableArray *)currentList
{

    //创建新表 当前索引小于总数-选择数
    if (currentIndex <= count - choose && chosen < choose) {
        for (NSInteger i = currentIndex; i < count - choose + 1; i++) {
        
                currentList = [[NSMutableArray alloc] init];
            [currentList addObject:list[i]];
            if (currentList.count >= choose) {
            [self resultPermArrWithArr:currentList];
                return;
            }
            else
                {
                   [self ml_permWithList:list count:count choose:choose chosen:currentList.count currentIndex:++i currentList:currentList];
                }
        }
    }
    else
        {
        [currentList addObject:list[currentIndex]];
        if (currentList.count >= choose) {
            [self resultPermArrWithArr:currentList];
            return;
        }
     //   currentList = [currentList mutableCopy];
        [self ml_permWithList:list count:count choose:choose chosen:currentList.count currentIndex:++currentIndex currentList:currentList];
        }
    

    NSLog(@"%@", [self resultPermArrWithArr:nil]);
    
}

- (NSMutableArray *)resultPermArrWithArr:(NSArray *)array
{
    static NSMutableArray *result = nil;
    if (array == nil) {
         return result;
    }
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        result = [[NSMutableArray alloc] init];
    });
    [result addObject:array];
    return result;
}
void perm(int list[], int s, int e, void (*cbk)(int list[]))
{
    int i;
    if(s > e)
        {
        (*cbk)(list);
        }
    else
        {
            for(i = s; i <= e; i++)
                {
                    swap(list, s, i);
                    perm(list, s + 1, e, cbk);
                    swap(list, s, i);
                }
        }
}


void swap(int * o, int i, int j)
{
    int tmp = o[i];
    o[i] = o[j];
    o[j] = tmp;
}

void cbk_print(int * subs)
{
    int length = sizeof(subs)/sizeof(subs[0]);
    printf("{");
    for(int i = 0; i < length; i++)
        {
        printf("%d", subs[i]);
        (i == length - 1) ? printf("") : printf(", ");
        }
    printf("}\n");
}


- (NSMutableArray *)zuHeSuanFa:(NSMutableArray *)array chooseCount:(int)m
{
    int n = [array count];
    
    if (m > n)
        {
        return nil;
        }
    
    NSLog(@"从1到%d中取%d个数的组合。。。",n,m);
    
    NSMutableArray *allChooseArray = [[NSMutableArray alloc] init];
    NSMutableArray *retArray = [array copy];
    
    // (1,1,1,0,0)
    for(int i=0;i < n;i++)
        {
        if (i < m)
            {
            [array replaceObjectAtIndex:i withObject:@"1"];
            }
        else
            {
            [array replaceObjectAtIndex:i withObject:@"0"];
            }
        }
    
    NSMutableArray *firstArray = [[NSMutableArray alloc] init];
    
    for(int i=0; i<n; i++)
        {
        if ([[array objectAtIndex:i] intValue] == 1)
            {
            //            [firstArray addObject:[NSString stringWithFormat:@"%d",i+1]];
            [firstArray addObject:[retArray objectAtIndex:i]];
            }
        }
    
    [allChooseArray addObject:firstArray];
    //    [firstArray release];
    
    int count = 0;
    for(int i = 0; i < n-1; i++)
        {
        if ([[array objectAtIndex:i] intValue] == 1 && [[array objectAtIndex:(i + 1)] intValue] == 0)
            {
            [array replaceObjectAtIndex:i withObject:@"0"];
            [array replaceObjectAtIndex:(i + 1) withObject:@"1"];
            
            for (int k = 0; k < i; k++)
                {
                if ([[array objectAtIndex:k] intValue] == 1)
                    {
                    count ++;
                    }
                }
            if (count > 0)
                {
                for (int k = 0; k < i; k++)
                    {
                    if (k < count)
                        {
                        [array replaceObjectAtIndex:k withObject:@"1"];
                        }
                    else
                        {
                        [array replaceObjectAtIndex:k withObject:@"0"];
                        }
                    }
                }
            
            NSMutableArray *middleArray = [[NSMutableArray alloc] init];
            
            for (int k = 0; k < n; k++)
                {
                if ([[array objectAtIndex:k] intValue] == 1)
                    {
                    //                    [middleArray addObject:[NSString stringWithFormat:@"%d",k + 1]];
                    [middleArray addObject:[retArray objectAtIndex:k]];
                    }
                }
            
            [allChooseArray addObject:middleArray];
            //            [middleArray release];
            
            i = -1;
            count = 0;
            }
        }
    
    return allChooseArray;
}

#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
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
