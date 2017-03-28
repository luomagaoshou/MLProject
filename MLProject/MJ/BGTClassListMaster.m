//  
//  BGTClassListMaster.m
//  BondGoodTeacher
//  
//  Created by 赖妙龙 on 2016/07/13.
//  Copyright © 2016年 myCompany. All rights reserved.
//  

#import "BGTClassListMaster.h"
#import <MJExtension/MJExtension.h>
@implementation BGTClassListMaster

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"data":@"BGTClassListClassInfos"};
}

- (NSArray<NSArray<BGTClassListData *> *> *)transfromCellDatas{
    NSMutableArray *firstLevelArr = [[NSMutableArray alloc] init];
    for (BGTClassListClassInfos *classInfo in self.data) {
        if (classInfo.classInfos.count) {
            [firstLevelArr addObject:classInfo.classInfos];
        }
    }
    return firstLevelArr;
}
@end

@implementation BGTClassListClassInfos

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"classInfos":@"BGTClassListData"};
}

@end
@implementation BGTClassListClassTable


@end

@implementation BGTClassListData
//WZLSERIALIZE_COPY_WITH_ZONE();
- (id)copyWithZone:(NSZone *)zone
{
    id copy = [[[self class] allocWithZone:zone] init];
    for (NSString *propertyName in [[self class] arrayOfProperties]) {
        id property = [self valueForKey:propertyName];
        if ([propertyName isKindOfClass:[NSArray class]]) {
            NSMutableArray *mutArr = [[NSMutableArray alloc] init];
            for (id objInArr in property) {
                [mutArr addObject:[objInArr copy]];
            }
            [copy setValue:mutArr forKey:propertyName];
        }else{
            [copy setValue:property  forKey:propertyName];
        }
    }
    return copy;
}
- (NSDictionary *)reformDictionaryForLive
{
    return @{@"classId":self.classId,
             @"classSemester":self.quarterName,
             @"subject":self.course,
             @"grade":self.grade,
             @"classLevel":self.classLevel};
}
- (BOOL)isSubstitutedTeacher
{
    //班级老师与授课老师id不同，且不为代课老师，可以确定为被代课老师
    if (![self.classTable.classTeacherId isEqualToString:self.classTable.classTableTeacherId]) {
        if (!self.daikeFlag.boolValue) {
            return YES;
        }
    }
    return NO;
}





@end

