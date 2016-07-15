//
//  MLMenuCollectionView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/16.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^MLMenuClickBlock)(NSInteger index);
@interface MLMenuCollectionView : UICollectionView
- (void)setTitles:(NSArray *)titles clickBlock:(MLMenuClickBlock)clickBlock;

@end
