
//
//  UILabel+NumberValue.m
//  LotterySteward
//
//  Created by apple on 15/11/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UILabel+NumberValue.h"

@implementation UILabel (NumberValue)
- (void)changeTextIntegerValueWithNumber:(NSInteger)number
{
    NSString *originalNumberString = self.text;
    NSInteger originalNumber = [originalNumberString integerValue];
    NSInteger newNumber = originalNumber + number;
    NSString *newNumberString = [NSString stringWithFormat:@"%ld", (long)newNumber];
    self.text = newNumberString;
   
}
@end
