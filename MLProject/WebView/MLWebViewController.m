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
#import <WebKit/WebKit.h>
@protocol HandleBySelf <JSExport>

- (void)sendDic:(NSDictionary *)dic;
@end


@interface MLWebViewController ()<UIWebViewDelegate, WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler, HandleBySelf>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (nonatomic, strong) WKWebView *wk_webView;
@property (nonatomic, strong) UIProgressView *progressView;
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
   // [self createMethodInOC];
    [self initWKWebView];
}
- (void)initWebView
{
    self.webView.delegate = self;
    _webView.scalesPageToFit = YES;
    NSURL *url = [[NSBundle mainBundle] URLForResource:@"huangyibiaoTest" withExtension:@"html"];
  //  url = [NSURL URLWithString:@"http://10.0.1.163:8080/study/studyReport.html"];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [_webView loadRequest:request];
    _webView.delegate = self;
    
}
- (void)initWKWebView{
    
#if 0
                    WKWebViewConfiguration *config = [[WKWebViewConfiguration alloc] init];
                    config.preferences.javaScriptEnabled = YES;
                    config.preferences.javaScriptCanOpenWindowsAutomatically = YES;
                    config.userContentController = [[WKUserContentController alloc] init];
                    [config.userContentController addScriptMessageHandler:self name:@"WebviewBridge"];
        
                    WKWebView *webView = [[WKWebView alloc] initWithFrame:self.view.bounds configuration:config];
                    webView.navigationDelegate = self;
                    webView.UIDelegate = self;
    
                    webView.userInteractionEnabled = YES;
                    webView.scrollView.showsVerticalScrollIndicator = NO;
                    webView.scrollView.showsHorizontalScrollIndicator = NO;
    [self.view addSubview:webView];
    self.wk_webView = webView;

   NSURL *url= [NSURL URLWithString:@"http://thlsshare.bondwebapp.com/select?student_id=19000208&class_id=3583F5C8-56B6-431F-8567-AE380D9868BF&classroom_id=5AA1B1FF-0679-472E-A905-195355C2394E"];
    NSURLRequest *request = [NSURLRequest requestWithURL:url];
    [self.wk_webView loadRequest:request];
    

#endif
    
    
   // dispatch_async(dispatch_get_main_queue(), ^{
    
        WKWebViewConfiguration *config = [WKWebViewConfiguration new];

        config.preferences = [[WKPreferences alloc] init];
//        config.preferences.minimumFontSize = 10;
        config.preferences.javaScriptEnabled = YES;
        config.preferences.javaScriptCanOpenWindowsAutomatically = YES;
        
        //config.processPool = [[WKProcessPool alloc] init];
        
        WKUserContentController *userContentController = [[WKUserContentController alloc] init];
        
        config.userContentController = userContentController;
        [config.userContentController addScriptMessageHandler:self name:@"AppleModel"];
        [config.userContentController addScriptMessageHandler:self name:@"WebviewBridge"];
       //Web对比 context[@"AppleModel"] = AppleModelInstacnce;
       
        //UIWebView由对象处理，wk用可以设置处理对象
        WKUserScript *userScript = [[WKUserScript alloc] initWithSource:
                                    @"function printImage() {\
                                    var imgs = document.getElementsByTagName(\"img\");\
                                    if(imgs.length) {\
                                    return imgs[0].src;\
                                    }\
                                    }" injectionTime:WKUserScriptInjectionTimeAtDocumentEnd forMainFrameOnly:YES];
        
        [config.userContentController addUserScript:userScript];
        
        
        
        self.wk_webView = [[WKWebView alloc] initWithFrame:CGRectMake(0, SCREEN_HEIGHT/2, SCREEN_WIDTH, SCREEN_HEIGHT/2) configuration:config];
        [self.view addSubview:self.wk_webView];
        self.wk_webView.UIDelegate = self;
        self.wk_webView.navigationDelegate = self;
        
        NSURL *url = [[NSBundle mainBundle] URLForResource:@"huangyibiaoTest" withExtension:@"html"];
     //   url = [NSURL URLWithString:@"http://10.0.1.163:8080/study/studyReport.html"];
      //  url = [NSURL URLWithString:@"http://10.0.1.137:8080/study/studyReport.html"];
     //   url= [NSURL URLWithString:@"http://thlsshare.bondwebapp.com/select?student_id=19000208&class_id=3583F5C8-56B6-431F-8567-AE380D9868BF&classroom_id=5AA1B1FF-0679-472E-A905-195355C2394E"];
        NSURLRequest *request = [NSURLRequest requestWithURL:url];
        [self.wk_webView loadRequest:request];
      
        
        
//        [self.webView addObserver:self
//                       forKeyPath:@"loading"
//                          options:NSKeyValueObservingOptionNew
//                          context:nil];
//        [self.webView addObserver:self
//                       forKeyPath:@"title"
//                          options:NSKeyValueObservingOptionNew
//                          context:nil];
//        [self.webView addObserver:self
//                       forKeyPath:@"estimatedProgress"
//                          options:NSKeyValueObservingOptionNew
                        // context:nil];
        
   // });
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

   id obj = [webView stringByEvaluatingJavaScriptFromString:@"printImageUrl()"];
  //  [self getInnerHtml];
//    [self alertMessage];
   // [self callJSFuncByName];
//    [self callJSFuncByEvaluatinJSWithjsContext];
   // [self JSAndOCCallMutually];
   
   // [self jsCalliOSWithBlock];
 //  [self jsCalliOSWithMethod];
    //[self JSAndOCCallMutually];
    
    [self jsOCImageViewInteraction];
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error
{
    
}
#pragma mark - ========= UIWebView FinishLoad =========
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

- (void)jsOCImageViewInteraction{
   
    //这里是js，主要目的实现对url的获取
    static  NSString * const jsGetImages =
    @"function getImages(){\
    var objs = document.getElementsByTagName(\"img\");\
    var imgScr = '';\
    for(var i=0;i<objs.length;i++){\
    imgScr = imgScr + objs[i].src + '+';\
    };\
    return imgScr;\
    };";
    
    static NSString *const functionString = @"var myClick = function(){\
    alert('papapagaga');\
    };";
    [self.webView stringByEvaluatingJavaScriptFromString:jsGetImages];//注入js方法
    [self.webView stringByEvaluatingJavaScriptFromString:functionString];
    NSString *urlResurlt = [self.webView stringByEvaluatingJavaScriptFromString:@"getImages()"];
    NSMutableArray *mUrlArray = [NSMutableArray arrayWithArray:[urlResurlt componentsSeparatedByString:@"+"]];
    if (mUrlArray.count >= 2) {
        [mUrlArray removeLastObject];
    }
    
    
#if 1
    //添加图片可点击js
    
    [self.webView stringByEvaluatingJavaScriptFromString:
     @"(function registerImageClickAction() {\
     \
     var imgs = document.getElementsByTagName('img');\
     var imgSrcs = [];\
     for (var i = 0; i < imgs.length; i++){\
         imgSrcs.push(imgs[i].src);\
     }\
     \
     for(var i = 0; i< imgs.length; i++) {\
         var img = imgs[i];\
         (function (index, src, imgSrcs) {\
             img.onclick = function () {\
     MLWebModelInstance.testWithDic({\"index\": index, \"imgUrl\": src, \"imgUrls\": imgSrcs});\
             }\
         })(i, img.src, imgSrcs);\
         img = null;\
     }\
     })();"];
#endif
    //注入
    //[self.webView stringByEvaluatingJavaScriptFromString:@"registerImageClickAction()"];
    
    
    self.jsContext = [self.webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
    MLWebModel *model = [[MLWebModel alloc] init];
   // self.jsContext[@"MLWebModelInstance"] = model;
    
    
    
   self.jsContext[@"WebviewBridge"] = model;
    self.jsContext[@"OChandler"] = self;
#if 0//block
    self.jsContext[@"MLAdd"] = ^ (NSInteger a, NSInteger b){
        NSLog(@"%ld", a + b);
        
        return @(a + b).stringValue;
    };
   id result = [self.jsContext evaluateScript:@"MLAdd(11, 13)"];
    
#endif
    
    
 
   
    
    
    
}

#pragma mark - ========= WKWebView Delegate =========
#pragma mark - WKNavigationDelegate 页面跳转
#pragma mark 在发送请求之前，决定是否跳转
- (void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void (^)(WKNavigationActionPolicy))decisionHandler {
    NSLog(@"%s",__FUNCTION__);
    /**
     *typedef NS_ENUM(NSInteger, WKNavigationActionPolicy) {
     WKNavigationActionPolicyCancel, // 取消
     WKNavigationActionPolicyAllow,  // 继续
     }
     */
    decisionHandler(WKNavigationActionPolicyAllow);
}

#pragma mark 身份验证
- (void)webView:(WKWebView *)webView didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition disposition, NSURLCredential *__nullable credential))completionHandler {
    NSLog(@"%s",__FUNCTION__);
    // 不要证书验证
    completionHandler(NSURLSessionAuthChallengeUseCredential, nil);
}

#pragma mark 在收到响应后，决定是否跳转
- (void)webView:(WKWebView *)webView decidePolicyForNavigationResponse:(WKNavigationResponse *)navigationResponse decisionHandler:(void (^)(WKNavigationResponsePolicy))decisionHandler {
    NSLog(@"%s",__FUNCTION__);
    decisionHandler(WKNavigationResponsePolicyAllow);
}

#pragma mark 接收到服务器跳转请求之后调用
- (void)webView:(WKWebView *)webView didReceiveServerRedirectForProvisionalNavigation:(null_unspecified WKNavigation *)navigation {
    NSLog(@"%s",__FUNCTION__);
}

#pragma mark WKNavigation导航错误
- (void)webView:(WKWebView *)webView didFailNavigation:(null_unspecified WKNavigation *)navigation withError:(NSError *)error {
    NSLog(@"%s",__FUNCTION__);
}

#pragma mark WKWebView终止
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)webView {
    NSLog(@"%s",__FUNCTION__);
}

#pragma mark - WKNavigationDelegate 页面加载
#pragma mark 页面开始加载时调用
- (void)webView:(WKWebView *)webView didStartProvisionalNavigation:(null_unspecified WKNavigation *)navigation {
    NSLog(@"%s",__FUNCTION__);
   
}

#pragma mark 当内容开始返回时调用
- (void)webView:(WKWebView *)webView didCommitNavigation:(null_unspecified WKNavigation *)navigation {
    NSLog(@"%s",__FUNCTION__);
}

#pragma mark 页面加载完成之后调用
- (void)webView:(WKWebView *)webView didFinishNavigation:(null_unspecified WKNavigation *)navigation {
    NSLog(@"%s",__FUNCTION__);
     [self getImgs];
    [webView evaluateJavaScript:@"printImage()" completionHandler:^(id _Nullable obj, NSError * _Nullable error) {
        
    }];
    [webView evaluateJavaScript:@"sayHahaFunc()" completionHandler:^(id _Nullable obj, NSError * _Nullable error) {
        
    }];
    [webView evaluateJavaScript:@"printImageUrl()" completionHandler:^(id _Nullable obj, NSError * _Nullable error) {
        
    }];
   
    
}
- (NSArray *)getImgs
{
    NSMutableArray *arrImgURL = [[NSMutableArray alloc] init];
    for (int i = 0; i < [self nodeCountOfTag:@"img"]; i++) {
        NSString *jsString = [NSString stringWithFormat:@"document.getElementsByTagName('img')[%d].src", i];
        [arrImgURL addObject:[self.webView stringByEvaluatingJavaScriptFromString:jsString]];
        [self.wk_webView evaluateJavaScript:jsString completionHandler:^(id _Nullable obj, NSError * _Nullable error) {
            
        }];
        
    }
    return arrImgURL;
}

/// 获取某个标签的结点个数
- (int)nodeCountOfTag:(NSString *)tag {
    NSString *jsString = [NSString stringWithFormat:@"document.getElementsByTagName('%@').length", tag];
    
    int len = [[self.webView stringByEvaluatingJavaScriptFromString:jsString] intValue];

    __block NSNumber *imageCount;
  
    [self.wk_webView evaluateJavaScript:jsString completionHandler:^(id _Nullable obj, NSError * _Nullable error) {
        imageCount = obj;
    }];


    
        return imageCount.intValue;
}

#pragma mark 页面加载失败时调用
- (void)webView:(WKWebView *)webView didFailProvisionalNavigation:(null_unspecified WKNavigation *)navigation withError:(NSError *)error {
    NSLog(@"%s",__FUNCTION__);
    NSLog(@"%@", error.localizedDescription);
}

- (void)userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message{
    NSString *name = message.name;
    if ([name isEqualToString:@"AppleModel"]) {
        NSLog(@"%@", message.body);
    }
}


#pragma mark - JSExport
- (void)sendDic:(NSDictionary *)dic{
    NSLog(@"%@", dic);
}
#pragma mark - ========= Event Methods =========
- (void)handleSenderEvent:(UIView *)sender
{
    
}
#pragma mark - ========= Setter & Getter =========




@end
