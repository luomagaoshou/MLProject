//
//  NSString+MutAttrStr.m
//  LotterySteward
//
//  Created by apple on 15/12/15.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSString+MutAttrStr.h"

@implementation NSString (MutAttrStr)
- (NSMutableAttributedString *)mutAttrStr
{
    return [self mutableAttributedString];
}
- (NSMutableAttributedString *)mutableAttributedString
{
    return [self mutableAttributedStringWithColor:nil];
}


- (NSMutableAttributedString *)mutableAttributedStringWithColor:(UIColor *)color
{
    return [self mutableAttributedStringWithColor:color fontSize:0];
}
- (NSMutableAttributedString *)mutableAttributedStringWithFontSize:(CGFloat)fontSize
{
     return [self mutableAttributedStringWithColor:nil fontSize:fontSize];
}
- (NSMutableAttributedString *)mutableAttributedStringWithColor:(UIColor *)color fontSize:(CGFloat)fontSize
{
    NSMutableAttributedString *mutAttrStr = [[NSMutableAttributedString alloc] initWithString:self];
    if (color) {
        [mutAttrStr addAttributes:@{NSForegroundColorAttributeName : color} range:NSMakeRange(0, self.length)];
    }
    if (fontSize) {
        [mutAttrStr addAttributes:@{NSFontAttributeName:[UIFont systemFontOfSize:fontSize]} range:NSMakeRange(0, self.length)];
    }
    
    return mutAttrStr;
}
@end
