



//
//  UICollectionView+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UICollectionView+ML_Tools.h"

@implementation UICollectionView (ML_Tools)
#pragma mark - ========= Class For Cell =========
- (void)ml_registerClassForCellWithNameOrClass:(id)nameOrClass
{
    [self ml_registerClassForCellWithNameOrClasses:@[nameOrClass, nameOrClass]];
}
- (void)ml_registerClassForCellWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerClassForCellWithDictionary:@{nameOrClasses[0]:nameOrClasses[0]}];
    }
   
}
- (void)_ml_registerClassForCellWithDictionary:(NSDictionary *)dictionary
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerClassWithNameOrClass:value forCellReuseIdentifier:key];
    }
}

#pragma mark - ========= Nib For Cell =========

- (void)ml_registerNibForCellWithNameOrClass:(id)nameOrClass
{
    [self ml_registerNibForCellWithNameOrClasses:@[nameOrClass, nameOrClass]];
}
- (void)ml_registerNibForCellWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerNibForCellWithDictionary:@{nameOrClasses[0]:nameOrClasses[0]}];
    }
    
}
- (void)_ml_registerNibForCellWithDictionary:(NSDictionary *)dictionary
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerNibWithNameOrClass:value forCellReuseIdentifier:key];
    }
}
#pragma mark - ========= Class For HeaderFooterView =========
- (void)ml_registerClassForSupplementaryViewWithNameOrClass:(id)nameOrClass forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    [self ml_registerClassForSupplementaryViewWithNameOrClasses:@[nameOrClass] forSupplementaryViewOfKind:supplementaryViewOfKind];
}
- (void)ml_registerClassForSupplementaryViewWithNameOrClasses:(NSArray *)nameOrClasses forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerClassForSupplementaryViewWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]} forSupplementaryViewOfKind:supplementaryViewOfKind];
    }
    
}
- (void)_ml_registerClassForSupplementaryViewWithDictionary:(NSDictionary *)dictionary forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerClassWithNameOrClass:value forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:key];
    }
}
#pragma mark - ========= Nib For HeaderFooterView =========
- (void)ml_registerNibForSupplementaryViewWithNameOrClass:(id)nameOrClass forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    [self ml_registerNibForSupplementaryViewWithNameOrClasses:@[nameOrClass] forSupplementaryViewOfKind:supplementaryViewOfKind];
}
- (void)ml_registerNibForSupplementaryViewWithNameOrClasses:(NSArray *)nameOrClasses forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerNibForSupplementaryViewWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]} forSupplementaryViewOfKind:supplementaryViewOfKind];
    }
    
}
- (void)_ml_registerNibForSupplementaryViewWithDictionary:(NSDictionary *)dictionary forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerNibWithNameOrClass:value forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:key];
    }
}

#pragma mark - ========= 注册 =========
- (void)_ml_registerClassWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier
{
    
    
    Class cellClass;
    if (object_isClass(nameOrClass)) {
        
        cellClass = nameOrClass;
        
    }else if ([nameOrClass isKindOfClass:[NSString class]]){
        cellClass = NSClassFromString(nameOrClass);
    }
    
    if (object_isClass(identifier)) {
        identifier = NSStringFromClass((Class)identifier);
    }
        [self checkClassIsExisted:cellClass className:identifier];
    [self registerClass:cellClass forCellWithReuseIdentifier:identifier];
}

- (void)_ml_registerNibWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else if(object_isClass(nameOrClass))
    {
        nibName = NSStringFromClass(nameOrClass);
    }
       [self checkNibWithName:nibName];
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forCellWithReuseIdentifier:identifier];
 
}



- (void)_ml_registerClassWithNameOrClass:(id)nameOrClass
              forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
                     withReuseIdentifier:(NSString *)identifier
{
    Class cellClass;
    if (object_isClass(nameOrClass)) {
        
        cellClass = nameOrClass;
        
    }else if ([nameOrClass isKindOfClass:[NSString class]]){
        cellClass = NSClassFromString(nameOrClass);
    }
    
    if (object_isClass(identifier)) {
        identifier = NSStringFromClass((Class)identifier);
    }
        [self checkClassIsExisted:cellClass className:identifier];
    [self registerClass:cellClass forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:identifier];
   
}


- (void)_ml_registerNibWithNameOrClass:(id)nameOrClass          forSupplementaryViewOfKind:(NSString *)supplementaryViewOfKind
                   withReuseIdentifier:(NSString *)identifier
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else
    {
        nibName = NSStringFromClass(nameOrClass);
    }
      [self checkNibWithName:nibName];
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:identifier];
}
#pragma mark - ========= Check NibFile And Class =========
- (void)checkNibWithName:(NSString *)nibName
{
    
    NSString *path = [[NSBundle mainBundle] pathForResource:nibName ofType:@"nib"];
    BOOL isExisted;
    if (path) {
        isExisted = YES;
    }
    else{
        isExisted = NO;
    }
    if (isExisted == NO) {
        NSException *exception = [NSException exceptionWithName:@"nib不存在" reason:[NSString stringWithFormat:@"%@.nib文件不存在", nibName] userInfo:nil];
        @throw exception;
    }
    
    
}
- (void)checkClassIsExisted:(Class)class className:(NSString *)className
{
    
    if (class == nil) {
        
        NSException *exception = [NSException exceptionWithName:@"cell类不存在"  reason:[NSString stringWithFormat:@"%@类不存在", className] userInfo:nil];
        @throw exception;
    }
}
@end
