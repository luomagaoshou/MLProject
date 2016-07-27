//
//  MLReuseVCView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/26.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

typedef NS_ENUM(NSUInteger, MLReuseVC) {
    MLReuseVCTypeClass = 1,
    MLReuseVCTypeXib,
    MLReuseVCTypeStoryboard,
};

#import "MLReuseVCView.h"
#import "UIScrollView+Refresh.h"
#import "UIViewController+ML_Tools.h"
#import <objc/runtime.h>
#import "MLReuseVCViewController.h"
@interface MLReuseVCView()<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) NSMutableDictionary *reuseIdentifierAndTypeDic;

@property (nonatomic, strong) NSMutableDictionary <NSString * , NSMutableArray *>*reuseViewControllerPool;
@end

@implementation MLReuseVCView
- (void)awakeFromNib
{
    [super awakeFromNib];
    [self addSubview:self.collectionView];
}
- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self addSubview:self.collectionView];
    }
    return self;
}
- (UIViewController *)ownerViewController
{
   static UIViewController *vc = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      vc = [UIViewController viewControllerOfView:self];
      
    });
   
    return vc;
}
#pragma mark - ========= Reuse Identifier =========
- (void)ml_registerViewControllerForClassWithClassOrName:(id)classOrName
{
    NSString *className = nil;
    
    if ([classOrName isKindOfClass:[NSString class]]) {
        className = classOrName;
    }else if (object_isClass(classOrName)){
        className = NSStringFromClass(classOrName);
    }
   
    self.reuseIdentifierAndTypeDic[className] = @(MLReuseVCTypeClass);
     [self.collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:className];
}

- (void)ml_registerViewControllerForNibWithClassOrName:(id)classOrName
{
    NSString *className = nil;
    
    if ([classOrName isKindOfClass:[NSString class]]) {
        className = classOrName;
    }else if (object_isClass(classOrName)){
        className = NSStringFromClass(classOrName);
    }
    
    self.reuseIdentifierAndTypeDic[className] = @(MLReuseVCTypeXib);
     [self.collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:className];
}

- (void)ml_registerViewControllerForStoryboardWithClassOrName:(id)classOrName nibName:(NSString *)nibName
{
    NSString *className = nil;
    
    if ([classOrName isKindOfClass:[NSString class]]) {
        className = classOrName;
    }else if (object_isClass(classOrName)){
        className = NSStringFromClass(classOrName);
    }
    //绑定nibName到type
    NSNumber *type = @(MLReuseVCTypeStoryboard);
    objc_setAssociatedObject(type, @selector(reuseIdentifierAndTypeDic), nibName, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.reuseIdentifierAndTypeDic[className] = type;
       [self.collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:className];
}
#pragma mark - ========= Reuse Pool =========
- (UIViewController *)ml_dequeueReusableCellWithReuseIdentifier:(NSString *)identifier indexPath:(NSIndexPath *)indexPath
{
    UIViewController *viewController = nil;
    NSNumber *type = self.reuseIdentifierAndTypeDic[identifier];
    NSAssert(type, @"该reuseId未注册");
    
    //查找是否有可复用的
    if (self.reuseViewControllerPool[identifier].count) {
        viewController = [self.reuseViewControllerPool[identifier] lastObject];
        [self.reuseViewControllerPool[identifier] removeLastObject];
        
        return viewController;
    }
    
    switch (type.integerValue) {
        case MLReuseVCTypeClass:
        {
            viewController = [[NSClassFromString(identifier) alloc] init];
        }
            break;
            case MLReuseVCTypeXib:
        {
            viewController = [[NSClassFromString(identifier) alloc] initWithNibName:identifier bundle:nil];
        }
            break;
            case MLReuseVCTypeStoryboard:
        {
            UIStoryboard *storyboard = [UIStoryboard storyboardWithName:objc_getAssociatedObject(type, @selector(reuseIdentifierAndTypeDic)) bundle:nil];
            viewController = [storyboard instantiateViewControllerWithIdentifier:identifier];
            
        }
            break;
        default:
            break;
    }
    
    if (!self.reuseViewControllerPool[identifier]) {
        self.reuseViewControllerPool[identifier] = [[NSMutableArray alloc] init];
    }
    
     [self.reuseViewControllerPool[identifier] addObject:viewController];
    [self.ownerViewController addChildViewController:viewController];
    
    return viewController;
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
  
    
    if ([self.delegate respondsToSelector:@selector(reuseVCView:viewControlerAtIndexPath:)]) {
        
        UIViewController *viewController = [self.delegate reuseVCView:self viewControlerAtIndexPath:indexPath];
        [self.ownerViewController addChildViewController:viewController];
        
        UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:NSStringFromClass([viewController class]) forIndexPath:indexPath];
        [cell.contentView addSubview:viewController.view];
        return cell;
        
        
    }else{
        
        assert(@"需要实现该方法");
    }
   
    return nil;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
  
    if ([self.delegate respondsToSelector:@selector(reuseVCView:viewSizeAtIndexPath:)]) {
       return [self.delegate reuseVCView:self viewSizeAtIndexPath:indexPath];
    }
    return CGSizeMake(SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return collectionView.cellDatas.count;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return [collectionView.cellDatas[section] count];
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
- (void)collectionView:(UICollectionView *)collectionView willDisplayCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
{
  //  [[UIViewController viewControllerOfView:cell.contentView.subviews.firstObject] removeFromParentViewController];
}

- (void)collectionView:(UICollectionView *)collectionView didEndDisplayingCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
{
    

 // [self.ownerViewController addChildViewController:[UIViewController viewControllerOfView:cell.contentView.subviews.firstObject]];
    
    
    
}

#pragma mark - ========= Setter & Getter =========
- (NSMutableDictionary *)reuseIdentifierAndTypeDic
{
    if (_reuseIdentifierAndTypeDic == nil) {
        
        _reuseIdentifierAndTypeDic = [[NSMutableDictionary alloc] init];
    }
    return _reuseIdentifierAndTypeDic;
}
- (UICollectionView *)collectionView
{
    if (_collectionView == nil) {
        
        UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc] init];
        flowLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
        _collectionView = [[UICollectionView alloc] initWithFrame:self.bounds collectionViewLayout:flowLayout];
        _collectionView.backgroundColor = [UIColor whiteColor];
        _collectionView.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
        _collectionView.delegate = self;
        _collectionView.dataSource = self;
        
        [_collectionView registerClass:[UICollectionViewCell class] forCellWithReuseIdentifier:@"UICollectionViewCell"];
        
    }
    return _collectionView;
}
- (NSMutableDictionary *)reuseViewControllerPool
{
    if (_reuseViewControllerPool == nil) {
     
        _reuseViewControllerPool = [[NSMutableDictionary alloc] init];
    }
    return _reuseViewControllerPool;
}

@end
