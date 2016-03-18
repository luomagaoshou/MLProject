//
//  NSMutableString+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/11/19.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableString (ML_Tools)

- (NSMutableString *)deleteCharactersFromString:(NSString *)string options:(NSStringCompareOptions)options;

- (NSMutableString *)deleteStringBetweenEndingOfSubString:(NSString *)fontSubString beginingOfSubString:(NSString *)backSubString;

- (NSMutableString *)insertString:(NSString *)insertString atBeginingOfSubString:(NSString *)subString;
- (NSMutableString *)insertString:(NSString *)insertString atEndingOfSubString:(NSString *)subString;

- (NSMutableString *)replaceStringbetweenEndingOfSubString:(NSString *)fontSubString
                                beginingOfSubString:(NSString *)backSubString
                                      withNewString:(NSString *)newString;

+ (NSMutableString *)createCompleteURLStringWithDomainName:(NSString *)domainName
                                               port:(NSString *)port
                                   virtualDirectory:(NSString *)virtualDirectory;
/**
 *  数字字符串每隔3个加一个逗号
 *
 *  @param num
 *
 *  @return
 */
- (NSMutableString *)changeToNumberFormat;
- (NSString *)changeToNumberFormatReserveTwoDecimalFractions;
@end
