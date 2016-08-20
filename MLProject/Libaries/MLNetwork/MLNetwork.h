//
//  NetworkCtl.h
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"
typedef NS_ENUM(NSUInteger, NetworkHudType) {
    NetworkHudTypeBondGoodTeacher = 0,
    NetworkHudTypeNative = 1,
    
};
@interface MLNetworkMessageSender : NSObject
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *restulModelClassName;

@property (nonatomic, assign) NSInteger timeoutOfNetwork;
//
@property (nonatomic, assign) BOOL isCheckNetworkState;
@end


@interface MLURLConfig : NSObject
@property (nonatomic, copy) NSString *domainNameString;
@property (nonatomic, copy) NSString *portString;
@property (nonatomic, copy) NSString *virtualDirectoryString;
@property (nonatomic, copy, readonly) NSString *urlString;


@end

@interface MLNetworkHudManager : NSObject
//是否显示加载图 默认为NO
@property (nonatomic, assign) BOOL showLoadingHudFlag;
//默认为NetworkHudTypeBondGoodTeacher
@property (nonatomic, assign) NetworkHudType loadingHudType;
//提示
@property (nonatomic, copy) NSString *toastOfSuccess;
@property (nonatomic, copy) NSString *toastOfNetworkError;
//展示数据的scrollView 设置网络状态
@property (nonatomic, weak) UIScrollView *scrollViewOfShowingData;
//如果为空 则放在keywindow
@property (nonatomic, weak) __kindof UIView *viewOfShowingHud;
//
@end

//放在大括号里面的jsonData
@interface MLParamPackage : NSObject
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *pwd;
@property (nonatomic, copy) NSString *content;

@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *teacherEipId;
@property (nonatomic, copy) NSString *teacherName;
@property (nonatomic, copy) NSString *deviceos;
@property (nonatomic, copy) NSString *imei;

@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *classId;
@property (nonatomic, copy) NSString *studentId;
@property (nonatomic, copy) NSString *studentName;
@property (nonatomic, copy) NSString *sex;
@property (nonatomic, copy) NSString *callSuccessFlag;
@property (nonatomic, copy) NSArray *dianMing;
@property (nonatomic, copy) NSString *classroomId;
@property (nonatomic, copy) NSString *skDate;
@property (nonatomic, copy) NSString *skTime;
@property (nonatomic, copy) NSString *xkTime;

@property (nonatomic, copy) NSString *callStartDate;
@property (nonatomic, copy) NSString *callStartTime;
@property (nonatomic, copy) NSString *callEndDate;
@property (nonatomic, copy) NSString *callEndTime;

@property (nonatomic, copy) NSString *phone;

@property (nonatomic, copy) NSString *currentPage;

@property (nonatomic, copy) NSString *senderPhone;
@property (nonatomic, copy) NSString *receiverPhone;

@property (nonatomic, copy) NSString *endFlag;
@property (nonatomic, copy) NSString *actionId;

@property (nonatomic, copy) NSString *teacherEipUserName;
@property (nonatomic, copy) NSString *classLevel;
@property (nonatomic, copy) NSString *classSemester;
@property (nonatomic, copy) NSString *classTime;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *skContent;
@property (nonatomic, copy) NSArray *studentList;
@property (nonatomic, copy) NSString *grade;
@property (nonatomic, copy) NSString *subject;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSArray *classList;
@property (nonatomic, copy) NSString *videoDirectPalyId;
@property (nonatomic, copy) NSString *status;
@end



@interface MLRequestParam : NSObject

@property (nonatomic, copy) NSString *sessionId;///<登陆会话鉴权码 选填
@property (nonatomic, copy) NSString *imei;///<网络类型  必填
@property (nonatomic, copy) NSString *version;///<版本号 必填
@property (nonatomic, copy) NSString *clientType;///<客户端类型 必填
@property (nonatomic, copy) NSString *timestamp;///<请求时间戳 必填

@property (nonatomic, copy) NSString *jsonData;///<JSONString 选填
@property (nonatomic, copy) NSString *authorization;///<Md5鉴权参数 必填


@end
@class Reachability;
typedef void (^AFNSuccess)(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, MLURLConfig *urlConfig, MLRequestParam *requestParam, NSString *requestID, MLParamPackage *paramPackage);

typedef void (^AFNFailure)(NSURLSessionDataTask *task, NSError *error, MLURLConfig *urlConfig, MLRequestParam *requestParam,NSString *requestID, MLParamPackage *paramPackage);
typedef void (^ParamsBlock)(MLURLConfig *urlConfig, MLParamPackage *paramPackage, MLRequestParam *requestParam, MLNetworkHudManager *hudManager,MLNetworkMessageSender *messageSender);
typedef NS_ENUM(NSInteger, RequestType) {
    RequestTypeOpenLotteryAll,
    RequestTypeGetVerificationCode,
    RequestTypeCheckVerificataionCode,
};


@class AFHTTPSessionManager;
@interface MLNetwork : NSObject
@property (nonatomic, strong, readonly) AFHTTPSessionManager *sessionManager;

@property (nonatomic, copy) NSString *requestID;

@property (nonatomic, strong) MLURLConfig *urlConfig;
@property (nonatomic, strong) MLRequestParam *requestParam;
@property (nonatomic, strong) MLParamPackage *paramPackage;
@property (nonatomic, strong) MLNetworkHudManager *hudManager;
@property (nonatomic, strong) MLNetworkMessageSender *messageSender;

@property (nonatomic, copy) AFNSuccess success;
@property (nonatomic, copy) AFNFailure failure;




+ (instancetype)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (instancetype)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion;

+ (instancetype)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (instancetype)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void))completion;


@end
