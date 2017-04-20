

//
//  NSObject+ApplePrivateDebug.m
//  MLMacroDemo
//
//  Created by 妙龙赖 on 2017/4/20.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "NSObject+ApplePrivateDebug.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored        "-Wundeclared-selector"

@implementation NSObject (ApplePrivateDebug)
- (NSString *)ml_ivarDescription {
    NSString *str = [self performSelector:@selector(_ivarDescription)];
    return str;
}

- (NSString *)ml_ivarDescriptionForClass:(Class)klass {
    
    NSString *str = [self performSelector:@selector(__ivarDescriptionForClass:) withObject:klass];
    return str;
}

- (NSString *)ml_propertyDescription {
    NSString *str = [self performSelector:@selector(_propertyDescription)];
    return str;
}
- (NSString *)ml_propertyDescriptionForClass:(Class)klass {
    NSString *str = [self performSelector:@selector(__propertyDescriptionForClass:) withObject:klass];
    return str;
}


- (NSString *)ml_methodDescription {
    NSString *str = [self performSelector:@selector(_methodDescription)];
    return str;
}
- (NSString *)ml_methodDescriptionForClass:(Class)klass {
    NSString *str = [self performSelector:@selector(__methodDescriptionForClass:) withObject:klass];
    return str;
}
#pragma clang diagnostic pop


@end
