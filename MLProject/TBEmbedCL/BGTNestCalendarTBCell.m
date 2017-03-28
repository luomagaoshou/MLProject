//
//  BGTNestCalendarTBCell.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/3/1.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "BGTNestCalendarTBCell.h"

@implementation BGTNestCalendarTBCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    self.eventLabel.backgroundColor = [UIColor yellowColor];
}
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated {
    self.eventLabel.backgroundColor = [UIColor yellowColor];
}
- (void)setMaster:(id)master model:(id)model {
    self.eventLabel.text = @(arc4random()).stringValue;
}
@end
