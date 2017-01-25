//
//  NSObject+CreateCode.h
//  LotterySteward
//
//  Created by apple on 15/11/5.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface ml_createCodeModel:NSObject
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

@property (nonatomic, copy, readonly) NSString *fileName;
@property (nonatomic, copy) NSString *typedefString;
@property (nonatomic, copy) NSString *classDeclearString;
//更多设置
@property (nonatomic, copy) NSString *categoryName;

/**
 生成h m文件

 @param className 该类类名
 @param superclassName 该类父类
 @param hFileImportFileNames h文件要import的file名
 @param hFileContentString h文件的内容
 @param mFileImportFileNames m文件要import的file名
 @param mFileContentString m文件要import的内容
 @param moreConfigBlock 更多设置
 @return <#return value description#>
 */
+ (instancetype)modelWithClassName:(NSString *)className
                    superclassName:(NSString *)superclassName
              hFileImportFileNames:(NSArray *)hFileImportFileNames
                hFileContentString:(NSString *)hFileContentString
              mFileImportFileNames:(NSArray *)mFileImportFileNames
                mFileContentString:(NSString *)mFileContentString
                        moreConfig:(void(^)(ml_createCodeModel *modelOfSelf))moreConfigBlock;

@end


extern NSString *const kML_CreatCodeFileType_h;
extern NSString *const kML_CreatCodeFileType_m;

@interface NSObject (CreateCode)


//未完成
+ (NSString *)ml_createPropertyStringWithClass:(Class)aClass;

#pragma mark - ========= View =========
+ (NSString *)ml_createViewCodeWithClass:(Class)aClass;
+ (NSString *)ml_createViewCodeWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop;

+ (NSString *)ml_createInitStringWithClass:(Class)aClass;
+ (NSString *)ml_createLayoutStringWithClass:(Class)aClass;
+ (NSString *)ml_createEventMothodString;
+ (NSString *)ml_createGetterMethodStringWithClass:(Class)aClass;


#pragma mark - ========= Xib =========
+ (NSString *)ml_createXibViewInitHelperWithClass:(Class)aClass;
+ (NSString *)ml_createXibViewInitHelperWithClass:(Class)aClass isOutPutToDeskTop:(BOOL)isOutPutToDeskTop;

#pragma mark - ========= Method =========
/**
 *  根据JSON和类名生成h m文件
 *
 *  @param JSON      <#JSON description#>
 *  @param className <#className description#>
 */
+ (NSString *)ml_createModelFileToDeskTopWithJSON:(id)JSON className:(NSString *)className;

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
