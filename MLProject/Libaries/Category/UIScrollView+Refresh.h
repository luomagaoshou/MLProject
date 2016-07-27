//
//  UITableView+Refresh.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger ,UIScrollViewStatusType) {
    UIScrollViewStatusTypeDefault = 0,
    UIScrollViewStatusTypeEmptyData,
    UIScrollViewStatusTypeNetworkError,
    UIScrollViewStatusTypeNoConnetion,
    
};
typedef NS_ENUM(NSInteger, UIScrollViewLoadType) {
    UIScrollViewLoadTypeFirstTime = 0,
    UIScrollViewLoadTypeRefresh,
    UIScrollViewLoadTypeLoadMore,
    
};
@interface UIScrollView (Refresh)
@property (nonatomic, strong) NSMutableArray <NSArray *> *cellDatas;
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, assign) NSInteger pageNumber;
@property (nonatomic, assign) UIScrollViewStatusType statusType;
@property (nonatomic, assign) UIScrollViewLoadType loadType;
@end
