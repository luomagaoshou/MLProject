//
//  DelegateSeparationController.m
//  MLProject
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "DelegateSeparationController.h"
#import "UICollectionView+MLCollectionSeparationManager.h"
#import "UICollectionView+ML_Tools.h"
@interface DelegateSeparationController ()
@property (nonatomic, strong) UICollectionView *collectionView;
@end

@implementation DelegateSeparationController


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
    
}
- (void)initColletionView
{
    self.collectionView.backgroundColor = [UIColor whiteColor];
    
    
    [self.collectionView configCellWith:^__kindof UICollectionViewCell *(UICollectionView *collectionView, NSIndexPath *indexPath) {
        UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"UICollectionViewCell" forIndexPath:indexPath];
        cell.backgroundColor = kCOLOR_RANDOM_COLOR;
        return cell;
    } cellSize:^CGSize(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSIndexPath *indexPath) {
        return CGSizeMake((SCREEN_WIDTH - 40)/4 - 5, 40);
    } numberOfSection:^NSInteger(UICollectionView *collectionView) {
        return 8;
    } numberOfItemsInSection:^NSInteger(UICollectionView *collectionView, NSInteger section) {
        return 6;
    } didSelected:^(UICollectionView *collectionView, NSIndexPath *indexPath) {
        NSLog(@"%@", collectionView);
    }];
    
    
    [self.collectionView configSectionHeaderWith:^__kindof UICollectionReusableView *(UICollectionView *collectionView, NSString *kind, NSIndexPath *indexPath) {
        UICollectionReusableView *header = [collectionView dequeueReusableSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:@"UICollectionReusableView" forIndexPath:indexPath];
        header.backgroundColor = [UIColor redColor];
        return header;
        
    } sectionHeaderSize:^CGSize(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section) {
        return CGSizeMake(SCREEN_WIDTH, 30);
    }];
    
    [self.collectionView configSectionFooterWith:^__kindof UICollectionReusableView *(UICollectionView *collectionView, NSString *kind, NSIndexPath *indexPath) {
        UICollectionReusableView *header = [collectionView dequeueReusableSupplementaryViewOfKind:UICollectionElementKindSectionFooter withReuseIdentifier:@"UICollectionReusableView" forIndexPath:indexPath];
        header.backgroundColor = [UIColor blueColor];
        return header;
    } sectionFooterSize:^CGSize(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section) {
        return CGSizeMake(SCREEN_WIDTH, 30);
    }];
    
    [self.collectionView ML_registerClassAndCellReuseIdentifierWithArray:@[@"UICollectionViewCell"]];
    [self.collectionView registerClass:[UICollectionReusableView class] forSupplementaryViewOfKind:UICollectionElementKindSectionHeader withReuseIdentifier:@"UICollectionReusableView"];
    [self.collectionView registerClass:[UICollectionReusableView class] forSupplementaryViewOfKind:UICollectionElementKindSectionFooter withReuseIdentifier:@"UICollectionReusableView"];
    
    [self.collectionView configCellLayoutWithMinimumInteritemSpacing:^CGFloat(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section) {
        return 5;
    } minimumLineSpacing:^CGFloat(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section) {
        return 20;
    } insetForSection:^UIEdgeInsets(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section) {
        return UIEdgeInsetsMake(10, 20, 5, 20);
    }];
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========



@end
