//
//  NSObject+CreateCode.h
//  LotterySteward
//
//  Created by apple on 15/11/5.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^CreateViewClassBlock)(Class aClass);
typedef void (^CreateModelClassBlock)(NSObject *object);
extern NSString *const kML_CreateCodeFileType_h;
extern NSString *const kML_CreateCodeFileType_m;

@interface NSObject (CreateCode)
@property (nonatomic, copy) CreateViewClassBlock createViewClassBolck;
@property (nonatomic, copy) CreateModelClassBlock createModelClassBlock;
NSString * ML_create_ViewStringWithClass(Class aClass);

NSString * ML_create_PropertyStringWithClass(Class aClass);
NSString * ML_create_GetterMethodStringWithClass(Class aClass);
NSString * ML_create_LayoutStringWithClass(Class aClass);
NSString * ML_create_EventMothodString();
NSString * ML_create_InitStringWithClass(Class aClass);

NSString *  ML_create_HeaderFileOrCodeSourceFileWithClassAndFileType(NSString * className, NSString *fileType);

NSString * ML_create_ViewStringWithClassByFinishIsOutPutToDeskTop(Class aClass, BOOL isOutPutToDeskTop);
///生成h m文件
NSString * ML_create_HeaderFileAndCodeSourceFileOfViewWithClassByFinishIsOutPutToDeskTop(Class aClass, BOOL isOutPutToDeskTop, NSString *fileType);

NSString * ML_create_ModelFileToDeskTopWithJSON_className(id JSON, NSString *className);

///xib
NSString * ML_create_XibViewHelperWithClass(Class aClass);
NSString * ML_create_XibViewInitHelperByFinishIsOutPutToDeskTop(Class aClass , BOOL isOutputToDeskTop);

@end
