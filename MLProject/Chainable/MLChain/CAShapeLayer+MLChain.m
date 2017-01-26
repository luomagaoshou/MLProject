//  
//  CAShapeLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "CAShapeLayer+MLChain.h"
#import "NSObject+MLChain.h"

@implementation CAShapeLayer(MLChain)
+ (MLChain4CAShapeLayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CAShapeLayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CAShapeLayer *)mlc_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block{         
         
   MLChain4CAShapeLayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CAShapeLayer *)mlc_makeConfigs:(void(^)(MLChain4CAShapeLayer *maker))block{         
         
   MLChain4CAShapeLayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

