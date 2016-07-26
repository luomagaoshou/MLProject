//
//  MLViewInCLView.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/24.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLViewInCLView.h"

@implementation MLViewInCLView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/
- (NSMutableDictionary *)OffsetDic
{
    if (_OffsetDic == nil) {
        
        _OffsetDic = [[NSMutableDictionary alloc] init];
    }
    return _OffsetDic;
}
@end
