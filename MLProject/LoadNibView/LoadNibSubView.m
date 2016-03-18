//
//  LoadNibSubView.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/23.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "LoadNibSubView.h"
#import "UIView+Xib.h"

@implementation LoadNibSubView

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
        UIView *containerView = [[[UINib nibWithNibName:NSStringFromClass([self class]) bundle:nil] instantiateWithOwner:self options:nil] objectAtIndex:0];
        CGRect newFrame = CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
        containerView.frame = newFrame;
        [self addSubview:containerView];
    }
    return self;
}

- (void)awakeFromNib
{
    self.topView.backgroundColor = [UIColor redColor];
    self.bottomButton.backgroundColor = [UIColor cyanColor];
    
    
}

@end
