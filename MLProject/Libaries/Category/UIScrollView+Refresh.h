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
    UIScrollViewStatusTypeEmptyData,///<返回数据为空
    UIScrollViewStatusTypeNetworkError,///<网络错误
    UIScrollViewStatusTypeNoConnetion,///<网络无连接
    
};
typedef NS_ENUM(NSInteger, UIScrollViewLoadType) {
    UIScrollViewLoadTypeShowHUD = 0,
    UIScrollViewLoadTypeRefresh,
    UIScrollViewLoadTypeLoadMore,
    
};
@interface UIScrollView (Refresh)
@property (nonatomic, strong, readonly) NSMutableArray <NSArray *> *cellDatas;

@property (nonatomic, assign) NSInteger pageSize;
//当前页码  从1开始
@property (nonatomic, assign) NSInteger currentPage;
//状态类型
@property (nonatomic, assign) UIScrollViewStatusType statusType;
//加载类型
@property (nonatomic, assign) UIScrollViewLoadType loadType;

- (void)closeMJRefreshHeaderAndFooter;
@end

