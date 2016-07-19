//
//  NetworkCtl.h
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"
typedef NS_ENUM(NSUInteger, NetworkHudType) {
    NetworkHudTypeNative = 1,
    NetworkHudTypeBondGoodTeacher,
};
@interface NetworkMessageSender : NSObject
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *restulModelClassName;
@property (nonatomic, assign) BOOL showLoadingHudFlag;
@property (nonatomic, assign) NetworkHudType loadingHudType;
@property (nonatomic, weak) UIScrollView *scrollViewOfShowingData;
@property (nonatomic, copy) NSString *successToast;
@property (nonatomic, copy) NSString *failureToast;
@end


@interface MLURLConfig : NSObject
@property (nonatomic, copy) NSString *domainNameString;
@property (nonatomic, copy) NSString *portString;
@property (nonatomic, copy) NSString *virtualDirectoryString;
@property (nonatomic, copy) NSString *urlString;



@end
//数据放在data大括号
@interface MLParamPackage : NSObject
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *pwd;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *teacherEipId;
@property (nonatomic, copy) NSString *deviceos;
@property (nonatomic, copy) NSString *imei;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *classId;
@property (nonatomic, copy) NSString *studentId;
@property (nonatomic, copy) NSArray *dianMing;
@property (nonatomic, copy) NSString *classroomId;
@property (nonatomic, copy) NSString *skDate;
@property (nonatomic, copy) NSString *skTime;
@property (nonatomic, copy) NSString *xkTime;
@end



@interface MLRequestParam : NSObject

@property (nonatomic, copy) NSString *sessionId;///<登陆会话鉴权码 选填
@property (nonatomic, copy) NSString *imei;///<网络类型  必填
@property (nonatomic, copy) NSString *version;///<版本号 必填
@property (nonatomic, copy) NSString *clientType;///<客户端类型 必填
@property (nonatomic, copy) NSString *timestamp;///<请求时间戳 必填

@property (nonatomic, copy) NSString *jsonData;///<JSONString 选填
@property (nonatomic, copy) NSString *authorization;///<Md5鉴权参数 必填

@property (nonatomic, copy) NSString *page;
@property (nonatomic, copy) NSString *pagesize;




@end
@class Reachability;
typedef void (^AFNSuccess)(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, MLURLConfig *urlConfig, MLRequestParam *requestParam, NSString *requestID, MLParamPackage *paramPackage);

typedef void (^AFNFailure)(NSURLSessionDataTask *task, NSError *error, MLURLConfig *urlConfig, MLRequestParam *requestParam,NSString *requestID, MLParamPackage *paramPackage);
typedef void (^ParamsBlock)(MLURLConfig *urlConfig, MLParamPackage *paramPackage, MLRequestParam *requestParam, NetworkMessageSender *messageSender);
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
