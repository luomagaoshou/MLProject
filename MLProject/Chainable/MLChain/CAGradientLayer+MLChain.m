//  
//  CAGradientLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "CAGradientLayer+MLChain.h"
#import "NSObject+MLChain.h"

@implementation CAGradientLayer(MLChain)
+ (MLChain4CAGradientLayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CAGradientLayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CAGradientLayer *)mlc_makeConfigs:(void(^)(MLChain4CAGradientLayer *maker))block{         
         
   MLChain4CAGradientLayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CAGradientLayer *)mlc_makeConfigs:(void(^)(MLChain4CAGradientLayer *maker))block{         
         
   MLChain4CAGradientLayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

