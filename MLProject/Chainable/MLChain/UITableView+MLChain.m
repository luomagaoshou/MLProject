//  
//  UITableView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "UITableView+MLChain.h"
#import "NSObject+MLChain.h"

@implementation UITableView(MLChain)
+ (MLChain4UITableView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UITableView *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UITableView *)mlc_makeConfigs:(void(^)(MLChain4UITableView *maker))block{         
         
   MLChain4UITableView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UITableView *)mlc_makeConfigs:(void(^)(MLChain4UITableView *maker))block{         
         
   MLChain4UITableView *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end

