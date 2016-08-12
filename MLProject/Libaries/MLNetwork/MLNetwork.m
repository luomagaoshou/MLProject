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
//#import "BondTool+Secure.h"

#import "NSDate+ML_Tools.h"

#import "NSDictionary+ML_Tools.h"

#import "MBProgressHUD+Loading.h"
#import "NSDictionary+ML_Tools.h"
#import "DZNEmptyDataSeparator.h"
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
#import <Reachability/Reachability.h>
NSString *const kBondgoodteacher = @"bondgoodteacher";
@implementation NetworkMessageSender
MJCodingImplementation
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

@implementation MLNetwork


+ (instancetype)networkCtl{
    
    MLNetwork *networkCtl = [[MLNetwork alloc] init];
    
    return networkCtl;
    
}

#pragma mark - Get
+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
    [self getWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
}

+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    MLNetwork *networkCtl = [MLNetwork networkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.paramPackage, networkCtl.requestParam, networkCtl.messageSender);
    }
    
    if (![Reachability reachabilityForInternetConnection].isReachable) {
        
        [MBProgressHUD showHudOnKeywindowWithTitle:@"无连接"];
        networkCtl.messageSender.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNoConnetion;
        [networkCtl.messageSender.scrollViewOfShowingData reloadEmptyDataSet];
        return;
    }
    
    [networkCtl getRequestWithSuccess:success failure:failure completion:completion];
}
#pragma mark - Post
+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
    
    [self postWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
    
    
    
}

+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    MLNetwork *networkCtl = [MLNetwork networkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.paramPackage, networkCtl.requestParam, networkCtl.messageSender);
    }

    if (![Reachability reachabilityForInternetConnection].isReachable) {
        [MBProgressHUD showHudOnKeywindowWithTitle:@"无连接"];
        networkCtl.messageSender.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNoConnetion;
        [networkCtl.messageSender.scrollViewOfShowingData reloadEmptyDataSet];
        return;
    }
    
    if (networkCtl.messageSender.images.count > 0) {
        [networkCtl postRequestHaveImageWithSuccess:success failure:failure completion:completion];
    }
    else
    {
        [networkCtl postRequestWithSuccess:success failure:failure completion:completion];
    }
    
}


#pragma mark - Default AFHTTPSessionManager
- (AFHTTPSessionManager *)getDefaultAFHTTPSessionManager
{
    
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.requestSerializer = [AFHTTPRequestSerializer serializer];
    manager.requestSerializer.timeoutInterval = 10;
    manager.responseSerializer = [AFHTTPResponseSerializer serializer];
    
    
    return manager;
}
#pragma mark - ========= get请求方法公用入口 =========
- (void)getRequestWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
    AFHTTPSessionManager *manager = [self getDefaultAFHTTPSessionManager];
    NSString *getRequestURlString = [self handleGetParam];
    [manager GET:getRequestURlString parameters:nil success:^(NSURLSessionDataTask *task, id responseObject) {
        
        [self handleSuccess:success task:task responseObject:responseObject completion:completion];
        
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@", error);
        [self handleFailure:failure task:task error:error completion:completion];
        
        
    }];
    
    
}
#pragma mark - ========= post 方法通用入口 =========
- (void)postRequestWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
    
    
    AFHTTPSessionManager *manager = [self getDefaultAFHTTPSessionManager];
    [self showHUDAccrodingFlag:self.messageSender.showLoadingHudFlag];
    [self handlePostParam];
    
    [manager POST:self.urlConfig.urlString
       parameters:[self.requestParam dictionaryOfPropertyKeyValues]
          success:^(NSURLSessionDataTask *task, id responseObject) {
              
              [self handleSuccess:success task:task responseObject:responseObject completion:completion];
          } failure:^(NSURLSessionDataTask *task, NSError *error) {
              NSLog(@"%@", error);
              
              [self handleFailure:failure task:task error:error completion:nil];
              
          }];
    
    
    
    
}
- (void)postRequestHaveImageWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
    
    AFHTTPSessionManager *manager = [self getDefaultAFHTTPSessionManager];
    [self showHUDAccrodingFlag:self.messageSender.showLoadingHudFlag];
    [self handlePostParam];
    
    
    
    [manager POST:self.urlConfig.urlString parameters:[self.requestParam dictionaryOfPropertyKeyValues] constructingBodyWithBlock:^(id<AFMultipartFormData>  _Nonnull formData) {
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
  #if 0
    //默认参数
    if (self.requestParam.sessionId == nil) {
        self.requestParam.sessionId = [UserInfoManager shareManager].sessionId ? : @"";
    }

    self.requestParam.imei = [BondTool deviceId];
    self.requestParam.version = [BondTool internalVersion];
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
    
    
#endif
    
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
    if (self.messageSender.showLoadingHudFlag) {
        
        
        [MBProgressHUD removeProgressHudOnKeywindow];
        
        
        
    }
    
    NSJSONSerialization *JSONObject = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableContainers error:nil];
    NSLog(@"请求接口:%@\n%@\n\n 请求接口:%@ JSONString:\n\n%@\n\n", self.requestID, JSONObject, self.requestID, [JSONObject mj_JSONString]);
    
    
    id modelMaster = [NSClassFromString(self.messageSender.restulModelClassName) mj_objectWithKeyValues:JSONObject];
    
    
    
    
#if DEBUG
    
    //状态码
    id statusCodeObject = [JSONObject valueForKey:@"resCode"];
    
    NSInteger statusCode = statusCodeObject && ![statusCodeObject isKindOfClass:[NSNull class]] ? [statusCodeObject integerValue] : -1;
    
    NSString *errorMsg = [JSONObject valueForKey:@"resDesc"];
    if (!(statusCode == 0 || statusCode == 309001)) {
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
        if (self.messageSender.successToast) {
            [MBProgressHUD showHudOnKeywindowWithTitle:self.messageSender.successToast];
        }
    }
    
    
    [self setHelperPropertyNil];
    
    
    
}

- (void)handleFailure:(AFNFailure)failure task:(NSURLSessionDataTask *)task error:(NSError *)error completion:(void (^)(void))completion
{
    if (self.messageSender.showLoadingHudFlag) {
        
        [MBProgressHUD removeProgressHudOnKeywindow];
        
    }
    
    //处理错误显示
    self.messageSender.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNetworkError;
    [self.messageSender.scrollViewOfShowingData reloadEmptyDataSet];
    
    failure(task, error, self.urlConfig, self.requestParam, self.requestID, self.paramPackage);
    
    if (self.messageSender.failureToast) {
        [MBProgressHUD showHudOnKeywindowWithTitle:self.messageSender.failureToast];
    }
    else
    {
        [MBProgressHUD showHudOnKeywindowWithTitle:@"网络错误"];
    }
    
    [self setHelperPropertyNil];
    
}
#pragma mark - ========= Check Network =========
- (void)operationOfNotConnection
{
    self.messageSender.scrollViewOfShowingData.statusType = UIScrollViewStatusTypeNetworkError;
    [self.messageSender.scrollViewOfShowingData reloadEmptyDataSet];
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
- (void)showHUDAccrodingFlag:(BOOL)flag
{
    if (flag) {
        if (self.messageSender.scrollViewOfShowingData.loadType != UIScrollViewLoadTypeShowHUD) {
            return;
        }
        
        if (self.messageSender.loadingHudType == NetworkHudTypeNative) {
            [MBProgressHUD showNativeLoadingHudOnKeywindow];
        }else
        {
            [MBProgressHUD showLoadingHudOnKeywindow];
        }
    }
    
}

- (void)hideHUDAcrrodingFlag:(BOOL)flag
{
    
    
    [MBProgressHUD removeProgressHudOnKeywindow];
    
    
}




#pragma mark - ========= Setter & Getter =========

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
- (NetworkMessageSender *)messageSender
{
    if (_messageSender == nil) {
        
        _messageSender = [[NetworkMessageSender alloc] init];
    }
    return _messageSender;
}


@end
