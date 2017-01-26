//  
//  UITableViewCell.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "UITableViewCell+MLChain.h"
#import "NSObject+MLChain.h"

@implementation UITableViewCell(MLChain)
+ (MLChain4UITableViewCell *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UITableViewCell *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UITableViewCell *)mlc_makeConfigs:(void(^)(MLChain4UITableViewCell *maker))block{         
         
   MLChain4UITableViewCell *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UITableViewCell *)mlc_makeConfigs:(void(^)(MLChain4UITableViewCell *maker))block{         
         
   MLChain4UITableViewCell *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

