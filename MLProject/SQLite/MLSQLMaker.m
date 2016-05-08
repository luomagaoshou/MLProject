//
//  MLSQLMaker.m
//  MLProject
//
//  Created by 妙龙赖 on 16/5/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLSQLMaker.h"
@interface MLSQLMaker()
@property(nonatomic, strong) NSMutableArray *excuteStrings;
@end
@implementation MLSQLMaker

#define M_EXCUTE_STRING_OF_NO_PARAM(_property) - (instancetype)_property\
{\
[self.excuteStrings addObject:NSStringFromSelector(_cmd)];\
return self;\
}
#define M_EXCUTE_STRING_OF_PARAMS(_property) - (MLSQLMakerParaBlock)_property\
{\
__weak typeof(self) weakSelf = self;\
return ^MLSQLMaker *(NSString *componentString){\
    __strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(_cmd);\
selectorName = [selectorName stringByReplacingOccurrencesOfString:@"_" withString:@" "];\
[strongSelf.excuteStrings addObject:selectorName];\
    [strongSelf.excuteStrings addObject:componentString];\
    return strongSelf;\
};\
}
M_EXCUTE_STRING_OF_PARAMS(CREATE)
M_EXCUTE_STRING_OF_PARAMS(SELECT)
M_EXCUTE_STRING_OF_PARAMS(FROM)
M_EXCUTE_STRING_OF_PARAMS(DISTINCT)
M_EXCUTE_STRING_OF_PARAMS(WHERE)
M_EXCUTE_STRING_OF_PARAMS(AND)
M_EXCUTE_STRING_OF_PARAMS(OR)
M_EXCUTE_STRING_OF_PARAMS(BY)
M_EXCUTE_STRING_OF_PARAMS(INTO)
M_EXCUTE_STRING_OF_PARAMS(UPDATE)
M_EXCUTE_STRING_OF_PARAMS(SET)
M_EXCUTE_STRING_OF_PARAMS(IF_NOT_EXISTS)
M_EXCUTE_STRING_OF_PARAMS(VALUES)
M_EXCUTE_STRING_OF_PARAMS(TOP)
M_EXCUTE_STRING_OF_PARAMS(LIMIT)
M_EXCUTE_STRING_OF_PARAMS(LIKE)
M_EXCUTE_STRING_OF_PARAMS(IN)



M_EXCUTE_STRING_OF_NO_PARAM(select)
M_EXCUTE_STRING_OF_NO_PARAM(order)
M_EXCUTE_STRING_OF_NO_PARAM(insert)
M_EXCUTE_STRING_OF_NO_PARAM(delete)
M_EXCUTE_STRING_OF_NO_PARAM(not)



- (NSString *)description
{
    return [self.excuteStrings componentsJoinedByString:@" "];
}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)excuteStrings
{
    if (_excuteStrings == nil) {
        _excuteStrings = [[NSMutableArray alloc] init];
    }
    return _excuteStrings;
}
@end
