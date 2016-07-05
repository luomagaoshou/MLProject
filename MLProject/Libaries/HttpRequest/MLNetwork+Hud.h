//
//  NetworkCtl+Hud.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/23.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "MLNetwork.h"

@interface MLNetwork (Hud)
@property (nonatomic, strong) NSMutableArray *huds;
- (void)makeProgressHudWithHudConfig:(void (^)(MBProgressHUD *hud))config title:(NSString *)title;
- (void)removeLastProgressHud;
- (void)removeAllProgressHud;
@end
