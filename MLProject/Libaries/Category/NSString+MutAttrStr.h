//
//  NSString+MutAttrStr.h
//  LotterySteward
//
//  Created by apple on 15/12/15.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MutAttrStr)
- (NSMutableAttributedString *)mutAttrStr;
- (NSMutableAttributedString *)mutableAttributedString;
- (NSMutableAttributedString *)mutableAttributedStringWithColor:(UIColor*)color;
- (NSMutableAttributedString *)mutableAttributedStringWithFontSize:(CGFloat)fontSize;
- (NSMutableAttributedString *)mutableAttributedStringWithColor:(UIColor *)color fontSize:(CGFloat)fontSize;
@end
