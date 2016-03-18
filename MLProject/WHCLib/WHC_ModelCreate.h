//
//  WHC_ModelCreate.h
//  WHC_DataModelFactory
//
//  Created by 妙龙赖 on 15/12/20.
//  Copyright © 2015年 吴海超. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WHC_XMLParser.h"
#import <objc/runtime.h>

#define kWHC_DEFAULT_CLASS_NAME @("WHC")
#define kWHC_CLASS       @("\n@interface %@ :NSObject\n%@\n@end\n")
#define kWHC_PROPERTY(s)    ((s) == 'c' ? @("@property (nonatomic , copy) %@              * %@;\n") : @("@property (nonatomic , strong) %@              * %@;\n"))
#define kWHC_CLASS_M     @("@implementation %@\n\n@end\n")


#define kSWHC_CLASS @("\n@objc(%@)\nclass %@ :NSObject{\n%@\n}")
#define kSWHC_PROPERTY @("var %@: %@!;\n")
@interface WHC_ModelCreate : NSObject
@property (nonatomic, strong) NSMutableString *classString;
@property (nonatomic, strong) NSMutableString *classMString;
@property (nonatomic, copy) NSString *isOC;
- (void)initConfig;
- (void)createClassStringWithJSONString:(id)JSONString  className:(NSString *)className;
+ (void)createClassStringWithJSONString:(id)JSONString  className:(NSString *)className;

@end
