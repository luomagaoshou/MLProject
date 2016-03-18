//
//  NibController.h
//  TestNib
//
//  Created by 妙龙赖 on 15/11/9.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>


IB_DESIGNABLE
IBInspectable
#define kCellButtonReuseID @"kCellButtonReuseID"
#define kCellLabelReuseID @"kCellLabelReuseID"
#define kCellProgressReuseID @"kCellProgressReuseID"
@interface NibController : UIViewController

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
