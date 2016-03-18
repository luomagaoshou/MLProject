//
//  MLSBTestCell.m
//  MLProject
//
//  Created by 妙龙赖 on 16/1/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLSBTestCell.h"

@implementation MLSBTestCell

- (void)awakeFromNib {
    self.button.backgroundColor = [UIColor cyanColor];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
