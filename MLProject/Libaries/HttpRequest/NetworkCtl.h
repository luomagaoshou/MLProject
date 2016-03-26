//
//  NetworkCtl.h
//
//  Created by spzhong on 11-6-9.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBProgressHUD.h"
@interface NetworkMsgObjManager : NSObject
@property (nonatomic, copy) NSArray *images;
@end

@interface ResultModelClassManager : NSObject
@property (nonatomic, copy) NSString *restulModelClassName;
@end

@interface URLConfig : NSObject
@property (nonatomic, copy) NSString *domainNameString;
@property (nonatomic, copy) NSString *portString;
@property (nonatomic, copy) NSString *virtualDirectoryString;
@property (nonatomic, copy) NSString *urlString;

@end
//数据放在data大括号
@interface PostDataPackage : NSObject
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *changedPassword;
//注册
@property (nonatomic, copy, setter = setTradePassword:) NSString *Password;

@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *userKey;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *channelNo;
@property (nonatomic, copy) NSString *cellphoneType;
@property (nonatomic, copy) NSString *simCd;
@property (nonatomic, copy) NSString *imei;
@property (nonatomic, copy) NSString *macAddr;
@property (nonatomic, copy) NSString *resolution;
@property (nonatomic, copy) NSString *verClient;
@property (nonatomic, copy) NSString *mobileNo;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *indentifyingCode;
//账户修改
@property (nonatomic, copy) NSString *Pwd1;
@property (nonatomic, copy) NSString *Pwd2;
@property (nonatomic, copy) NSString *v_mobile;
@property (nonatomic, copy) NSString *v_code;
@property (nonatomic, copy) NSString *mobile;
@property (nonatomic, copy) NSString *userKeyMobi;


@property (nonatomic, copy) NSString *realName;

//帐户明细

@property (nonatomic, copy) NSString *periodOfCheck;///<时间段
@property (nonatomic, copy) NSString *requestPage;///<页码
@property (nonatomic, copy) NSString *requestType;///<请求类型 请求的数据的分类(0表示所有记录,1表示收入,2表示支出
@property (nonatomic, copy) NSString *pagesize;///<记录条数
@property (nonatomic, copy) NSString *sortType;///<排序方式
//优惠券
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *statusUsed;///<使用状态 全部:all 已经使用 :used 未使用:unused
@property (nonatomic, copy) NSString *statusOver;///<过期状态 全部:all 已过期:overdue 未过期:unoverdue
@property (nonatomic, copy) NSString *pageNo;///<
@property (nonatomic, copy) NSString *pageSize;///<

@property (nonatomic, copy) NSNumber *cardValue;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *cardType;
@property (nonatomic, copy) NSString *cardCode;
@property (nonatomic, copy) NSString *personCardId;
@property (nonatomic, copy) NSString *identityCode;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *bankId;
//提款
@property (nonatomic, copy) NSString *tradePass;
@property (nonatomic, copy) NSString *count;
@property (nonatomic, copy) NSString *sendStatus;
@property (nonatomic, copy) NSString *cardId;
//兴趣习惯
@property (nonatomic, copy) NSString *pictureUrl;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *sex;
@property (nonatomic, copy) NSString *habits;
@property (nonatomic, copy) NSString *interests;


//圈子
@property (nonatomic, copy) NSString *ownid;
@property (nonatomic, copy) NSString *groupname;
@property (nonatomic, copy) NSString *presentation;
@property (nonatomic, copy) NSString *lotterytype;
@property (nonatomic, copy) NSString *pictureurl;

@property (nonatomic, copy) NSString *groupid;

@property (nonatomic, copy) NSString *lotteryTypeArray;

@property (nonatomic, copy) NSString *issueCount;
@property (nonatomic, copy) NSString *lotteryType;
@property (nonatomic, copy) NSString *issueNo;
@property (nonatomic, copy) NSString *date;
//查找我加入的圈子话题
@property (nonatomic, copy) NSString *userid;///< 全小写
@property (nonatomic, copy) NSString *hits;
@property (nonatomic, copy) NSString *page;
@property (nonatomic, copy) NSString *topicid;

@property (nonatomic, copy) NSString *topicname;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *hasImg;
@property (nonatomic, copy) NSString *all;

//评论
@property (nonatomic, copy) NSString *commenttype;
#define kSECCommentTypeCommentForTopic @{@"评论话题":@"1"}
#define kSECCommentTypeCommentForComment @{@"评论评论":@"2"}
@property (nonatomic, copy) NSString *commentid;
@property (nonatomic, copy) NSString *commentUserId;

@property (nonatomic, copy) NSString *bankCode;
@property (nonatomic, copy) NSString *cardNo;
@property (nonatomic, copy) NSString *bankType;
@property (nonatomic, copy) NSString *bindFlag;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, copy) NSString *province;
@property (nonatomic, copy) NSString *ext;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic, copy) NSString *bankInfo;
@property (nonatomic, copy) NSString *bankName;

//资讯
@property (nonatomic, copy) NSString *upclassid;
@property (nonatomic, copy) NSString *ztcnewsclass;///<对应分类（二级栏目接口返回)
@property (nonatomic, copy) NSString *ztcupclass;///<对应栏目（二级栏目接口返回)
@property (nonatomic, copy) NSString *lotteryid;
@end


@interface RequestParam : NSObject
#pragma mark - ========= 通用信息 =========
@property (nonatomic, copy) NSString *userid;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *userKey;///<登录key
@property (nonatomic, copy) NSString *changedPassword;///<加密密码
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *channelNo;
@property (nonatomic, copy) NSString *verClient;
#pragma mark - ========= 店主营业厅相关 =========
@property (nonatomic, copy) NSString *duser;///<店主id
@property (nonatomic, copy) NSString *type;///<彩种类型
//-->    0: 店主待抢定单
//-->    1: 店主未处理 特约预约
//-->    2: 店主处理中预约
//-->    3: 店主已截止的预约
//-->    4: 店主未派奖订单
//-->    5: 店主已派奖订单（分页）
//-->    6: 未取票订单（分页）
//-->    7: 已取票订单（分页）
//-->    8: 方案管理订单(分页) 根据条件查询最近60天内已出票的数据
@property (nonatomic, copy) NSString *userName;///<查询用，该key为大写 可选

@property (nonatomic, copy) NSString *stime;///<查询用，开始时间 可选
@property (nonatomic, copy) NSString *etime;///<查询用，结束时间 可选
@property (nonatomic, copy) NSString *pageSize;///<每页多少页，没有分页可以不传，默认 10条
@property (nonatomic, copy) NSString *page;///<当前页
@property (nonatomic, copy) NSString *orderNo;///<定单号
@property (nonatomic, copy) NSString *ordno;///<出票,派奖定单号,后台参数不同
@property (nonatomic, copy) NSString *projectId;///<
@property (nonatomic, copy) NSString *lotteryType;///<彩种ID
@property (nonatomic, copy) NSString *lotteryId;///<彩种ID
@property (nonatomic, copy) NSString *requestType;///<请求方式
@property (nonatomic, copy) NSString *issueno;///<期号
@property (nonatomic, copy) NSNumber *payAwardMoney;///<派奖金额,需要转为number
#pragma mark - ========= 加盟相关 =========
@property (nonatomic, copy) NSString *ddress;///<加盟店地址
@property (nonatomic, copy) NSString *dname;///<加盟店名字
@property (nonatomic, copy) NSString *ddxnumber;///<代销证号
@property (nonatomic, copy) NSString *validtime;///<代销证有效期时间
@property (nonatomic, copy) NSString *provice;///<省份
@property (nonatomic, copy) NSString *city;///<城市
@property (nonatomic, copy) NSString *businesstype;///<经营类型:   0,个人
@property (nonatomic, strong) UIImage *identityImg;///<店主照片
@property (nonatomic, strong) UIImage *sellImg;///<代销证照片
@property (nonatomic, copy) NSString *mobile;///<手机号
@property (nonatomic, copy) NSString *validCode;///<手机号验证码
@property (nonatomic, copy) NSString *cardno;///<身份证号
@property (nonatomic, copy) NSString *shopLotterys;///<销售玩法

@property (nonatomic, copy) NSString *data;//JSONString
@end

typedef void (^AFNSuccess)(NSURLSessionDataTask *task, id responseObject, NSJSONSerialization *JSONObject, id modelMaster, NSInteger statusCode, URLConfig *urlConfig, RequestParam *requestParam, NSString *requestID, PostDataPackage *postDataPackage);
typedef void (^AFNFailure)(NSURLSessionDataTask *task, NSError *error, URLConfig *urlConfig, RequestParam *requestParam,NSString *requestID, PostDataPackage *postDataPackage);
typedef void (^ParamsBlock) (URLConfig *urlConfig, PostDataPackage *postDataPackage, RequestParam *requestParam, ResultModelClassManager *resultModelClassManager, NetworkMsgObjManager *msgObjManager);
typedef NS_ENUM(NSInteger, RequestType) {
    RequestTypeOpenLotteryAll,
    RequestTypeGetVerificationCode,
    RequestTypeCheckVerificataionCode,
};



@interface NetworkCtl : NSObject

@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, strong) NetworkMsgObjManager *msgObjManager;
@property (nonatomic, strong) ResultModelClassManager *resultModelClassManager;
@property (nonatomic, strong) URLConfig *urlConfig;
@property (nonatomic, strong) RequestParam *requestParam;
@property (nonatomic, strong) PostDataPackage *postDataPackage;
@property (nonatomic, copy) AFNSuccess success;
@property (nonatomic, copy) AFNFailure failure;

//静态的方法

+ (instancetype)shareNetworkCtl;

+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (void)getWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void)) completion;

+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure;
+ (void)postWithRequestID:(NSString *)requestID paramBlock:(ParamsBlock)paramBlock success:(AFNSuccess)success failure:(AFNFailure)failure completion:(void (^)(void)) completion;


@end
