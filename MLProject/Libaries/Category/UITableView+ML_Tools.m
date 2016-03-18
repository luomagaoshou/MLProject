//
//  UITableView+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/10/23.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UITableView+ML_Tools.h"

@implementation UITableView (ML_Tools)
//用数组注册
- (void)ML_registerClassAndCellReuseIdentifierWithArray:(NSArray *)array
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        [self ML_registerClassAndCellReuseIdentifierWithDictionary:@{cellNameOrClass:cellNameOrClass}];
        
    }
}
- (void)ML_registerNibAndCellReuseIdentifierWithArray:(NSArray *)array
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        [self ML_registerNibAndCellReuseIdentifierWithDictionary:@{cellNameOrClass:cellNameOrClass}];
        
    }
}
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];

        [self ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:@{cellNameOrClass:cellNameOrClass}];
        
    }
}
- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        
        [self ML_registerNibAndHeaderFooterViewReuseIdentifierWithDictionary:@{cellNameOrClass:cellNameOrClass}];
        
    }
}


//用字典注册
- (void)ML_registerClassAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        [self ML_registerClassAndCellReuseIdentifierWithNameOrClass:classValue forCellReuseIdentifier:reuseID];
    }
}

- (void)ML_registerNibAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        
        [self ML_registerNibWithNameOrClass:classValue forCellReuseIdentifier:reuseID];
    }
}
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
      
      

        [self ML_registerClassAndCellReuseIdentifierWithNameOrClass:classValue forHeaderFooterViewReuseIdentifier:reuseID];
    }
}

- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        [self ML_registerNibWithNameOrClass:classValue forHeaderFooterViewReuseIdentifier:reuseID];
    }
}


//注册
- (void)ML_registerClassAndCellReuseIdentifierWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier
{
    NSString *className;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        className = nameOrClass;
    }
    else
    {
        className = NSStringFromClass(nameOrClass);
    }
    [self registerClass:NSClassFromString(className) forCellReuseIdentifier:identifier];
}
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forCellReuseIdentifier:(NSString *)identifier
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else
    {
        nibName = NSStringFromClass(nameOrClass);
    }
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forCellReuseIdentifier:identifier];
}

- (void)ML_registerClassAndCellReuseIdentifierWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier
{
    NSString *className;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        className = nameOrClass;
    }
    else
    {
        className = NSStringFromClass(nameOrClass);
    }
    [self registerClass:NSClassFromString(className) forHeaderFooterViewReuseIdentifier:identifier];
}


- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else
    {
        nibName = NSStringFromClass(nameOrClass);
    }
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forHeaderFooterViewReuseIdentifier:identifier];
}


@end
