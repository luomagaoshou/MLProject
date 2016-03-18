//
//  NSBundle+ML_Tools.m
//  MLProject
//
//  Created by apple on 16/1/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSBundle+ML_Tools.h"

@implementation NSBundle (ML_Tools)
+ (id)loadNibWithNameOrClass:(id)NameOrClass
{
    NSString *name;
    if ([NameOrClass isKindOfClass:[NSString class]]) {
        name = NameOrClass;
    }
    else
    {
        name = NSStringFromClass(NameOrClass);
    }
    id nibView = [[[NSBundle mainBundle] loadNibNamed:name
                                                owner:nil options:nil] firstObject];
    return nibView;
}
@end
