//
//  UITableView+Refresh.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UIScrollView+Refresh.h"
#import <MJRefresh/MJRefresh.h>
@implementation UIScrollView (Refresh)
- (void)closeMJRefreshHeaderAndFooter
{
    //if (self.loadType == UIScrollViewLoadTypeRefresh) {
        if (self.mj_header) {
            [self.mj_header endRefreshing];
        }
    
  //  }
  //  else if (self.loadType == UIScrollViewLoadTypeLoadMore){
        if (self.mj_footer) {
            [self.mj_footer endRefreshing];
        }
        
   //}
}

#pragma mark - ========= Setter & Getter =========
- (void)setCellDatas:(NSMutableArray *)cellDatas
{
    objc_setAssociatedObject(self, @selector(cellDatas), cellDatas, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (NSMutableArray *)cellDatas
{
    NSMutableArray *cellDatas = objc_getAssociatedObject(self, @selector(cellDatas));
    if (cellDatas == nil) {
        cellDatas = [[NSMutableArray alloc] init];
        objc_setAssociatedObject(self, @selector(cellDatas), cellDatas, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return cellDatas;
}

- (void)setPageSize:(NSInteger)pageSize
{
    objc_setAssociatedObject(self, @selector(pageSize), @(pageSize), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSInteger)pageSize
{
    return [objc_getAssociatedObject(self, @selector(pageSize)) integerValue];
}

- (void)setCurrentPage:(NSInteger)currentPage
{
    objc_setAssociatedObject(self, @selector(currentPage), @(currentPage), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSInteger)currentPage
{
    if (![objc_getAssociatedObject(self, @selector(currentPage)) integerValue]) {
        self.currentPage = 1;
    } ;
    return [objc_getAssociatedObject(self, @selector(currentPage)) integerValue];
}
- (void)setStatusType:(UIScrollViewStatusType)statusType
{
    objc_setAssociatedObject(self, @selector(statusType), @(statusType), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UIScrollViewStatusType)statusType
{
    return [objc_getAssociatedObject(self, @selector(statusType)) integerValue];
}
- (void)setLoadType:(UIScrollViewLoadType)loadType
{
    objc_setAssociatedObject(self, @selector(loadType), @(loadType), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UIScrollViewLoadType)loadType
{
    return [objc_getAssociatedObject(self, @selector(loadType)) integerValue];
}
@end


