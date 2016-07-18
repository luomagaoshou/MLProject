//
//  UITableView+Refresh.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger ,UIScrollViewStatusType) {
    UIScrollViewStatusTypeEmptyData = 0,
    UIScrollViewStatusTypeNetworkDelay,
    UIScrollViewStatusTypeError,
    UIScrollViewStatusTypeNoSignal,
    
};
typedef NS_ENUM(NSInteger, UIScrollViewLoadType) {
    UIScrollViewStatusTypeFirstTime = 0,
    UIScrollViewStatusTypeRefresh,
    UIScrollViewStatusTypeLoadMore,
    
};
@interface UIScrollView (Refresh)
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, assign) NSInteger pageNumber;
@property (nonatomic, assign) UIScrollViewStatusType statusType;
@property (nonatomic, assign) UIScrollViewLoadType loadType;
@end
