//
//  MLTestTableView.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/10/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTestTableView.h"

@implementation MLTestTableView

- (void)awakeFromNib{
    [super awakeFromNib];
    self.delaysContentTouches = NO;
    // iterate over all the UITableView's subviews
    for (id view in self.subviews)
    {
        // looking for a UITableViewWrapperView
        if ([NSStringFromClass([view class]) isEqualToString:@"UITableViewWrapperView"])
        {
            // this test is necessary for safety and because a "UITableViewWrapperView" is NOT a UIScrollView in iOS7
            if([view isKindOfClass:[UIScrollView class]])
            {
                // turn OFF delaysContentTouches in the hidden subview
                UIScrollView *scroll = (UIScrollView *) view;
                scroll.delaysContentTouches = NO;
            }
            break;
        }
    }

}

- (BOOL)touchesShouldCancelInContentView:(UIView *)view
{
    if ([view isKindOfClass:[UIButton class]])
    {
        return YES;
    }
    return [super touchesShouldCancelInContentView:view];
}
@end
