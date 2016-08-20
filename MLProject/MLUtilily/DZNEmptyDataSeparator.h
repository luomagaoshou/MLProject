//
//  DZNEmptyDataSeparator.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIScrollView+Refresh.h"
@class DZNEmptyDataSeparatorModel;
typedef void(^DZNEmptyDataSeparatorConfigBlock)(DZNEmptyDataSeparatorModel *model);
@interface DZNEmptyDataSeparatorModel : NSObject
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType
                               imageName:(NSString *)imageName
                            title:(NSString *)title
                     descriptionString:(NSString *)descriptionString;
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType
                               imageName:(NSString *)imageName
                           title:(NSString *)title
                     descriptionString:(NSString *)descriptionString
                      moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock;
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType
                               imageName:(NSString *)imageName
                                   title:(NSString *)title
                       descriptionString:(NSString *)descriptionString
                             buttonTitle:(NSString *)buttonTitle
                              moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock;
@property (nonatomic, assign) UIScrollViewStatusType statusType;
//original property
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *descriptionString;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) UIColor *backgourdColor;


@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSAttributedString *titleAttrStr;
@property (nonatomic, copy) NSAttributedString *descriptionAttrStr;
@property (nonatomic, copy) NSAttributedString *buttonAttrStr;


@property (nonatomic, assign) BOOL allowTouch;
@property (nonatomic, assign) BOOL allowScroll;

@property (nonatomic, assign) CGFloat verticalOffset;
@property (nonatomic, assign) CGFloat spaceHeight;


@property (nonatomic, copy) void (^tapViewBlock)(void);
@property (nonatomic, copy) void (^tapButtonClock)(void);


//custum property
@property (nonatomic, assign) CGFloat verticalOffsetOfEmptyDataSetView;
@property (nonatomic, assign) BOOL hidden;
+ (instancetype)noConnectionModelWithTapViewBlock:(void(^)(void))tapViewBlock;
+ (instancetype)noConnectionModelWithMoreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock;
+ (instancetype)errorModelWithTapViewBlock:(void(^)(void))tapViewBlock;
+ (instancetype)errorModelWithMoreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock;
@end

@interface DZNEmptyDataSeparator : NSObject
+ (instancetype)separatorWithScrollView:(__kindof UIScrollView *)scrollView;
- (void)configureWithModels:(NSArray <DZNEmptyDataSeparatorModel *> *)models;
@end


