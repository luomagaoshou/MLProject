//
//  ALFootballLotteryCLCell.m
//  LotterySteward
//
//  Created by apple on 16/4/1.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import "ALFootballLotteryCLCell.h"
#import "ReuseButtonCLCell.h"
#import "AthleticsLotteryMaster.h"
#import "UICollectionView+ML_Tools.h"
#import "UIImage+Color.h"
@interface ALFootballLotteryCLCell()<UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) NSMutableArray *dataSource;
@property (nonatomic, copy) NSString *lotteryID;
@property (nonatomic, strong) NSMutableArray *indexPathsOfSelected;
@property (nonatomic, copy) ALFootballLotteryCLCellWillDisplayBlock cellWillDisplayBlock;
@property (nonatomic, copy) ALFootballLotteryCLCellDidEndDisplayBlock cellEndDidDisplayBlock;
@end

@implementation ALFootballLotteryCLCell

- (void)awakeFromNib {
    // Initialization code
    [self commitInit];
    self.backgroundColor = kUI_COLOR_WHITE_000000;
}
- (void)setMaster:(AthleticsLotteryMaster *)master model:(AthleticsLotteryMatchArray *)model lotteryID:(NSString *)lotteryID
{
    self.lotteryID = lotteryID;
    
    self.dateLabel.text = [model.date substringFromIndex:[model.date rangeOfString:@"-"].location + 1];
    self.leagueNameLabel.text = model.leagueMatch;

    self.timeLabel.text = model.time;

    NSArray *homeAndVisitingTeam = [model.playAgainst componentsSeparatedByString:@"|"];
    self.homeTeamLabel.text = homeAndVisitingTeam[0];
    self.visitingTeamLabel.text = homeAndVisitingTeam[1];
    
    
    
}


#pragma mark - ========= CollectionView Cell =========
- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    
    
    ReuseButtonCLCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"ReuseButtonCLCell" forIndexPath:indexPath];
    
    //LayerCornerRadius_borderWidth_borderColor(cell.tagButton.layer, 0, 1/SCREEN_SCALE, kUI_SEPARATOR_COLOR_GRAY);
     [cell.tagButton setBackgroundImage:[UIImage imageWithColor:kUI_COLOR_WHITE_000000] forState:UIControlStateNormal];
//    
//    [cell.tagButton setTitleColor:kUI_TEXT_COLOR_LIGHT_GRAY forState:UIControlStateSelected];
//    [cell.tagButton setBackgroundImage:[UIImage imageWithColor:kUI_OBJECT_BACKGROUND_COLOR_GREEN] forState:UIControlStateSelected];
    
    if ([[self.collectionView indexPathsForSelectedItems] containsObject:indexPath]) {
        cell.selected = YES;
        [self.collectionView.delegate collectionView:self.collectionView didSelectItemAtIndexPath:indexPath];
    }
    else
    {
        cell.selected = NO;
          [self.collectionView.delegate collectionView:self.collectionView didDeselectItemAtIndexPath:indexPath];
    }
    
    [cell.tagButton setTitle:self.cellTitles[indexPath.row] forState:UIControlStateNormal];
    
    
    return cell;
    
}

- (CGSize)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath
{
    CGFloat width = (SCREEN_WIDTH - self.dateLabel.right - 11)/4;
    return CGSizeMake(width, 30);
}
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return 2;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    
    return self.cellTitles.count;
}
//全部0间距

- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (CGFloat)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section
{
    return 0;
}
- (UIEdgeInsets)collectionView:(UICollectionView *)collectionView layout:(UICollectionViewLayout *)collectionViewLayout insetForSectionAtIndex:(NSInteger)section
{
    return UIEdgeInsetsZero;
}
- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
//    NSInteger selectItemAtSection = 0;
//    for (NSIndexPath *indexPath in collectionView.indexPathsForSelectedItems) {
//        if (indexPath.section == indexPath.section) {
//            selectItemAtSection++;
//        }
//    }
//    if (selectItemAtSection == self.cellTitles.count) {
//        return;
//    }
//    if (collectionView.indexPathsForSelectedItems.count == self.cellTitles.count){
//        return;
//    };
   
    if (self.lotteryID.integerValue == 63 || self.lotteryID.integerValue == 64) {

        if (indexPath.row == self.cellTitles.count - 1) {
            [self selectALineWithSection:indexPath.section isAuto:NO];
        }
//        else
//        {
//            if (collectionView.indexPathsForSelectedItems.count == self.cellTitles.count - 1) {
//                [self selectALineWithSection:indexPath.section isAuto:YES];
//            }
//        }
    }
}
- (void)collectionView:(UICollectionView *)collectionView didDeselectItemAtIndexPath:(NSIndexPath *)indexPath
{
    if (self.lotteryID.integerValue == 63 || self.lotteryID.integerValue == 64) {
        if (indexPath.row == self.cellTitles.count - 1) {
            [self deselectALineWithIndexPath:indexPath];
        }else
        {
            
        }
    }
}
//- (void)collectionView:(UICollectionView *)collectionView willDisplayCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
//{
//    if (self.cellWillDisplayBlock) {
//        self.cellWillDisplayBlock(collectionView ,cell, indexPath);
//    }
//}
//- (void)collectionView:(UICollectionView *)collectionView didEndDisplayingCell:(UICollectionViewCell *)cell forItemAtIndexPath:(NSIndexPath *)indexPath
//{
//    if (self.cellEndDidDisplayBlock) {
//        self.cellEndDidDisplayBlock(collectionView, cell, indexPath);
//    }
//}
#pragma mark - ========= Cell Helper =========
- (NSArray *)cellTitlesWithLotteryID:(NSString *)lotteryID
{
    switch (lotteryID.integerValue) {
        case 63:
        {
            static NSArray *title;
            static dispatch_once_t onceToken;
            dispatch_once(&onceToken, ^{
                title = @[@"3", @"1", @"0", @"包"];
            });
            return title;
        }
            break;
        case 64:
        {
            static NSArray *title;
            static dispatch_once_t onceToken;
            dispatch_once(&onceToken, ^{
                title = @[@"0", @"1", @"2", @"3+", @"包"];
            });
            return title;

        }
            break;
        default:
            break;
    }
    return nil;
}
- (void)selectALineWithSection:(NSInteger)section isAuto:(BOOL)isAuto
{
//    if (isAuto) {
//            NSIndexPath *willSelectIndexPath = [NSIndexPath indexPathForItem:self.cellTitles.count-1 inSection:section];
//        [self.collectionView.delegate collectionView:self.collectionView didSelectItemAtIndexPath:willSelectIndexPath];
//        [self.collectionView selectItemAtIndexPath:willSelectIndexPath animated:YES scrollPosition:UICollectionViewScrollPositionNone];
//    }
//    else
//    {
//        for (NSInteger i = 0; i < self.cellTitles.count - 1; i++) {
//            NSIndexPath *willSelectIndexPath = [NSIndexPath indexPathForItem:i inSection:section];
//            [self.collectionView.delegate collectionView:self.collectionView didSelectItemAtIndexPath:willSelectIndexPath];
//            [self.collectionView selectItemAtIndexPath:willSelectIndexPath animated:YES scrollPosition:UICollectionViewScrollPositionNone];
//            
//        }
//    }
//   
}
- (void)deselectALineWithIndexPath:(NSIndexPath *)indexPath
{
//    for (NSInteger i = 0; i < indexPath.row; i++) {
//        NSIndexPath *willDeselectIndexPath = [NSIndexPath indexPathForItem:i inSection:indexPath.section];
//        [self.collectionView.delegate collectionView:self.collectionView didDeselectItemAtIndexPath:willDeselectIndexPath];
//        [self.collectionView deselectItemAtIndexPath:willDeselectIndexPath animated:YES];
//    }
}


- (BOOL)isChosenAtLeastOnMatch
{
    if (self.collectionView.indexPathsForSelectedItems.count) {
        return YES;
    }
    return NO;
}
- (void)configCellWillDisplayBlock:(ALFootballLotteryCLCellWillDisplayBlock)willDisplayBlock didEndDisplay:(ALFootballLotteryCLCellDidEndDisplayBlock)didEndDisplayblock
{
    self.cellWillDisplayBlock = willDisplayBlock;
    self.cellEndDidDisplayBlock = didEndDisplayblock;
}
#pragma mark - ========= Xib View Init Helper =========

- (void)commitInit{
    
    [self initDateLabel];
    [self initLeagueNameLabel];
    [self initTimeLabel];
    [self initExpandButton];
    [self initHomeTeamLabel];
    [self initVSHintLabel];
    [self initVisitingTeamLabel];
    [self initAnalysisButton];
    [self initCollectionView];
    
    
}

- (void)initDateLabel
{
    
    //self.dateLabel = <#code#>
   // LabelAlignment_fontSize_textColor(self.dateLabel, NSTextAlignmentCenter, 11, kUI_TEXT_COLOR_GRAY);
      self.dateLabel.adjustsFontSizeToFitWidth = YES;
}

- (void)initLeagueNameLabel
{
    
    //self.leagueNameLabel = <#code#>
  //  LabelAlignment_fontSize_textColor(self.leagueNameLabel, NSTextAlignmentCenter, 12, kUI_COLOR_WHITE_000000);
   // self.leagueNameLabel.backgroundColor = kUI_COLOR_YELLOW;
    
}

- (void)initTimeLabel
{
    
    //self.timeLabel = <#code#>
//    LabelAlignment_fontSize_textColor(self.timeLabel , NSTextAlignmentCenter, 12, kUI_TEXT_COLOR_GRAY);
  
    
}

- (void)initExpandButton
{
    
    //self.expandButton = <#code#>
    
    
}

- (void)initHomeTeamLabel
{
    
    //self.homeTeamLabel = <#code#>
    //LabelAlignment_fontSize_textColor(self.homeTeamLabel, NSTextAlignmentCenter, 14, kUI_TEXT_COLOR_BLACK);
    self.homeTeamLabel.adjustsFontSizeToFitWidth = YES;
}

- (void)initVSHintLabel
{
    
    //self.VSHintLabel = <#code#>
   // LabelAlignment_fontSize_textColor(self.VSHintLabel , NSTextAlignmentCenter, 14, kUI_TEXT_COLOR_LIGHT_GRAY);
    
}

- (void)initVisitingTeamLabel
{
    
    //self.visitingTeamLabel = <#code#>
    
    //  LabelAlignment_fontSize_textColor(self.visitingTeamLabel, NSTextAlignmentCenter, 14, kUI_TEXT_COLOR_BLACK);
        self.visitingTeamLabel.adjustsFontSizeToFitWidth = YES;
}

- (void)initAnalysisButton
{
    
    //self.analysisButton = <#code#>
   // self.analysisButton.titleLabel.backgroundColor = kUI_SEPARATOR_COLOR_GRAY;
 //   [self.analysisButton setTitleColor:kUI_TEXT_COLOR_LIGHT_GREEN2 forState:UIControlStateNormal];
    
}

- (void)initCollectionView
{
    
    //self.collectionView = <#code#>
    self.collectionView.backgroundColor = kUI_COLOR_WHITE_000000;
    
    self.collectionView.delegate = self;
    self.collectionView.dataSource = self;
    self.collectionView.allowsMultipleSelection = YES;
    [self.collectionView ml_registerNibForCellWithNameOrClasses:@[@"ReuseButtonCLCell"]];

}

#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)dataSource
{
    if (_dataSource == nil) {
        
        _dataSource = [[NSMutableArray alloc] init];
    }
    return _dataSource;
}
- (NSMutableArray *)indexPathsOfSelected
{
    if (_indexPathsOfSelected == nil) {
        
        _indexPathsOfSelected = [[NSMutableArray alloc] init];
    }
    return _indexPathsOfSelected;
}
- (NSArray *)cellTitles
{
    switch (self.lotteryID.integerValue) {
        case 63:
        {
            static NSArray *title;
            static dispatch_once_t onceToken;
            dispatch_once(&onceToken, ^{
                title = @[@"3", @"1", @"0", @"包"];
            });
            return title;
        }
            break;
        case 64:
        {
            static NSArray *title;
            static dispatch_once_t onceToken;
            dispatch_once(&onceToken, ^{
                title = @[@"0", @"1", @"2", @"3+", @"包"];
            });
            return title;
            
        }
            break;
        default:
            break;
    }
    return nil;

}

@end
