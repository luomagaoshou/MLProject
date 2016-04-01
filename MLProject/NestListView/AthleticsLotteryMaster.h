//  
//  AthleticsLotteryMaster.h
//  Steward
//  
//  Created by apple on 2016/04/92.
//  Copyright © 2016年 myCompany. All rights reserved.
//  

#import "AthleticsLotteryMaster.h"


@interface AthleticsLotteryResult :NSObject
@property (nonatomic , copy) NSString              * spf;

@end

@interface AthleticsLotteryspDatas :NSObject
@property (nonatomic , copy) NSString              * spf;

@end

@interface AthleticsLotteryMatchArray :NSObject
@property (nonatomic , copy) NSString              * matchId;
@property (nonatomic , copy) NSString              * time;
@property (nonatomic , copy) NSString              * leagueMatch;
@property (nonatomic , copy) NSString              * transfer;
@property (nonatomic , copy) NSString              * date;
@property (nonatomic , copy) NSString              * number;
@property (nonatomic , copy) NSString              * leagueColor;
@property (nonatomic , copy) NSString              * saishistatus;
@property (nonatomic , strong) AthleticsLotteryResult              * result;
@property (nonatomic , copy) NSString              * playAgainst;
@property (nonatomic , copy) NSString              * gliveId;
@property (nonatomic , copy) NSString              * goalscore;
@property (nonatomic , strong) AthleticsLotteryspDatas              * spDatas;

@end

@interface AthleticsLotteryDatas :NSObject
@property (nonatomic , copy) NSString              * issueNo;
@property (nonatomic , strong) NSArray              * matchArray;
@property (nonatomic , copy) NSString              * isOpenAward;

@end

@interface AthleticsLotteryMaster :NSObject
@property (nonatomic , copy) NSString              * statusCode;
@property (nonatomic , copy) NSString              * errorMsg;
@property (nonatomic , copy) NSString              * betIssueNo;
@property (nonatomic , strong) NSArray              * datas;

@end

