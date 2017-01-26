//  
//  UIImageView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "UIImageView+MLChain.h"
#import "NSObject+MLChain.h"

@implementation UIImageView(MLChain)
+ (MLChain4UIImageView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIImageView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIImageView *)mlc_makeConfigs:(void(^)(MLChain4UIImageView *maker))block{         
         
   MLChain4UIImageView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIImageView *)mlc_makeConfigs:(void(^)(MLChain4UIImageView *maker))block{         
         
   MLChain4UIImageView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

