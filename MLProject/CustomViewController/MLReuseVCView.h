//
//  MLReuseVCView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/26.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MLReuseVCView;

@protocol MLReuseViewControllerDelegate<NSObject>
- (NSString *)reuseVCView:(MLReuseVCView *)reuseVCView reuseIdentifierAtIndexPath:(NSIndexPath *)indexPath;
- (__kindof UIViewController *)reuseVCView:(MLReuseVCView *)reuseVCView viewControlerAtIndexPath:(NSIndexPath *)indexPath;
- (CGSize)reuseVCView:(MLReuseVCView *)reuseVCView viewSizeAtIndexPath:(NSIndexPath *)indexPath;
@end
@interface MLReuseVCView : UIView
@property (nonatomic, weak) id <MLReuseViewControllerDelegate> delegate;
@property (nonatomic, weak, readonly) UIViewController *ownerViewController;
@property (nonatomic, strong) UICollectionView *collectionView;

- (void)ml_registerViewControllerForClassWithClassOrName:(id)classOrName;
- (void)ml_registerViewControllerForNibWithClassOrName:(id)classOrName;
- (void)ml_registerViewControllerForStoryboardWithClassOrName:(id)classOrName nibName:(NSString *)nibName;

- (UIViewController *)ml_dequeueReusableCellWithReuseIdentifier:(NSString *)identifier indexPath:(NSIndexPath *)indexPath;
@end
