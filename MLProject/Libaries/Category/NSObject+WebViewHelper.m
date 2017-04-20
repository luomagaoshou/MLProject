//
//  NSObject+WebViewHelper.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/4/8.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "NSObject+WebViewHelper.h"
#import <WebKit/WebKit.h>
@implementation NSObject (WebViewHelper)
+ (void)webView:(id)webView tagName:(NSString *)tagName callback:(void (^)(NSInteger))callback {
    if ([webView isKindOfClass:[UIWebView class]]) {
        
    } else if ([webView isKindOfClass:[WKWebView class]]) {
        
    }
}

- (NSArray *)imageUrlsWithWebView:(id)webView {
    self.nodeCountOfTag(@"string");
    return nil;
}
- (NSInteger (^)(NSString *))nodeCountOfTag {
    return ^ NSInteger (NSString *tag){
        
        return 1;
    };
}
@end
