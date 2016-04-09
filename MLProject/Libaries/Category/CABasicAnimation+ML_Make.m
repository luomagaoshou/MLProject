
//
//  CABasicAnimation+ML_Make.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CABasicAnimation+ML_Make.h"
#import <objc/runtime.h>
NSString * ml_AnimationProrertyNameFromClass(Class aClass)
{
    NSMutableString *prorerty = [NSMutableString stringWithString:NSStringFromClass(aClass)];
    [prorerty replaceOccurrencesOfString:@"CABasicAnimation" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, prorerty.length)];
      [prorerty replaceOccurrencesOfString:@"Maker" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, prorerty.length)];
    [prorerty replaceCharactersInRange:NSMakeRange(0, 1) withString:[[prorerty substringToIndex:1] lowercaseString]];
    
    return prorerty;
}

@implementation CABasicAnimationTranslationMaker
@end

@implementation CABasicAnimationScaleMaker
@end


@implementation CABasicAnimationRotationMaker
- (NSString *)x
{
    NSString *currentProperty = NSStringFromSelector(_cmd);
    [self superclass];
    
    return nil;
}
@end

@implementation CABasicAnimationTransformMaker
@end


@implementation CABasicAnimationMaker
- (CABasicAnimation *)basicAnimationWithSelector:(SEL)selector
{
   static NSString *CABasicAnimationTransformMakerStr = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        CABasicAnimationTransformMakerStr = @"CABasicAnimationTransformMaker";
    });
  
    NSMutableArray *keyPaths= [[NSMutableArray alloc] init];
   
    for (Class currentClass = [self class]; currentClass == [ CABasicAnimationTransformMaker class]; currentClass = [currentClass superclass]) {
        [keyPaths addObject:NSStringFromClass(currentClass)];
        
    }
    
    NSString *keyPathStr = [keyPaths componentsJoinedByString:@"."];
    
    
    
    return nil;
}

@end


@implementation CABasicAnimation (ML_Make)
+ (instancetype)animationWithBlock:(CABasicAnimationMakeBlock)makerBlock
{
    CABasicAnimationMaker *maker = [[CABasicAnimationMaker alloc] init];
  
    
    return makerBlock(maker);
    
}
@end
