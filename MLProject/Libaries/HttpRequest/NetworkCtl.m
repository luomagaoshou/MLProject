//
//  NetworkCtl.m
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "NetworkCtl.h"
#import <AFNetworking/AFNetworking.h>
#import "NSDictionary+ML_Tools.h"
#import "UIView+Shade.h"
#import "UIView+ClearColorShade.h"
#import "UIImage+FX.h"
#import <MJExtension/MJExtension.h>
#import "NetworkCtl+Hud.h"
@implementation NetworkMsgObjManager
@end
@implementation ResultModelClassManager

@end
@implementation URLConfig
- (NSString *)urlString
{
    
    if (self.domainNameString) {
        if (![self.domainNameString hasPrefix:@"http://"]) {
            self.domainNameString = [NSString stringWithFormat:@"http://%@",self.domainNameString != nil ? self.domainNameString:@""];
        }
    }
    
    
    NSString *urlString = [NSString stringWithFormat:@"%@%@%@",
                           self.domainNameString != nil ? self.domainNameString:@"",
                           self.portString != nil ? self.portString:@"",
                           self.virtualDirectoryString != nil ? self.virtualDirectoryString:@""];
    return urlString;
}
@end

@implementation PostDataPackage

@end

@implementation RequestParam

@end

@implementation NetworkCtl



#pragma mark - ========= 单例 =========
//静态的方法
+ (instancetype)shareNetworkCtl{
//    static NetworkCtl *networkCtl = nil;
//    static dispatch_once_t onceToken;
//    dispatch_once(&onceToken, ^{
//        networkCtl = [[NetworkCtl alloc] init];
//    });
    
    NetworkCtl *networkCtl = [[NetworkCtl alloc] init];
    return networkCtl;
    
}


+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
    [self getWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
}

+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    NetworkCtl *networkCtl = [NetworkCtl shareNetworkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.postDataPackage, networkCtl.requestParam, networkCtl.resultModelClassManager, networkCtl.msgObjManager);
    }
    
    [networkCtl getRequestWithSuccess:success failure:failure completion:completion];
}
+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure
{
   
    [self postWithRequestID:requestID paramBlock:paramBlock success:success failure:failure completion:nil];
    
}

+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    NetworkCtl *networkCtl = [NetworkCtl shareNetworkCtl];
    networkCtl.requestID = requestID;
    if (paramBlock) {
        paramBlock(networkCtl.urlConfig, networkCtl.postDataPackage, networkCtl.requestParam, networkCtl.resultModelClassManager, networkCtl.msgObjManager);
    }
    
    if (networkCtl.msgObjManager.images.count > 0) {
        [networkCtl postRequestHaveImageWithSuccess:success failure:failure completion:completion];
    }
    else
    {
         [networkCtl postRequestWithSuccess:success failure:failure completion:completion];
    }
   
}


#pragma mark - ========= Helper Method =========
- (AFHTTPSessionManager *)getAFHTTPSessionManager
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

    
    AFHTTPSessionManager *manager = [self getAFHTTPSessionManager];
    
  
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
    
   AFHTTPSessionManager *manager = [self getAFHTTPSessionManager];
    
    [self handlePostParam];
    
    [manager POST:self.urlConfig.urlString parameters:[self.requestParam getPropertyKeyValueOnlyHaveValueDictionary] success:^(NSURLSessionDataTask *task, id responseObject) {
        
    
        [self handleSuccess:success task:task responseObject:responseObject completion:completion];
    } failure:^(NSURLSessionDataTask *task, NSError *error) {
        NSLog(@"%@", error);
        
        [self handleFailure:failure task:task error:error completion:nil];
        
    }];
    
    
}
- (void)postRequestHaveImageWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
 
    AFHTTPSessionManager *manager = [self getAFHTTPSessionManager];
    manager.requestSerializer.timeoutInterval = 40;
    [self handlePostParam];
   
   
    
    [manager POST:self.urlConfig.urlString parameters:[self.requestParam getPropertyKeyValueOnlyHaveValueDictionary] constructingBodyWithBlock:^(id<AFMultipartFormData>  _Nonnull formData) {
         NSArray *images = [self.msgObjManager.images copy];
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
  
    NSDictionary *propertyDic = [self.requestParam getPropertyKeyValueOnlyHaveValueDictionary];
    
    NSString *getRequestURlString;
    if (propertyDic.count > 0) {
        getRequestURlString = [NSString stringWithFormat:@"%@?%@", self.urlConfig.urlString, [propertyDic dictionaryToURLparameterString]];
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
   dispatch_async(dispatch_get_main_queue(), ^{
       [self makeProgressHudWithHudConfig:^(MBProgressHUD *hud) {
           hud.label.textColor = kUI_TEXT_COLOR_BLACK;
           hud.bezelView.backgroundColor = [UIColor clearColor];
       } title:@"加载中"];
   });
    
    
    if (self.postDataPackage) {
        self.requestParam.data = [[self.postDataPackage getPropertyKeyValueOnlyHaveValueDictionary] mj_JSONString];
        
    }
    
    NSDictionary *propertyDic = [self.requestParam getPropertyKeyValueOnlyHaveValueDictionary];
 
    
    NSData *data = [[self.postDataPackage getPropertyKeyValueOnlyHaveValueDictionary] mj_JSONData];
    NSJSONSerialization *json = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
  
    NSLog(@"请求接口:%@\n\nURLString: %@\npropertyDic:%@ \njson:\n%@",self.requestID, self.urlConfig.urlString, propertyDic, json);
   
}
- (void)handleSuccess:(AFNSuccess)success task:(NSURLSessionDataTask *)task responseObject:(id)responseObject completion:(void (^)(void))completion
{
  
    NSJSONSerialization *JSONObject = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableContainers error:nil];
    NSLog(@"请求接口:%@\n%@\n\n 请求接口:%@ JSONString:\n\n%@\n\n", self.requestID, JSONObject, self.requestID, [JSONObject mj_JSONString]);
    
    
    id modelMaster = [NSClassFromString(self.resultModelClassManager.restulModelClassName) mj_objectWithKeyValues:JSONObject];

   
    [self removeAllProgressHud];
   
    
  
    //状态码
    id statusCodeObject = [JSONObject valueForKey:@"statusCode"]?[JSONObject valueForKey:@"statusCode"]:[JSONObject valueForKey:@"code"];
    
    NSInteger statusCode = [statusCodeObject integerValue];
    
    NSString *errorMsg = [JSONObject valueForKey:@"message"]?[JSONObject valueForKey:@"message"]:[JSONObject valueForKey:@"errorMsg"];
    if (!(statusCode == 0)) {
        if (errorMsg.length > 0 || ![errorMsg containsString:@"成功"] ) {
            
            dispatch_async(dispatch_get_main_queue(), ^{
                [self makeProgressHudWithHudConfig:^(MBProgressHUD *hud) {
                    hud.mode = MBProgressHUDModeText;
                    [hud hideAnimated:YES afterDelay:0.5];
                    hud.offset = CGPointMake(0.f, MBProgressMaxOffset);
                    hud.label.textColor = kUI_TEXT_COLOR_BLACK;
                    hud.bezelView.backgroundColor = [UIColor clearColor];
                } title:errorMsg];
                if ([errorMsg containsString:@"token已失效"]||[errorMsg containsString:@"登陆超时"]) {
                    
                }
            });
          
        }
       
       
    }

   
     success(task, responseObject, JSONObject, modelMaster, statusCode, self.urlConfig, self.requestParam, self.requestID, self.postDataPackage);
  
    if (completion) {
        completion();
    }
     [self setHelperPropertyNil];
   
}

- (void)handleFailure:(AFNFailure)failure task:(NSURLSessionDataTask *)task error:(NSError *)error completion:(void (^)(void))completion
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        failure(task, error, self.urlConfig, self.requestParam, self.requestID, self.postDataPackage);
        
        dispatch_async(dispatch_get_main_queue(), ^{
            [self removeAllProgressHud];
            [self makeProgressHudWithHudConfig:^(MBProgressHUD *hud) {
                hud.mode = MBProgressHUDModeText;
                [hud hideAnimated:YES afterDelay:0.3];
                hud.offset = CGPointMake(0.f, MBProgressMaxOffset);
                hud.label.textColor = kUI_TEXT_COLOR_BLACK;
                hud.bezelView.backgroundColor = [UIColor clearColor];
            } title:@"连接错误，请重新再试"];
        });
       
        [self setHelperPropertyNil];
    });
}
#pragma mark - ========= Network Helper Methods =========
- (URLConfig *)urlConfigForCheckingNetwork
{
    URLConfig *urlConfig = [self.urlConfig createSameObject];
    
    
    return urlConfig;
}
- (RequestParam *)requestParamForCheckingNetwork
{
    RequestParam *requestParam = [self.requestParam createSameObject];
    return requestParam;
}
- (PostDataPackage *)postDataPackageForCheckingNetwork

{
    PostDataPackage *postDataPackage = [self.postDataPackage createSameObject];
    return postDataPackage;
}
- (void)setHelperPropertyNil
{
    [self.msgObjManager setObjectPropertyAllKeyValueNil];
    self.requestID = nil;
    [self.resultModelClassManager setObjectPropertyAllKeyValueNil];
    [self.urlConfig setObjectPropertyAllKeyValueNil];
    [self.requestParam setObjectPropertyAllKeyValueNil];
    [self.postDataPackage setObjectPropertyAllKeyValueNil];
    
}




#pragma mark - ========= Setter & Getter =========
- (ResultModelClassManager *)resultModelClassManager
{
    if (_resultModelClassManager == nil) {
        
        _resultModelClassManager = [[ResultModelClassManager alloc] init];
    }
    return _resultModelClassManager;
}
- (URLConfig *)urlConfig
{
    if (_urlConfig == nil) {
        
        _urlConfig = [[URLConfig alloc] init];
    }
    return _urlConfig;
}
- (RequestParam *)requestParam
{
    if (_requestParam == nil) {
        
        _requestParam = [[RequestParam alloc] init];
    }
    return _requestParam;
}
- (PostDataPackage *)postDataPackage
{
    if (_postDataPackage == nil) {
        
        _postDataPackage = [[PostDataPackage alloc] init];
    }
    return _postDataPackage;
}
- (NetworkMsgObjManager *)msgObjManager
{
    if (_msgObjManager == nil) {
        
        _msgObjManager = [[NetworkMsgObjManager alloc] init];
    }
    return _msgObjManager;
}


@end
