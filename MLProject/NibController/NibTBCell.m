//
//  NibTBCell.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/18.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "NibTBCell.h"
#import "UIView+CellXib.h"

@implementation NibTBCell
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
      
       
        
    }


    return self;
}
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self  = [super initWithCoder:aDecoder];
    if (self) {
       
    }
    return self;
}

- (void)awakeFromNib
{
   // NSLog(@"%@", self.reuseIdentifier);
    
     [self commitInit];
}
- (void)commitInit
{
    [self commitInitFirstCellButton];
    [self commitInitSecondCellButton];
    [self commitInitThirdCellButton];
}

- (void)commitInitFirstCellButton
{
 
//    [self.firstCellButton setTitle:@"first" forState:UIControlStateNormal];
//    [self.firstCellButton touchDown:^{
//        NSLog(@"first");
//    }];
}
- (void)commitInitSecondCellButton
{
    
    [self.secondCellButton setTitle:@"second" forState:UIControlStateNormal];
    [self.secondCellButton touchDown:^{
        NSLog(@"second");
    }];
}


- (void)commitInitThirdCellButton
{
    [self.thirdCellButton setTitle:@"third" forState:UIControlStateNormal];
    [self.thirdCellButton touchDown:^{
        NSLog(@"third");
    }];
}

- (void)setTitle:(NSString *)title
{
//    NSArray *reuseIDArr = [[self class] getAssociationValue];
//    if ([self.reuseIdentifier isEqualToString:reuseIDArr[0]]) {
//        [self.firstCellButton setTitle:title forState:UIControlStateNormal];
//        
//    }
//    else if ([self.reuseIdentifier isEqualToString:reuseIDArr[1]])
//    {
//        self.secondCellLabel.text = title;
//    }
//    else if([self.reuseIdentifier isEqualToString:reuseIDArr[2]])
//    {
//        [self.thireCellButton setTitle:title forState:UIControlStateNormal];
//    }
}

@end
