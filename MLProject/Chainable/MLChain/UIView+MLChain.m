//  
//  UIView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIView(MLChain)
+ (MLChain4UIView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIView *)mlc_makeConfigs:(void(^)(MLChain4UIView *maker))block{         
         
   MLChain4UIView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIView *)mlc_makeConfigs:(void(^)(MLChain4UIView *maker))block{         
         
   MLChain4UIView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

