//
//  MLCollectionSeparationManager.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

//cell
typedef __kindof UICollectionViewCell * (^MLCollectionViewCellConfigureBlock)(UICollectionView *collectionView, NSIndexPath *indexPath) ;
typedef CGSize (^MLCollectionViewCellSizeBlock)(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSIndexPath *indexPath);
typedef void    (^MLCollectionViewDidSelectCellBlock)(UICollectionView *collectionView, NSIndexPath *indexPath);
typedef NSInteger (^MLCollectionViewNumberOfSectionsBlock)(UICollectionView *collectionView);
typedef NSInteger (^MLCollectionViewNumberOfItemsInSectionBlock)(UICollectionView *collectionView, NSInteger section);

//cellLayout
typedef CGFloat (^MLCollectionViewMinimumInteritemSpacingBlock)(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section);
typedef CGFloat (^MLCollectionViewMinimumLineSpacingBlock)(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section);
typedef UIEdgeInsets (^MLCollectionViewInsetForSection)(UICollectionView *collectionView, UICollectionViewLayout *collectionViewLayout, NSInteger section);

//Header
typedef __kindof UICollectionReusableView * (^MLCollectionViewSectionHeaderBlock)(UICollectionView *collectionView, NSString *kind, NSIndexPath *indexPath);
typedef CGSize (^MLCollectionViewSectionHeaderSizeBlock)(UICollectionView *collectionView, UICollectionViewLayout*collectionViewLayout, NSInteger section);

//Footer
typedef __kindof UICollectionReusableView * (^MLCollectionViewSectionFooterBlock)(UICollectionView *collectionView, NSString *kind, NSIndexPath *indexPath);
typedef CGSize (^MLCollectionViewSectionFooterSizeBlock)(UICollectionView *collectionView, UICollectionViewLayout*collectionViewLayout, NSInteger section);

@interface MLCollectionSeparationManager : NSObject<UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic, copy) MLCollectionViewCellConfigureBlock cellConfigBlock;
@property (nonatomic, copy) MLCollectionViewNumberOfSectionsBlock numberOfSectionsBlock;
@property (nonatomic, copy) MLCollectionViewNumberOfItemsInSectionBlock numberOfItemsInSectionBlock;
@property (nonatomic, copy) MLCollectionViewCellSizeBlock cellSizeBlock;
@property (nonatomic, copy) MLCollectionViewDidSelectCellBlock didSelectedBlock;

//cellLayout
@property (nonatomic, copy) MLCollectionViewMinimumInteritemSpacingBlock minimumInteritemSpacingBlock;
@property (nonatomic, copy) MLCollectionViewMinimumLineSpacingBlock minimumLineSpacingBlock;
@property (nonatomic, copy) MLCollectionViewInsetForSection insetForSectionBlock;


//header
@property (nonatomic, copy) MLCollectionViewSectionHeaderBlock sectionHeaderBlock;
@property (nonatomic, copy) MLCollectionViewSectionHeaderSizeBlock sectionHeaderSizeBlock;

//footer
@property (nonatomic, copy) MLCollectionViewSectionFooterBlock sectionFooterBlock;
@property (nonatomic, copy) MLCollectionViewSectionFooterSizeBlock sectionFooterSizeBlock;

@end
