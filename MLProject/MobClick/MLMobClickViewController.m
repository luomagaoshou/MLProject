//
//  MLMobClickViewController.m
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/10/27.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MLMobClickViewController.h"
#import "MLMobClickView.h"
#import "UIView+GestureBlock.h"
#import <Aspects/Aspects.h>
#import "NSObject+UM_MobClick.h"
@interface NSObject(Aspects)
@end

@implementation NSObject(Aspects)
#if 0
+ (void)load{
    //button
    [UIApplication aspect_hookSelector:@selector(sendAction:to:from:forEvent:) withOptions:AspectPositionAfter usingBlock:^(id obj1){
        NSLog(@"%@", obj1);
    }error:nil];
    
    //viewController
    [UIViewController aspect_hookSelector:@selector(viewWillAppear:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        
    }error:nil];

    [UIViewController aspect_hookSelector:@selector(viewWillDisappear:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        
    }error:nil];
    //view gesture
    [NSClassFromString(@"UIGestureRecognizerTarget") aspect_hookSelector:@selector(_sendActionWithGestureRecognizer:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        NSLog(@"%@", obj);
    }error:nil];

//tableView
    [UITableView aspect_hookSelector:@selector(_selectRowAtIndexPath:animated:scrollPosition:notifyDelegate:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        NSLog(@"%@", obj);
    }error:nil];
    
    [UITableView aspect_hookSelector:@selector(_deselectRowAtIndexPath:animated:notifyDelegate:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        NSLog(@"%@", obj);
    }error:nil];

//collectionView
    [UICollectionView aspect_hookSelector:@selector(_selectItemAtIndexPath:animated:scrollPosition:notifyDelegate:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        NSLog(@"%@", obj);
    }error:nil];
    [UICollectionView aspect_hookSelector:@selector(_deselectAllAnimated:notifyDelegate:) withOptions:AspectPositionAfter usingBlock:^(id obj){
        NSLog(@"%@", obj);
    }error:nil];
 

}
#endif

@end



@interface UIView(ClassMethodTest)

@end
@implementation UIView(ClassMethodTest)

+ (void)testMethod:(id)sender{
    NSLog(@"%@", sender);
}

@end


@interface MLMobClickTestClass1 : NSObject
+ (void)testMethod1:(id)sender;
- (void)testMethod1:(id)sender;
@end
@implementation MLMobClickTestClass1
+ (void)testMethod1:(id)sender{
    NSLog(@"%@--%@", sender, NSStringFromSelector(_cmd));
}
- (void)testMethod1:(id)sender{
    NSLog(@"%@--%@", sender, NSStringFromSelector(_cmd));
}
@end

@interface MLMobClickTestClass2 : NSObject
+ (void)testMethod2:(id)sender;
- (void)testMethod2:(id)sender;
@end
@implementation MLMobClickTestClass2
+ (void)testMethod1:(id)sender{
    NSLog(@"%@--%@", sender, NSStringFromSelector(_cmd));
}
+ (void)testMethod2:(id)sender{
    NSLog(@"%@--%@", sender, NSStringFromSelector(_cmd));
}
- (void)testMethod2:(id)sender{
    NSLog(@"%@--%@", sender, NSStringFromSelector(_cmd));
}
@end

@interface MLMobClickViewController ()<UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (strong, nonatomic) IBOutlet MLMobClickView *view_;

@end

@implementation MLMobClickViewController

#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    
    [self configureButton];
    [self configureView];
    [self configureTableView];
    [self configureCollectionView];
    
    [self classMethodClassTest];
   // [self instanceMethodTest];
}
- (void)classMethodClassTest{
    
#if 1
    Method method1 = class_getClassMethod(object_getClass([MLMobClickTestClass1 class]), @selector(testMethod1:));
    IMP imp1 = method_getImplementation(method1);
    
    Method method2 = class_getClassMethod(object_getClass([MLMobClickTestClass2 class]), @selector(testMethod2:));
    IMP imp2 = method_getImplementation(method2);
    
    
   //IMP impSet = method_setImplementation(method1, imp2);
  //IMP impReplaced = class_replaceMethod([MLMobClickTestClass1 class], @selector(testMethod1:), imp2, method_getTypeEncoding(method1));
   BOOL success = class_addMethod([MLMobClickTestClass1 class], @selector(testMethod1:), imp2, method_getTypeEncoding(method1));
    if (!success) {
        method_exchangeImplementations(method1, method2);
    }
    //method_exchangeImplementations(method1, method2);
    [MLMobClickTestClass1 testMethod1:@"haha"];
   // [MLMobClickTestClass2 testMethod2:@"gaga"];
    
#endif
    
    
    
    @"";

    
}

- (void)instanceMethodTest{
    Method method1 = class_getInstanceMethod(([MLMobClickTestClass1 class]), @selector(testMethod1:));
    IMP imp1 = method_getImplementation(method1);
    
    Method method2 = class_getInstanceMethod(([MLMobClickTestClass2 class]), @selector(testMethod2:));
    IMP imp2 = method_getImplementation(method2);
    
    
 //   IMP impSet = method_setImplementation(method1, imp2);
   // IMP impReplaced = class_replaceMethod([MLMobClickTestClass1 class], @selector(testMethod1:), imp2, method_getTypeEncoding(method1));
  //  BOOL success = class_addMethod([MLMobClickTestClass1 class], @selector(testMethod1:), imp2, method_getTypeEncoding(method1));
    //method_exchangeImplementations(method1, method2);
  
#if 0
    method_exchangeImplementations(method1, method2);
#endif
#if 0
    method_setImplementation(method1, imp2);
    method_setImplementation(method2, imp1);
#endif
#if 0
    class_replaceMethod([MLMobClickTestClass1 class], @selector(testMethod1:), imp2, method_getTypeEncoding(method1));
#endif
    [[MLMobClickTestClass1 alloc] testMethod1:@"haha"];
    [[MLMobClickTestClass2 alloc] testMethod2:@"gaga"];
    
    
    
    @"";

}
- (void)configureButton{
    [self.view_.button touchUpInside:^{
        NSLog(@"%@", @"fff");
    }];

}
- (void)configureView{
    [self.view_.testVIew tapWithEvent:^(id gesture) {
        NSLog(@"%@", @"gg");
    }];
}
- (void)configureTableView{
    self.view_.tableView.delegate = self;
    self.view_.tableView.dataSource = self;
    [self.view_.tableView ml_registerClassForCellWithNameOrClass:[UITableViewCell class]];
    self.view_.tableView.allowsMultipleSelection = YES;
}
- (void)configureCollectionView{
    self.view_.collectionView.delegate = self;
    self.view_.collectionView.dataSource = self;
    [self.view_.collectionView ml_registerClassForCellWithNameOrClass:[UICollectionViewCell class]];
    self.view_.collectionView.allowsMultipleSelection = YES;
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
    cell.contentView.backgroundColor = kCOLOR_RANDOM_COLOR;
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}
- (void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath{
    
}
#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"UICollectionViewCell" forIndexPath:indexPath];
    cell.contentView.backgroundColor = kCOLOR_RANDOM_COLOR;
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return CGSizeMake(60, 60);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return 1;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return 10;
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
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath{
    
}
- (void)collectionView:(UICollectionView *)collectionView didDeselectItemAtIndexPath:(NSIndexPath *)indexPath{
    
}


#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
