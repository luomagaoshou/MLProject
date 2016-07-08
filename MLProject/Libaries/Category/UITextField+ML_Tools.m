//
//  UITextField+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/9/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UITextField+ML_Tools.h"

@implementation UITextField (ML_Tools)

- (UILabel *)placeholderLabel
{
    return [self valueForKey:@"_placeholderLabel"];
}
- (UILabel *)displayLabel
{
    return [self valueForKey:@"_displayLabel"];
}



@end
