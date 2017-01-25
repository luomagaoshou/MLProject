//
//  MLWebViewController.h
//  MLProject
//
//  Created by apple on 16/5/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <AFNetworking/UIImageView+AFNetworking.h>
#import <MJExtension/MJExtension.h>
#import "XKPicPreViewViewController.h"
@protocol JavaScriptObjectiveCDelegate <JSExport>
- (void)callMethodWithNoParam;
// JS调用此方法来调用OC的系统相册方法
- (void)callSystemCamera;
// 在JS中调用时，函数名应该为showAlertMsg(arg1, arg2)
// 这里是只两个参数的。
- (void)showAlert:(NSString *)title msg:(NSString *)msg;
// 通过JSON传过来
- (void)callWithDict:(NSDictionary *)params;
// JS调用Oc，然后在OC中通过调用JS方法来传值给JS。
- (void)jsCallObjcAndObjcCallJsWithDict:(NSDictionary *)params;

@end

// 此模型用于注入JS的模型，这样就可以通过模型来调用方法。
@interface HYBJsObjCModel : NSObject <JavaScriptObjectiveCDelegate>

@property (nonatomic, weak) JSContext *jsContext;
@property (nonatomic, weak) UIWebView *webView;

@end

@implementation HYBJsObjCModel
- (void)callMethodWithNoParam
{
    NSLog(@"%@", NSStringFromSelector(_cmd));
}
- (void)callWithDict:(NSDictionary *)params {
    NSLog(@"Js调用了OC的方法，参数为：%@", params);
}

// Js调用了callSystemCamera
- (void)callSystemCamera {
    NSLog(@"JS调用了OC的方法，调起系统相册");
    
    // JS调用后OC后，又通过OC调用JS，但是这个是没有传参数的
    JSValue *jsFunc = self.jsContext[@"jsFunc"];
    [jsFunc callWithArguments:nil];
}

- (void)jsCallObjcAndObjcCallJsWithDict:(NSDictionary *)params {
    NSLog(@"jsCallObjcAndObjcCallJsWithDict was called, params is %@", params);
    
    // 调用JS的方法
    JSValue *jsParamFunc = self.jsContext[@"jsParamFunc"];
    [jsParamFunc callWithArguments:@[@{@"age": @10, @"name": @"lili", @"height": @158}]];
}

- (void)showAlert:(NSString *)title msg:(NSString *)msg {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertView *a = [[UIAlertView alloc] initWithTitle:title message:msg delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles:nil, nil];
        [a show];
    });
}


@end



//  ImageDetailCon.h
//
//

#import <UIKit/UIKit.h>
@interface ImageDetailCon : UIViewController<UIScrollViewDelegate>    //需要使用 对应的 协议
@property(strong,nonatomic)NSURL *imageURL;//给外界的接口,外界传值给ImageDetailCon  *vc;,然后present出来即可
@end
//
//  ImageDetailCon.m
//


#import <UIImageView+AFNetworking.h>//使用afnetworking框架
@interface ImageDetailCon ()
{
    UIScrollView *scrollView;
    UIImageView *imageView;
}
@end

@implementation ImageDetailCon
- (void)viewDidLoad
{
    [super viewDidLoad];
    scrollView=[[UIScrollView alloc]initWithFrame:self.view.bounds];
    scrollView.maximumZoomScale=5.0;//图片的放大倍数
    scrollView.minimumZoomScale=1.0;//图片的最小倍率
    scrollView.contentSize=CGSizeMake(self.view.bounds.size.width*1.5, self.view.bounds.size.height*1.5);
    scrollView.delegate=self;
    imageView=[[UIImageView alloc]initWithFrame:self.view.bounds];
    [imageView setImageWithURL:self.imageURL placeholderImage:[UIImage imageNamed:@"Fav_Img_Download"]];
    [scrollView addSubview:imageView];
    [self.view addSubview:scrollView];
    imageView.userInteractionEnabled=YES;//注意:imageView默认是不可以交互,在这里设置为可以交互
    UITapGestureRecognizer *tap=[[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(tapImage:)];
    tap.numberOfTapsRequired=1;//单击
    tap.numberOfTouchesRequired=1;//单点触碰
    [imageView addGestureRecognizer:tap];
    UITapGestureRecognizer *doubleTap=[[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(doubleTap:)];
    doubleTap.numberOfTapsRequired=2;//避免单击与双击冲突
    [tap requireGestureRecognizerToFail:doubleTap];
    [imageView addGestureRecognizer:doubleTap];
    imageView.contentMode=UIViewContentModeScaleAspectFit;
    
}
-(UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView  //委托方法,必须设置  delegate
{
    return imageView;//要放大的视图
}

-(void)doubleTap:(id)sender
{
    scrollView.zoomScale=2.0;//双击放大到两倍
}
- (IBAction)tapImage:(id)sender
{
    [self dismissViewControllerAnimated:YES completion:nil];//单击图像,关闭图片详情(当前图片页面)
}
@end

@protocol MLWebModel <JSExport>

- (void)test;
- (void)testWithObj:(id)obj;
- (void)sendDic:(NSDictionary *)dic;
- (void)testWithDic:(NSDictionary *)dic;
- (void)imagePreview:(NSDictionary *)dic;
@end

@interface MLWebModel :NSObject<MLWebModel>
@end

@implementation MLWebModel

- (void)test{
    NSLog(@"%@--%@", self, NSStringFromSelector(_cmd));
}
- (void)testWithObj:(id)obj{
    
}
- (void)sendDic:(NSDictionary *)dic{
    NSLog(@"%@", dic);
}
- (void)imagePreview:(NSDictionary *)dic{
    XKPicPreViewViewController *ctl = [[XKPicPreViewViewController alloc] init];
    ctl.photos = dic[@"value"];
    ctl.tag = [dic[@"index"] integerValue];
    [[[[UIApplication sharedApplication] delegate] window].rootViewController presentViewController:ctl animated:YES completion:nil];
}
- (void)testWithDic:(NSDictionary *)dic{
    NSLog(@"%@--%@", self, NSStringFromSelector(_cmd));
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(64, 64, 200, 200)];
//    ImageDetailCon *ctl = [[ImageDetailCon alloc] init];
//    ctl.imageURL = [NSURL URLWithString:dic[@"imgUrl"]];
//    [[[[UIApplication sharedApplication] delegate] window].rootViewController presentViewController:ctl animated:YES completion:nil];
    
//    [imageView setImageWithURL:[NSURL URLWithString:dic[@"imgUrl"]] placeholderImage:[UIImage imageNamed:@"test"]];
//    [[[[UIApplication sharedApplication] delegate] window] addSubview:imageView];
    
    XKPicPreViewViewController *ctl = [[XKPicPreViewViewController alloc] init];
    ctl.photos = dic[@"imgUrls"];
    ctl.tag = [dic[@"index"] integerValue];
    [[[[UIApplication sharedApplication] delegate] window].rootViewController presentViewController:ctl animated:YES completion:nil];
}
@end
@interface MLWebViewController : UIViewController

@end
