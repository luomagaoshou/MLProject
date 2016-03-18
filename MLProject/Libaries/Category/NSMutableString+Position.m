




//
//  NSMutableString+Position.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/21.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "NSMutableString+Position.h"
#import "NSString+Size.h"
@implementation NSMutableString (Position)
- (NSMutableString *)makeStringAtLeftAndRightWithSeparatorString:(NSString *)separatorString
                                                     targetLabel:(UILabel *)targetLabel
{
    NSRange separatorStringRange = [self rangeOfString:separatorString];
    NSString *leftString = [self substringToIndex:separatorStringRange.location + separatorStringRange.length];
    NSString *rightString = [self substringFromIndex:separatorStringRange.location + separatorStringRange.length];
    
    UIFont *font = targetLabel.font;
    CGFloat leftStringWidth = [leftString widthWithFont:font constrainedToHeight:targetLabel.frame.size.height];
    CGFloat rightStringWidth = [rightString widthWithFont:font constrainedToHeight:targetLabel.frame.size.height];
    
    CGFloat spaceWidth = targetLabel.frame.size.width - leftStringWidth - rightStringWidth;

    NSMutableString *spaceMutString = [[NSMutableString alloc] init];

 
    
    while ([spaceMutString widthWithFont:font constrainedToHeight:targetLabel.frame.size.height] < spaceWidth) {
        [spaceMutString appendString:@" "];
        //NSLog(@"%f", [spaceMutString widthWithFont:font constrainedToHeight:targetLabel.frame.size.height]);
    }
    
    if ([spaceMutString widthWithFont:font constrainedToHeight:targetLabel.frame.size.height] > spaceWidth) {
        [spaceMutString deleteCharactersInRange:NSMakeRange(0, 1)];
    }
    
  
    [self deleteCharactersInRange:NSMakeRange(0, self.length)];
    [self appendString:leftString];

    [self appendString:spaceMutString];

    [self appendString:rightString];

    return self;
    
    
}


@end
