//
//  CABasicAnimation+ML_make.h
//  MLProject
//
//  Created by 妙龙赖 on 16/4/9.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CAAnimationKeyPathMaker:NSObject
@property (nonatomic, strong) CAAnimationKeyPathMaker *transform;
@property (nonatomic, strong) CAAnimationKeyPathMaker *rotation;
@property (nonatomic, strong) CAAnimationKeyPathMaker *scale;
@property (nonatomic, strong) CAAnimationKeyPathMaker *translation;
@property (nonatomic, strong) CAAnimationKeyPathMaker *x;
@property (nonatomic, strong) CAAnimationKeyPathMaker *y;
@property (nonatomic, strong) CAAnimationKeyPathMaker *z;
@property (nonatomic, strong) CAAnimationKeyPathMaker *path;
@property (nonatomic, strong) CAAnimationKeyPathMaker *opacity;
@property (nonatomic, strong) CAAnimationKeyPathMaker *margin;
@property (nonatomic, strong) CAAnimationKeyPathMaker *position;
@property (nonatomic, strong) CAAnimationKeyPathMaker *backgroundColor;
@property (nonatomic, strong) CAAnimationKeyPathMaker *cornerRadius;
@property (nonatomic, strong) CAAnimationKeyPathMaker *borderWidth;
@property (nonatomic, strong) CAAnimationKeyPathMaker *bounds;
@property (nonatomic, strong) CAAnimationKeyPathMaker *contents;
@property (nonatomic, strong) CAAnimationKeyPathMaker *contentsRect;
@property (nonatomic, strong) CAAnimationKeyPathMaker *frame;
@property (nonatomic, strong) CAAnimationKeyPathMaker *hidden;
@property (nonatomic, strong) CAAnimationKeyPathMaker *mask;
@property (nonatomic, strong) CAAnimationKeyPathMaker *masksToBounds;
@property (nonatomic, strong) CAAnimationKeyPathMaker *shadowColor;
@property (nonatomic, strong) CAAnimationKeyPathMaker *shadowOffset;
@property (nonatomic, strong) CAAnimationKeyPathMaker *shadowOpacity;
@property (nonatomic, strong) CAAnimationKeyPathMaker *shadowRadius;

- (NSString *)keyPath;
- (void)set;
@end

@interface CABasicAnimation (ML_make)
+ (instancetype)animationWithBlock:(void (^)(CABasicAnimation *animation, CAAnimationKeyPathMaker *keyPathMaker))block;
@end
