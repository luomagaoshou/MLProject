//  
//  UIApplication.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIApplication+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIApplication(MLChain)
+ (MLChain4UIApplication *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIApplication *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIApplication *)mlc_makeConfigs:(void(^)(MLChain4UIApplication *maker))block{         
         
   MLChain4UIApplication *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIApplication *)mlc_makeConfigs:(void(^)(MLChain4UIApplication *maker))block{         
         
   MLChain4UIApplication *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

