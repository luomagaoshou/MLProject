//
//  MLCALayerController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/2/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCALayerController.h"
#import "MLCALayerView2.h"
#import <objc/runtime.h>
#import "UIBezierPath+ML_Tools.h"
#import "UIView+GestureBlock.h"
#import "CALayer+Line.h"

#define WIDTH 50

@interface MLCALayerController ()

@end

@implementation MLCALayerController

#pragma mark - ========= View LifeCycle =========
//nib初始化
- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    if (self) {
        
    }
    return self;
}
//初始化，是UIViewController的子类就会调用
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
//加载
- (void)loadView
{
    [super loadView];
    
}

//加载完成
- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUI];
    [self downloadData];
}
//即将出现
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}
//排列SubViews
- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
}
//排列SubViews完成
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
}
//已经出现
- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}
//即将消失
- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}
//已经消失
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}
//内存警告
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - ========= InitialUI =========
- (void)initUI
{
    [self initLayer];
//    MLCALayerView2 *layerView2 = [[MLCALayerView2 alloc] initWithFrame:CGRectMake(100, 300, 150, 150)];
//    [self.view addSubview:layerView2];
    
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(100, 300, 200, 200)];
    [self.view addSubview:view];
    view.backgroundColor = [UIColor greenColor];
    
    [view.layer makeLineWithPositionType:CALayerDrawLineTypePositionTop  lineWidthOrHeight:10  lineColor:[UIColor redColor] insets:UIEdgeInsetsMake(3, 5, 0, 5)];
    [view.layer makeLineWithPositionType:CALayerDrawLineTypePositionRight lineWidthOrHeight:10  lineColor:[UIColor yellowColor] insets:UIEdgeInsetsMake(3, 0, 3, 2)];
    [view.layer makeLineWithPositionType:CALayerDrawLineTypePositionBottom lineWidthOrHeight:10  lineColor:[UIColor blueColor] insets:UIEdgeInsetsMake(3, 0, 3, 2)];
    [view.layer makeLineWithPositionType:CALayerDrawLineTypePositionLeft lineWidthOrHeight:10 lineColor:[UIColor cyanColor]  insets:UIEdgeInsetsMake(3, 0, 3, 2)];
//    CAShapeLayer *shapeLayer = [[CAShapeLayer alloc] init];
//    shapeLayer.backgroundColor = [UIColor greenColor].CGColor;
//    shapeLayer.frame = view.bounds;
//    [view.layer addSublayer:shapeLayer];
//    
//    CALayer *lineLayer = [[CALayer alloc] init];
//    lineLayer.backgroundColor = [UIColor yellowColor].CGColor;
//    lineLayer.frame = CGRectMake(0, view.height - 20, view.width, 20);
//    [view.layer addSublayer:lineLayer];
//    
//  
//    
//    CAShapeLayer *bezierPathLayer = [[CAShapeLayer alloc] init];
//    bezierPathLayer.frame = view.bounds;
//    bezierPathLayer.backgroundColor = [UIColor orangeColor].CGColor;
//    
//     UIBezierPath *subPath =  [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0, 0, view.width, 10) cornerRadius:0];
//    

//    bezierPathLayer.path = subPath.CGPath;
//    [view.layer addSublayer:bezierPathLayer];
    
    
}
- (void)initLayer
{
    //[self drawMyLayer];
   // [self drawShapeLayer];
   // [self addMask];
  
}
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self emitterLayer];
}
- (void)emitterLayer
{
    CAEmitterLayer *snowEmitter = [CAEmitterLayer layer];
  
    snowEmitter.backgroundColor = [UIColor blueColor].CGColor;
    //例子发射位置
    snowEmitter.emitterPosition = CGPointMake(120,200);
    //发射源的尺寸大小
    snowEmitter.emitterSize = CGSizeMake(20, 20);
    //发射模式
    snowEmitter.emitterMode = kCAEmitterLayerSurface;
    //发射源的形状
    snowEmitter.emitterShape = kCAEmitterLayerLine;
    
    //创建雪花类型的粒子
    CAEmitterCell *snowflake = [CAEmitterCell emitterCell];
    //粒子的名字
    snowflake.name = @"snow";
    //粒子参数的速度乘数因子
    snowflake.birthRate = 1.0;
    snowflake.lifetime = 120.0;
    //粒子速度
    snowflake.velocity =10.0;
    //粒子的速度范围
    snowflake.velocityRange = 10;
    //粒子y方向的加速度分量
    snowflake.yAcceleration = 2;
    //周围发射角度
    snowflake.emissionRange = 0.5 * M_PI;
    //子旋转角度范围
    snowflake.spinRange = 0.25 * M_PI;
    snowflake.contents = (id)[[UIImage imageNamed:@"DazFlake"] CGImage];
    //设置雪花形状的粒子的颜色
    snowflake.color = [[UIColor colorWithRed:0.200 green:0.258 blue:0.543 alpha:1.000] CGColor];
    
    //创建星星形状的粒子
    CAEmitterCell *snowflake1 = [CAEmitterCell emitterCell];
    //粒子的名字
    snowflake1.name = @"snow";
    //粒子参数的速度乘数因子
    snowflake1.birthRate = 1.0;
    snowflake1.lifetime = 120.0;
    //粒子速度
    snowflake1.velocity =10.0;
    //粒子的速度范围
    snowflake1.velocityRange = 10;
    //粒子y方向的加速度分量
    snowflake1.yAcceleration = 2;
    //周围发射角度
    snowflake1.emissionRange = 0.5 * M_PI;
    //子旋转角度范围
    snowflake1.spinRange = 0.25 * M_PI;
    //粒子的内容和内容的颜色
    snowflake1.contents = (id)[[UIImage imageNamed:@"DazStarOutline"] CGImage];
    snowflake1.color = [[UIColor colorWithRed:0.600 green:0.658 blue:0.743 alpha:1.000] CGColor];
    
    snowEmitter.shadowOpacity = 1.0;
    snowEmitter.shadowRadius = 0.0;
    snowEmitter.shadowOffset = CGSizeMake(0.0, 1.0);
    //粒子边缘的颜色
    snowEmitter.shadowColor = [[UIColor redColor] CGColor];
    
    snowEmitter.emitterCells = [NSArray arrayWithObjects:snowflake,snowflake1,nil];
    [self.view.layer addSublayer:snowEmitter];
}
- (void)drawShapeLayer
{
    
    UIView *shapeView = [[UIView alloc] init];
    [shapeView tapWithConfig:nil event:^(id gesture) {
        [self drawShapeLayer];
    }];
    [self.view addSubview:shapeView];
    shapeView.backgroundColor = [UIColor orangeColor];
    shapeView.frame = CGRectMake(SCREEN_WIDTH/4, SCREEN_HEIGHT/2, 100, 100);
    UIBezierPath *tPath;
    tPath = [UIBezierPath bezierPathWithRoundedRect:shapeView.bounds cornerRadius:5];
    [[UIColor redColor] set];
    [tPath addLineToPoint:CGPointMake(shapeView.x, shapeView.y)];
    [tPath addLineToPoint:CGPointMake(shapeView.x + shapeView.width, shapeView.y)];
    tPath.lineWidth = 5;
    [tPath stroke];
    
  
    CAShapeLayer *shapeLayer = [CAShapeLayer layer];

    
    CALayer *subLayer = [[CALayer alloc] init];
    subLayer.bounds = shapeView.bounds;
    subLayer.backgroundColor = [UIColor redColor].CGColor;
    [shapeLayer addSublayer:subLayer];
    
    
    
    shapeLayer.path = tPath.CGPath;
    shapeView.layer.mask = shapeLayer;

    
}
- (void)addMask{
    UIButton * _maskButton = [[UIButton alloc] init];
    [_maskButton setFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    [_maskButton setBackgroundColor:[UIColor colorWithWhite:0 alpha:0.7]];
    [self.view addSubview:_maskButton];

     [[UIColor redColor] set];
    [[UIColor redColor] setStroke];
    //create path
    UIBezierPath *path = [UIBezierPath bezierPathWithRect:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    [path stroke];
    [path fill];
    [[UIColor redColor] setStroke];
    // MARK: circlePath
    [path appendPath:[UIBezierPath bezierPathWithArcCenter:CGPointMake(SCREEN_WIDTH / 2, 200) radius:100 startAngle:0 endAngle:2*M_PI clockwise:NO]];
    [path stroke];
    [path fill];
      [[UIColor redColor] setStroke];
    // MARK: roundRectanglePath
  

     [path stroke];
 [[UIColor redColor] setStroke];
    UIBezierPath *subPath =  [UIBezierPath bezierPathWithRoundedRect:CGRectMake(0, 0, 5, 300) cornerRadius:15];
    subPath.lineWidth = 5;

    [[UIColor redColor] setStroke];
      [path appendPath:[subPath bezierPathByReversingPath]];
    CAShapeLayer *shapeLayer = [CAShapeLayer layer];
    
    shapeLayer.path = path.CGPath;
    
    [_maskButton.layer setMask:shapeLayer];
}

#pragma mark 绘制图层
-(void)drawMyLayer{
    CGSize size=[UIScreen mainScreen].bounds.size;
    
    //获得根图层
    CALayer *layer=[[CALayer alloc]init];
    //设置背景颜色,由于QuartzCore是跨平台框架，无法直接使用UIColor
    layer.backgroundColor=[UIColor colorWithRed:0 green:146/255.0 blue:1.0 alpha:1.0].CGColor;
    //设置中心点
    layer.position=CGPointMake(size.width/4, size.height/4);
    //设置大小
    layer.bounds=CGRectMake(0, 0, WIDTH,WIDTH);
    //设置圆角,当圆角半径等于矩形的一半时看起来就是一个圆形
    layer.cornerRadius=WIDTH/2;
    //设置阴影
    layer.shadowColor=[UIColor redColor].CGColor;
    layer.shadowOffset=CGSizeMake(2, 2);
    layer.shadowOpacity=.2;
    //设置边框
        layer.borderColor=[UIColor whiteColor].CGColor;
        layer.borderWidth=1;
    
    //设置锚点
       layer.anchorPoint=CGPointZero;
    objc_setAssociatedObject(self, @selector(drawMyLayer), layer, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [self.view.layer addSublayer:layer];
    
}

#pragma mark 点击放大
-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event{
    UITouch *touch=[touches anyObject];
    CALayer *layer= objc_getAssociatedObject(self, @selector(drawMyLayer));
    CGFloat width=layer.bounds.size.width;
    if (width==WIDTH) {
        width=WIDTH*4;
    }else{
        width=WIDTH;
    }
    layer.bounds=CGRectMake(0, 0, width, width);
    layer.position=[touch locationInView:self.view];
    layer.cornerRadius=width/2;
  
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========



@end
