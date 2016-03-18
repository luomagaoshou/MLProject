//
//  UITableView+Refresh.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UITableView (Refresh)
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, assign) NSInteger pageNumber;
@property (nonatomic, copy) NSString *requestID;
@end
