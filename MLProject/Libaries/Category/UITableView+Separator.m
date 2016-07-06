//
//  UITableView+Separator.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/17.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UITableView+Separator.h"

@implementation UITableView (Separator)
- (void)makeFullAndGraySeparator
{
    [self makeFullSeparatorWithColor:kUI_COLOR_GRAY_b3b3b3];
}
- (void)makeFullSeparatorWithColor:(UIColor *)color
{
    [self setLayoutMargins:UIEdgeInsetsZero];
    [self setSeparatorInset:UIEdgeInsetsZero];
    [self setSeparatorColor:color];
    
}
@end
