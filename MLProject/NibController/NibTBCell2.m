//
//  NibTBCell2.m
//  MLProject
//
//  Created by 妙龙赖 on 16/1/11.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NibTBCell2.h"
#import "UIView+CellXib.h"
@implementation NibTBCell2
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
      [self setupSelfNameXibOnSelfWithSerialNumber:0];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        NSLog(@"%@", self);
    }
    return self;
}
- (void)awakeFromNib {
    // Initialization code
       NSLog(@"%@", self);


//     self.button.backgroundColor = [UIColor redColor];
//    [self.button2 setTitle:@"test" forState:UIControlStateNormal];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (IBAction)clickEven:(id)sender {
    self.button.backgroundColor = [UIColor yellowColor];
    NSLog(@"%@",self);
}
@end
