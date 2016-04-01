//  
//  AthleticsLotteryMaster.m
//  Steward
//  
//  Created by apple on 2016/04/92.
//  Copyright © 2016年 myCompany. All rights reserved.
//  

#import "AthleticsLotteryMaster.h"
#import "MJExtension.h"
@implementation AthleticsLotteryMaster
+ (NSDictionary *)objectClassInArray
{
    return @{@"datas":@"AthleticsLotteryDatas"};
}
@end
@implementation AthleticsLotteryResult

@end
@implementation AthleticsLotteryspDatas

@end
@implementation AthleticsLotteryMatchArray

@end
@implementation AthleticsLotteryDatas
+ (NSDictionary *)objectClassInArray
{
    return @{@"matchArray":@"AthleticsLotteryMatchArray"};
}
@end

