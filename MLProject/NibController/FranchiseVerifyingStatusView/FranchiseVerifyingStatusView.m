//
//  FranchiseVerifyingStatusView.m
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "FranchiseVerifyingStatusView.h"
#import "UILabel+Init.h"
#import "UILabel+CommonType.h"
#import "UIButton+CommonType.h"
@implementation FranchiseVerifyingStatusView

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder]) {
        UIView *containerView = [[[UINib nibWithNibName:NSStringFromClass([self class]) bundle:nil] instantiateWithOwner:self options:nil] objectAtIndex:0];
        CGRect newFrame = CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
        containerView.frame = newFrame;
        self.firstDotLabel.labelCommonType = UILabelCommonTypeGreenDotView;
       
        [self addSubview:containerView];
    }
    return self;
}
//- (void)awakeFromNib
//{
//    self.firstDotLabel.labelCommonType = UILabelCommonTypeGreenDotView;
//    
//}
//
//- (instancetype)initWithFrame:(CGRect)frame
//{
//    self = [super initWithFrame:frame];
//    if (self) {
//    [self addSubview:self.firstDotLabel];
//    [self addSubview:self.secondDotLabel];
//    [self addSubview:self.thiredDotLabel];
//    [self addSubview:self.submintVerifyStatusLabel];
//    [self addSubview:self.verifyingStatusLabel];
//    [self addSubview:self.passStatusLabel];
//    
//}
//
//
//return self;
//}
//
//#pragma mark - ========= LayoutSubviews =========
//- (void)layoutSubviews
//{
//    //self.firstDotLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    //self.secondDotLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    //self.thiredDotLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    //self.submintVerifyStatusLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    //self.verifyingStatusLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    //self.passStatusLabel.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);
//    
//}
//
//#pragma mark - ========= Event Methods =========
//- (void)clickEvent:(UIView *)sender
//{
//    NSLog(@"%@",sender.featureIdentifier);
//    
//}
//
//- (UILabel *)firstDotLabel
//{
//    if(_firstDotLabel == nil){
//        
//      //  _firstDotLabel = [UILabel alloc] initWithFrame:(CGRect)
//        
//    }
//    return _firstDotLabel;
//}
//- (UILabel *)secondDotLabel
//{
//    if(_secondDotLabel == nil){
//        
//        //_secondDotLabel = <#code#>
//        
//    }
//    return _secondDotLabel;
//}
//- (UILabel *)thiredDotLabel
//{
//    if(_thiredDotLabel == nil){
//        
//        //_thiredDotLabel = <#code#>
//        
//    }
//    return _thiredDotLabel;
//}
//- (UILabel *)submintVerifyStatusLabel
//{
//    if(_submintVerifyStatusLabel == nil){
//        
//        //_submintVerifyStatusLabel = <#code#>
//        
//    }
//    return _submintVerifyStatusLabel;
//}
//- (UILabel *)verifyingStatusLabel
//{
//    if(_verifyingStatusLabel == nil){
//        
//        //_verifyingStatusLabel = <#code#>
//        
//    }
//    return _verifyingStatusLabel;
//}
//- (UILabel *)passStatusLabel
//{
//    if(_passStatusLabel == nil){
//        
//        //_passStatusLabel = <#code#>
//        
//    }
//    return _passStatusLabel;
//}
//
//
//
//


@end
