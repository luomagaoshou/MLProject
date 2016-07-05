//
//  NetworkCtl.h
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"
@interface NetworkMessageSender : NSObject
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *restulModelClassName;
@end



@interface MLURLConfig : NSObject
@property (nonatomic, copy) NSString *domainNameString;
@property (nonatomic, copy) NSString *portString;
@property (nonatomic, copy) NSString *virtualDirectoryString;
@property (nonatomic, copy) NSString *urlString;

@end
//数据放在data大括号
@interface MLParamPackage : NSObject
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *changedPassword;

@end


@interface MLRequestParam : NSObject
@property (nonatomic, copy) NSString *data;//JSONString



@end

typedef void (^AFNSuccess)(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, MLURLConfig *urlConfig, MLRequestParam *requestParam, NSString *requestID, MLParamPackage *MLParamPackage);
typedef void (^AFNFailure)(NSURLSessionDataTask *task, NSError *error, MLURLConfig *urlConfig, MLRequestParam *requestParam,NSString *requestID, MLParamPackage *MLParamPackage);
typedef void (^ParamsBlock) (MLURLConfig *urlConfig, MLParamPackage *MLParamPackage, MLRequestParam *requestParam, NetworkMessageSender *msgObjManager);
typedef NS_ENUM(NSInteger, RequestType) {
    RequestTypeOpenLotteryAll,
    RequestTypeGetVerificationCode,
    RequestTypeCheckVerificataionCode,
};



@interface MLNetwork : NSObject

@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, strong) NetworkMessageSender *messageSender;
@property (nonatomic, strong) MLURLConfig *urlConfig;
@property (nonatomic, strong) MLRequestParam *requestParam;
@property (nonatomic, strong) MLParamPackage *paramPackage;
@property (nonatomic, copy) AFNSuccess success;
@property (nonatomic, copy) AFNFailure failure;

//静态的方法

+ (instancetype)networkCtl;

+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion;

+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion;


@end
