//
//  UIBarButtonItem+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIBarButtonItem+ML_Tools.h"
#import "UILabel+Init.h"
@implementation UIBarButtonItem (ML_Tools)


- (instancetype)initWithCustomViewSize:(CGSize)size Image:(UIImage *)image
{
    self = [self init];
    if (self) {
        UIButton *button = [UIButton buttonWithType:UIButtonTypeSystem];
        
        
        [button setBackgroundImage:image forState:UIControlStateNormal];
        
        button.frame = CGRectMake(0, 0, size.width, size.height);
        button.userInteractionEnabled = NO;
        self.customView = button;
    }

    
   
    return self;
    
}


@end
