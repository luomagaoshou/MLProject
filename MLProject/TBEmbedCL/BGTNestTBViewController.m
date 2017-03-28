//
//  BGTNestTBViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/3/1.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "BGTNestTBViewController.h"
#import "BGTNestTBView.h"
#import "BGTTBEmbedCLCell.h"
#import <MJRefresh/MJRefresh.h>
#import <ReactiveCocoa/RACEXTScope.h>
@interface BGTTBEmbedCLDataCacheObject : NSObject
@property (nonatomic, strong) NSArray *cellDatas;
@property (nonatomic, assign) CGPoint contentOffset;
+ (instancetype)objectWithCellDatas:(NSArray *)cellDatas contentOffset:(CGPoint)contentOffset;
@end
@implementation BGTTBEmbedCLDataCacheObject
+ (instancetype)objectWithCellDatas:(NSArray *)cellDatas contentOffset:(CGPoint)contentOffset {
    BGTTBEmbedCLDataCacheObject *cacheObject = [[self alloc] init];
    cacheObject.cellDatas = cellDatas;
    cacheObject.contentOffset = contentOffset;
    return cacheObject;
}
@end
@interface BGTNestTBViewController ()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) IBOutlet BGTNestTBView *view_;
//数据缓存(内容与tableView偏移量)，以日期为key
@property (nonatomic, strong) NSCache *dataCache;
@property (nonatomic, strong) UIPageControl *pageControl;
@property (nonatomic, strong) UIImageView *testImageView;
@end

@implementation BGTNestTBViewController


#pragma mark - Lifecycle
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configureUI];
    [self binding];
}

- (void)dealloc {
    NSLog(@"%s %@", __FUNCTION__, NSStringFromClass([self class]));
}

#pragma mark - Views
- (void)configureUI {
    
    [self configureCollectionView];
//     [self.view_ addSubview: self.testImageView];
//    [self configurePageControl];
}
- (void)configurePageControl {
    
    
    [self.view_ addSubview:self.pageControl];

    
}

- (void)configureCollectionView {
    [self.view_.collectionView ml_registerNibForCellWithNameOrClass:@"BGTTBEmbedCLCell"];
    self.view_.collectionView.pagingEnabled = YES;
    self.view_.collectionView.pageSize = SCREEN_WIDTH;
    self.view_.collectionView.delegate = self;
    self.view_.collectionView.dataSource = self;

}

#pragma mark - Binding
- (void)binding {

}


#pragma mark - Methods


#pragma mark - Request
- (void)RequestDataWithCell:(BGTTBEmbedCLCell *)cell{
    
}

#pragma mark - Get Set Properties

- (NSCache *)dataCache {
    if (_dataCache == nil) {
        _dataCache = [[NSCache alloc] init];
        
    }
    return _dataCache;
}

#pragma mark - CollectionView Delegate & DataSource
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    BGTTBEmbedCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"BGTTBEmbedCLCell" forIndexPath:indexPath];
    cell.nestTBCellName = @"BGTNestCalendarTBCell";
    NSCache *cache = [self.dataCache objectForKey:[NSDate date]];
    if (cache) {
        [cell setMaster:nil model:cache];
    } else {
        [self RequestDataWithCell:cell];
    }
    @weakify(self);
    cell.tableView.mj_header = [MJRefreshGifHeader headerWithRefreshingBlock:^{
        @strongify(self);
         [self RequestDataWithCell:cell];
    }];
#if 1
    NSMutableArray *mutArr = [NSMutableArray new];
    for (NSInteger j = 0 ; j <= indexPath.section; j++) {
        NSMutableArray *mutArr2 = [NSMutableArray new];
        [mutArr addObject:mutArr2];
        for (NSInteger i = 0; i <= indexPath.row; i++) {
            [mutArr2 addObject:@(i)];
            [mutArr2 addObject:@(i)];
            [mutArr2 addObject:@(i)];
        }
    }

    [cell.tableView.cellDatas removeAllObjects];
    [cell.tableView.cellDatas addObjectsFromArray:mutArr];
    [cell.tableView reloadData];
#endif
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath {
    return CGSizeMake(SCREEN_WIDTH, SCREEN_HEIGHT - 64);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
    return 6;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    
    return 3;
}


- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section {
    return 0;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section {
    return 0;
}
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)coellectionViewLayout insetForSectionAtIndex:(NSInteger)section {
    return UIEdgeInsetsZero;
}

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
    
    NSUInteger row = scrollView.contentOffset.x / SCREEN_WIDTH;
    NSIndexPath *indexPath = [NSIndexPath indexPathForRow:row inSection:0];
    BGTTBEmbedCLCell *cell = (id)[(UICollectionView *)scrollView cellForItemAtIndexPath:indexPath];
    if (cell.tableView.cellDatas.count) {
        BGTTBEmbedCLDataCacheObject *cacheObject = [BGTTBEmbedCLDataCacheObject objectWithCellDatas:cell.tableView.cellDatas contentOffset:cell.tableView.contentOffset];
    
        [self.dataCache setObject:cacheObject forKey:[NSDate date]];
    }
}
- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    NSInteger page = scrollView.contentOffset.x /SCREEN_WIDTH + 0.5;
    if (self.pageControl.currentPage == page) {
        return;
    }
   
   
    NSString *imageName = [NSString stringWithFormat:@"test%ld", page];
    UIImage *image = [UIImage imageNamed:imageName];
    self.testImageView.image = image;
#if 0
    [self.pageControl setValue:image forKeyPath:@"_currentPageImage"];
    self.pageControl.currentPage = page;

#else
        UIImageView *indicator = [self.pageControl valueForKey:@"_indicators"][page];
        [_pageControl setValue:[UIImage imageNamed:@"baidu"] forKeyPath:@"_pageImage"];
        [self.pageControl updateCurrentPageDisplay];
        indicator.image = image;
#endif


}
#pragma mark - setter
- (UIPageControl *)pageControl {
    if (_pageControl == nil) {
        
        _pageControl = [[UIPageControl alloc] initWithFrame:CGRectMake(30, 100, SCREEN_WIDTH - 60, 30)];
        _pageControl.numberOfPages = 3;

        _pageControl.backgroundColor = [UIColor cyanColor];
        [_pageControl setValue:[UIImage imageNamed:@"baidu"] forKeyPath:@"_pageImage"];

        [_pageControl setValue:[UIImage imageNamed:@"test0"] forKeyPath:@"_currentPageImage"];

       
      
       
        
    }
    return _pageControl;
}
- (UIImageView *)testImageView {
    if (_testImageView == nil) {
        _testImageView = [[UIImageView alloc] initWithFrame: CGRectMake(100, 200, 100, 100)];
        
    }
    return _testImageView;
}

@end
