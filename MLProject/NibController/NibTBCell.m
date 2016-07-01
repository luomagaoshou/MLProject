//
//  NibTBCell.m
//  MLProject
//
//  Created by 妙龙赖 on 16/6/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NibTBCell.h"
#import "UIView+Xib.h"
@implementation NibTBCell
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self setupSelfNameXibOnSelf];
    }
    return self;
}
- (void)awakeFromNib {
    [super awakeFromNib];

}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
