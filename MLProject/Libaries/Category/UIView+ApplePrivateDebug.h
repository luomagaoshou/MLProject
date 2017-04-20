//
//  UIView+ApplePrivateDebug.h
//  MLMacroDemo
//
//  Created by 妙龙赖 on 2017/4/20.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ApplePrivateDebug)

/**
 自适应描述

 @return <#return value description#>
 */
- (NSString *)ml_autoresizingDescription;

/**
 递归view,获得所有层级描述

 @return <#return value description#>
 */
- (NSString *)ml_recursiveDescription;

/**
 有效约束描述

 @return <#return value description#>
 */
- (NSString *)ml_constraintsValidityDescription;

/**
 <#Description#>

 @return <#return value description#>
 */
- (NSString *)ml_layoutDescriptionIfDifferentFromDefault;



@end
