//
//  UIButton+CustomType.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/9.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "UIButton+CustomType.h"


@implementation UIButton (Type)

- (void)setButtonCustomType:(UIButtonCustomType)buttonCustomType
{
    switch (buttonCustomType) {
        case UIButtonCustomTypeBlue:
        {
            
//            [self setTitle:@"normal" forState:UIControlStateNormal];
//            [self setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
//
//            [self setTitle:@"selected" forState:UIControlStateSelected];
//            [self setTitleColor:[UIColor orangeColor] forState:UIControlStateSelected];
//            [self setTintColor:[UIColor grayColor]];
            if (self.buttonType == UIButtonTypeCustom) {
                [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
                [self setBackgroundColor:kUI_OBJECT_COLOR_BLUE];
            }
              else if (self.buttonType == UIButtonTypeSystem)
              {
                  [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
                  [self setBackgroundColor:kUI_OBJECT_COLOR_BLUE];
              }
        }
            break;
            
        default:
            break;
    }
}

@end
