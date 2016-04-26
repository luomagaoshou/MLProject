//
//  NSObject+CreateCode.m
//  LotterySteward
//
//  Created by apple on 15/11/5.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSObject+CreateCode.h"
#import "NSObject+RunTimeHelper.h"
#import "NSString+ML_Tools.h"
#import "NSFileManager+ML_Tools.h"
#import <MJExtension/MJExtension.h>
#import "WHC_ModelCreate.h"
#import "NSDate+ML_Tools.h"
NSString *const kML_CreateCodeFileType_h = @"h";
NSString *const kML_CreateCodeFileType_m = @"m";
#define DESK_TOP_DIR @"XcodeCreateCode"
static const char *externViewClassBolckKey;
static const char *externModelClassBolckKey;
@implementation NSObject (CreateCode)
@dynamic createViewClassBolck;
@dynamic createModelClassBlock;

NSString * ML_create_ViewStringWithClass(Class aClass)
{
   return ML_create_ViewStringWithClassByFinishIsOutPutToDeskTop(aClass, NO);
}

NSString * ML_create_ModelFileToDeskTopWithJSON_className(id JSON, NSString *className)
{
    
    WHC_ModelCreate *creater = [[WHC_ModelCreate alloc] init];
    if ([JSON isKindOfClass:[NSDictionary class]]) {
      JSON =  [NSJSONSerialization dataWithJSONObject:JSON options:kNilOptions error:nil];
      
        JSON = [[NSString alloc] initWithData:JSON encoding:NSUTF8StringEncoding];
    }
    [creater createClassStringWithJSONString:JSON className:className];
    
    NSString *headerPreStr = ML_create_HeaderFileOrCodeSourceFileWithClassAndFileType(className, @"h");
  
     NSString *headerTotalStr = [NSString stringWithFormat:@"%@\n%@\n",headerPreStr, creater.classString];

    
     NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
      [[NSFileManager defaultManager] writefileString:headerTotalStr ToFileWithDiretory:XcodeCreateCodeDirectory fileName:className fileType:@"h" moveToTrashWhenFileExists:YES];
    
     NSString *codeSourcePreStr = ML_create_HeaderFileOrCodeSourceFileWithClassAndFileType(className, @"m");
    
    NSString *codeSourcetotalStr = [NSString stringWithFormat:@"%@\n%@\n",codeSourcePreStr,  creater.classMString];
    

      [[NSFileManager defaultManager] writefileString:codeSourcetotalStr ToFileWithDiretory:XcodeCreateCodeDirectory fileName:className fileType:@"m" moveToTrashWhenFileExists:YES];

    return nil;
    
    
}

NSString * ML_create_HeaderFileAndCodeSourceFileOfViewWithClassByFinishIsOutPutToDeskTop(Class aClass, BOOL isOutPutToDeskTop, NSString *fileType)
{
    
   NSString *preStr = ML_create_HeaderFileOrCodeSourceFileWithClassAndFileType(NSStringFromClass(aClass), fileType);
   
    
    NSString *totalStr = [NSString stringWithFormat:@"%@@implementation %@\n\n%@@end\n",preStr, NSStringFromClass(aClass), ML_create_ViewStringWithClass(aClass)];
    
   
    
    NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
      [[NSFileManager defaultManager] writefileString:totalStr ToFileWithDiretory:XcodeCreateCodeDirectory fileName:NSStringFromClass(aClass) fileType:fileType moveToTrashWhenFileExists:YES];
    return totalStr;
}

NSString * ML_create_ViewStringWithClassByFinishIsOutPutToDeskTop(Class aClass, BOOL isOutPutToDeskTop)
{
    NSMutableString *viewString = [[NSMutableString alloc] init];
   // [viewString appendString:@"==========Begining=========\n\n\n\n\n"];
    [viewString appendString:ML_create_InitStringWithClass(aClass)];
    [viewString appendString:ML_create_LayoutStringWithClass(aClass)];
    [viewString appendString:ML_create_EventMothodString()];
    [viewString appendString:ML_create_GetterMethodStringWithClass(aClass)];
    //[viewString appendString:@"\n\n\n\n\n==========Ending========"];
    NSLog(@"%@", viewString);
   
        
    if (isOutPutToDeskTop) {
          NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
        [[NSFileManager defaultManager] writefileString:viewString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:NSStringFromClass(aClass) fileType:@"txt" moveToTrashWhenFileExists:YES];
    }
    
    
    
    
    return viewString;
}


NSString * ML_create_PropertyStringWithClass(Class aClass)
{
 
    NSArray *attrs = [aClass getPropertyAttributeList];
         NSMutableString *createString = [[NSMutableString alloc] init];
    [createString appendString:@"#pragma mark - ========= Setter & Getter =========\n"];
    for (NSInteger i = 0; i < attrs.count; i++) {
        
        [createString appendString:@"@property"];
        [createString appendString:@" "];
        [createString appendString:@"("];
        
        if ([attrs[i][3] isEqualToString:@"N"]) {
            [createString appendString:@"nonatomic"];
        }
        else if ([attrs[i][3] isEqualToString:@"A"])
        {
            [createString appendString:@"(atomic"];

        }
       [createString appendString:@","];
        [createString appendString:@" "];
        
        
        if ([attrs[i][2] isEqualToString:@"C"]) {
            [createString appendString:@"copy"];
        }
        if ([attrs[i][2] isEqualToString:@"&"]) {
            [createString appendString:@"strong"];
        }
        [createString appendString:@")"];
        [createString appendString:@" "];
        
        [createString appendString:attrs[i][1]];
        [createString appendString:@" "];
        [createString appendString:@"*"];
        [createString appendString:[attrs[i] lastObject]];
        [createString appendString:@";"];
        
        [createString appendString:@"\n"];
    }
    NSLog(@"%@", createString);
    return createString;
}


NSString * ML_create_InitStringWithClass(Class aClass)
{
    NSMutableString *mutStr = [[NSMutableString alloc] init];
    if ([aClass isSubclassOfClass:[UITableViewCell class]]) {
        
        [mutStr appendString:@"- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier\n{\n\n"];
         [mutStr appendString:@"self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];\n"];
    }
    else if ([aClass isSubclassOfClass:[UIView class]]){
        [mutStr appendString:@"- (instancetype)initWithFrame:(CGRect)frame\n{\n\nself = [super initWithFrame:frame];\n"];
         
    }
   
    [mutStr appendString:@"if (self) {\n"];
    NSArray *properties = [aClass getPropertyList];
    for (NSInteger i = 0; i < properties.count; i++) {
        [mutStr appendString:[NSString stringWithFormat:@"[self addSubview:self.%@];\n", properties[i]]];
    }
    
    
    [mutStr appendString:@"\n}\n\n\nreturn self;\n}\n\n"];
    return mutStr;
}

NSString * ML_create_LayoutStringWithClass(Class aClass)
{
   
    NSMutableString *mutStr = [[NSMutableString alloc] init];
    [mutStr appendString:@"#pragma mark - ========= LayoutSubviews =========\n"];
 
    [mutStr appendString:@"- (void)layoutSubviews\n{\n"];
       NSArray *properties = [aClass getPropertyList];
    for (NSInteger i = 0; i < properties.count; i++) {
        [mutStr appendString:[NSString stringWithFormat:@"//self.%@.frame = CGRectMake(<#CGFloat x#>, <#CGFloat y#>, <#CGFloat width#>, <#CGFloat height#>);\n",properties[i]]];
    }
    
    [mutStr appendString:@"\n}\n\n"];
    return mutStr;
}
NSString * ML_create_EventMothodString()
{
    NSMutableString *mutStr = [[NSMutableString alloc] init];
    [mutStr appendString:@"#pragma mark - ========= Event Methods =========\n"];
    [mutStr appendString:@"- (void)clickEvent:(UIView *)sender\n{\n"];
    [mutStr appendString:@"NSLog(@\"%@\",sender.featureIdentifier);\n"];
    [mutStr appendString:@"\n}\n\n"];

    return mutStr;
}

NSString * ML_create_GetterMethodStringWithClass(Class aClass)
{
    NSArray *attrs = [aClass getPropertyAttributeList];
    NSMutableString *getterMethodString = [[NSMutableString alloc] init];
    for (NSInteger i = 0; i < attrs.count; i++) {
        [getterMethodString appendString:@"- ("];
        [getterMethodString appendString:attrs[i][1]];
        [getterMethodString appendString:@" *)"];
        
        [getterMethodString appendString:[attrs[i] lastObject]];
        [getterMethodString appendString:@"\n{\n"];
        [getterMethodString appendString:[NSString stringWithFormat:@"if(_%@ == nil){\n\n", [attrs[i] lastObject]]];
        [getterMethodString appendString:[NSString stringWithFormat:@"//_%@ = <#code#>\n", [attrs[i] lastObject]]];
        [getterMethodString appendString:@"\n}\n"];
        [getterMethodString appendString:[NSString stringWithFormat:@"return _%@;\n}\n",[attrs[i]lastObject]]];
         
    }
    return getterMethodString;
}
- (NSString *)ml_headerFileOrCodeSourceFileWithClassName:(NSString *)className fileType:(NSString *)fileType content:(NSString *)content
{
    
    NSString *fileName = [NSString stringWithFormat:@"%@.%@", className, fileType];
    
    NSDictionary *info = [[NSBundle mainBundle] infoDictionary];
    NSString *appName = [info valueForKey:@"CFBundleName"];
    
    NSString *dateStr = [NSDate getCurrentTimeWithtimeFormatter:@"yyyy/MM/dd"];
    NSString *createrName = @"赖妙龙";
    NSString *createDetailStr = [NSString stringWithFormat:@"Created by %@ on %@.",createrName, dateStr];
    
    NSString *yearStr = [NSDate getCurrentTimeWithtimeFormatter:@"yyyy"];
    NSString *companyName = @"myCompany";
    NSString *copyRightStr = [NSString stringWithFormat:@"Copyright © %@年 %@. All rights reserved.",yearStr, companyName];
    
    
    
    NSArray *fileDetails = @[@"",
                             fileName,
                             appName,
                             @"",
                             createDetailStr,
                             copyRightStr,
                             @""];
    NSMutableString *resultString = [[NSMutableString alloc] init];
    for (NSString *subStr in fileDetails) {
        [resultString appendFormat:@"//  %@\n", subStr];
        
        
    }
    [resultString appendString:@"\n"];
    NSString *importStr = [NSString stringWithFormat:@"#import \"%@.h\"\n", className];
    [resultString appendString:importStr];

    [resultString appendString:content];
    
    return resultString;
}
NSString *  ML_create_HeaderFileOrCodeSourceFileWithClassAndFileType(NSString * className, NSString *fileType)
{
    NSString *fileName = [NSString stringWithFormat:@"%@.%@", className, fileType];
    
    NSDictionary *info = [[NSBundle mainBundle] infoDictionary];
    NSString *appName = [info valueForKey:@"CFBundleName"];
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.timeZone = [NSTimeZone timeZoneForSecondsFromGMT:8];
    formatter.dateStyle = NSDateFormatterMediumStyle;
    formatter.timeStyle = NSDateFormatterShortStyle;
    [formatter setDateFormat:@"yyyy/MM/DD"];
    NSString *dateStr = [formatter stringFromDate:[NSDate date]];
    NSString *createrName = @"apple";
    NSString *createDetailStr = [NSString stringWithFormat:@"Created by %@ on %@.",createrName, dateStr];
    
    [formatter setDateFormat:@"yyyy"];
    NSString *yearStr = [formatter stringFromDate:[NSDate date]];
    NSString *companyName = @"myCompany";
    NSString *copyRightStr = [NSString stringWithFormat:@"Copyright © %@年 %@. All rights reserved.",yearStr, companyName];
    
  
    
    NSArray *fileDetails = @[@"",
                             fileName,
                             appName,
                             @"",
                             createDetailStr,
                             copyRightStr,
                             @""];
    NSMutableString *preStr = [[NSMutableString alloc] init];
    for (NSString *subStr in fileDetails) {
        [preStr appendFormat:@"//  %@\n", subStr];
        
        
    }
    [preStr appendString:@"\n"];
      NSString *importStr = [NSString stringWithFormat:@"#import \"%@.h\"\n", className];
    [preStr appendString:importStr];
    
    return preStr;
}
#pragma mark - ========= Xib =========

NSString * ML_create_XibViewInitHelperWithClass(Class aClass)
{
   return ML_create_XibViewInitHelperByFinishIsOutPutToDeskTop(aClass, NO);
}
NSString * ML_create_XibViewInitHelperByFinishIsOutPutToDeskTop(Class aClass , BOOL isOutputToDeskTop)
{
    NSArray *properties= [aClass getPropertyList];
    NSMutableString *initHelperString = [[NSMutableString alloc] init];
    
    NSString *layoutStr = ML_create_LayoutStringWithClass(aClass);
    [initHelperString appendString:layoutStr];
    

    NSString *helperHintStr = @"#pragma mark - ========= Xib View Init Helper =========\n\n";
        [initHelperString appendString:helperHintStr];
    
    NSMutableString *porpertyInitStr = [[NSMutableString alloc] init];
      for (NSInteger i = 0; i < properties.count; i++) {
          NSString *property = properties[i];
          NSString *upperFirstLetterString = [NSObject upperWriteFirstLetter:property];
          [porpertyInitStr appendFormat:@"[self init%@];\n", upperFirstLetterString];
      }
    NSString *commitInitStr = [NSString stringWithFormat:@"- (void)commitInit{\n\n%@\n\n}\n\n", porpertyInitStr];
    [initHelperString appendString:commitInitStr];
    
    

    for (NSInteger i = 0; i < properties.count; i++) {
        
        NSString *property = properties[i];
        NSString *upperFirstLetterString = [NSObject upperWriteFirstLetter:property];
        
        [initHelperString appendFormat:@"- (void)init%@\n", upperFirstLetterString];
        
       // NSString *containerViewStr = [NSString stringWithFormat:@"%@ *cell = (%@ *)[self containerView];\n//cell.%@ = <#code#>",NSStringFromClass(aClass), NSStringFromClass(aClass),property];
        
        
        [initHelperString appendFormat:@"{\n\n//self.%@ = <#code#>\n\n\n}\n\n", property];
        
     
        
    }
    
    if (isOutputToDeskTop) {
        
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:DESK_TOP_DIR];
        [[NSFileManager defaultManager] writefileString:initHelperString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:NSStringFromClass(aClass) fileType:@"txt" moveToTrashWhenFileExists:YES];
    }
    return initHelperString;
}


#pragma mark - ========= Helper Methods =========
+ (NSString *)upperWriteFirstLetter:(NSString *)string
{
    NSString *firstChar = [string substringWithRange:NSMakeRange(0, 1)];
    firstChar = [firstChar uppercaseString];
    NSString* upperWriteFirstLetter = [NSString stringWithFormat:@"%@%@", firstChar, [string substringWithRange:NSMakeRange(1, string.length -1)]];
    return upperWriteFirstLetter;
}

#pragma mark - ========= Setter & Getter =========
- (void)setCreateViewClassBolck:(CreateViewClassBlock)createViewClassBolck
{
    objc_setAssociatedObject(self, &externViewClassBolckKey, createViewClassBolck, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CreateViewClassBlock)createViewClassBolck
{

    return objc_getAssociatedObject(self, &externViewClassBolckKey);
}
- (void)setCreateModelClassBlock:(CreateModelClassBlock)createModelClassBlock
{
    objc_setAssociatedObject(self, &externModelClassBolckKey, createModelClassBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CreateModelClassBlock)createModelClassBlock
{
    return objc_getAssociatedObject(self, &externModelClassBolckKey);
}
@end
