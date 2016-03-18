//
//  NibToViewView.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/12.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "NibToViewView.h"

@implementation NibToViewView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        self.testView.backgroundColor = [UIColor orangeColor];
    }
    return self;
}
- (void)awakeFromNib
{
    self.testView.backgroundColor = [UIColor orangeColor];
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
//     
//        UIView *containerView = [[[UINib nibWithNibName:@"NibToViewView" bundle:nil] instantiateWithOwner:self options:nil] objectAtIndex:0];
//        CGRect newFrame = CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
//        containerView.frame = newFrame;
//        [self addSubview:containerView];
    }
    return self;
}
@end
