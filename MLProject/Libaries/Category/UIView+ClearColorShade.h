//
//  UIView+ClearColorShade.h
//  LotterySteward
//
//  Created by apple on 15/11/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ClearColorShade)
+ (instancetype)shareClearColorShadeViewInstance;
+ (void)addFullScreenClearColorShade;
+ (void)addFullScreenClearColorShadeWithTapEvent:(void (^)(void))tapActionCallback;
+ (void)removeClearColorShadeView;


@end
