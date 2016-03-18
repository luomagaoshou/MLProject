//
//  UICollectionView+Multiselect.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/15.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UICollectionView+Multiselect.h"

@implementation UICollectionView (Multiselect)

- (void)addMultiSelectedIndexPath:(NSIndexPath *)indexPath
{
    [self.multiSelectedIndexPaths addObject:indexPath];
    if (self.selectedCellConfig) {
        id cell = [self cellForItemAtIndexPath:indexPath];
        self.selectedCellConfig(indexPath, cell);
    }
}
- (void)removeMultiSelectedIndexPath:(NSIndexPath *)indexPath
{
    if ([self.multiSelectedIndexPaths containsObject:indexPath]) {
        [self.multiSelectedIndexPaths removeObject:indexPath];
        if (self.deselectedConfig) {
              id cell = [self cellForItemAtIndexPath:indexPath];
            self.deselectedConfig(indexPath, cell);
        }
    }
}

- (void)autoHandleMultiSelectedIndexPath:(NSIndexPath *)indexPath
{
    if ( [self.multiSelectedIndexPaths containsObject:indexPath]) {
        [self removeMultiSelectedIndexPath:indexPath];
    }
    else{
        if (self.multiSelectedIndexPaths.count < self.maxMultiSelectedIndexPath) {
             [self addMultiSelectedIndexPath:indexPath];
        }
       
    }
}
- (void)setSelectedItemConfig:(void (^)(NSIndexPath *indexPath, UICollectionViewCell * selectedCell))selectedConfig deselectedItemConfig:(void (^)(NSIndexPath *indexPath, UICollectionViewCell * deselectedCell))deselectedConfig
{
    self.selectedCellConfig = selectedConfig;
    self.deselectedConfig = deselectedConfig;
}

#pragma mark - ========= Setter & Getter =========

- (void)setMultiSelectedIndexPaths:(NSMutableSet *)multiSelectedIndexPaths
{
    
    objc_setAssociatedObject(self, @selector(multiSelectedIndexPaths), multiSelectedIndexPaths, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
}
- (NSMutableArray *)multiSelectedIndexPaths
{
    if (!objc_getAssociatedObject(self, @selector(multiSelectedIndexPaths))) {
        NSMutableArray *indexPaths = [[NSMutableArray alloc] init];
        self.multiSelectedIndexPaths = indexPaths;
    }
    return objc_getAssociatedObject(self, @selector(multiSelectedIndexPaths));
}
- (void)setMaxMultiSelectedIndexPath:(NSInteger)maxMultiSelectedIndexPath
{
    objc_setAssociatedObject(self, @selector(maxMultiSelectedIndexPath), @(maxMultiSelectedIndexPath), OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (NSInteger)maxMultiSelectedIndexPath
{
    if (!objc_getAssociatedObject(self, @selector(maxMultiSelectedIndexPath))) {
        self.maxMultiSelectedIndexPath = HUGE_VAL;

    }
    
        return [objc_getAssociatedObject(self, @selector(maxMultiSelectedIndexPath)) integerValue];
    
}
- (void)setSelectedCellConfig:(void (^)(NSIndexPath * ,UICollectionViewCell *))selectedCellConfig
{
    objc_setAssociatedObject(self, @selector(selectedCellConfig), selectedCellConfig, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (void (^)(NSIndexPath *, UICollectionViewCell *))selectedCellConfig
{
    return objc_getAssociatedObject(self, @selector(selectedCellConfig));
}
- (void)setDeselectedConfig:(void (^)(NSIndexPath *, UICollectionViewCell *))deselectedConfig
{
    objc_setAssociatedObject(self, @selector(deselectedConfig), deselectedConfig, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (void (^)(NSIndexPath *, UICollectionViewCell *))deselectedConfig
{
    return objc_getAssociatedObject(self, @selector(deselectedConfig));
}
@end
