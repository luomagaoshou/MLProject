//
//  NibController.m
//  TestNib
//
//  Created by 妙龙赖 on 15/11/9.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "NibController.h"
#import "NibTBCell.h"
#import "UIView+CellXib.h"

#import "NibCLCell.h"


#import "NibTBCell2.h"
#import "UITableView+ML_Tools.h"
#import "UICollectionView+ML_Tools.h"
#import "UIImage+AttributeString.h"
#import "UIImage+FileName.h"
#define kNibTBCell2RueseID @"kNibTBCell2RueseID"
#define kNibCLCellReuseID  @"kNibCLCellReuseID"
@interface NibController ()<UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

@end

@implementation NibController

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
   // NSArray *cells = [[NSBundle mainBundle] loadNibNamed:@"NibTestTbCell" owner:nil options:nil];


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
    //[self.tableView registerClass:[NibTBCell class] forCellReuseIdentifier:kCellButtonReuseID];
//    [self.tableView registerNib:[UINib nibWithNibName:@"NibTBCell" bundle:[NSBundle mainBundle]] forCellReuseIdentifier:kCellButtonReuseID];
//     [self.tableView registerClass:[NibTBCell class] forCellReuseIdentifier:kCellLabelReuseID];
//     [self.tableView registerClass:[NibTBCell class] forCellReuseIdentifier:kCellProgressReuseID];

    
  //  UINib *cellNib = [[[NSBundle mainBundle] loadNibNamed:@"NibTBCell2" owner:self     options:nil] firstObject];
   
  //  UINib *cellNib = [UINib nibWithNibName:@"NibTBCell2" bundle:nil];
    //[self.tableView registerNib:cellNib forCellReuseIdentifier:kNibTBCell2RueseID];


    [self.collectionView registerClass:[NibCLCell class] forCellWithReuseIdentifier:kNibCLCellReuseID];
    
    [self.collectionView ML_registerNibAndCellReuseIdentifierWithDictionary:@{kNibTBCell2RueseID:@"NibCLCell"}];
  
   
    
  }


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}



#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
#if 0
    NibTBCell *cell;
    if (indexPath.section == 0) {

       // cell = (NibTBCell *)[tableView dequeueReusableCellWithIdentifier:kCellButtonReuseID forIndexPath:indexPath cellClassOrName:[NibTBCell class] xibSeriesNumber:0];
        cell = [tableView dequeueReusableCellWithIdentifier:kCellButtonReuseID forIndexPath:indexPath];
      //  [cell.firstCellButton setTitle:@"sldkfjsldfj" forState:UIControlStateNormal];
        

    }
    else if (indexPath.section == 1)
    {

                    cell = (NibTBCell *)[tableView dequeueReusableCellWithIdentifier:kCellLabelReuseID forIndexPath:indexPath cellClassOrName:[NibTBCell class] xibSeriesNumber:1];

    }
    else if (indexPath.section == 2)
    {
       cell = (NibTBCell *)[tableView dequeueReusableCellWithIdentifier:kCellProgressReuseID forIndexPath:indexPath cellClassOrName:[NibTBCell class] xibSeriesNumber:2];

    }
    

    return cell;
#endif
    
    NibTBCell2 *cell = [tableView dequeueReusableCellWithIdentifier:kNibTBCell2RueseID];
    if (cell == nil) {
#if 0
        NSArray *nibs = [[NSBundle mainBundle] loadNibNamed:@"NibTBCell2" owner:nil options:nil];
        cell = [nibs firstObject];
        [cell.button setTitle:@"sdfsdfffff" forState:UIControlStateNormal];
#else
        cell = [[NibTBCell2 alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kNibTBCell2RueseID];
        cell = [NSBundle loadNibWithNameOrClass:[NibTBCell2 class]];
        NSMutableAttributedString *title = [[UIImage imageNamed:@"test"] mutableAttributedStringWithBounds:CGRectMake(0, 0, 20, 20)];
        [cell.button setAttributedTitle:title forState:UIControlStateNormal];
      
#endif
    }
    
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 80;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", indexPath);
    
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
   
    

  
//    
//    if (self.<#dataSource#>.count>0) {
//        
//        
//        return cell;
//        
//    }
    
    return nil;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(SCREEN_WIDTH/4, 200);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return 5;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return 7;
}
//全部0间距

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout insetForSectionAtIndex:(NSInteger)section
{
    return UIEdgeInsetsZero;
}
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", indexPath);
}
- (void)collectionView:(UICollectionView *)collectionView didDeselectItemAtIndexPath:(NSIndexPath *)indexPath
{
    NSLog(@"%@", indexPath);
}
#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========


@end
