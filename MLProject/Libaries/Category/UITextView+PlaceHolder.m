//
//  UITextView+Placeholder.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/7.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "UITextView+Placeholder.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
@implementation UITextView (Placeholder)
- (void)setupPlaceholderLabel
{
    [self addSubview:self.placeholderLabel];
    [[self.rac_textSignal filter:^BOOL(id value) {
        self.placeholderLabel.hidden = NO;
        return [value length]> 0;
    }] subscribeNext:^(id x) {
        self.placeholderLabel.hidden = YES;
    }];
}
- (void)setDefaulOffset
{
    [self setPlaceholderLabelOffset:CGPointMake(12, 9)];
}
- (void)setPlaceholderLabelOffset:(CGPoint)placeholderLabelOffset
{
    self.placeholderLabel.frame = CGRectMake(self.placeholderLabel.x + placeholderLabelOffset.x, self.placeholderLabel.y + placeholderLabelOffset.y, self.placeholderLabel.width, self.placeholderLabel.height);
}

#pragma mark - ========= Setter & Getter =========
- (UILabel *)placeholderLabel
{
    if (objc_getAssociatedObject(self, @selector(placeholderLabel)) == nil) {
        UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, self.width, 20)];
        objc_setAssociatedObject(self, @selector(placeholderLabel), label, OBJC_ASSOCIATION_RETAIN);
        
    }
    return objc_getAssociatedObject(self, @selector(placeholderLabel));
}
- (void)setPlaceholderLabel:(UILabel *)placeholderLabel
{
     objc_setAssociatedObject(self, @selector(placeholderLabel), placeholderLabel, OBJC_ASSOCIATION_RETAIN);
}
@end
