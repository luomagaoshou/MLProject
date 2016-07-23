
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
    if (self.scrollDirection == UICollectionViewScrollDirectionHorizontal) {
            CGRect frame = attributes.frame;
            frame.origin.y += 64;
            attributes.frame = frame;
    }

    return attributes;
}
- (NSArray<UICollectionViewLayoutAttributes *> *)layoutAttributesForElementsInRect:(CGRect)rect
{
    
    NSMutableArray *attributes = (NSMutableArray *)[super layoutAttributesForElementsInRect:rect];
   
       if (self.scrollDirection == UICollectionViewScrollDirectionHorizontal) {
    for (NSInteger i = 0; i < attributes.count; i++) {
        UICollectionViewLayoutAttributes *attr = attributes[i];
        NSLog(@"%@ -- %@", attr.representedElementKind, [attr valueForKeyPath:@"_elementKind"]);
        if ([[attr valueForKeyPath:@"_elementKind"] isEqualToString:@"UICollectionElementKindCell"]) {
            UICollectionViewLayoutAttributes *newAttr = [self layoutAttributesForItemAtIndexPath:attr.indexPath];
            [attributes removeObjectAtIndex:i];
            [attributes insertObject:newAttr atIndex:i];
        }
    }
        }
    return attributes;
}
@end
