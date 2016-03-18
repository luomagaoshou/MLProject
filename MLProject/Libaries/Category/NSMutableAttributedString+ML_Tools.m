//
//  NSMutableAttributedString+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/11/4.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSMutableAttributedString+ML_Tools.h"
#import "NSString+ML_Tools.h"
@implementation NSMutableAttributedString (ML_Tools)
#pragma mark - ========= Color =========
- (NSMutableAttributedString *)setStringColor:(UIColor *)color toString:(NSString *)string
{
    return [self setStringColor:color betweenFontString:nil backString:string];
}
- (NSMutableAttributedString *)setStringColor:(UIColor *)color
                                   fromString:(NSString *)string
{
    return [self setStringColor:color betweenFontString:string backString:nil];
}

- (NSMutableAttributedString *)setStringColor:(UIColor *)color betweenFontString:(NSString *)fontString backString:(NSString *)backString
{
    NSRange fontStringRange;
    NSRange backStringRange;

    if (fontString) {
        fontStringRange = [self.string rangeOfString:fontString];
    }
    else
    {
        fontStringRange = NSMakeRange(0, 0);
    }
    if (backString) {
        
        backStringRange = [self.string rangeOfString:backString];
    }
    else
    {
        backStringRange = NSMakeRange(self.length, 0);
    }
    
      [self addAttribute:NSForegroundColorAttributeName value:color range:NSMakeRange(fontStringRange.location + fontStringRange.length, backStringRange.location - fontStringRange.location - fontStringRange.length)];

    return self;
}

#pragma mark - ========= Size =========
- (NSMutableAttributedString *)setStringSize:(float)size
                                  fromString:(NSString *)string
{
   return [self setStringSize:size betweenFontString:string backString:nil];
}
- (NSMutableAttributedString *)setStringSize:(float)size
                                    toString:(NSString *)string
{
   return [self setStringSize:size betweenFontString:nil backString:string];
}
- (NSMutableAttributedString *)setStringSize:(float)size betweenFontString:(NSString *)fontString backString:(NSString *)backString
{
    NSRange fontStringRange;
    NSRange backStringRange;
    
    if (fontString) {
        fontStringRange = [self.string rangeOfString:fontString];
    }
    else
    {
        fontStringRange = NSMakeRange(0, 0);
    }
    if (backString) {
        
        backStringRange = [self.string rangeOfString:backString];
    }
    else
    {
        backStringRange = NSMakeRange(self.length, 0);
    }
    
    [self addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:size] range:NSMakeRange(fontStringRange.location + fontStringRange.length, backStringRange.location - fontStringRange.location - fontStringRange.length)];
    
    return self;
}
- (NSMutableAttributedString *)setStringColorInBracketsAndRemoveBracketWithStringColor:(UIColor *)color bracketsType:(NSString *)bracketsType separateString:(NSString *)separateString
{
    NSString *selfString = [NSString stringWithString:self.string];
    [self deleteCharactersInRange:NSMakeRange(0, self.length)];
    for (NSString *subStr in [selfString componentsSeparatedByString:@","]) {
        if ([subStr containsString:[bracketsType substringWithRange:NSMakeRange(0, 1)]] && [subStr containsString:[bracketsType substringWithRange:NSMakeRange(1, 1)]]) {
            NSString *subStrInBrackets = [subStr substringFromStringEnding:[bracketsType substringWithRange:NSMakeRange(0, 1)] toStringBegining:[bracketsType substringWithRange:NSMakeRange(1, 1)]];
            NSAttributedString *subAttrStr = [[NSAttributedString alloc] initWithString:subStrInBrackets  attributes:@{NSForegroundColorAttributeName:color}];
            [self appendAttributedString:subAttrStr];
        }
        else
        {
            NSAttributedString *subAttrStr = [[NSAttributedString alloc] initWithString:subStr];
            [self appendAttributedString:subAttrStr];
        }
        [self appendAttributedString:[[NSAttributedString alloc] initWithString:@","]];
        
    }
    //消去最后一个逗号
    [self deleteCharactersInRange:NSMakeRange(self.length - 1, 1)];
    return self;

}
+ (NSMutableAttributedString *)mutableAttributeStringWithImage:(UIImage *)image bounds:(CGRect)bounds
{
    NSTextAttachment *attch = [[NSTextAttachment alloc] init];
    attch.image = image;
    attch.bounds = bounds;

    NSAttributedString *attrStr = [NSAttributedString attributedStringWithAttachment:attch];
    NSMutableAttributedString *mutAttrStr = [[NSMutableAttributedString alloc] initWithAttributedString:attrStr];
    return mutAttrStr;
}



@end
