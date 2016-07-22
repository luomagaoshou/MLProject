//
//  MLCSStickyHeaderView.m
//  MLProject
//
//  Created by xunke01 on 16/7/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCSStickyHeaderView.h"
#import <CSStickyHeaderFlowLayout/CSStickyHeaderFlowLayout.h>
@implementation MLCSStickyHeaderView

- (void)awakeFromNib {
    [super awakeFromNib];
    self.backgroundColor = [UIColor redColor];
    // Initialization code
}
- (void)applyLayoutAttributes:(CSStickyHeaderFlowLayoutAttributes *)layoutAttributes {
    
    [UIView beginAnimations:@"" context:nil];
    self.alpha = layoutAttributes.progressiveness + 0.3;
    [UIView commitAnimations];
}
@end
