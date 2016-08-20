
//
//  MLNetwork+StatusCode.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLNetwork+StatusCode.h"

@implementation MLNetwork (StatusCode)
+ (NSDictionary *)statusCodeDicionary
{
    return @{@"0":@"操作成功----",
             @"10001":@"请求验证没有通过----请求验证没有通过",
             @"10002":@"验证合法请求拦截器异常,详见日志----",
             @"10003":@"未登录----登录失败，请重新登录",
             @"10004":@"登录拦截器异常----登录失败，请重新登录",
             @"300001":@"eip登录接口(信息部提供)发生异常,详见日志----登录失败，请重新登录",
             @"300002":@"eip接口(信息部提供)提示非法用户----密码与账号不匹配，请重新输入",
             @"300003":@"eip接口(信息部提供)提示发生异常----密码与账号不匹配，请重新输入",
             @"300004":@"登录接口发生异常,详见日志----登录失败，请重新登录",
             @"301001":@"未登录----",
             @"301002":@"检测是否登录异常,详见日志----登录失败，请重新登录",
             @"302001":@"用户设备绑定异常----登录失败，请重新登录",
             @"303001":@"保存反馈意见异常----提交失败，请重新提交",
             @"304001":@"获取app信息异常----获取最新版本失败，请重新再试",
             @"313002":@"调用crm接口没有获取到学生数据----暂无学员信息",
             @"305001":@"eip老师接口(信息部提供)发生异常----",
             @"305002":@"获取老师信息接口发生异常,详见日志----",
             @"306001":@"调用crm班级信息接口发生异常,详见日志----",
             @"306002":@"调用crm班级信息接口没有获取到数据----",
             @"306003":@"获取班级信息接口发生异常,详见日志----",
             @"307001":@"调用crm获取学生接口发生异常----",
             @"307002":@"调用crm接口没有获取到学生数据----",
             @"307003":@"获取学生接口发生异常,详见日志----",
             @"308001":@"点名发生异常----点名失败，请重新点名",
             @"309001":@"暂无考勤数据----",
             @"309002":@"获取学生考勤信息异常,详见日志----",
              @"311001":@"暂无课堂安排----暂无课堂安排",
             @"313002":@"调用crm接口没有获取到学生数据"
             };
}
+ (NSString *)toastStringWithCode:(NSString *)code
{
    if (![code isKindOfClass:[NSString class]]) {
        return nil;
    }
    if ([code isEqualToString:@"0"]) {
        return nil;
    }
    NSString *resultString;
    if ([[self statusCodeDicionary] valueForKey:code]) {
         resultString = [[[self statusCodeDicionary] valueForKey:code] componentsSeparatedByString:@"----"][1];
    }
    if (!resultString.length) {
        return nil;
    }
    return resultString;
}
@end
