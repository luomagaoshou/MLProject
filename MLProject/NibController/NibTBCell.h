//
//  NibTBCell.h
//  MLProject
//
//  Created by 妙龙赖 on 15/12/18.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NibTBCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIButton *firstCellButton;

@property (weak, nonatomic) IBOutlet UIButton *secondCellButton;

@property (weak, nonatomic) IBOutlet UIButton *thirdCellButton;


- (void)setTitle:(NSString *)title;

@end
