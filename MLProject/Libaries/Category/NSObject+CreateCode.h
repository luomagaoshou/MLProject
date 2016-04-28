//
//  NSObject+CreateCode.h
//  LotterySteward
//
//  Created by apple on 15/11/5.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ML_CreateCodeModel:NSObject
@property (nonatomic, copy) NSString *className;//
@property (nonatomic, copy) NSString *superclassName;//
@property (nonatomic, copy, readonly) NSString *endString;
//h文件
@property (nonatomic, copy, readonly) NSString *hFileTopString;
//添加除自身类及父类的头文件名
@property (nonatomic, copy) NSArray *hFileImportFileNames;//
@property (nonatomic, copy, readonly) NSString *hFileImportString;
@property (nonatomic, copy, readonly) NSString *hFileInterfaceString;
@property (nonatomic, copy) NSString *hFileContentString;//

//m文件
@property (nonatomic, copy, readonly) NSString *mFileTopString;
//添加除自身类及父类的头文件名
@property (nonatomic, copy) NSArray *mFileImportFileNames;//
@property (nonatomic, copy, readonly) NSString *mFileImportString;
@property (nonatomic, copy, readonly) NSString *mFileImplementationString;
@property (nonatomic, copy) NSString *mFileContentString;//

//结果
@property (nonatomic, copy, readonly) NSString *hFileResultString;
@property (nonatomic, copy, readonly) NSString *mFileResultString;

+ (instancetype)modelWithClassName:(NSString *)className
                    superclassName:(NSString *)superclassName
              hFileImportFileNames:(NSArray *)hFileImportFileNames
                hFileContentString:(NSString *)hFileContentString
              mFileImportFileNames:(NSArray *)mFileImportFileNames
                mFileContentString:(NSString *)mFileContentString;
@end


extern NSString *const kML_CreateCodeFileType_h;
extern NSString *const kML_CreateCodeFileType_m;

@interface NSObject (CreateCode)


//未完成
+ (NSString *)ML_createPropertyStringWithClass:(Class)aClass;

#pragma mark - ========= View =========
+ (NSString *)ML_createViewCodeWithClass:(Class)aClass;
+ (NSString *)ML_createViewCodeWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop;

+ (NSString *)ML_createInitStringWithClass:(Class)aClass;
+ (NSString *)ML_createLayoutStringWithClass:(Class)aClass;
+ (NSString *)ML_createEventMothodString;
+ (NSString *)ML_createGetterMethodStringWithClass:(Class)aClass;


#pragma mark - ========= Xib =========
+ (NSString *)ML_createXibViewInitHelperWithClass:(Class)aClass;
+ (NSString *)ML_createXibViewInitHelperWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop;

#pragma mark - ========= Method =========
/**
 *  根据JSON和类名生成h m文件
 *
 *  @param JSON      <#JSON description#>
 *  @param className <#className description#>
 */
+ (NSString *)ML_createModelFileToDeskTopWithJSON:(id)JSON className:(NSString *)className;

/**
 *  生成h或m文件的介绍
 *
 *  @param className 类名
 *  @param fileType  文件类型h或m
 *  @param content   内容
 *
 *  @return <#return value description#>
 */
+ (NSString *)ml_hFileOrMFileTopIntroduceWithClassName:(NSString *)className fileType:(NSString *)fileType;


@end
