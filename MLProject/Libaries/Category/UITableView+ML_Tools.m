
//
//  UITableView+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/10/23.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UITableView+ML_Tools.h"

@implementation UITableView (ML_Tools)
#pragma mark - ========= Class For Cell =========

- (void)ml_registerClassForCellWithNameOrClass:(id)nameOrClass
{
    [self ml_registerClassForCellWithNameOrClasses:@[nameOrClass]];
}
- (void)ml_registerClassForCellWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerClassForCellWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]}];
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
    [self ml_registerNibForCellWithNameOrClasses:@[nameOrClass]];
}

- (void)ml_registerNibForCellWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerNibForCellWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]}];
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

- (void)ml_registerClassForHeaderFooterViewWithNameOrClass:(id)nameOrClass
{
    [self ml_registerClassForHeaderFooterViewWithNameOrClasses:@[nameOrClass]];
}
- (void)ml_registerClassForHeaderFooterViewWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerClassForCellWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]}];
    }
}
- (void)_ml_registerClassForHeaderFooterViewWithDictionary:(NSDictionary *)dictionary
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerClassWithNameOrClass:value forHeaderFooterViewReuseIdentifier:key];
        
    }
}

#pragma mark - ========= Nib For HeaderFooterView =========
- (void)ml_registerNibForHeaderFooterViewWithNameOrClass:(id)nameOrClass
{
    [self ml_registerNibForHeaderFooterViewWithNameOrClasses:@[nameOrClass]];
}
- (void)ml_registerNibForHeaderFooterViewWithNameOrClasses:(NSArray *)nameOrClasses
{
    for (NSInteger i = 0; i < nameOrClasses.count; i++) {
        [self _ml_registerNibForCellWithDictionary:@{nameOrClasses[i]:nameOrClasses[i]}];
    }
}
- (void)_ml_registerNibForHeaderFooterViewWithDictionary:(NSDictionary *)dictionary
{
    for (NSInteger i = 0; i < dictionary.count; i++) {
        id key = dictionary.allKeys[i];
        id value = dictionary.allValues[i];
        [self _ml_registerNibWithNameOrClass:value forHeaderFooterViewReuseIdentifier:key];
        
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
    [self registerClass:cellClass forCellReuseIdentifier:identifier];
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
       UINib *nib = [UINib nibWithNibName:nibName bundle:nil];
    [self registerNib:nib forCellReuseIdentifier:identifier];
}



- (void)_ml_registerClassWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier
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
    [self registerClass:cellClass forHeaderFooterViewReuseIdentifier:identifier];
}


- (void)_ml_registerNibWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else if ([nameOrClass isKindOfClass:[NSString class]]){
    
        nibName = NSStringFromClass(nameOrClass);
    }
    [self checkNibWithName:nibName];
    UINib *nib = [UINib nibWithNibName:nibName bundle:nil];
    [self registerNib:nib forHeaderFooterViewReuseIdentifier:identifier];
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
