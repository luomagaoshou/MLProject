//
//  MLAlertView.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/9.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MLAlertView.h"
#import "CALayer+Line.h"
@interface MLAlertView()
@property (nonatomic, copy) MLAlertViewButtonClickBlock buttonClickBlock;
@end
@implementation MLAlertView
+ (void)showAlertViewWithTitle:(NSString *)title detail:(NSString *)detail buttonTitles:(NSArray *)buttonTitles clickBlock:(void (^)(NSInteger))clickBlock
{
    MLAlertView *alertView = [self alertViewWithTitle:title detail:detail buttonTitles:buttonTitles clickBlock:clickBlock];
    [alertView show];
 
}
+ (instancetype)alertViewWithTitle:(NSString *)title detail:(NSString *)detail buttonTitles:(NSArray *)buttonTitles clickBlock:(void (^)(NSInteger))clickBlock
{
    MLAlertView *alertView = (MLAlertView *)[[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:nil options:nil][0];
    
    alertView.frame = CGRectMake(22, SCREEN_HEIGHT/2 - 150, SCREEN_WIDTH - 44, 200);
    alertView.titleLabel.text = title;
    alertView.detailLabel.text = detail;
    [alertView setButtonTitles:buttonTitles];
    alertView.buttonClickBlock = clickBlock;
    return alertView;
    
    
    
}
- (void)show
{
    [[UIApplication sharedApplication].keyWindow addSubview:self];
}
- (void)close
{
    [UIView animateWithDuration:0.3 animations:^{
     
        self.alpha= 0;
    } completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}
- (void)awakeFromNib
{
    [self commitConfig];
    LayerCornerRadius_borderWidth_borderColor(self.layer, 5, 0, nil);
    //self.alpha = 0.9;
}
- (void)setButtonTitles:(NSArray *)buttonTitles
{
    _buttonTitles = buttonTitles;
    
    for (NSInteger i = 0; i < buttonTitles.count; i++) {
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
        //绑定index
        objc_setAssociatedObject(button, @selector(setButtonTitles:), @(i), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [button addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
     
        
        button.frame = CGRectMake(i * self.width/buttonTitles.count, self.height - 50, self.width/buttonTitles.count, 50);
        [button setTitle:buttonTitles[i] forState:UIControlStateNormal];
        [self addSubview:button];
        
        if (i == buttonTitles.count - 1) {
            button.buttonCommonType = UIButtonCommonTypeBlueText;
            [button.layer makeLineWithPositionType:CALayerDrawLineTypePositionTop lineColor:kUI_COLOR_GRAY_dedede insets:UIEdgeInsetsMake(-1/SCREEN_SCALE, 0, 0, 0)];
            
            
        }else
        {
            button.buttonCommonType = UIButtonCommonTypeGrayText;
          [button.layer makeLineWithPositionType:CALayerDrawLineTypePositionTop lineColor:kUI_COLOR_GRAY_dedede insets:UIEdgeInsetsMake(-1/SCREEN_SCALE, 0, 0, 0) ];
             [button.layer makeLineWithPositionType:CALayerDrawLineTypePositionRight lineColor:kUI_COLOR_GRAY_dedede insets:UIEdgeInsetsMake(0, 0, 0, -1/SCREEN_SCALE)];
        }
        
    }
}
- (void)buttonClicked:(UIButton *)button
{
    if (self.buttonClickBlock) {
         self.buttonClickBlock([objc_getAssociatedObject(button, @selector(setButtonTitles:)) integerValue]);
    }
    [self close];
    
}
#pragma mark - ========= Xib View Config Helper =========

- (void)commitConfig{
    
    [self configTitleLabel];
    [self configDetailLabel];

    
    
}

- (void)configTitleLabel
{
    
    //self.titleLabel = <#code#>
    LabelAlignment_fontSizeOfPx_textColor(self.titleLabel, kUI_COLOR_BLUE_00b4e9, 32, NSTextAlignmentCenter);
    self.titleLabel.numberOfLines = 0;
    
    
}

- (void)configDetailLabel
{
    
    //self.detailLabel = <#code#>
    
     LabelAlignment_fontSizeOfPx_textColor(self.detailLabel, kUI_COLOR_GRAY_999999, 28, NSTextAlignmentLeft);
    self.detailLabel.numberOfLines = 0;
}



@end
