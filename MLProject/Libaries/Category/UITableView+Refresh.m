//
//  UITableView+Refresh.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/27.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UITableView+Refresh.h"

@implementation UITableView (Refresh)
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
- (void)setRequestID:(NSString *)requestID
{
    
}
@end
