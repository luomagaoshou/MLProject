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
#import <Reachability/Reachability.h>
#import "MLNetwork+Hud.h"
@implementation NetworkMessageSender
MJCodingImplementation
@end

@implementation MLURLConfig
MJCodingImplementation

#define MLURLAppendPathMacro(PROPERTY) - (MLURLAppendPathBlock)PROPERTY{\
\
__weak typeof(self) weakSelf = self;\
return ^MLURLConfig * (NSString *path) {\
\
__strong typeof(weakSelf) strongSelf = weakSelf;\
[strongSelf.appendPaths addObject:path];\
return strongSelf;\
};\
}

MLURLAppendPathMacro(appendPath)
MLURLAppendPathMacro(teacherName)

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
- (NSMutableArray *)appendPaths
{
    if (_appendPaths == nil) {
        
        _appendPaths = [[NSMutableArray alloc] init];
        
    }
    return _appendPaths;
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
    
    if (networkCtl.messageSender.images.count > 0) {
        [networkCtl postRequestHaveImageWithSuccess:success failure:failure completion:completion];
    }
    else
    {
         [networkCtl postRequestWithSuccess:success failure:failure completion:completion];
    }
   
}


#pragma mark - Default AFHTTPSessionManager
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
    
    //检测网络
    Reachability* reach = [Reachability reachabilityWithHostname:@"api.chunbo.com"];
    
    // Set the blocks
    reach.reachableBlock = ^(Reachability*reach)
    {
        
        AFHTTPSessionManager *manager = [self getAFHTTPSessionManager];
        
        [self handlePostParam];
        
        [manager POST:self.urlConfig.urlString
           parameters:[self.requestParam getPropertyKeyValueOnlyHaveValueDictionary]
              success:^(NSURLSessionDataTask *task, id responseObject) {
                  
                  [self handleSuccess:success task:task responseObject:responseObject completion:completion];
              } failure:^(NSURLSessionDataTask *task, NSError *error) {
                  NSLog(@"%@", error);
                  
                  [self handleFailure:failure task:task error:error completion:nil];
                  
              }];
        

    };
    
    reach.unreachableBlock = ^(Reachability* reach)
    {
        NSLog(@"UNREACHABLE!");
        [self handleFailure:failure task:nil error:nil completion:nil];
        
    };
    
    
    [reach startNotifier];
    
    
}
- (void)postRequestHaveImageWithSuccess:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion
{
    
    
 
    AFHTTPSessionManager *manager = [self getAFHTTPSessionManager];
    manager.requestSerializer.timeoutInterval = 40;
    [self handlePostParam];
   
   
    
    [manager POST:self.urlConfig.urlString parameters:[self.requestParam getPropertyKeyValueOnlyHaveValueDictionary] constructingBodyWithBlock:^(id<AFMultipartFormData>  _Nonnull formData) {
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
  
    NSDictionary *propertyDic = [self.requestParam getPropertyKeyValueOnlyHaveValueDictionary];
    if (self.urlConfig.appendPaths.count) {
        NSString *addPathString = [self.urlConfig.appendPaths componentsJoinedByString:@"/"];
        
        self.urlConfig.virtualDirectoryString = [NSString stringWithFormat:@"%@/%@", self.urlConfig.virtualDirectoryString, addPathString];
    }
    
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
           hud.label.textColor = kUI_COLOR_BLACK_333333;
           hud.bezelView.backgroundColor = [UIColor clearColor];
       } title:@"加载中"];
   });
    
    
    if (self.paramPackage) {
        self.requestParam.data = [[self.paramPackage getPropertyKeyValueOnlyHaveValueDictionary] mj_JSONString];
        
    }
    if (self.urlConfig.appendPaths.count) {
        
        NSString *addPathString = [self.urlConfig.appendPaths componentsJoinedByString:@"/"];
        self.urlConfig.virtualDirectoryString = [NSString stringWithFormat:@"%@/%@", self.urlConfig.virtualDirectoryString, addPathString];
    }
    
    NSDictionary *propertyDic = [self.requestParam getPropertyKeyValueOnlyHaveValueDictionary];
 
    
    NSData *data = [[self.paramPackage getPropertyKeyValueOnlyHaveValueDictionary] mj_JSONData];
    NSJSONSerialization *json = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
  
    NSLog(@"请求接口:%@\n\nURLString: %@\npropertyDic:%@ \njson:\n%@",self.requestID, self.urlConfig.urlString, propertyDic, json);
   
}

- (void)handleSuccess:(AFNSuccess)success task:(NSURLSessionDataTask *)task responseObject:(id)responseObject completion:(void (^)(void))completion
{
  
    NSJSONSerialization *JSONObject = [NSJSONSerialization JSONObjectWithData:responseObject options:NSJSONReadingMutableContainers error:nil];
    NSLog(@"请求接口:%@\n%@\n\n 请求接口:%@ JSONString:\n\n%@\n\n", self.requestID, JSONObject, self.requestID, [JSONObject mj_JSONString]);
    
    
    id modelMaster = [NSClassFromString(self.messageSender.restulModelClassName) mj_objectWithKeyValues:JSONObject];

   
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
                    hud.label.textColor = kUI_COLOR_BLACK_333333;
                    hud.bezelView.backgroundColor = [UIColor clearColor];
                } title:errorMsg];
                if ([errorMsg containsString:@"token已失效"]||[errorMsg containsString:@"登陆超时"]) {
                    
                }
            });
          
        }
       
       
    }

     success(task, responseObject, JSONObject, modelMaster, statusCode, self.urlConfig, self.requestParam, self.requestID, self.paramPackage);
  
    if (completion) {
        completion();
    }
     [self setHelperPropertyNil];
   
}

- (void)handleFailure:(AFNFailure)failure task:(NSURLSessionDataTask *)task error:(NSError *)error completion:(void (^)(void))completion
{
    /*
     Error Domain=NSURLErrorDomain Code=-1001 "The request timed out." UserInfo={NSUnderlyingError=0x7f9fc30018e0 {Error Domain=kCFErrorDomainCFNetwork Code=-1001 "(null)" UserInfo={_kCFStreamErrorCodeKey=-2102, _kCFStreamErrorDomainKey=4}}, NSErrorFailingURLStringKey=http://api.chunbo.com/Cookbook/appcookbooklist, NSErrorFailingURLKey=http://api.chunbo.com/Cookbook/appcookbooklist, _kCFStreamErrorDomainKey=4, _kCFStreamErrorCodeKey=-2102, NSLocalizedDescription=The request timed out.}
     */
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        failure(task, error, self.urlConfig, self.requestParam, self.requestID, self.paramPackage);
        
        dispatch_async(dispatch_get_main_queue(), ^{
            [self removeAllProgressHud];
            [self makeProgressHudWithHudConfig:^(MBProgressHUD *hud) {
                hud.mode = MBProgressHUDModeText;
                [hud hideAnimated:YES afterDelay:0.3];
                hud.offset = CGPointMake(0.f, MBProgressMaxOffset);
                hud.label.textColor = kUI_COLOR_BLACK_333333;
                hud.bezelView.backgroundColor = [UIColor clearColor];
            } title:@"连接错误，请重新再试"];
        });
       
        [self setHelperPropertyNil];
    });
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
