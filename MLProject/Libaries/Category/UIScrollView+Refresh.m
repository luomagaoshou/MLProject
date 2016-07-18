//
//  UITableView+Refresh.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UIScrollView+Refresh.h"

@implementation UIScrollView (Refresh)
#pragma mark - ========= Setter & Getter =========
- (void)setPageSize:(NSInteger)pageSize
{
    objc_setAssociatedObject(self, @selector(pageSize), @(pageSize), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSInteger)pageSize
{
    return [objc_getAssociatedObject(self, @selector(pageSize)) integerValue];
}

- (void)setPageNumber:(NSInteger)pageNumber
{
    objc_setAssociatedObject(self, @selector(pageNumber), @(pageNumber), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSInteger)pageNumber
{
    return [objc_getAssociatedObject(self, @selector(pageNumber)) integerValue];
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
