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
