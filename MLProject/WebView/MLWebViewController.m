//
//  MLWebViewController.m
//  MLProject
//
//  Created by apple on 16/5/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLWebViewController.h"
#import <JavaScriptCore/JavaScriptCore.h>
#import "MLJSMaker.h"
@interface MLWebViewController ()<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (nonatomic, strong) JSContext *jsContext;
@end

@implementation MLWebViewController

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
    [self initWebView];
    [self createMethodInOC];
    
}
- (void)createMethodInOC
{
    
    //  // 一个JSContext对象，就类似于Js中的window，只需要创建一次即可。
    self.jsContext = [[JSContext alloc] init];
    //
    //  // jscontext可以直接执行JS代码。
    NSArray *scriptStrings = @[@"var num = 10",
                               @"var squareFunc = function(value) { return value * value }",
                               ];
    for (NSString *str in scriptStrings) {
        [self.jsContext evaluateScript:str];
    }
    
    //  // 计算正方形的面积
    JSValue *square = [self.jsContext evaluateScript:@"squareFunc(num)"];
    
    //  // 也可以通过下标的方式获取到方法
    JSValue *squareFunc = self.jsContext[@"squareFunc"];
    JSValue *value = [squareFunc callWithArguments:@[@"20"]];
    NSLog(@"%@", square.toNumber);
    NSLog(@"%@", value.toNumber);
}
- (void)initWebView
{
     self.webView.delegate = self;
    _webView.scalesPageToFit = YES;
    NSURL *url = [[NSBundle mainBundle] URLForResource:@"huangyibiaoTest" withExtension:@"html"];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [_webView loadRequest:request];
    _webView.delegate = self;
    
}
#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}
#pragma mark - ========= WebView =========
//- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType
//{
//    return YES;
//}
- (void)webViewDidStartLoad:(UIWebView *)webView
{
    
}
- (void)webViewDidFinishLoad:(UIWebView *)webView
{
    
//    [self alertMessage];
   // [self callJSFuncByName];
//    [self callJSFuncByEvaluatinJSWithjsContext];
   // [self JSAndOCCallMutually];
   
   // [self jsCalliOSWithBlock];
    [self jsCalliOSWithMethod];
    //[self JSAndOCCallMutually];
}


#pragma mark - ========= finishLoad =========
- (void)getInnerHtml
{
    NSString *jsToGetHTMLSource = @"document.getElementsByTagName('html')[0].innerHTML";
    
    NSString *HTMLSource = [self.webView stringByEvaluatingJavaScriptFromString:jsToGetHTMLSource];
    
    NSLog(@"%@",HTMLSource);

}

- (void)alertMessage
{
    JSContext *context = [self.webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
 
    context = [self.webView valueForKeyPath:M_JSEXCUTE(documentView.webView.mainFrame.javaScriptContext)];
    NSString *alert = @"alert('test js OC')";
    [context evaluateScript:alert];
}
- (void)callJSFuncByName
{
    self.jsContext = [self.webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
    
    JSValue *jsStringFunc = self.jsContext[@"sayHahaFunc"];
    JSValue *jsStringResult = [jsStringFunc callWithArguments:@[@"callJSFuncByName"]];
    NSLog(@"%@", jsStringResult.toString);
    
   
}
- (void)callJSFuncByEvaluatinJSWithjsContext
{
     [self.jsContext evaluateScript:@"sayHahaFunc('callJSFuncByEvaluatinJSWithjsContext')"];
}
- (void)callJSFuncByEvaluatingJSAtWebView
{
     NSString *evaString = [self.webView stringByEvaluatingJavaScriptFromString:@"sayHahaFunc('callJSFuncByEvaluatingJSAtWebView')"];
}
- (void)jsCalliOSWithBlock
{
    JSContext *context = [self.webView valueForKeyPath:M_JSEXCUTE(documentView.webView.mainFrame.javaScriptContext)];
    context[@"block"] = ^(){
        NSArray *args = [JSContext currentArguments];
        for (id obj in args) {
            NSLog(@"%@",obj);
        }
    };
    NSString *jsBlock = @"block('param1', 'param2')";
    [context evaluateScript:jsBlock];
    [self.webView stringByEvaluatingJavaScriptFromString:jsBlock];
}
- (void)jsCalliOSWithMethod
{
     JSContext *context = [self.webView valueForKeyPath:M_JSEXCUTE(documentView.webView.mainFrame.javaScriptContext)];
    
    HYBJsObjCModel *model  = [[HYBJsObjCModel alloc] init];
    context[@"OCModelhaha"] = model;
    [context evaluateScript:@"OCModelhaha.callMethodWithNoParam()"];
    [context evaluateScript:@"OCModelhaha.jsCallObjcAndObjcCallJsWithDict({'haha':'gaga'})"];
}

- (void)JSAndOCCallMutually
{
    JSContext *context = [self.webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
    
    // 通过模型调用方法，这种方式更好些。
    HYBJsObjCModel *model  = [[HYBJsObjCModel alloc] init];
    context[@"OCModelhaha"] = model;
   
    
    model.jsContext = context;
    model.webView = self.webView;
    context.exceptionHandler = ^(JSContext *context, JSValue *exceptionValue) {
        context.exception = exceptionValue;
        NSLog(@"异常信息：%@", exceptionValue);
    };
    
    
}
- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error
{
    
}
#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========




@end
