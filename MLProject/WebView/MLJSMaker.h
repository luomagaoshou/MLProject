//
//  MLJSMaker.h
//  MLProject
//
//  Created by apple on 16/5/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#define M_JSEXCUTE(_excuteString) [[[MLJSMaker alloc] init]._excuteString description]
@class MLJSMaker;
typedef MLJSMaker *(^MLJSMakerParamBlock)(NSString *);
typedef MLJSMaker *(^MLJSMakerBlock)(NSString *);
@interface MLJSMaker : NSObject
- (instancetype)documentView;
- (instancetype)webView;
- (instancetype)mainFrame;
- (instancetype)javaScriptContext;




- (MLJSMakerBlock)close;
- (MLJSMakerParamBlock)getElementById;
- (MLJSMakerParamBlock)getElementsByName;
- (MLJSMakerParamBlock)getElementsByTagName;
- (MLJSMakerParamBlock)open;
- (MLJSMakerParamBlock)write;
- (MLJSMakerParamBlock)writeIn;
@end
