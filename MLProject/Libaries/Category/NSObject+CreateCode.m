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
#import "NSBundle+ML_Tools.h"

@implementation ML_CreateCodeModel
+ (instancetype)modelWithClassName:(NSString *)className
                    superclassName:(NSString *)superclassName
              hFileImportFileNames:(NSArray *)hFileImportFileNames
                hFileContentString:(NSString *)hFileContentString
              mFileImportFileNames:(NSArray *)mFileImportFileNames
                mFileContentString:(NSString *)mFileContentString
                        moreConfig:(void (^)(ML_CreateCodeModel *))moreConfigBlock
{
    ML_CreateCodeModel *model = [[super alloc] init];
    model.className = className;
    model.superclassName = superclassName;
    model.hFileImportFileNames = hFileImportFileNames;
    model.hFileContentString = hFileContentString ? hFileContentString : @"" ;
    model.mFileImportFileNames = mFileImportFileNames;
    model.mFileContentString = mFileContentString ? mFileContentString : @"";
    
    if (moreConfigBlock) {
        moreConfigBlock(model);
    }
    
    return model;
}
#pragma mark - hFile
- (NSString *)hFileTopString
{
    NSString *fileName = self.className;
    if (self.categoryName) {
       fileName = [NSString stringWithFormat:@"%@+%@",self.className, self.categoryName];
    }
    
    return [NSObject ml_hFileOrMFileTopIntroduceWithClassName:fileName fileType:kML_CreateCodeFileType_h];
}
- (NSString *)hFileInterfaceString
{
    NSString *fileName = self.className;
    if (self.categoryName) {
        fileName = [NSString stringWithFormat:@"%@+%@",self.className, self.categoryName];
    }
    return [NSString stringWithFormat:@"@interface %@:%@", fileName, self.superclassName];
}
- (NSString *)hFileImportString
{
    NSMutableArray *importFileNames = [[NSMutableArray alloc] init];
   
    if (![self.hFileImportFileNames containsObject:self.superclassName]) {
        if ([NSBundle isSystemClass:NSClassFromString(self.superclassName)]) {
            [importFileNames addObject:[NSString stringWithFormat:@"#import \"%@.h\"", self.superclassName]];
        }
    }
    
    for (NSString *hFileName in self.hFileImportFileNames) {
        [importFileNames addObject:[NSString stringWithFormat:@"#import\"%@\"", hFileName]];
    }
    
    
    return [importFileNames componentsJoinedByString:@"\n"];
}
#pragma mark - mFile
- (NSString *)mFileTopString
{
    return [NSObject ml_hFileOrMFileTopIntroduceWithClassName:self.className fileType:kML_CreateCodeFileType_m];
}
- (NSString *)mFileImplementationString
{
    return [NSString stringWithFormat:@"@implementation %@", self.className];
}
- (NSString *)mFileImportString
{
    
    NSMutableArray *importFileNames = [[NSMutableArray alloc] init];
    if (![self.mFileImportFileNames containsObject:self.className]) {
        if ([NSBundle isSystemClass:NSClassFromString(self.className)]) {
            [importFileNames addObject:[NSString stringWithFormat:@"#import \"%@.h\"", self.className]];
        }
        
    }
    if (![self.mFileImportFileNames containsObject:self.superclassName]) {
        if ([NSBundle isSystemClass:NSClassFromString(self.superclassName)]) {
            [importFileNames addObject:[NSString stringWithFormat:@"#import \"%@.h\"", self.superclassName]];
        }
    }
    
    for (NSString *hFileName in self.mFileImportFileNames) {
        [importFileNames addObject:[NSString stringWithFormat:@"#import \"%@.h\"", hFileName]];
    }
    
    return [importFileNames componentsJoinedByString:@"\n"];
}

- (NSString *)endString
{
    return @"@end";
}
#pragma mark - resultString
- (NSString *)hFileResultString
{
    NSString *resultString = [NSString stringWithFormat:@"%@\n%@\n%@\n%@\n%@\n",
                              self.hFileTopString,
                              self.hFileImportString,
                              self.hFileInterfaceString,
                              self.hFileContentString,
                              self.endString];
    return resultString;
}
- (NSString *)mFileResultString
{
    NSString *resultString = [NSString stringWithFormat:@"%@\n%@\n%@\n%@\n%@\n",
                              self.mFileTopString,
                              self.mFileImportString,
                              self.mFileImplementationString,
                              self.mFileContentString,
                              self.endString];
    return resultString;
}

- (NSString *)fileName
{
    NSString *fileName = self.className;
    if (self.categoryName) {
        fileName = [NSString stringWithFormat:@"%@+%@", self.className, self.categoryName];
    }
    return fileName;
}
@end

NSString *const kML_CreateCodeFileType_h = @"h";
NSString *const kML_CreateCodeFileType_m = @"m";
#define DESK_TOP_DIR @"XcodeCreateCode"

@implementation NSObject (CreateCode)

+ (NSString *)ML_createViewCodeWithClass:(Class)aClass
{
    return [self ML_createViewCodeWithClass:aClass isOutPutToDeskTop:NO];
}
+ (NSString *)ML_createViewCodeWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop
{
    NSMutableString *viewString = [[NSMutableString alloc] init];
    // [viewString appendString:@"==========Begining=========\n\n\n\n\n"];
    [viewString appendString:[NSObject ML_createInitStringWithClass:aClass]];
    [viewString appendString:[NSObject ML_createLayoutStringWithClass:aClass]];
    [viewString appendString:[NSObject ML_createEventMothodString]];
    [viewString appendString:[NSObject ML_createGetterMethodStringWithClass:aClass]];
    //[viewString appendString:@"\n\n\n\n\n==========Ending========"];
    NSLog(@"%@", viewString);
    
    
    if (isOutPutToDeskTop) {
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
        [[NSFileManager defaultManager] writefileString:viewString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:NSStringFromClass(aClass) fileType:@"txt" moveToTrashWhenFileExists:YES];
    }
    
    
    return viewString;
}

+ (NSString *)ML_createModelFileToDeskTopWithJSON:(id)JSON className:(NSString *)className
{
    
    WHC_ModelCreate *creater = [[WHC_ModelCreate alloc] init];
    if ([JSON isKindOfClass:[NSDictionary class]]) {
        JSON =  [NSJSONSerialization dataWithJSONObject:JSON options:kNilOptions error:nil];
        
        JSON = [[NSString alloc] initWithData:JSON encoding:NSUTF8StringEncoding];
    }
    [creater createClassStringWithJSONString:JSON className:className];
    
    
    
    NSString *headerPreStr = [NSObject ml_hFileOrMFileTopIntroduceWithClassName:className fileType:kML_CreateCodeFileType_h];
    
    NSString *headerTotalStr = [NSString stringWithFormat:@"%@\n%@\n",headerPreStr, creater.classString];
    
    
    NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
    [[NSFileManager defaultManager] writefileString:headerTotalStr ToFileWithDiretory:XcodeCreateCodeDirectory fileName:className fileType:kML_CreateCodeFileType_h moveToTrashWhenFileExists:YES];
    
    NSString *codeSourcePreStr = [NSObject ml_hFileOrMFileTopIntroduceWithClassName:className fileType:kML_CreateCodeFileType_m];
    
    NSString *resultStr = [NSString stringWithFormat:@"%@\n%@\n",codeSourcePreStr,  creater.classMString];
    
    
    [[NSFileManager defaultManager] writefileString:resultStr ToFileWithDiretory:XcodeCreateCodeDirectory fileName:className fileType:kML_CreateCodeFileType_m moveToTrashWhenFileExists:YES];
    return resultStr;
}
+ (NSString *)ML_createHeaderFileAndCodeSourceFileOfViewWithClass:(Class)aClass fileType:(NSString *)fileType
{
    
    NSString *preStr = [NSObject ml_hFileOrMFileTopIntroduceWithClassName:NSStringFromClass(aClass) fileType:fileType];
   
    
    NSString *resultString = [NSString stringWithFormat:@"%@@implementation %@\n\n%@@end\n",preStr, NSStringFromClass(aClass), [NSObject ML_createViewCodeWithClass:aClass]];
    
   
    
    NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory]  stringByAppendingPathComponent:DESK_TOP_DIR];
      [[NSFileManager defaultManager] writefileString:resultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:NSStringFromClass(aClass) fileType:fileType moveToTrashWhenFileExists:YES];
    return resultString;
}


+ (NSString *)ML_createPropertyStringWithClass:(Class)aClass
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


+ (NSString *)ML_createInitStringWithClass:(Class)aClass
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

+ (NSString *)ML_createLayoutStringWithClass:(Class)aClass
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
+ (NSString *)ML_createEventMothodString
{
    NSMutableString *mutStr = [[NSMutableString alloc] init];
    [mutStr appendString:@"#pragma mark - ========= Event Methods =========\n"];
    [mutStr appendString:@"- (void)clickEvent:(UIView *)sender\n{\n"];
    [mutStr appendString:@"NSLog(@\"%@\",sender.featureIdentifier);\n"];
    [mutStr appendString:@"\n}\n\n"];

    return mutStr;
}

+ (NSString *)ML_createGetterMethodStringWithClass:(Class)aClass
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


+ (NSString *)ml_hFileOrMFileTopIntroduceWithClassName:(NSString *)className fileType:(NSString *)fileType
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
    
//    NSString *importStr = [NSString stringWithFormat:@"#import \"%@.h\"\n", className];
//    [resultString appendString:importStr];
    
    return resultString;
}


#pragma mark - ========= Xib =========
+ (NSString *)ML_createXibViewInitHelperWithClass:(Class)aClass
{
    return [self ML_createXibViewInitHelperWithClass:aClass isOutPutToDeskTop:NO];
}
+ (NSString *)ML_createXibViewInitHelperWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop
{
    NSArray *properties= [aClass getPropertyList];
    NSMutableString *initHelperString = [[NSMutableString alloc] init];
    
    NSString *layoutStr = [NSObject ML_createLayoutStringWithClass:aClass];
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
    
    if (isOutPutToDeskTop) {
        
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

@end
