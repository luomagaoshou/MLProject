//
//  CABasicAnimation+ML_make.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CABasicAnimation+ML_make.h"

@interface CAPropertyAnimationKeyPathMaker()
{
 NSMutableArray *_multiLevelKeyPaths;
}
@end
@implementation CAPropertyAnimationKeyPathMaker
- (NSString *)description
{
    return [_multiLevelKeyPaths componentsJoinedByString:@"."];
}
- (instancetype)init
{
    self = [super init];
    if (self) {
        _multiLevelKeyPaths = [[NSMutableArray alloc] init];
    }
    return self;
}
#define M_CAPropertyAnimationKeyPathMaker(_property) - (CAPropertyAnimationKeyPathMaker *)_property\
{\
[_multiLevelKeyPaths addObject:NSStringFromSelector(_cmd)];\
return self;\
}



M_CAPropertyAnimationKeyPathMaker(transform)
M_CAPropertyAnimationKeyPathMaker(rotation)
M_CAPropertyAnimationKeyPathMaker(scale)
M_CAPropertyAnimationKeyPathMaker(translation)
M_CAPropertyAnimationKeyPathMaker(x)
M_CAPropertyAnimationKeyPathMaker(y)
M_CAPropertyAnimationKeyPathMaker(z)
M_CAPropertyAnimationKeyPathMaker(path)
M_CAPropertyAnimationKeyPathMaker(opacity)
M_CAPropertyAnimationKeyPathMaker(margin)
M_CAPropertyAnimationKeyPathMaker(position)
M_CAPropertyAnimationKeyPathMaker(backgroundColor)
M_CAPropertyAnimationKeyPathMaker(cornerRadius)
M_CAPropertyAnimationKeyPathMaker(borderWidth)
M_CAPropertyAnimationKeyPathMaker(bounds)
M_CAPropertyAnimationKeyPathMaker(contents)
M_CAPropertyAnimationKeyPathMaker(contentsRect)
M_CAPropertyAnimationKeyPathMaker(frame)
M_CAPropertyAnimationKeyPathMaker(hidden)
M_CAPropertyAnimationKeyPathMaker(mask)
M_CAPropertyAnimationKeyPathMaker(masksToBounds)
M_CAPropertyAnimationKeyPathMaker(shadowColor)
M_CAPropertyAnimationKeyPathMaker(shadowOffset)
M_CAPropertyAnimationKeyPathMaker(shadowRadius)
M_CAPropertyAnimationKeyPathMaker(shadowOpacity)


#pragma mark - ========= Setter & Getter =========

@end


@implementation CABasicAnimation (ML_make)

+ (instancetype)animationWithBlock:(void (^)(CABasicAnimation *, CAPropertyAnimationKeyPathMaker *))block
{
  
    CAPropertyAnimationKeyPathMaker *keyPathMaker = [[CAPropertyAnimationKeyPathMaker alloc] init];
    CABasicAnimation *animation = [[CABasicAnimation alloc] init];
    block(animation, keyPathMaker);

    
    
    return animation;
}
@end