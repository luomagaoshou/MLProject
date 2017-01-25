//
//  BGTGuideView.m
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/12/8.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "BGTGuideView.h"
#import "UIView+GestureBlock.h"
#import <ReactiveCocoa/ReactiveCocoa.h>
typedef NS_OPTIONS(NSInteger, BGTGuideViewTrackPathOption) {
    BGTGuideViewTrackPathOptionGoingUp = 1 << 0,
    BGTGuideViewTrackPathOptionGoingDown = 1 << 1,
    BGTGuideViewTrackPathOptionPlane = 1 << 2,
};
@interface BGTGuideView()<CAAnimationDelegate>
//scrollView
@property (nonatomic, strong) UIScrollView *contentScrollView;

/**
 背景图
 */
@property (nonatomic, strong) UIImageView *backgroudImageView;

/**
 邦德电话图
 */
@property (nonatomic, strong) UIImageView *bondPhoneImageView;

/**
 开始----进入图
 */
@property (nonatomic, strong) UIImageView *startAndEnterImageView;
@end


@implementation BGTGuideView
- (void)dealloc
{
    
}
+ (void)show{
  
    
    BGTGuideView *guideView = [[BGTGuideView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    [[[UIApplication sharedApplication].delegate window] addSubview:guideView];
    [guideView setUpImageAnimation];
    
  
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        
        [self addSubview:self.contentScrollView];
        [self.contentScrollView addSubview:self.backgroudImageView];
        [self.backgroudImageView addSubview:self.bondPhoneImageView];
        [self.backgroudImageView addSubview:self.startAndEnterImageView];
    }
    return self;
}
#pragma mark - layoutSubViews
- (void)layoutSubviews{
    [super layoutSubviews];
    self.contentScrollView.contentSize = self.backgroudImageView.bounds.size;
    self.startAndEnterImageView.frame = CGRectMake(self.backgroudImageView.width * 0.15, SCREEN_HEIGHT * 0.88, self.backgroudImageView.width * 0.70, SCREEN_HEIGHT * 0.04);
}

#pragma mark - Path

- (UIBezierPath *)_trackPathWithOption:(BGTGuideViewTrackPathOption)pathOption{
    UIBezierPath *bezierPath = [[UIBezierPath alloc] init];
    CGFloat totalWidth = self.backgroudImageView.width;
    CGFloat totalHeight = self.backgroudImageView.height;
    
    if (pathOption & BGTGuideViewTrackPathOptionGoingUp) {
        //上坡
        [bezierPath moveToPoint:CGPointMake(totalWidth * 0.15, totalHeight * 0.7)];
        
        [bezierPath addQuadCurveToPoint:CGPointMake(totalWidth * 0.5, totalHeight * 0.59)
                           controlPoint:CGPointMake(totalWidth * 0.4, totalHeight * 0.68)];
    
    }
  
    if (pathOption & BGTGuideViewTrackPathOptionGoingDown) {
        
        if (!(pathOption & BGTGuideViewTrackPathOptionGoingUp)) {
            //下坡
            [bezierPath moveToPoint:CGPointMake(totalWidth * 0.5, totalHeight * 0.59)];
        }
      
        [bezierPath addQuadCurveToPoint:CGPointMake(totalWidth * 0.75, totalHeight * 0.71)
                           controlPoint:CGPointMake(totalWidth * 0.65, totalHeight * 0.71)];

        //最后的直线，
        [bezierPath addLineToPoint:CGPointMake(totalWidth * 0.8, totalHeight * 0.71)];
        
    }
    
    
    if (pathOption & BGTGuideViewTrackPathOptionPlane) {
        //飞机
          [bezierPath moveToPoint:CGPointMake(totalWidth * 0.15, totalHeight * 0.5)];
        [bezierPath addLineToPoint:CGPointMake(totalWidth * 0.7, totalHeight * 0.25)];
    }

#if 0//显示路径
    CAShapeLayer *shapeLayer = [CAShapeLayer layer];
    shapeLayer.backgroundColor = [UIColor orangeColor].CGColor;
    shapeLayer.path = bezierPath.CGPath;
    shapeLayer.fillColor = [UIColor clearColor].CGColor;
    shapeLayer.strokeColor = [UIColor redColor].CGColor;
    shapeLayer.lineWidth = 3.0f;
    [self.backgroudImageView.layer addSublayer:shapeLayer];
#endif
    return bezierPath;
}
#pragma mark -  Animation
- (CAKeyframeAnimation *)_keyframeAnimation{
    CAKeyframeAnimation *animation = [CAKeyframeAnimation animation];
    animation.keyPath = @"position";
    animation.duration = 3;
   // animation.repeatCount = INT_MAX;
    animation.delegate = self;
    animation.calculationMode = kCAAnimationPaced;
    return animation;
}

- (void)setUpImageAnimation{
 
    [self setUpBgImgViewAnimation];
    [self setUpBondPhoneAnimation];
    [self setUpBirdAnimation];
    [self setUpHelloAnimaiton];
    [self setUpPhoneDescriptionAnimation];
    [self setUpPlaneAnimation];
    
}
-(void)setUpBgImgViewAnimation{
    
    
    
    CGFloat imageScale = self.backgroudImageView.image.size.height / self.backgroudImageView.image.size.width;
 
    UIBezierPath *bgImgPath = [self _trackPathWithOption:BGTGuideViewTrackPathOptionGoingUp | BGTGuideViewTrackPathOptionGoingDown];
    [bgImgPath applyTransform:CGAffineTransformMake(-1, 0, 1/imageScale, 0, 0, SCREEN_HEIGHT/2)];

    CAKeyframeAnimation *bgImgAnimation = [self _keyframeAnimation];
    bgImgAnimation.keyPath = @"position";
    bgImgAnimation.removedOnCompletion = NO;
    bgImgAnimation.fillMode = kCAFillModeForwards;
    bgImgAnimation.path = bgImgPath.CGPath;
    bgImgAnimation.beginTime = CACurrentMediaTime();
    [self.backgroudImageView.layer addAnimation:bgImgAnimation forKey:@"bgImgAnimation"];
    
   
    
    
}

- (void)setUpBondPhoneAnimation{
 
    UIBezierPath *bondPhonePath = [self _trackPathWithOption:BGTGuideViewTrackPathOptionGoingUp | BGTGuideViewTrackPathOptionGoingDown];
    [bondPhonePath applyTransform:CGAffineTransformMake(1, 0, 0, 0, 0, SCREEN_HEIGHT * 0.45)];
    
    CAKeyframeAnimation *bondPhoneAnimation = [self _keyframeAnimation];
    bondPhoneAnimation.keyPath = @"position";
    bondPhoneAnimation.removedOnCompletion = NO;
    bondPhoneAnimation.fillMode = kCAFillModeForwards;
    bondPhoneAnimation.path = bondPhonePath.CGPath;
    bondPhoneAnimation.beginTime = CACurrentMediaTime();
    
    [self.bondPhoneImageView.layer addAnimation:bondPhoneAnimation forKey:@"bondPhoneAnimation"];
}
- (void)setUpBirdAnimation{
    CALayer *birdLayer = [CALayer layer];
    birdLayer.frame = CGRectMake(-400, 0, 120, 100);
    birdLayer.contents = (__bridge id)[UIImage imageNamed:@"pic_guide_moving_enen"].CGImage;
    [self.backgroudImageView.layer addSublayer:birdLayer];
    
    CAKeyframeAnimation *birdAnimation =  [self _keyframeAnimation];
    birdAnimation.beginTime = CACurrentMediaTime();
    birdAnimation.rotationMode = kCAAnimationRotateAuto;
    birdAnimation.removedOnCompletion = NO;
    birdAnimation.fillMode = kCAFillModeForwards;
    birdAnimation.path = [self _trackPathWithOption:BGTGuideViewTrackPathOptionGoingUp | BGTGuideViewTrackPathOptionGoingDown].CGPath;
   
    [birdLayer addAnimation:birdAnimation forKey:@"BirdGoing"];
}

- (void)setUpHelloAnimaiton{
    
    CALayer *helloLayer = [CALayer layer];
    helloLayer.frame = CGRectMake(-400, 0, 120, 100);
    helloLayer.contents = (__bridge id)[UIImage imageNamed:@"pic_guide_hello"].CGImage;
    [self.backgroudImageView.layer addSublayer:helloLayer];
    
    UIBezierPath *helloPath = [self _trackPathWithOption:BGTGuideViewTrackPathOptionGoingUp];
    
    [helloPath applyTransform:CGAffineTransformTranslate(CGAffineTransformIdentity, 80, -80)];
    CAKeyframeAnimation *helloAnimation = [self _keyframeAnimation];
    helloAnimation.duration = 1.5;
    helloAnimation.beginTime = CACurrentMediaTime();
    helloAnimation.path = helloPath.CGPath;
    
    [helloLayer addAnimation:helloAnimation forKey:@"HelloGoing"];
    
    
}
- (void)setUpPhoneDescriptionAnimation{
    CALayer *phoneDescriptionLayer = [CALayer layer];
    phoneDescriptionLayer.frame = CGRectMake(-400, 0, 150, 150);
    phoneDescriptionLayer.contents = (__bridge id)[UIImage imageNamed:@"pic_guide_phone_description"].CGImage;
    [self.backgroudImageView.layer addSublayer:phoneDescriptionLayer];
    
    UIBezierPath *phoneDescriptionPath = [self _trackPathWithOption:BGTGuideViewTrackPathOptionGoingDown];
    [phoneDescriptionPath applyTransform:CGAffineTransformTranslate(CGAffineTransformIdentity, 90, -80)];
    CAKeyframeAnimation *phoneDescriptionAnimation = [self _keyframeAnimation];
    phoneDescriptionAnimation.duration = 1.5;
    phoneDescriptionAnimation.beginTime = CACurrentMediaTime() + 1.5;
    phoneDescriptionAnimation.path = phoneDescriptionPath.CGPath;
    phoneDescriptionAnimation.removedOnCompletion = NO;
    phoneDescriptionAnimation.fillMode = kCAFillModeForwards;
    [phoneDescriptionLayer addAnimation:phoneDescriptionAnimation forKey:@"phoneDescription"];

}

- (void)setUpPlaneAnimation{
    CALayer *planeLayer = [CALayer layer];
    planeLayer.frame = CGRectMake(-400, 0, 200, 100);
    planeLayer.contents = (__bridge id)[UIImage imageNamed:@"pic_guide_plane"].CGImage;
    [self.backgroudImageView.layer addSublayer:planeLayer];
    
    UIBezierPath *planePath = [self _trackPathWithOption:BGTGuideViewTrackPathOptionPlane];
    
    [planePath applyTransform:CGAffineTransformTranslate(CGAffineTransformIdentity, 100, -80)];
    CAKeyframeAnimation *planeAnimation = [self _keyframeAnimation];
    planeAnimation.duration = 4;
    planeAnimation.beginTime = CACurrentMediaTime();
    planeAnimation.path = planePath.CGPath;
    planeAnimation.removedOnCompletion = NO;
    planeAnimation.fillMode = kCAFillModeForwards;
    [planeLayer addAnimation:planeAnimation forKey:@"plane"];
}
#pragma mark - CAAnimation Delegate
- (void)animationDidStart:(CAAnimation *)anim{
    
}

- (void)animationDidStop:(CAAnimation *)anim finished:(BOOL)flag{
    
 
    for (CALayer *layer in self.backgroudImageView.layer.sublayers) {
        //找出结束动画
        if (anim == [layer animationForKey:@"BirdGoing"]) {
            
            [self operantionWhenAnimationFinishedWithLayer:layer animation:anim];

             break;
        }
       
    }
   
}
#pragma mark - Animation Finished Operantion helper
- (void)operantionWhenAnimationFinishedWithLayer:(CALayer *)layer animation:(CAAnimation *)animation{
    //更换图片
    layer.contents = (__bridge id)[UIImage imageNamed:@"pic_guide_calling_enen"].CGImage;
 
    //显示邦德电话图片
    self.bondPhoneImageView.alpha = 0;
    [UIView animateWithDuration:0.4 animations:^{
        self.bondPhoneImageView.alpha = 1;
    }];
    
   
    
    //点击移除
    @weakify(self);
    [self.backgroudImageView tapWithEvent:^(id gesture) {
        @strongify(self);
        [UIView animateWithDuration:0.3 animations:^{
            self.alpha = 0.0;
        } completion:^(BOOL finished) {
            
             [self removeFromSuperview];
        }];
 
    }];
    
}

#pragma mark - setter & getter
- (UIScrollView *)contentScrollView{
    if (_contentScrollView == nil) {
        
        _contentScrollView = [[UIScrollView alloc] initWithFrame:[UIScreen mainScreen].bounds];
        _contentScrollView.bounces = NO;
        _contentScrollView.scrollEnabled = NO;
    }
    return _contentScrollView;
}
- (UIImageView *)backgroudImageView{
    if (_backgroudImageView == nil) {
          UIImage *image = [UIImage imageNamed:@"pic_guide_background"];
        CGFloat imageScale = image.size.height / image.size.width;
        _backgroudImageView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_HEIGHT / imageScale, SCREEN_HEIGHT)];
        _backgroudImageView.image = image;
      
    }
    return _backgroudImageView;
}
- (UIImageView *)bondPhoneImageView{
    if (_bondPhoneImageView == nil) {
        
        _bondPhoneImageView = [[UIImageView alloc] init];
        _bondPhoneImageView.image = [UIImage imageNamed:@"pic_guide_phone_call"];
        _bondPhoneImageView.frame = CGRectMake(-1000, 0, SCREEN_WIDTH * 0.5, SCREEN_WIDTH * 0.7);
        _bondPhoneImageView.center = [[UIApplication sharedApplication].delegate window].center;
        _bondPhoneImageView.alpha = 0;
    }
    return _bondPhoneImageView;
}

- (UIImageView *)startAndEnterImageView{
    if (_startAndEnterImageView == nil) {
        
        _startAndEnterImageView = [[UIImageView alloc] init];
        UIImage *image = [UIImage imageNamed:@"pic_guide_start_and_enter"];
        _startAndEnterImageView.image = [image stretchableImageWithLeftCapWidth:image.size.width * 0.5 topCapHeight:image.size.height * 0.5];
        
        
    }
    return _startAndEnterImageView;
}
@end
