//
//  CABasicAnimation+ML_make.h
//  MLProject
//
//  Created by 妙龙赖 on 16/4/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#define M_AniKeyPath(_keyPath) [[[CAPropertyAnimationKeyPathMaker alloc] init]._keyPath debugDescription]

@interface CAPropertyAnimationKeyPathMaker:NSString
- (CAPropertyAnimationKeyPathMaker *)transform;
- (CAPropertyAnimationKeyPathMaker *)rotation;
- (CAPropertyAnimationKeyPathMaker *)scale;
- (CAPropertyAnimationKeyPathMaker *)translation;
- (CAPropertyAnimationKeyPathMaker *)x;
- (CAPropertyAnimationKeyPathMaker *)y;
- (CAPropertyAnimationKeyPathMaker *)z;
- (CAPropertyAnimationKeyPathMaker *)path;
- (CAPropertyAnimationKeyPathMaker *)opacity;
- (CAPropertyAnimationKeyPathMaker *)margin;
- (CAPropertyAnimationKeyPathMaker *)position;
- (CAPropertyAnimationKeyPathMaker *)backgroundColor;
- (CAPropertyAnimationKeyPathMaker *)cornerRadius;
- (CAPropertyAnimationKeyPathMaker *)borderWidth;
- (CAPropertyAnimationKeyPathMaker *)bounds;
- (CAPropertyAnimationKeyPathMaker *)contents;
- (CAPropertyAnimationKeyPathMaker *)contentsRect;
- (CAPropertyAnimationKeyPathMaker *)frame;
- (CAPropertyAnimationKeyPathMaker *)hidden;
- (CAPropertyAnimationKeyPathMaker *)mask;
- (CAPropertyAnimationKeyPathMaker *)masksToBounds;
- (CAPropertyAnimationKeyPathMaker *)shadowColor;
- (CAPropertyAnimationKeyPathMaker *)shadowOffset;
- (CAPropertyAnimationKeyPathMaker *)shadowOpacity;
- (CAPropertyAnimationKeyPathMaker *)shadowRadius;



@end

@interface CABasicAnimation (ML_make)
+ (instancetype)animationWithBlock:(void (^)(CABasicAnimation *animation, CAPropertyAnimationKeyPathMaker *keyPathMaker))block;
@end
