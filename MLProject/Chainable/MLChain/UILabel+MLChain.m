//  
//  UILabel.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "UILabel+MLChain.h"
#import "NSObject+MLChain.h"

@implementation UILabel(MLChain)
+ (MLChain4UILabel *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UILabel *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UILabel *)mlc_makeConfigs:(void(^)(MLChain4UILabel *maker))block{         
         
   MLChain4UILabel *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UILabel *)mlc_makeConfigs:(void(^)(MLChain4UILabel *maker))block{         
         
   MLChain4UILabel *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

