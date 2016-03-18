//
//  FDTBCell.m
//  MLProject
//
//  Created by 妙龙赖 on 16/1/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "FDTBCell.h"

@implementation FDTBCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (void)setData:(NSString *)data
{
    self.label1.numberOfLines = 0;
    self.label1.text = data;
    self.label2.numberOfLines = 0;
    self.label2.text = data;
    self.label3.numberOfLines = 0;
    self.label3.text = data;
}
@end
