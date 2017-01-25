//
//  MLJSKeyword.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/15.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLJSKeyword.h"
@interface MLJSKeyword()
@property (nonatomic, strong) NSMutableArray *jsStrings;
@end
@implementation MLJSKeyword
- (instancetype)documentView{
    [self.jsStrings addObject:NSStringFromSelector(_cmd)];
    return self;
}


#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)jsStrings{
    if (_jsStrings == nil) {
        _jsStrings = [[NSMutableArray alloc] init];
    }
    return _jsStrings;
}
@end
