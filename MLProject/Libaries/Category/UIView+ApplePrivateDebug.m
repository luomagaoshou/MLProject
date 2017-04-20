




//
//  UIView+ApplePrivateDebug.m
//  MLMacroDemo
//
//  Created by 妙龙赖 on 2017/4/20.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "UIView+ApplePrivateDebug.h"
@implementation UIView (ApplePrivateDebug)
#pragma clang diagnostic push
#pragma clang diagnostic ignored        "-Wundeclared-selector"
- (NSString *)ml_autoresizingDescription {
    NSString *str = [self performSelector:@selector(_autoresizingDescription)];
    return str;
}
- (NSString *)ml_recursiveDescription {
    NSString *str = [self performSelector:@selector(recursiveDescription)];
    return str;
}
- (NSString *)ml_constraintsValidityDescription {
    NSString *str = [self performSelector:@selector(_constraintsValidityDescription)];
    return str;
}

- (NSString *)ml_layoutDescriptionIfDifferentFromDefault {
    NSString *str = [self performSelector:@selector(_layoutDescriptionIfDifferentFromDefault)];
    return str;
}

#pragma clang diagnostic pop

@end
