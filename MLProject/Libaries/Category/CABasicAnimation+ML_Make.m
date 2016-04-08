
//
//  CABasicAnimation+ML_Make.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CABasicAnimation+ML_Make.h"

@implementation CABasicAnimationTranslationMaker
@end

@implementation CABasicAnimationScaleMaker
@end


@implementation CABasicAnimationRotationMaker
@end

@implementation CABasicAnimationTransformMaker
@end


@implementation CABasicAnimationMaker
- (CABasicAnimation *)basicAnimation
{
    
    NSMutableArray *detailStrings = [self detailStringsWithObject:self];
  
    
    
    return nil;
}
- (NSMutableArray *)detailStringsWithObject:(id)object
{
    NSMutableArray *detailStrings = [[NSMutableArray alloc] init];
    return [self detailStringsWithObject:object currentDetailString:nil storerArr:detailStrings];
}
- (NSMutableArray *)detailStringsWithObject:(id)object currentDetailString:(NSString *)currentDetailString storerArr:(NSMutableArray *)storerArr
{
    NSDictionary *properties = [object getPropertyKeyValueOnlyHaveValueDictionary];
    NSArray *keys = [properties allKeys];
    for (NSInteger i = 0; i < properties.count; i++) {
     
        id value = [object valueForKey:keys[i]];
        if ([value getPropertyKeyValueOnlyHaveValueDictionary].count > 0) {
            //[self detailStringsWithObject:object];
        }
    }
    
    
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
