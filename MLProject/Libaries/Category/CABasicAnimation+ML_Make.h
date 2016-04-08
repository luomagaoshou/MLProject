//
//  CABasicAnimation+ML_Make.h
//  MLProject
//
//  Created by 妙龙赖 on 16/4/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>


@interface CABasicAnimationTranslationMaker:NSObject
@property (nonatomic, copy) NSString *x;
@property (nonatomic, copy) NSString *y;
@property (nonatomic, copy) NSString *z;
@end

@interface CABasicAnimationScaleMaker:NSObject
@property (nonatomic, copy) NSString *x;
@property (nonatomic, copy) NSString *y;
@property (nonatomic, copy) NSString *z;
@end

@interface CABasicAnimationRotationMaker:NSObject
@property (nonatomic, copy) NSString *x;
@property (nonatomic, copy) NSString *y;
@property (nonatomic, copy) NSString *z;
@end

@interface CABasicAnimationTransformMaker:NSObject
@property (nonatomic, strong) CABasicAnimationRotationMaker *rotation;
@property (nonatomic, strong) CABasicAnimationScaleMaker *scale;
@property (nonatomic, strong) CABasicAnimationTranslationMaker *translation;
@end


@interface CABasicAnimationMaker:NSObject

@property (nonatomic, strong) CABasicAnimationTransformMaker *transform;

@end


typedef CABasicAnimation * (^CABasicAnimationMakeBlock)(CABasicAnimationMaker *maker);
@interface CABasicAnimation (ML_Make)
- (instancetype)animationWithBlock:(CABasicAnimationMakeBlock)makerBlock;
@end
