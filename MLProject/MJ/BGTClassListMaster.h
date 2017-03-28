//  
//  BGTClassListMaster.h
//  BondGoodTeacher
//  
//  Created by 赖妙龙 on 2016/07/13.
//  Copyright © 2016年 myCompany. All rights reserved.
//  



@interface BGTClassListClassTable :NSObject
@property (nonatomic, copy) NSString              * skTime;
@property (nonatomic, copy) NSString              * xkTime;
@property (nonatomic, copy) NSString              * status;
@property (nonatomic, copy) NSString              * classNumber;///<已废弃的id
@property (nonatomic, copy) NSString              * yingDaoNum;
@property (nonatomic, copy) NSString              * classTime;
@property (nonatomic, copy) NSString              * startTime;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *classTableTeacherName;
@property (nonatomic, copy) NSString *classTableTeacherId;
@property (nonatomic, copy) NSString *classTeacherId;
@property (nonatomic, copy) NSString *classTeacherName;

//自定义  是否已结课标记
@property (nonatomic, copy) NSString *finishedFlag;
@end

//(0其它 1特训班 2培优班 3提高班 4基础班 5集训队 6考级 7表演)
typedef NS_ENUM(NSInteger, BGTClassLevel) {
    BGTClassLevelOther = 0,///<其它
    BGTClassLevelSpecialTraining,///<特训班
    BGTClassLevelExcellentTraining,///<培优班
    BGTClassLevelImprove,///<提高班
    BGTClassLevelBase,///<基础班
    BGTClassLevelAssembleTraining,///<集训队
    BGTClassLevelGrandingTest,///<考级
    BGTClassLevelActing,///<表演
};

@interface BGTClassListData :NSObject
@property (nonatomic, copy) NSString              * course;
@property (nonatomic, copy) NSString              * classLevel;
@property (nonatomic, copy) NSString              *classLevelNumber;
@property (nonatomic, copy) NSString              * quarterName;
@property (nonatomic, copy) NSString              * className;
@property (nonatomic, copy) NSString              * grade;
@property (nonatomic, copy) NSString              * subject;
@property (nonatomic, copy) NSString              * numberOfStudent;
@property (nonatomic, copy) NSString              * classTime;
//是否为代课老师
@property (nonatomic, copy) NSString *daikeFlag;
//* 未结课则不为空 已结课为空 */
@property (nonatomic, copy) BGTClassListClassTable              * classTable;
@property (nonatomic, copy) NSString              * classId;
//重新组装（直播模块）
- (NSDictionary *)reformDictionaryForLive;
//是否被代课老师
- (BOOL)isSubstitutedTeacher;


@end

@interface BGTClassListClassInfos : NSObject
@property (nonatomic, copy) NSString              *quarterName;
@property (nonatomic, copy) NSArray <BGTClassListData *> *classInfos;
@end

@interface BGTClassListMaster :NSObject 
@property (nonatomic, copy) NSString              * resCode;
@property (nonatomic, copy) NSString              * resDesc;
@property (nonatomic, copy) NSArray        <BGTClassListClassInfos *>      * data;

//将数据结构转成二级数组
@property (nonatomic, readonly) NSArray <NSArray <BGTClassListData*> *> *transfromCellDatas;

@end

