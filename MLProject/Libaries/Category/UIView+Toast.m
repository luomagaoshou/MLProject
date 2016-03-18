//
//  UIView+Toast.m
//  LotterySteward
//
//  Created by apple on 15/10/27.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UIView+Toast.h"
static char * externHintLabelKey;
static char * externCloseButtonKey;
static char * externResultLabelKey;
static char * externDetailLabelKey;
static char * externConfirmButtonKey;
#import "UIButton+Init.h"
#import "UILabel+Init.h"


@implementation UIView (Toast)


+ (UIView *)createMiddleToast;
{
    CGRect frame = CGRectMake(40, SCREEN_HEIGHT/2 - 100, SCREEN_WIDTH - 80, 200);
    UIView *toast = [[UIView alloc] initWithFrame:frame];
    toast.backgroundColor = [UIColor whiteColor];
    [toast addSubview:[toast hintLabel]];
    [toast addSubview:[toast closeButton]];
    [toast addSubview:[toast resultLabel]];
    [toast addSubview:[toast detailLabel]];
    [toast addSubview:[toast confirmButton]];
   
    return toast;
}


#pragma mark - ========= LayoutSubviews =========
//- (void)layoutSubviews
//{
//    self.hintLabel.frame = CGRectMake(0, 0, 30, 20);
//    self.closeButton.frame = CGRectMake(CGRectGetWidth(self.bounds) - 25, 0, 25, 25);
//    self.resultLabel.frame = CGRectMake(CGRectGetWidth(self.bounds)/2 - 60, 60, 200, 40);
//    self.detailLabel.frame = CGRectMake(30, 100, CGRectGetWidth(self.bounds) - 60, 150);
//    self.confirmButton.frame = CGRectMake(0, CGRectGetHeight(self.bounds) - 44, CGRectGetWidth(self.bounds), 44);
//}
#pragma mark - ========= Event Methods =========
- (void)buttonClicked:(UIButton *)button
{
    if ([button.featureIdentifier isEqualToString:@"关闭按钮"]) {
        
        [self removeFromSuperview];
    }
    if ([button.featureIdentifier isEqualToString:@"确定按钮"]) {
        [self removeFromSuperview];
    }
    
}
#pragma mark - ========= Setter & Getter =========
- (void)setHintLabel:(UILabel *)hintLabel
{
    [self setAssociationValue:hintLabel withKey:&externHintLabelKey];
    
}
- (UILabel *)hintLabel
{
    if ([self getAssociationValueWithKey:&externHintLabelKey]) {
        return [self getAssociationValueWithKey:&externHintLabelKey];
    }
        UILabel *hintLabel = [[UILabel alloc] initWithFrame:CGRectZero text:@"提示" textSize:14];
    [self setHintLabel:hintLabel];
    return hintLabel;
}
- (void)setCloseButton:(UIButton *)closeButton
{
    [self setAssociationValue:closeButton withKey:&externCloseButtonKey];
}
- (UIButton *)closeButton
{
    if ([self getAssociationValueWithKey:&externCloseButtonKey]) {
        return [self getAssociationValueWithKey:&externCloseButtonKey];
    }
    UIButton *closeButton = [UIButton buttonWithType:UIButtonTypeSystem];
    closeButton.featureIdentifier = @"关闭按钮";
     [closeButton addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
  //  __weak typeof(closeButton) weakCloseButton = closeButton;
//    closeButton.drawRectBlock = ^(CGContextRef ref, CGRect rect)
//    {
//        NSMutableArray *firstLinePoints = [[NSMutableArray alloc] init];
//        [firstLinePoints addCGPointStirngWith:CGPointMake(3, 5)];
//        [firstLinePoints addCGPointStirngWith:CGPointMake(CGRectGetWidth(weakCloseButton.bounds)-3, CGRectGetHeight(weakCloseButton.bounds) - 5)];
//        [UIBezierPath drawWithPoints:firstLinePoints lineColor:[UIColor blackColor] lineWidth:5];
//        
//        NSMutableArray *secondLinePoints = [[NSMutableArray alloc] init];
//        [secondLinePoints addCGPointStirngWith:CGPointMake(CGRectGetWidth(weakCloseButton.bounds)-3, 5)];
//        [secondLinePoints addCGPointStirngWith:CGPointMake(3, CGRectGetHeight(weakCloseButton.bounds) - 5)];
//        [UIBezierPath drawWithPoints:secondLinePoints lineColor:[UIColor blackColor] lineWidth:5];
//        
//    };
    [self setCloseButton:closeButton];
    return closeButton;
}
- (void)setResultLabel:(UILabel *)resultLabel
{
    [self setAssociationValue:resultLabel withKey:&externResultLabelKey];
}
- (UILabel *)resultLabel
{
    if ([self getAssociationValueWithKey:&externResultLabelKey]) {
        return [self getAssociationValueWithKey:&externResultLabelKey];
    }
    UILabel *resultLabel = [[UILabel alloc] initWithFrame:CGRectZero text:@"结果" textSize:20];
    [self setResultLabel:resultLabel];
    return resultLabel;
}
- (void)setDetailLabel:(UILabel *)detailLabel
{
    [self setAssociationValue:detailLabel withKey:&externDetailLabelKey];
}
- (UILabel *)detailLabel
{
    if ([self getAssociationValueWithKey:&externDetailLabelKey]) {
        return  [self getAssociationValueWithKey:&externDetailLabelKey];
    }
    UILabel *detailLabel = [[UILabel alloc] initWithFrame:CGRectZero text:@"详情" textSize:20 textColor:[UIColor grayColor]];
    [self setDetailLabel:detailLabel];
    return detailLabel;
}
- (void)setConfirmButton:(UIButton *)confirmButton
{
    [self setAssociationValue:confirmButton withKey:&externConfirmButtonKey];
}
- (UIButton *)confirmButton
{
    if ([self getAssociationValueWithKey:&externConfirmButtonKey]) {
        return [self getAssociationValueWithKey:&externConfirmButtonKey];
    }
    UIButton *confirmButton = [UIButton buttonWithType:UIButtonTypeSystem frame:CGRectZero title:@"确定" borderWidth:0 cornerRadius:0 borderColor:[UIColor clearColor]];
    confirmButton.backgroundColor = [UIColor orangeColor];
    [confirmButton setTintColor:[UIColor whiteColor]];
    confirmButton.featureIdentifier = @"确定按钮";
    [confirmButton addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
  
    
    [self setConfirmButton:confirmButton];
    return confirmButton;
}
@end
