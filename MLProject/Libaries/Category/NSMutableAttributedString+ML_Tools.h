//
//  NSMutableAttributedString+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/11/4.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableAttributedString (ML_Tools)
- (NSMutableAttributedString *)setStringColor:(UIColor *)color
                                   fromString:(NSString *)string;
- (NSMutableAttributedString *)setStringColor:(UIColor *)color
                                     toString:(NSString *)String;
- (NSMutableAttributedString *)setStringColor:(UIColor *)color
                            betweenFontString:(NSString *)fontString
                                   backString:(NSString *)backString;


- (NSMutableAttributedString *)setStringSize:(float)size
                                   fromString:(NSString *)string;
- (NSMutableAttributedString *)setStringSize:(float)size
                                     toString:(NSString *)String;
- (NSMutableAttributedString *)setStringSize:(float)size
                            betweenFontString:(NSString *)fontString
                                   backString:(NSString *)backString;
- (NSMutableAttributedString *)setStringColorInBracketsAndRemoveBracketWithStringColor:(UIColor *)color
                                                                          bracketsType:(NSString *)bracketsType
                                                                        separateString:(NSString *)separateString;
+ (NSMutableAttributedString *)mutableAttributeStringWithImage:(UIImage *)image bounds:(CGRect)bounds;
@end
