



//
//  UICollectionView+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/19.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UICollectionView+ML_Tools.h"

@implementation UICollectionView (ML_Tools)

- (void)ML_registerClassAndCellReuseIdentifierWithArray:(NSArray *)array
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        NSString *className;
        if ([cellNameOrClass isKindOfClass:[NSString class]]) {
            className = cellNameOrClass;
        }
        else
        {
            className = NSStringFromClass(cellNameOrClass);
        }
        [self ML_registerClassAndCellReuseIdentifierWithDictionary:@{className:className}];
    }
}
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithArray:(NSArray *)array supplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        NSString *className;
        if ([cellNameOrClass isKindOfClass:[NSString class]]) {
            className = cellNameOrClass;
        }
        else
        {
            className = NSStringFromClass(cellNameOrClass);
        }
        [self ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:@{className:className} supplementaryViewOfKind:supplementaryViewOfKind];
    }
}
- (void)ML_registerClassAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        Class cellClass;
        if ([classValue isKindOfClass:[NSString class]]) {
            cellClass = NSClassFromString(classValue);
        }
        else
        {
            cellClass = classValue;
        }
        [self registerClass:cellClass forCellWithReuseIdentifier:reuseID];
    }
}
- (void)ML_registerClassAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary supplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        Class cellClass;
        if ([classValue isKindOfClass:[NSString class]]) {
            cellClass = NSClassFromString(classValue);
        }
        else
        {
            cellClass = classValue;
        }
        
        [self registerClass:cellClass forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:reuseID];
    }
}
- (void)ML_registerNibAndCellReuseIdentifierWithArray:(NSArray *)array
{
    
    for (NSInteger i = 0; i < array.count; i++) {
        id cellNameOrClass = array[i];
        NSString *className;
        if ([cellNameOrClass isKindOfClass:[NSString class]]) {
            className = cellNameOrClass;
        }
        else
        {
            className = NSStringFromClass(cellNameOrClass);
        }
        [self ML_registerNibAndCellReuseIdentifierWithDictionary:@{className:className}];
    }
}
- (void)ML_registerNibAndCellReuseIdentifierWithDictionary:(NSDictionary *)dictionary
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        Class cellClass;
        if ([classValue isKindOfClass:[NSString class]]) {
            cellClass = NSClassFromString(classValue);
        }
        else
        {
            cellClass = classValue;
        }
        [self ML_registerNibWithNameOrClass:cellClass forCellReuseIdentifier:reuseID];
    }
}
- (void)ML_registerNibAndHeaderFooterViewReuseIdentifierWithDictionary:(NSDictionary *)dictionary supplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    for (NSString *reuseID in [dictionary allKeys]) {
        id classValue = [dictionary valueForKey:reuseID];
        Class cellClass;
        if ([classValue isKindOfClass:[NSString class]]) {
            cellClass = NSClassFromString(classValue);
        }
        else
        {
            cellClass = classValue;
        }
        [self ML_registerNibWithNameOrClass:cellClass forHeaderFooterViewReuseIdentifier:reuseID supplementaryViewOfKind:supplementaryViewOfKind];
    }
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
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forCellWithReuseIdentifier:identifier];
  
}
- (void)ML_registerNibWithNameOrClass:(id)nameOrClass forHeaderFooterViewReuseIdentifier:(NSString *)identifier supplementaryViewOfKind:(NSString *)supplementaryViewOfKind
{
    NSString *nibName;
    if ([nameOrClass isKindOfClass:[NSString class]]) {
        nibName = nameOrClass;
    }
    else
    {
        nibName = NSStringFromClass(nameOrClass);
    }
    [self registerNib:[UINib nibWithNibName:nibName bundle:nil] forSupplementaryViewOfKind:supplementaryViewOfKind withReuseIdentifier:identifier];
}
@end
