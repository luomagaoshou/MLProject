//
//  ALFootballLotteryCLCell.h
//  LotterySteward
//
//  Created by apple on 16/4/1.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ALFootballLotteryCLCellWillDisplayBlock)(UICollectionView *collectionView, UICollectionViewCell *cell, NSIndexPath *indexPath);
typedef void(^ALFootballLotteryCLCellDidEndDisplayBlock)(UICollectionView *collectionView, UICollectionViewCell *cell, NSIndexPath *indexPath);
@interface ALFootballLotteryCLCell : UICollectionViewCell
@property (nonatomic, strong) NSIndexPath *higherLevelIndexPath;

@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *leagueNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UIButton *expandButton;
@property (weak, nonatomic) IBOutlet UILabel *homeTeamLabel;
@property (weak, nonatomic) IBOutlet UILabel *VSHintLabel;
@property (weak, nonatomic) IBOutlet UILabel *visitingTeamLabel;
@property (weak, nonatomic) IBOutlet UIButton *analysisButton;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@property (nonatomic, strong) NSArray *cellTitles;

- (void)configCellWillDisplayBlock:(ALFootballLotteryCLCellWillDisplayBlock)willDisplayBlock didEndDisplay:(ALFootballLotteryCLCellDidEndDisplayBlock)didEndDisplayblock;
- (void)setMaster:(id)master model:(id)model lotteryID:(NSString *)lotteryID;
- (void)selectALineWithSection:(NSInteger)section isAuto:(BOOL)isAuto;
- (void)deselectALineWithSection:(NSInteger)section isAuto:(BOOL)isAuto;

- (BOOL)isChosenAtLeastOnMatch;
@end
