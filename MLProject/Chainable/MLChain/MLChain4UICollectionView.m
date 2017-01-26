//  
//  MLChain4UICollectionView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UICollectionView.h"
#import "MLChain4UIScrollView.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
@implementation MLChain4UICollectionView
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UICollectionView *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop
