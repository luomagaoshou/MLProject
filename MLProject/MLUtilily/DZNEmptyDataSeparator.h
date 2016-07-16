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
                     buttonTitle:(NSString *)buttonTitle;
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType
                               imageName:(NSString *)imageName
                           title:(NSString *)title
                     buttonTitle:(NSString *)buttonTitle
                      moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock;

@property (nonatomic, assign) UIScrollViewStatusType statusType;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *descriptionString;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) UIColor *backgourdColor;
@property (nonatomic, assign) BOOL allowTouch;
@property (nonatomic, assign) BOOL allowScroll;
@property (nonatomic, copy) void (^tapViewBlock)(void);
@property (nonatomic, copy) void (^tapButtonClock)(void);

+ (instancetype)noSignalModel;
+ (instancetype)noSignalModelWithTapViewBlock:(void(^)(void))tapViewBlock;
+ (instancetype)delayModel;
+ (instancetype)delayModelWithTapViewBlock:(void(^)(void))tapViewBlock;

@end
@interface DZNEmptyDataSeparator : NSObject
+ (instancetype)separatorWithScrollView:(__kindof UIScrollView *)tableView;
- (void)configWithModels:(NSArray <DZNEmptyDataSeparatorModel *> *)models;
@end
