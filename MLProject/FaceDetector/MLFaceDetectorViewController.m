


//
//  MLFaceDetectorViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLFaceDetectorViewController.h"
#import "MLFaceDetectorView.h"
#import "UIImage+FaceDetector.h"
#import "UIView+Badge.h"
#import <Masonry/Masonry.h>
@interface MLFaceDetectorViewController ()
@property (strong, nonatomic) IBOutlet MLFaceDetectorView *view_;

@end

@implementation MLFaceDetectorViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    //[self detectFace];
    //[self faceDetecotr2];
    //[self faceDetector3];
   // [self faceDetector4];
    
    UIView *view1 = [self testView];
    [self.view_ addSubview:view1];
    [view1 mas_makeConstraints:^(MASConstraintMaker *make) {
        make.center.mas_equalTo(self.view_);
        make.width.mas_equalTo(@200);
        make.height.mas_equalTo(@200);
    }];
    
    
    
    UIView *view2 = [self testView];
    [self.view_ addSubview:view2];
    [view2 mas_makeConstraints:^(MASConstraintMaker *make) {
        make.center.mas_equalTo(self.view_);
        make.width.mas_equalTo(view1).valueOffset(@100);
        make.height.mas_equalTo(view1).valueOffset(@-50);
    }];

    
}

- (UIView *)testView{
    UIView *view = [[UIView alloc] init];
    view.backgroundColor = kCOLOR_RANDOM_COLOR;
    
    return view;
}
- (void)faceDetector4{
    
    UIImage *image = [UIImage imageNamed:@"face2"];
    self.view_.faceImageView.image = image;
    self.view_.resultImageView.image = [image ml_cropFaceImageWithEdgeInsets:UIEdgeInsetsMake(-30, -30, -30, -30)];
    self.view_.resultImageView.image = [image ml_cropFaceImageWithEdgeInsetsProportion:UIEdgeInsetsMake(-0.3, -0.3, -0.3, -0.3)];
    self.view_.resultImageView.contentMode = UIViewContentModeScaleAspectFit;
}

- (void)detectFace{
    
    UIImage* image = [UIImage imageNamed:@"ian.jpeg"];
    UIImageView *testImageView = [[UIImageView alloc] initWithImage: image];
    [testImageView setTransform:CGAffineTransformMakeScale(1, -1)];
    //[[[UIApplication sharedApplication] delegate].window setTransform:
    //CGAffineTransformMakeScale(1, -1)];
    [testImageView setFrame:CGRectMake(0, 64, testImageView.image.size.width, testImageView.image.size.height)];
    testImageView.contentMode = UIViewContentModeTopLeft;
    [self.view addSubview:testImageView];
    // 识别图片:
    CIImage* ciimage = [CIImage imageWithCGImage:image.CGImage];
    NSDictionary* opts = [NSDictionary dictionaryWithObject:
                          CIDetectorAccuracyHigh forKey:CIDetectorAccuracy];
    CIDetector* detector = [CIDetector detectorOfType:CIDetectorTypeFace
                                              context:nil options:opts];
    NSArray* features = [detector featuresInImage:ciimage];
    //  标出脸部,眼睛和嘴:
    NSInteger i = 0;
    for (CIFaceFeature *faceFeature in features){
        // 标出脸部
        CGFloat faceWidth = faceFeature.bounds.size.width;
        UILabel* faceView = [[UILabel  alloc] initWithFrame:faceFeature.bounds];
        
        faceView.layer.borderWidth = 1;
        faceView.layer.borderColor = [[UIColor redColor] CGColor];
        faceView.text = @(++i).stringValue;
        faceView.textAlignment = NSTextAlignmentCenter;
        
        [testImageView  addSubview:faceView];
        // 标出左眼
        if(faceFeature.hasLeftEyePosition) {
            UIView* leftEyeView = [[UIView  alloc] initWithFrame:
                                   CGRectMake(faceFeature.leftEyePosition.x-faceWidth*0.15,
                                              faceFeature.leftEyePosition.y-faceWidth*0.15, faceWidth*0.3, faceWidth*0.3)];
            [leftEyeView setBackgroundColor:[[UIColor blueColor] colorWithAlphaComponent:0.3]];
            [leftEyeView setCenter:faceFeature.leftEyePosition];
            leftEyeView.layer.cornerRadius = faceWidth*0.15;
            [testImageView   addSubview:leftEyeView];
        }
        // 标出右眼
        if(faceFeature.hasRightEyePosition) {
            UIView* leftEye = [[UIView  alloc] initWithFrame:
                               CGRectMake(faceFeature.rightEyePosition.x-faceWidth*0.15,
                                          faceFeature.rightEyePosition.y-faceWidth*0.15, faceWidth*0.3, faceWidth*0.3)];
            [leftEye setBackgroundColor:[[UIColor blueColor] colorWithAlphaComponent:0.3]];
            [leftEye setCenter:faceFeature.rightEyePosition];
            leftEye.layer.cornerRadius = faceWidth*0.15;
            [testImageView   addSubview:leftEye];
        }
        // 标出嘴部
        if(faceFeature.hasMouthPosition) {
            UIView* mouth = [[UIView  alloc] initWithFrame:
                             CGRectMake(faceFeature.mouthPosition.x-faceWidth*0.2,
                                        
                                       image.size.height - faceFeature.mouthPosition.y,
                                        faceWidth*0.4,
                                        faceWidth*0.4)];
            [mouth setBackgroundColor:[[UIColor greenColor] colorWithAlphaComponent:0.3]];
           // [mouth setCenter:faceFeature.mouthPosition];
            mouth.layer.cornerRadius = faceWidth*0.2;
            [testImageView addSubview:mouth];
        }
        
    }
    
    
}

+ (UIImage *)image:(UIImage *)image rotation:(UIImageOrientation)orientation
{
    long double rotate = 0.0;
    CGRect rect;
    float translateX = 0;
    float translateY = 0;
    float scaleX = 1.0;
    float scaleY = 1.0;
    
    switch (orientation) {
        case UIImageOrientationLeft:
            rotate = M_PI_2;
            rect = CGRectMake(0, 0, image.size.height, image.size.width);
            translateX = 0;
            translateY = -rect.size.width;
            scaleY = rect.size.width/rect.size.height;
            scaleX = rect.size.height/rect.size.width;
            break;
        case UIImageOrientationRight:
            rotate = 3 * M_PI_2;
            rect = CGRectMake(0, 0, image.size.height, image.size.width);
            translateX = -rect.size.height;
            translateY = 0;
            scaleY = rect.size.width/rect.size.height;
            scaleX = rect.size.height/rect.size.width;
            break;
        case UIImageOrientationDown:
            rotate = M_PI;
            rect = CGRectMake(0, 0, image.size.width, image.size.height);
            translateX = -rect.size.width;
            translateY = -rect.size.height;
            break;
        default:
            rotate = 0.0;
            rect = CGRectMake(0, 0, image.size.width, image.size.height);
            translateX = 0;
            translateY = 0;
            break;
    }
    
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    //做CTM变换
    CGContextTranslateCTM(context, 0.0, rect.size.height);
    CGContextScaleCTM(context, 1.0, -1.0);
    CGContextRotateCTM(context, rotate);
    CGContextTranslateCTM(context, translateX, translateY);
    
    CGContextScaleCTM(context, scaleX, scaleY);
    //绘制图片
    CGContextDrawImage(context, CGRectMake(0, 0, rect.size.width, rect.size.height), image.CGImage);
    
    UIImage *newPic = UIGraphicsGetImageFromCurrentImageContext();
    
    return newPic;
}


- (void)faceDetecotr2{
    
    UIImage *ui_image = [UIImage imageNamed:@"img3"];
    self.view_.faceImageView.contentMode = UIViewContentModeTopLeft;
    self.view_.faceImageView.image = ui_image;
    CIImage *image = [CIImage imageWithCGImage:ui_image.CGImage];
    NSDictionary  *opts = [NSDictionary dictionaryWithObject:CIDetectorAccuracyHigh forKey: CIDetectorAccuracy];
    CIDetector* detector = [CIDetector detectorOfType:CIDetectorTypeFace context:nil options:opts];
    
    //得到面部数据
    NSArray* features = [detector featuresInImage:image];
    NSInteger i = 0;
    for (CIFaceFeature *f in features)
    {
        CGRect aRect = f.bounds;
        NSLog(@"%f, %f, %f, %f", aRect.origin.x, aRect.origin.y, aRect.size.width, aRect.size.height);
        
        // 标出脸部
        CGFloat faceWidth = f.bounds.size.width;
        UILabel* faceView = [[UILabel  alloc] initWithFrame:f.bounds];
        faceView.layer.borderWidth = 1;
        faceView.layer.borderColor = [[UIColor redColor] CGColor];
        faceView.text = @(++i).stringValue;
        faceView.textAlignment = NSTextAlignmentCenter;
        [self.view_.faceImageView addSubview:faceView];
        
        //眼睛和嘴的位置
        if(f.hasLeftEyePosition) {
            NSLog(@"Left eye %g %g\n", f.leftEyePosition.x, f.leftEyePosition.y);
            //添加一个标记
            
            UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(f.leftEyePosition.x,ui_image.size.height-f.leftEyePosition.y,10, 10)];
            label.text = @"左";
            label.textColor = [UIColor redColor];
            [self.view_.faceImageView addSubview:label];
        }
        if(f.hasRightEyePosition) {
            NSLog(@"Right eye %g %g\n", f.rightEyePosition.x, f.rightEyePosition.y);
            //添加一个标记
            UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(f.rightEyePosition.x,ui_image.size.height-f.rightEyePosition.y,10, 10)];
            label.text = @"右";
            label.textColor = [UIColor redColor];
            [self.view_.faceImageView addSubview:label];
        }
        if(f.hasMouthPosition)
        {
            NSLog(@"Mouth %g %g\n", f.mouthPosition.x, f.mouthPosition.y);
            //添加一个标记
            UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(f.mouthPosition.x,ui_image.size.height-f.mouthPosition.y,20, 20)];
            label.text = [@"嘴:" stringByAppendingString:@(++i).stringValue];
            label.textColor = [UIColor redColor];
            [self.view_.faceImageView addSubview:label];
        }
        if (f.hasSmile) {
            NSLog(@"笑了");
        }
        if (f.hasFaceAngle) {
            NSLog(@"FaceAngle %f ", f.faceAngle );
        }
    }
}


- (void)faceDetector3{
   
    UIImage *image = [UIImage imageNamed:@"face1"];
    self.view_.faceImageView.image = image;
    self.view_.faceImageView.contentMode = UIViewContentModeCenter;
    self.view_.resultImageView.contentMode = UIViewContentModeCenter;
    UIImage *faceImage = [self cropFaceImageWithImage:image edgeInsets:UIEdgeInsetsMake(-20, -20, -20, -20)];
    self.view_.resultImageView.image = faceImage;
}

- (UIImage *)cropFaceImageWithImage:(UIImage *)image edgeInsets:(UIEdgeInsets)edgeInsets{
    CIImage *ci_image = [CIImage imageWithCGImage:image.CGImage];
    NSDictionary *options = @{CIDetectorAccuracy: CIDetectorAccuracyHigh};
    CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeFace context:nil options:options];
    NSArray *feactures = [detector featuresInImage:ci_image];
    
    
    for (CIFaceFeature *feacture in feactures) {
        
#if 0//测试位置
        {
            UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(rect.origin.x, image.size.height - (rect.size.height + rect.origin.y), rect.size.width, rect.size.height)];
            label.frame = rect;
            LayerCornerRadius_borderWidth_borderColor(label.layer, 0, 3, [UIColor redColor]);
            [self.view_.faceImageView addSubview:label];
            
            //眼睛和嘴的位置
            if(feacture.hasLeftEyePosition) {
                NSLog(@"Left eye %g %g\n", feacture.leftEyePosition.x, feacture.leftEyePosition.y);
                //添加一个标记
                
                UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(feacture.leftEyePosition.x,image.size.height-feacture.leftEyePosition.y,10, 10)];
                label.text = @"左";
                label.textColor = [UIColor redColor];
                [self.view_.faceImageView addSubview:label];
            }
            if(feacture.hasRightEyePosition) {
                NSLog(@"Right eye %g %g\n", feacture.rightEyePosition.x, feacture.rightEyePosition.y);
                //添加一个标记
                UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(feacture.rightEyePosition.x,image.size.height-feacture.rightEyePosition.y,10, 10)];
                label.text = @"右";
                label.textColor = [UIColor redColor];
                [self.view_.faceImageView addSubview:label];
            }
            if(feacture.hasMouthPosition)
            {
                NSLog(@"Mouth %g %g\n", feacture.mouthPosition.x, feacture.mouthPosition.y);
                //添加一个标记
                UILabel *label = [[UILabel alloc]initWithFrame:CGRectMake(feacture.mouthPosition.x,image.size.height-feacture.mouthPosition.y,20, 20)];
                label.text = @"嘴:";
                label.textColor = [UIColor redColor];
                [self.view_.faceImageView addSubview:label];
            }
            
        }
#endif
        
        CGRect newBounds = feacture.bounds;
        //y轴坐标转换
        newBounds.origin.y = image.size.height - feacture.bounds.origin.y - feacture.bounds.size.height;
        newBounds = UIEdgeInsetsInsetRect(newBounds, edgeInsets);
        CGImageRef subImageRef = CGImageCreateWithImageInRect(image.CGImage, newBounds);
        UIImage *image = [UIImage imageWithCGImage:subImageRef];
        return image;
    }
    return nil;

}
- (UIImage *)cropFaceImageWithImage:(UIImage *)image{
    
   return [self cropFaceImageWithImage:image edgeInsets:UIEdgeInsetsZero];
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
