//
//  MLJSKeyword.h
//  MLProject
//
//  Created by 妙龙赖 on 2016/11/15.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLJSKeyword : NSObject
- (instancetype)documentView;
- (instancetype)webView;
- (instancetype)mainFrame;
- (instancetype)javaScriptContext;

- (NSString *)js;
@end
