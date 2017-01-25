//
//  NetworkCtl.m
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MLNetwork.h"
#import <AFNetworking/AFNetworking.h>
#import "NSDictionary+ML_Tools.h"
#import "UIImage+FX.h"
#import <MJExtension/MJExtension.h>
#import "BondTool+Secure.h"
#import "NSDate+ML_Tools.h"
#import "NSString+Hashing.h"
//#import "UserInfoManager.h"
#import "MBProgressHUD+Loading.h"
#import "NSDictionary+ML_Tools.h"
#import "DZNEmptyDataSeparator.h"
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
#import <Reachability/Reachability.h>
#import "MLNetwork+StatusCode.h"
#import "UIScrollView+Refresh.h"
NSString *const kBondgoodteacher = @"bondgoodteacher";
@implementation MLNetworkMessageSender
MJCodingImplementation
@end
@interface MLURLConfig()
@property (nonatomic, copy, readwrite) NSString *urlString;
@end
@implementation MLURLConfig
MJCodingImplementation



- (NSString *)urlString
{
    
    if (self.domainNameString) {
        if (![self.domainNameString hasPrefix:@"http://"]) {
            self.domainNameString = [NSString stringWithFormat:@"http://%@",self.domainNameString != nil ? self.domainNameString:@""];
        }
    }
    
    
    NSString *urlString = [NSString stringWithFormat:@"%@%@%@",
                           self.domainNameString ? :@"",
                           self.portString ? :@"",
                           self.virtualDirectoryString ? :@""];
    return urlString;
}

@end

@implementation MLParamPackage
MJCodingImplementation
@end




@implementation MLRequestParam
MJCodingImplementation
@end
@implementation MLNetworkHudManager

@end

@interface MLNetwork()
@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;
@end

@implementation MLNetwork
- (instancetype)init{
    self = [super init];
    if (self) {
        self.messageSender.isCheckNetworkState = YES;
    }
    return self;
}

+ (instancetype)networkCtl{
    
    MLNetwork *networkCtl = [[MLNetwork alloc] init];
    [[MLNetwork networkingsIsRunning] addObject:networkCtl];
    
    return networkCtl;
    
}
+ (NSMutableArray <MLNetwork *> *)networkingsIsRunning
{
    if (!objc_getAssociatedObject(self, @selector(networkingsIsRunning))) {
        NSMutableArray *networkings = [[NSMutableArray alloc] init];
        objc_setAssociatedObject(self, @selector(networkingsIsRunning), networkings, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return objc_getAssociatedObject(self, @selector(networkingsIsRunning));
}

#pragma mark - ========= Get =========
+ (instancetype)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
  return [self getWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
}

+ (instancetype)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    MLNetwork *networkCtl = [MLNetwork networkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.paramPackage, networkCtl.requestParam, networkCtl.hudManager, networkCtl.messageSender);
    }
    if (networkCtl.messageSender.isCheckNetworkState) {
        if (![Reachability reachabilityForInternetConnection].isReachable) {
          //  [MBProgressHUD showHudOnKeywindowWithTitle:kToast.noConnection];
            networkCtl.hudManager.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNoConnetion;
            [networkCtl.hudManager.scrollViewOfShowingData closeMJRefreshHeaderAndFooter];
            dispatch_async(dispatch_get_main_queue(), ^{
                [networkCtl.hudManager.scrollViewOfShowingData reloadEmptyDataSet];
            });
             [[MLNetwork networkingsIsRunning] removeObject:networkCtl];
            return networkCtl;
        }
    }
   
    
    [networkCtl getRequestWithSuccess:success failure:failure completion:completion];
    return networkCtl;
}
#pragma mark - ========= Post =========
+ (instancetype)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
    
   return [self postWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
    
    
    
}

+ (instancetype)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    MLNetwork *networkCtl = [MLNetwork networkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.paramPackage, networkCtl.requestParam, networkCtl.hudManager, networkCtl.messageSender);
    }
    if (networkCtl.messageSender.timeoutOfNetwork) {
        networkCtl.sessionManager.requestSerializer.timeoutInterval = networkCtl.messageSender.timeoutOfNetwork;
    }

    if (networkCtl.messageSender.isCheckNetworkState) {
        if (![Reachability reachabilityForInternetConnection].isReachable) {
           // [MBProgressHUD showHudOnKeywindowWithTitle:kToast.noConnection];
            networkCtl.hudManager.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNoConnetion;
            [networkCtl.hudManager.scrollViewOfShowingData closeMJRefreshHeaderAndFooter];
            dispatch_async(dispatch_get_main_queue(), ^{
                  [networkCtl.hudManager.scrollViewOfShowingData reloadEmptyDataSet];
            });
           [[MLNetwork networkingsIsRunning] removeObject:networkCtl];
            
            return networkCtl;
        }
    }
    
    if (networkCtl.messageSender.images.count > 0) {
        [networkCtl postRequestHaveImageWithSuccess:success failure:failure completion:completion];
    }
    else
    {
        [networkCtl postRequestWithSuccess:success failure:failure completion:completion];
    }
      return networkCtl;
}


#pragma mark - ========= get请求方法公用入口 =========
- (void)getRequestWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
     
    NSString *getRequestURlString = [self handleGetParam];
    [self.sessionManager GET:getRequestURlString parameters:nil success:^(NSURLSessionDataTask *task, id responseObject) {
        
        [self handleSuccess:success task:task responseObject:responseObject completion:completion];
        
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@", error);
        [self handleFailure:failure task:task error:error completion:completion];
        
        
    }];
    
    
}
#pragma mark - ========= post 方法通用入口 =========
- (void)postRequestWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
    
   
    [self showHUDAccrodingFlag:[MLNetwork isShouldShowHUDWhenBeginRequest]];
    [self handlePostParam];
    
    [self.sessionManager POST:self.urlConfig.urlString
       parameters:[self.requestParam dictionaryOfPropertyKeyValues]
          success:^(NSURLSessionDataTask *task, id responseObject) {
              
#warning 后台返回为空判断
              if ([responseObject length] < 1) {
                  NSError *error = nil;
                  
                  [self handleFailure:failure task:task error:error completion:nil];
                  
              }else
                  
              {
                  [self handleSuccess:success task:task responseObject:responseObject completion:completion];
              }
              
          
          } failure:^(NSURLSessionDataTask *task, NSError *error) {
              NSLog(@"%@", error);
              
              [self handleFailure:failure task:task error:error completion:nil];
              
          }];
    
    
    
    
}
- (void)postRequestHaveImageWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
    
  
    [self showHUDAccrodingFlag:[MLNetwork isShouldShowHUDWhenBeginRequest]];
    [self handlePostParam];
    
    [self.sessionManager POST:self.urlConfig.urlString parameters:[self.requestParam dictionaryOfPropertyKeyValues] constructingBodyWithBlock:^(id<AFMultipartFormData>  _Nonnull formData) {
        NSArray *images = [self.messageSender.images copy];
        if (images) {
            for (NSInteger i = 0; i < images.count; i ++) {
                UIImage *image = images[i];
                if (MAX(image.size.width, image.size.height) > 1000) {
                    image = [images[i] imageScaledToFitSize:CGSizeMake(1000, 1000)];
                }
                NSData *data = UIImageJPEGRepresentation(image, 0.1);
                [formData appendPartWithFileData:data name:[@"pic" stringByAppendingFormat:@"%ld", i] fileName:[@"pic" stringByAppendingFormat:@"%ld.jpg", i]  mimeType:@"image/jpeg"];
            }
            
        }
        
        
    } success:^(NSURLSessionDataTask *task, id responseObject) {
        
        [self handleSuccess:success task:task responseObject:responseObject completion:completion];
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@", error);
        
        
        [self handleFailure:failure task:task error:error completion:nil];
        
    }];
    
    
}


#pragma mark - ========= Handle Network Opertaion =========
- (NSString *)handleGetParam
{
    
    NSDictionary *propertyDic = [self.requestParam dictionaryOfPropertyKeyValues];
    
    
    NSString *getRequestURlString;
    if (propertyDic.count > 0) {
        getRequestURlString = [NSString stringWithFormat:@"%@?%@", self.urlConfig.urlString, [propertyDic urlParameterString]];
    }
    else
    {
        getRequestURlString = self.urlConfig.urlString;
    }
    
    NSLog(@"%@", self.urlConfig.urlString);
    NSLog(@"%@", propertyDic);
    return getRequestURlString;
}
- (void)handlePostParam
{
    
    
    NSDictionary *paramPackageDic =  [self.paramPackage dictionaryOfPropertyKeyValues];
    if (paramPackageDic.count) {
        self.requestParam.jsonData = [paramPackageDic mj_JSONString];
        
    }else{
        self.requestParam.jsonData = @"";
    }
    
    //默认参数
//    if (self.requestParam.sessionId == nil) {
//        self.requestParam.sessionId = [UserInfoManager shareManager].sessionId ? : @"";
//    }
//    
    self.requestParam.imei = [BondTool deviceId];
    self.requestParam.version =  self.requestParam.version ? : [BondTool internalVersion];
    self.requestParam.clientType = [BondTool clientType];
    self.requestParam.timestamp = [NSDate timeStringWithTimestamp:@([NSDate date].timeIntervalSince1970) dateFormat:@"yyyyMMddHHmmss"];
    
    //Md5鉴权参数
    NSString *authorizationOringinalString = [NSString stringWithFormat:@"%@%@%@%@%@%@%@",
                                              kBondgoodteacher,
                                              self.requestParam.sessionId,
                                              self.requestParam.imei,
                                              self.requestParam.version,
                                              self.requestParam.clientType,
                                              self.requestParam.timestamp,
                                              self.requestParam.jsonData];
    
    self.requestParam.authorization =
    [authorizationOringinalString MD5Hash].lowercaseString;
    
    
    
#if DEBUG
    NSDictionary *propertyDic = [self.requestParam dictionaryOfPropertyKeyValues];
    
    NSData *data = [[self.paramPackage dictionaryOfPropertyKeyValues] mj_JSONData];
    
    NSJSONSerialization *json = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
    
    NSString *getString =  [NSString stringWithFormat:@"%@?%@", self.urlConfig.urlString, [propertyDic urlParameterString]];
    NSLog(@"请求接口:%@\n\nURLString: %@\npropertyDic:%@ \njson:\n%@ \ngetURL:\n%@",self.requestID, self.urlConfig.urlString, propertyDic, json, getString);
    
    
#endif
}

- (void)handleSuccess:(AFNSuccess)success task:(NSURLSessionDataTask *)task responseObject:(id)responseObject completion:(void (^)(void))completion
{
    
//    if (self.hudManager.showLoadingHudFlag) {
//        
//        [MBProgressHUD removeProgressHudOnKeywindow];
//        
//    }
    if ([MLNetwork isShouldHideHudWhenFinishReuqest]) {
       
    }
    

    
    NSJSONSerialization *JSONObject = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableContainers error:nil];
    NSLog(@"请求接口:%@\n%@\n\n 请求接口:%@ JSONString:\n\n%@\n\n", self.requestID, JSONObject, self.requestID, [JSONObject mj_JSONString]);
    
    
    id modelMaster = [NSClassFromString(self.messageSender.restulModelClassName) mj_objectWithKeyValues:JSONObject];
    
    
    //状态码
    id statusCodeObject = [JSONObject valueForKey:@"resCode"];
    
    NSInteger statusCode = statusCodeObject && ![statusCodeObject isKindOfClass:[NSNull class]] ? [statusCodeObject integerValue] : -1;
    
    NSString *errorMsg = [JSONObject valueForKey:@"resDesc"];
#if MLDebugFlag
    if (!(statusCode == 0)) {
        if (errorMsg && ![errorMsg isKindOfClass:[NSNull class]]) {
            
            if (errorMsg.length > 0 || ![errorMsg containsString:@"成功"] ) {
                
                dispatch_async(dispatch_get_main_queue(), ^{
                    [MBProgressHUD showHudOnKeywindowWithTitle:errorMsg];
                    
                });
                
            }
            
        }
        
    }
#endif

    
    
    

    success(task, responseObject, JSONObject, modelMaster, statusCode, self.urlConfig, self.requestParam, self.requestID, self.paramPackage);
    
    if (completion) {
        completion();
    }
    
    if (statusCode == 0) {
        if (self.hudManager.toastOfSuccess) {
            [MBProgressHUD showHudOnKeywindowWithTitle:self.hudManager.toastOfSuccess];
        }
    }
    if ([MLNetwork toastStringWithCode:statusCodeObject]) {
        [MBProgressHUD showHudOnKeywindowWithTitle:[MLNetwork toastStringWithCode:statusCodeObject]];
    }
    if (statusCode == 10003) {
       // [ProjectManager pushStoryboardControllerWithNibName:kStoryboardNameOfLogin storyboardID:@"BGTLoginViewController" title:@"登录"];
    }
    [self.hudManager.scrollViewOfShowingData closeMJRefreshHeaderAndFooter];
    
    [[MLNetwork networkingsIsRunning] removeObject:self];
    [self setHelperPropertyNil];
    
    
    
}

- (void)handleFailure:(AFNFailure)failure task:(NSURLSessionDataTask *)task error:(NSError *)error completion:(void (^)(void))completion
{
//    if (self.hudManager.showLoadingHudFlag) {
//        
//        [MBProgressHUD removeProgressHudOnKeywindow];
//        
//    }
    if ([MLNetwork isShouldHideHudWhenFinishReuqest]) {
        //[MBProgressHUD removeProgressHudOnKeywindow];
    }
    
    failure(task, error, self.urlConfig, self.requestParam, self.requestID, self.paramPackage);
    
    //处理错误显示
       // [MBProgressHUD showHudOnKeywindowWithTitle:self.hudManager.toastOfNetworkError ? : kToast.networkError];
   
    if (self.hudManager.scrollViewOfShowingData) {
        self.hudManager.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNetworkError;
        [self.hudManager.scrollViewOfShowingData reloadEmptyDataSet];
        [self.hudManager.scrollViewOfShowingData closeMJRefreshHeaderAndFooter];
    }
    
    [[MLNetwork networkingsIsRunning] removeObject:self];
    [self setHelperPropertyNil];
    
}
#pragma mark - ========= Check Network =========
- (void)operationOfNotConnection
{
    self.hudManager.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNetworkError;
    [self.hudManager.scrollViewOfShowingData reloadEmptyDataSet];
}
#pragma mark - ========= Network Helper Methods =========

- (void)setHelperPropertyNil
{
    [self.messageSender setObjectPropertyAllKeyValueNil];
    self.requestID = nil;
    [self.urlConfig setObjectPropertyAllKeyValueNil];
    [self.requestParam setObjectPropertyAllKeyValueNil];
    [self.paramPackage setObjectPropertyAllKeyValueNil];
    
    
    
}
#pragma mark - ========= HUD =========
+ (BOOL)isShouldShowHUDWhenBeginRequest{
    
    NSUInteger showHudFlagCount = 0;
    for (MLNetwork *network in [self networkingsIsRunning]) {
        if (network.hudManager.showLoadingHudFlag) {
            showHudFlagCount++;
            if ([MBProgressHUD HUDForView:[UIApplication sharedApplication].keyWindow]) {
                return NO;
            }
        }
    }
    if (showHudFlagCount > 0) {
        return YES;
    }else{
        return NO;
    }
    
}

+ (BOOL)isShouldHideHudWhenFinishReuqest
{
    NSUInteger showHudFlagCount = 0;
    for (MLNetwork *network in [self networkingsIsRunning]) {
        if (network.hudManager.showLoadingHudFlag) {
            showHudFlagCount++;
        }
    }
    if (showHudFlagCount > 1 || showHudFlagCount == 0) {
        return NO;
    }
    return YES;
    
}

- (void)showHUDAccrodingFlag:(BOOL)flag
{
    if (flag) {
        if (self.hudManager.scrollViewOfShowingData.loadType != UIScrollViewLoadTypeShowHUD) {
            return;
        }
        
        if (self.hudManager.loadingHudType == NetworkHudTypeNative) {
            [MBProgressHUD showNativeLoadingHudOnKeywindow];
        }else
        {
         
                [MBProgressHUD showLoadingHudOnView:self.hudManager.viewOfShowingHud];
            
           
        }
    }
    
}





#pragma mark - ========= Setter & Getter =========
- (AFHTTPSessionManager *)sessionManager
{
    if (_sessionManager == nil) {
        _sessionManager = [AFHTTPSessionManager manager];
       
        _sessionManager.requestSerializer = [AFHTTPRequestSerializer serializer];
            _sessionManager.requestSerializer.timeoutInterval = 10;
        _sessionManager.responseSerializer = [AFHTTPResponseSerializer serializer];
    }
    return _sessionManager;
}


- (MLURLConfig *)urlConfig
{
    if (_urlConfig == nil) {
        
        _urlConfig = [[MLURLConfig alloc] init];
    }
    return _urlConfig;
}
- (MLRequestParam *)requestParam
{
    if (_requestParam == nil) {
        
        _requestParam = [[MLRequestParam alloc] init];
    }
    return _requestParam;
}
- (MLParamPackage *)paramPackage
{
    if (_paramPackage == nil) {
        
        _paramPackage = [[MLParamPackage alloc] init];
    }
    return _paramPackage;
}
- (MLNetworkHudManager *)hudManager
{
    if (_hudManager == nil) {
        _hudManager = [[MLNetworkHudManager alloc] init];
    }
    return _hudManager;
}
- (MLNetworkMessageSender *)messageSender
{
    if (_messageSender == nil) {
        
        _messageSender = [[MLNetworkMessageSender alloc] init];
    }
    return _messageSender;
}


@end
