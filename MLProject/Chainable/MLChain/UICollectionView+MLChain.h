//  
//  UICollectionView+MLChain.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UICollectionView.h"



@interface UICollectionView(MLChain)
+ (MLChain4UICollectionView *)mlc_make;

- (MLChain4UICollectionView *)mlc_make;

+ (MLChain4UICollectionView *)mlc_makeConfigs:(void(^)(MLChain4UICollectionView *maker))block;

- (MLChain4UICollectionView *)mlc_makeConfigs:(void(^)(MLChain4UICollectionView *maker))block;


@end
