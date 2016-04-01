//
//  ALFootballLotteryView.h
//  LotterySteward
//
//  Created by apple on 16/4/1.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ALFootballLotteryView : UIView
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;
@property (strong, nonatomic) IBOutlet UIView *bottomView;
@property (strong, nonatomic) IBOutlet UILabel *chosenCountLabel;
@property (strong, nonatomic) IBOutlet UIButton *deleteButton;
@property (strong, nonatomic) IBOutlet UIButton *purchaseButton;
@end
