//
//  UIView+CellXib.h
//  LotteryStraightTrain
//
//  Created by apple on 15/12/18.
//  Copyright © 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+Xib.h"
@protocol TouchDelegate<NSObject>
@required

@end
@interface UIView (CellXib)

+ (void)setReuseIDDictionary:(NSDictionary *)reuseIDDictionary;

+ (NSDictionary *)reuseIDDictionary;
/**
 *重写了touch方法
 */
- (void)setupSelfNameCellXibOnSelf;
- (void)setupSelfNameCellXibOnSelfWithReuseIDDictionary:(NSDictionary *)reuseIDDictionary;
/**
 *  无法触点事件,把containerView移到下面，如果有button，亦需将button移动上层 
 */
- (void)setupSelfNameCollectionViewCellXibOnSelf;

@end
