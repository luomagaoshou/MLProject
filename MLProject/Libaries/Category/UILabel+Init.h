//
//  UILabel+Init.h
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Init)
- (instancetype)initWithFrame:(CGRect)frame
                         text:(NSString *)text
                     textSize:(CGFloat)textSize;
- (instancetype)initWithFrame:(CGRect)frame
                         text:(NSString *)text
                     textSize:(CGFloat)textSize
                    textColor:(UIColor *)textColor;


@end
