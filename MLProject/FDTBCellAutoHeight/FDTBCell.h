//
//  FDTBCell.h
//  MLProject
//
//  Created by 妙龙赖 on 16/1/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FDTBCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *label1;
@property (weak, nonatomic) IBOutlet UILabel *label2;
@property (weak, nonatomic) IBOutlet UILabel *label3;
- (void)setData:(NSString *)data;
@end
