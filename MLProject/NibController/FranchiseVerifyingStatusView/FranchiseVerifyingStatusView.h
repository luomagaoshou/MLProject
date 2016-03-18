//
//  FranchiseVerifyingStatusView.h
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FranchiseVerifyingStatusView : UIView


//@property (nonatomic, strong) UILabel *firstDotLabel;
//@property (nonatomic, strong) UILabel *secondDotLabel;
//@property (nonatomic, strong) UILabel *thiredDotLabel;
//@property (nonatomic, strong) UILabel *submintVerifyStatusLabel;
//@property (nonatomic, strong) UILabel *verifyingStatusLabel;
//@property (nonatomic, strong) UILabel *passStatusLabel;

@property (weak, nonatomic) IBOutlet UILabel *firstDotLabel;
@property (weak, nonatomic) IBOutlet UILabel *secondDotLabel;
@property (weak, nonatomic) IBOutlet UILabel *thirdDotLabel;
@property (weak, nonatomic) IBOutlet UILabel *submitLabel;
@property (weak, nonatomic) IBOutlet UILabel *verifyingLabel;
@property (weak, nonatomic) IBOutlet UILabel *passLabel;

@end
