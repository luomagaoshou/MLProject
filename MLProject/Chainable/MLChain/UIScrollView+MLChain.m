//  
//  UIScrollView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIScrollView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIScrollView(MLChain)
+ (MLChain4UIScrollView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIScrollView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIScrollView *)mlc_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block{         
         
   MLChain4UIScrollView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIScrollView *)mlc_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block{         
         
   MLChain4UIScrollView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

