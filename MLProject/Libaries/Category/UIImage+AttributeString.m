//
//  UIImage+AttributeString.m
//  MLProject
//
//  Created by apple on 16/1/13.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "UIImage+AttributeString.h"

@implementation UIImage (AttributeString)
- (NSMutableAttributedString *)mutableAttributedStringWithBounds:(CGRect)bounds
{
    NSTextAttachment *attch = [[NSTextAttachment alloc] init];
    attch.image = self;
    attch.bounds = bounds;
    NSAttributedString *attchStr = [NSAttributedString attributedStringWithAttachment:attch];
    NSMutableAttributedString *restMutAttrStr = [[NSMutableAttributedString alloc] initWithAttributedString:attchStr];
    return restMutAttrStr;
    
}
@end
