//
//  UIView+Shade.h
//  LotterySteward
//
//  Created by apple on 15/11/20.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface UIView (Shade)

+ (instancetype)currentShadeView;

+ (instancetype)addFullScreenShade;

+ (instancetype)addFullScreenShadeWithTapEvent:(void (^)(void))tapActionCallback;

+ (void)removeShadeView;



@end
