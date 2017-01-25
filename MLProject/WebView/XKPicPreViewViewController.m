//
//  XKPicPreViewViewController.m
//  BondCommunity
//
//  Created by xunke03 on 16/6/13.
//  Copyright © 2016年 xunke03. All rights reserved.
//

#import "XKPicPreViewViewController.h"
#import "XKBigImageCell.h"


@interface XKPicPreViewViewController () <UICollectionViewDelegate, UICollectionViewDataSource>

@property (strong, nonatomic) UICollectionView *collectionView;

@property (strong, nonatomic) UILabel *orderLab;

@property (assign, nonatomic) NSInteger currentIndex;

@property (assign, nonatomic) NSInteger lenth;

@end


@implementation XKPicPreViewViewController


- (void)viewDidLoad {
    [super viewDidLoad];
  
    
    _lenth = [NSString stringWithFormat:@"%zd",_photos.count].length + 1;
    
  
    
    [self configUI];
}

- (void)configUI {
    
    UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
    layout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    layout.itemSize = CGSizeMake(self.view.width, self.view.height - 20);
    layout.minimumInteritemSpacing = 0;
    layout.minimumLineSpacing = 0;
    
    _collectionView = [[UICollectionView alloc] initWithFrame:CGRectMake(0, 0, self.view.width , self.view.height) collectionViewLayout:layout];
    _collectionView.backgroundColor = [UIColor blackColor];
    _collectionView.dataSource = self;
    _collectionView.delegate = self;
    _collectionView.pagingEnabled = YES;
    _collectionView.scrollsToTop = NO;
    _collectionView.showsHorizontalScrollIndicator = NO;
    _collectionView.contentSize = CGSizeMake(self.view.width * _photos.count, self.view.height);
    [self.view addSubview:_collectionView];
    [_collectionView registerClass:[XKBigImageCell class] forCellWithReuseIdentifier:@"cell"];
    
    _collectionView.contentOffset = CGPointMake(SCREEN_WIDTH * _tag, 0);
    
    UIImageView *bgView = [[UIImageView alloc] initWithFrame:CGRectMake(10, self.view.height - 25 - 14, 53, 25)];
    bgView.image = [UIImage imageNamed:@"btn_bgpic"];
    [self.view addSubview:bgView];
    
    
    NSString *text = [NSString stringWithFormat:@"%zd/%zd",_tag + 1,_photos.count];
    NSMutableAttributedString * attrStr = [[NSMutableAttributedString alloc] initWithString:text];
    [attrStr addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:20.f] range:NSMakeRange(0,attrStr.length - _lenth)];
    _orderLab  = [[UILabel alloc] initWithFrame:CGRectMake(0, 2.5, 53, 20)];
    _orderLab.attributedText = attrStr;
    _orderLab.textColor = [UIColor whiteColor];
    _orderLab.textAlignment = NSTextAlignmentCenter;
    _orderLab.font = [UIFont systemFontOfSize:15];
    [bgView addSubview:_orderLab];
    
    
    UIImageView *bgView1 = [[UIImageView alloc] initWithFrame:CGRectMake(self.view.width - 53 - 15, self.view.height - 25 - 14, 53, 25)];
    bgView1.image = [UIImage imageNamed:@"btn_bgpic"];
    [self.view addSubview:bgView1];
    
    UIButton *saveBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    saveBtn.frame = CGRectMake(self.view.width - 57 - 15, self.view.height - 25 - 14 - 12, 60, 48);
    [saveBtn setTitle:@"保存" forState:UIControlStateNormal];
    [saveBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [saveBtn addTarget:self action:@selector(saveBtnClick) forControlEvents:UIControlEventTouchUpInside];
   
    [self.view addSubview:saveBtn];
}

#pragma mark - UICollectionViewDataSource代理方法
- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return _photos.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    XKBigImageCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"cell" forIndexPath:indexPath];
    cell.imageUrl = _photos[indexPath.row];
//    cell.imageSize = _picSizes[indexPath.row];
    __weak typeof(self) weakSelf = self;
    cell.singleTapGestureBlock = ^{
        [weakSelf dismissViewControllerAnimated:YES completion:nil];
    };
    return cell;
}

#pragma mark - 点击的collectionView的item
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath{
    
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    // 记录scrollView 的当前位置，因为已经设置了分页效果，所以：位置/屏幕大小 = 第几页
    CGPoint offset = scrollView.contentOffset;
    CGFloat offsetX = offset.x;
    
    _currentIndex = offsetX / SCREEN_WIDTH + .5f;
    NSString *text = [NSString stringWithFormat:@"%zd/%zd",_currentIndex + 1,_photos.count];
    NSMutableAttributedString * attrStr = [[NSMutableAttributedString alloc] initWithString:text];
    [attrStr addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:20] range:NSMakeRange(0,attrStr.length - _lenth)];
    _orderLab.attributedText = attrStr;
}

#pragma makr - 放大缩小结束后调用   用作统计
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    //TODO: 图片查看页面，放大缩小查看图片统计
   
}


#pragma mark - 保存按钮
- (void)saveBtnClick {
//    [[XKAlertTool shareManager] showAlertView:self title:@"" message:@"是否保存图片" cancelButtonTitle:@"取消" otherButtonTitle:@"确定" confirm:^{
//       
//        UIImage *savedImage = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_photos[_currentIndex]]]];
//        UIImageWriteToSavedPhotosAlbum(savedImage, self, @selector(image:didFinishSavingWithError:contextInfo:), NULL);
//    } cancle:^{
//        
//    }];
    
    UIImage *savedImage = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_photos[_currentIndex]]]];
    UIImageWriteToSavedPhotosAlbum(savedImage, self, @selector(image:didFinishSavingWithError:contextInfo:), NULL);
}

// 指定回调方法
- (void)image: (UIImage *) image didFinishSavingWithError: (NSError *) error contextInfo: (void *) contextInfo
{
    if(error != NULL){
        NSLog(@"图片保存失败！");
    }else{
        NSLog(@"图片保存成功！");
    }
}

- (BOOL)shouldAutorotate {
    return NO;
}

-(UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}
@end
