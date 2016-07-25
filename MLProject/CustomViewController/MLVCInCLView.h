//
//  MLVCInCLView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MLMenuCollectionView.h"
@interface MLVCInCLView : UIView
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;
@property (weak, nonatomic) IBOutlet UIView *topView;
@property (weak, nonatomic) IBOutlet MLMenuCollectionView *menuCollectionView;
@property (weak, nonatomic) IBOutlet UIButton *leftButton;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *collectionViewTopConstaint;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *menuViewTopContraint;
@property (nonatomic, strong) NSMutableDictionary *OffsetDic;
@end
