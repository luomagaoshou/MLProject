//
//  CABasicAnimation+ML_make.m
//  MLProject
//
//  Created by 妙龙赖 on 16/4/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "CABasicAnimation+ML_make.h"

@interface CAAnimationKeyPathMaker()
@property (nonatomic, strong) NSMutableArray *multiLevelKeyPaths;
@property (nonatomic, copy) NSString *casheKeyPathString;
@end
@implementation CAAnimationKeyPathMaker

#define M_CAAnimationKeyPathMaker(PROPERTY) - (CAAnimationKeyPathMaker *)PROPERTY\
{\
    [self.multiLevelKeyPaths addObject:NSStringFromSelector(_cmd)];\
    return self;\
}

M_CAAnimationKeyPathMaker(transform)
M_CAAnimationKeyPathMaker(rotation)
M_CAAnimationKeyPathMaker(scale)
M_CAAnimationKeyPathMaker(translation)
M_CAAnimationKeyPathMaker(x)
M_CAAnimationKeyPathMaker(y)
M_CAAnimationKeyPathMaker(z)
M_CAAnimationKeyPathMaker(path)
M_CAAnimationKeyPathMaker(opacity)
M_CAAnimationKeyPathMaker(margin)
M_CAAnimationKeyPathMaker(position)
M_CAAnimationKeyPathMaker(backgroundColor)
M_CAAnimationKeyPathMaker(cornerRadius)
M_CAAnimationKeyPathMaker(borderWidth)
M_CAAnimationKeyPathMaker(bounds)
M_CAAnimationKeyPathMaker(contents)
M_CAAnimationKeyPathMaker(contentsRect)
M_CAAnimationKeyPathMaker(frame)
M_CAAnimationKeyPathMaker(hidden)
M_CAAnimationKeyPathMaker(mask)
M_CAAnimationKeyPathMaker(masksToBounds)
M_CAAnimationKeyPathMaker(shadowColor)
M_CAAnimationKeyPathMaker(shadowOffset)
M_CAAnimationKeyPathMaker(shadowRadius)



- (NSString *)keyPath
{
   
    NSString *keyPathString;
    if (self.multiLevelKeyPaths.count) {
        keyPathString = [[self.multiLevelKeyPaths componentsJoinedByString:@"."] copy];
       
    }else if (self.casheKeyPathString){
        keyPathString =  self.casheKeyPathString;
    }
    
    
    return keyPathString;
}
- (void)set
{
    self.casheKeyPathString = [self.multiLevelKeyPaths componentsJoinedByString:@"."];
    [self.multiLevelKeyPaths removeAllObjects];
   
}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)multiLevelKeyPaths
{
    if (_multiLevelKeyPaths == nil) {
        
        _multiLevelKeyPaths = [[NSMutableArray alloc] init];
    }
    return _multiLevelKeyPaths;
}
@end


@implementation CABasicAnimation (ML_make)

+ (instancetype)animationWithBlock:(void (^)(CABasicAnimation *, CAAnimationKeyPathMaker *))block
{
  
    CAAnimationKeyPathMaker *keyPathMaker = [[CAAnimationKeyPathMaker alloc] init];
    CABasicAnimation *animation = [[CABasicAnimation alloc] init];
    block(animation, keyPathMaker);
    animation.keyPath = [keyPathMaker keyPath];
    
    
    return animation;
}
@end