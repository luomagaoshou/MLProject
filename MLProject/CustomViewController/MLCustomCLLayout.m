
//
//  MLCustomCLLayout.m
//  MLProject
//
//  Created by xunke01 on 16/7/22.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLCustomCLLayout.h"

@implementation MLCustomCLLayout
- (UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath
{
    UICollectionViewLayoutAttributes *attributes = [[super layoutAttributesForItemAtIndexPath:indexPath] copy];
    CGRect frame = attributes.frame;
    frame.origin.x += [UIScreen mainScreen].bounds.size.width * indexPath.row;
    attributes.frame = frame;
    return attributes;
}
- (NSArray<UICollectionViewLayoutAttributes *> *)layoutAttributesForElementsInRect:(CGRect)rect
{
    
    NSMutableArray *attributes = (NSMutableArray *)[super layoutAttributesForElementsInRect:rect];
    for (NSInteger i = 0; i < attributes.count; i++) {
        UICollectionViewLayoutAttributes *attr = attributes[i];
        NSLog(@"%@ -- %@", attr.representedElementKind, attr.representedElementCategory);
        if ([attr.representedElementKind isEqualToString:@"UICollectionElementKindCell"]) {
            UICollectionViewLayoutAttributes *newAttr = [self layoutAttributesForItemAtIndexPath:attr.indexPath];
            [attributes removeObjectAtIndex:i];
            [attributes insertObject:newAttr atIndex:i];
        }
    }
    
    return attributes;
}
@end