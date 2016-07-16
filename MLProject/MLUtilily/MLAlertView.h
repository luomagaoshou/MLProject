//
//  MLAlertView.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/9.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^MLAlertViewButtonClickBlock)(NSInteger index);
@interface MLAlertView : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (nonatomic, copy) NSArray *buttonTitles;

+ (void)showAlertViewWithTitle:(NSString *)title
                            detail:(NSString *)detail
                      buttonTitles:(NSArray *)buttonTitles
                        clickBlock:(void(^)(NSInteger index))clickBlock;
+ (instancetype)alertViewWithTitle:(NSString *)title
                            detail:(NSString *)detail
                      buttonTitles:(NSArray *)buttonTitles
                        clickBlock:(void(^)(NSInteger index))clickBlock;
- (void)show;
@end
