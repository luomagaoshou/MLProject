//  
//  UICollectionView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UICollectionView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UICollectionView(MLChain)
+ (MLChain4UICollectionView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UICollectionView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UICollectionView *)mlc_makeConfigs:(void(^)(MLChain4UICollectionView *maker))block{         
         
   MLChain4UICollectionView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UICollectionView *)mlc_makeConfigs:(void(^)(MLChain4UICollectionView *maker))block{         
         
   MLChain4UICollectionView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

