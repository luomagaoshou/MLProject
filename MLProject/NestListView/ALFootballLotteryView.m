




//
//  ALFootballLotteryView.m
//  LotterySteward
//
//  Created by apple on 16/4/1.
//  Copyright © 2016年 ytx. All rights reserved.
//

#import "ALFootballLotteryView.h"

@implementation ALFootballLotteryView

- (void)awakeFromNib
{
    [self commitInit];
}

#pragma mark - ========= Xib View Init Helper =========

- (void)commitInit{
    
    [self initCollectionView];
    [self initBottomView];
    [self initChosenCountLabel];
    [self initDeleteButton];
    [self initPurchaseButton];
    
    
}

- (void)initCollectionView
{
    
    //self.collectionView = <#code#>
    
    
}

- (void)initBottomView
{
    
    //self.bottomView = <#code#>
    
}

- (void)initChosenCountLabel
{
    
    //self.chosenCountLabel = <#code#>
   // LabelAlignment_fontSize_textColor(self.chosenCountLabel, NSTextAlignmentCenter, 15, kUI_COLOR_WHITE_000000);
    
}

- (void)initDeleteButton
{
    
    //self.deleteButton = <#code#>
   
    
    
}

- (void)initPurchaseButton
{
    
    //self.purchaseButton = <#code#>
     //  ButtonTextColor_fontSize_backgroundColor(self.purchaseButton, kUI_COLOR_WHITE_000000, 15, kUI_OBJECT_BACKGROUND_COLOR_BLUE);
    
}


@end
