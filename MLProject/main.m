//
//  main.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/8.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface MLAutoReleasePoolTest : NSObject
- (void)test;
+ (instancetype)testObject;
@end
@implementation MLAutoReleasePoolTest
+ (instancetype)testObject{
    return [[self alloc] init];
}
- (void)test{
    _objc_autoreleasePoolPrint();
    NSLog(@"%@--End", NSStringFromSelector(_cmd));
    
    __weak NSString *testStr1;
    
    __weak NSString *testStr2;
    NSString *testStr3;
    NSString *testStr4;
    _objc_autoreleasePoolPrint();
    {
        testStr1 = @"testStr1".mutableCopy;
        testStr3 = @"testStr3".mutableCopy;
        _objc_autoreleasePoolPrint();
    }
    @autoreleasepool {
        testStr2 = @"testStr2".mutableCopy;
        testStr4 = @"testStr4".mutableCopy;
        _objc_autoreleasePoolPrint();
    }
    _objc_autoreleasePoolPrint();
    NSLog(@"%@%@%@%@", testStr1, testStr2, testStr3, testStr4);
}
@end


int main(int argc, char * argv[]) {
#if 0
    _objc_autoreleasePoolPrint();
    {
        _objc_autoreleasePoolPrint();
        [[[MLAutoReleasePoolTest alloc] init] test];
        _objc_autoreleasePoolPrint();
    }
    
    _objc_autoreleasePoolPrint();
    @autoreleasepool {
        _objc_autoreleasePoolPrint();
        [[[MLAutoReleasePoolTest alloc] init] test];
        _objc_autoreleasePoolPrint();
    }
     _objc_autoreleasePoolPrint();
    
#endif
    
#if 0
    _objc_autoreleasePoolPrint();
    {
        _objc_autoreleasePoolPrint();
        [[MLAutoReleasePoolTest testObject] test];
        _objc_autoreleasePoolPrint();
    }
    _objc_autoreleasePoolPrint();
    
    @autoreleasepool {
        _objc_autoreleasePoolPrint();
        [[MLAutoReleasePoolTest testObject] test];
        _objc_autoreleasePoolPrint();
    }
    _objc_autoreleasePoolPrint();
    
#endif
    
     // _objc_autoreleasePoolPrint();
    @autoreleasepool {
       //   _objc_autoreleasePoolPrint();
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
       
    }

}
