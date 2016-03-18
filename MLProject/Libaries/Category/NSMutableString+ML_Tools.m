//
//  NSMutableString+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/11/19.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSMutableString+ML_Tools.h"

@implementation NSMutableString (ML_Tools)
- (NSMutableString *)deleteCharactersFromString:(NSString *)string options:(NSStringCompareOptions)options
{
    NSRange range = [self rangeOfString:string options:options];
    if (options == NSCaseInsensitiveSearch) {
          [self deleteCharactersInRange:NSMakeRange(0, range.location + 1)];
    }
    else if (options == NSBackwardsSearch){
        [self deleteCharactersInRange:NSMakeRange(range.location, self.length - range.location)];
    }
  
    return self;
}

- (NSMutableString *)deleteStringBetweenEndingOfSubString:(NSString *)fontSubString beginingOfSubString:(NSString *)backSubString
{
   
    
    
    [self deleteCharactersInRange:NSMakeRange([self rangeOfString:fontSubString].location + fontSubString.length, [self rangeOfString:backSubString].location - [self rangeOfString:fontSubString].location - [self rangeOfString:fontSubString].length)];
    
    
    return self;
}


/**
 *  插入一个字符串在另一个字符串之前
 *
 *  @param insertString
 *  @param subString
 *
 *  @return 返回字符串
 */
- (NSMutableString *)insertString:(NSString *)insertString atBeginingOfSubString:(NSString *)subString
{
   
    
    [self insertString:insertString atIndex:[self rangeOfString:subString].location];
    
    return self;
}
- (NSMutableString *)insertString:(NSString *)insertString atEndingOfSubString:(NSString *)subString
{
  
    [self insertString:insertString atIndex:[self rangeOfString:subString].location + subString.length];
    
    return self;
}

- (NSMutableString *)replaceStringbetweenEndingOfSubString:(NSString *)fontSubString
                                beginingOfSubString:(NSString *)backSubString
                                      withNewString:(NSString *)newString;
{
    
  [self deleteStringBetweenEndingOfSubString:fontSubString beginingOfSubString:backSubString];
    
 [self insertString:newString atEndingOfSubString:fontSubString];
    
    return self;
    
}

+ (NSMutableString *)checkURlStringWithDomainName:(NSString *)domainName
{
    NSMutableString *domainNameMutString = [NSMutableString stringWithString:domainName];
    if (![domainName hasPrefix:@"http://"]) {
        
       [domainNameMutString insertString:@"http://" atBeginingOfSubString:domainName];
    }
    return domainNameMutString;
}



+ (NSMutableString *)createCompleteURLStringWithDomainName:(NSString *)domainName
                                               port:(NSString *)port
                                   virtualDirectory:(NSString *)virtualDirectory
{
    NSMutableString *completeURLString = [[NSMutableString alloc] init];
    completeURLString = [self checkURlStringWithDomainName:domainName];
    if (port != nil) {
        completeURLString = [NSMutableString stringWithFormat:@"%@:%@",completeURLString,port];
    }
    completeURLString = [NSMutableString stringWithFormat:@"%@%@", completeURLString, virtualDirectory];
    return completeURLString;
    
}

- (NSMutableString *)changeToNumberFormat
{
    if (self == nil) {
        return [NSMutableString stringWithString:@"0"];
    }
    int count = 0;
    long long int a = self.longLongValue;
    while (a != 0)
    {
        count++;
        a /= 10;
    }
    NSMutableString *string = [NSMutableString stringWithString:self];
    [self deleteCharactersInRange:NSMakeRange(0, self.length)];
    while (count > 3) {
        count -= 3;
        NSRange rang = NSMakeRange(string.length - 3, 3);
        NSString *str = [string substringWithRange:rang];
        [self insertString:str atIndex:0];
        [self insertString:@"," atIndex:0];
        [string deleteCharactersInRange:rang];
    }
    [self insertString:string atIndex:0];
    
    return self;
}

- (NSMutableString *)changeToNumberFormatReserveTwoDecimalFractions
{
    double value = [self doubleValue];
    NSString *valueString = [NSString stringWithFormat:@"%.2lf", value];
    
    NSString *twoDecimalString = [valueString substringFromIndex:[valueString rangeOfString:@"."].location];
    
    
    [self deleteCharactersInRange:NSMakeRange(0, self.length)];
    [self appendString:[valueString substringToIndex:[valueString rangeOfString:@"."].location]];
    
    [self changeToNumberFormat];
    [self insertString:twoDecimalString atEndingOfSubString:self];
    
    return self;
    
}

@end
