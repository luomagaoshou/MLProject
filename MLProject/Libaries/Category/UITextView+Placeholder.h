//
//  UITextView+Placeholder.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/7.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (Placeholder)
@property (nonatomic, strong) UILabel *placeholderLabel;

- (void)setPlaceholderLabelOffset:(CGPoint)placeholderLabelOffset;
- (void)setDefaulOffset;
- (void)setupPlaceholderLabel;

@end
