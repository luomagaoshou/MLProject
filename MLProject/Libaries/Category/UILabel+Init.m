//
//  UILabel+Init.m
//  LotterySteward
//
//  Created by apple on 15/10/30.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UILabel+Init.h"

@implementation UILabel (Init)
- (instancetype)initWithFrame:(CGRect)frame
                         text:(NSString *)text
                     textSize:(CGFloat)textSize
{
    return [self initWithFrame:frame text:text textSize:textSize textColor:nil];
}
- (instancetype)initWithFrame:(CGRect)frame
                         text:(NSString *)text
                     textSize:(CGFloat)textSize
                    textColor:(UIColor *)textColor

{
    
    self = [super init];
    if (self) {
        
        self.frame = frame;
        self.text = text;
        
        self.font = [UIFont systemFontOfSize:textSize];
        if (textColor) {
            self.textColor = textColor;
        }
        
        
        
        
    }
    
    return self;
}
@end
