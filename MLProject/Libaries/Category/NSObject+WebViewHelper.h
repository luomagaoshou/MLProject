//
//  NSObject+WebViewHelper.h
//  MLProject
//
//  Created by 妙龙赖 on 2017/4/8.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (WebViewHelper)
+ (void)bgt_webView:(id)webView tagName:(NSString *)tagName callback:(void (^)(NSInteger elementCount))callback;

@end
