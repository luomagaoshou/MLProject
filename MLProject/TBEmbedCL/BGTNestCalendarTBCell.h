//
//  BGTNestCalendarTBCell.h
//  MLProject
//
//  Created by 妙龙赖 on 2017/3/1.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BGTNestCalendarTBCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@property (weak, nonatomic) IBOutlet UILabel *eventLabel;

- (void)setMaster:(id)master model:(id)model;

@end
