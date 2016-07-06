//
//  NetworkCtl+Hud.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/23.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "MLNetwork+Hud.h"

@implementation MLNetwork (Hud)
- (void)makeProgressHudWithHudConfig:(void (^)(MBProgressHUD *hud))config title:(NSString *)title
{
    MBProgressHUD *hud = [MBProgressHUD showHUDAddedTo:[UIApplication sharedApplication].windows[0] animated:YES];
    if (config) {
        config(hud);
    }
    hud.label.text = NSLocalizedString(title, @"HUD loading title");
    [self.huds addObject:hud];
}
- (void)removeLastProgressHud
{
    

    if (self.huds.count > 0) {
        MBProgressHUD *hud = [self.huds lastObject];
       
      
        [hud hideAnimated:YES];
         [self.huds removeObject:hud];
    }
}
- (void)removeAllProgressHud
{
    
    if (self.huds.count > 0) {
        for (MBProgressHUD *hud in self.huds) {
           
             [hud hideAnimated:YES];
             [self.huds removeObject:hud];
        }
    }
}
#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)huds
{   NSMutableArray *huds = objc_getAssociatedObject(self, @selector(huds));
    if (!huds) {
    
        huds = [[NSMutableArray alloc] init];
        objc_setAssociatedObject(self, @selector(huds), huds, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return huds;
}
- (void)setHuds:(NSMutableArray *)huds
{
  
    if (self.huds != huds) {
        [self.huds removeAllObjects];
        [self.huds addObjectsFromArray:huds];
    }
    
}

@end
