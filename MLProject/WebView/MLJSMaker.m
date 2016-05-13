//
//  MLJSMaker.m
//  MLProject
//
//  Created by apple on 16/5/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLJSMaker.h"
@interface MLJSMaker()
@property(nonatomic, strong) NSMutableArray *excuteStrings;
@end
@implementation MLJSMaker
#define M_JS_EXCUTE_STRING_OF_NO_PARAM(_property) - (instancetype)_property\
{\
[self.excuteStrings addObject:NSStringFromSelector(_cmd)];\
return self;\
}

#define M_JS_EXCUTE_STRING_OF_PARAMS(_property) - (MLJSMakerParamBlock)_property\
{\
__weak typeof(self) weakSelf = self;\
return ^MLJSMaker *(NSString *componentString){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(_cmd);\
selectorName = [selectorName stringByReplacingOccurrencesOfString:@"_" withString:@" "];\
[strongSelf.excuteStrings addObject:selectorName];\
[strongSelf.excuteStrings addObject:componentString];\
return strongSelf;\
};\
}

#define M_JS_EXCUTE_STRING_OF_FUNCTION(_property) - (MLJSMakerParamBlock)_property\
{\
__weak typeof(self) weakSelf = self;\
return ^MLJSMaker *(NSString *componentString){\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(_cmd);\
selectorName = [selectorName stringByReplacingOccurrencesOfString:@"_" withString:@" "];\
[strongSelf.excuteStrings addObject:selectorName];\
componentString == nil ? nil : [NSString stringWithFormat:@"\"%@\"", componentString];\
[strongSelf.excuteStrings addObject:[NSString stringWithFormat:@"(%@)", componentString]];\
return strongSelf;\
};\
}


#define M_JS_EXCUTE_STRING_OF_NO_PARAM_FUNCTION(_property) - (MLJSMakerBlock)_property\
{\
__weak typeof(self) weakSelf = self;\
return ^MLJSMaker *{\
__strong typeof(weakSelf) strongSelf = weakSelf;\
NSString *selectorName = NSStringFromSelector(_cmd);\
selectorName = [selectorName stringByReplacingOccurrencesOfString:@"_" withString:@" "];\
[strongSelf.excuteStrings addObject:selectorName];\
[strongSelf.excuteStrings addObject:[NSString stringWithFormat:@"(%@)", componentString]];\
return strongSelf;\
};\
}

M_JS_EXCUTE_STRING_OF_NO_PARAM(documentView)
M_JS_EXCUTE_STRING_OF_NO_PARAM(webView)
M_JS_EXCUTE_STRING_OF_NO_PARAM(mainFrame)
M_JS_EXCUTE_STRING_OF_NO_PARAM(javaScriptContext)


- (NSString *)description
{
    return [self.excuteStrings componentsJoinedByString:@"."];
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
