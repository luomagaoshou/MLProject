//
//  BondTool+Secure.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/8.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "BondTool+Secure.h"
//#import "KeychainWrapper.h"
#import "sys/utsname.h"
NSString *const kBGTClientType = @"1";
@implementation BondTool (Secure)
//+ (NSString *)deviceId
//{
//    static NSString *deviceId;
//    static dispatch_once_t onceToken;
//    dispatch_once(&onceToken, ^{
//        deviceId = [KeychainWrapper keychainStringFromMatchingIdentifier:@"DeviceId"];
//        if (!deviceId) {
//            if ([self respondsToSelector:@selector(identifierForVendor)]) {
//                deviceId = [self identifierForVendor];
//            }
//            
//            if (deviceId) {
//                [KeychainWrapper createKeychainValue:deviceId forIdentifier:@"DeviceId"];
//            } else {
//                NSAssert(0, @"Device ID not found");
//                deviceId = [self randomDeviceId];
//            }
//        }
//    });
//    return deviceId;
//}
+ (NSString *)identifierForVendor
{
    NSString *identifier = [[[UIDevice currentDevice] identifierForVendor] UUIDString];
    NSArray *arr = [identifier componentsSeparatedByString:@"-"];
    NSMutableString *string = [NSMutableString string];
    for (NSString *str in arr) {
        [string appendString:str];
    }
    return string;
}

+ (NSString *)randomDeviceId
{
    srandom([[NSDate date] timeIntervalSince1970]);
    NSString *uniqueId = [NSString stringWithFormat:@"%02X:%02X:%02X:%02X:%02X:%02X", (Byte) random(), (Byte) random(), (Byte) random(), (Byte) random(), (Byte) random(), (Byte) random()];
    return uniqueId;
}

+ (NSString *)internalVersion
{
    NSDictionary *infoDic=[[NSBundle mainBundle] infoDictionary];
    NSString *internalVersion = [infoDic valueForKey:@"CFBundleVersion"];
    return internalVersion;
}
+ (NSString *)clientType
{
    return @"1";
}
+ (NSString *)deviceModel{
  
    
    NSArray *modelArray = @[
                            
                            @"i386", @"x86_64",
                            
                            @"iPhone1,1",
                            @"iPhone1,2",
                            @"iPhone2,1",
                            @"iPhone3,1",
                            @"iPhone3,2",
                            @"iPhone3,3",
                            @"iPhone4,1",
                            @"iPhone5,1",
                            @"iPhone5,2",
                            @"iPhone5,3",
                            @"iPhone5,4",
                            @"iPhone6,1",
                            @"iPhone6,2",
                            @"iPhone7,2",
                            @"iPhone7,1",
                            @"iPhone8,1",
                            @"iPhone8,2",
                            
                            @"iPod1,1",
                            @"iPod2,1",
                            @"iPod3,1",
                            @"iPod4,1",
                            @"iPod5,1",
                            
                            @"iPad1,1",
                            @"iPad2,1",
                            @"iPad2,2",
                            @"iPad2,3",
                            @"iPad2,4",
                            @"iPad2,5",
                            @"iPad2,6",
                            @"iPad2,7",
                            @"iPad3,1",
                            @"iPad3,2",
                            @"iPad3,3",
                            @"iPad3,4",
                            @"iPad3,5",
                            @"iPad3,6",
                            @"iPad4,1",
                            @"iPad4,2",
                            @"iPad4,3",
                            @"iPad4,4",
                            @"iPad4,5",
                            @"iPad4,6",
                            ];
    
    NSArray *modelNameArray = @[
                                
                                @"iPhone Simulator", @"iPhone Simulator",
                                
                                @"iPhone 2G",
                                @"iPhone 3G",
                                @"iPhone 3GS",
                                @"iPhone 4(GSM)",
                                @"iPhone 4(GSM Rev A)",
                                @"iPhone 4(CDMA)",
                                @"iPhone 4S",
                                @"iPhone 5(GSM)",
                                @"iPhone 5(GSM+CDMA)",
                                @"iPhone 5c(GSM)",
                                @"iPhone 5c(Global)",
                                @"iphone 5s(GSM)",
                                @"iphone 5s(Global)",
                                @"iphone 6",
                                @"iphone 6 Plus",
                                @"iphone 6S",
                                @"iphone 6S Plus",
                                
                                @"iPod Touch(1G)",
                                @"iPod Touch(2G)",
                                @"iPod Touch(3G)",
                                @"iPod Touch(4G)",
                                @"iPod Touch(5G)",
                                
                                @"iPad",
                                @"iPad 2(WiFi)",
                                @"iPad 2(GSM)",
                                @"iPad 2(CDMA)",
                                @"iPad 2(WiFi+New Chip)",
                                @"iPad Mini(WiFi)",
                                @"iPad Mini(GSM)",
                                @"iPad Mini(GSM+CDMA)",
                                @"iPad 3(WiFi)",
                                @"iPad 3(GSM+CDMA)",
                                @"iPad 3(GSM)",
                                @"iPad 4(WiFi)",
                                @"iPad 4(GSM)",
                                @"iPad 4(GSM+CDMA)",
                                @"iPad Air",
                                @"iPad Air",
                                @"iPad Air",
                                @"iPad Mini(2G)",
                                @"iPad Mini(2G)",
                                @"iPad Mini(2G)",
                                ];
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString *deviceString = [NSString stringWithCString:systemInfo.machine encoding:NSUTF8StringEncoding];
    NSInteger modelIndex = - 1;
    NSString *modelNameString = nil;
    modelIndex = [modelArray indexOfObject:deviceString];
    if (modelIndex >= 0 && modelIndex < [modelNameArray count])
        modelNameString = [modelNameArray objectAtIndex:modelIndex];
   
    return modelNameString;
}
+ (NSString *)deviceOS
{
    NSString *OSName = @"iOS";
    NSString *OSVersion = [[UIDevice currentDevice] systemVersion];
    NSString *result = [NSString stringWithFormat:@"%@%@", OSName, OSVersion];
    return result;
}

@end
