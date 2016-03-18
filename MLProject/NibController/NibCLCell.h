//
//  NibCLCell.h
//  MLProject
//
//  Created by 妙龙赖 on 15/12/22.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NibCLCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UIView *testView;
@property (weak, nonatomic) IBOutlet UIButton *testButton;
- (IBAction)clickEvent:(id)sender;

@end
