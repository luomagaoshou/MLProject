//
//  UIBarButtonItem+EventBlock.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/20.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (EventBlock)
- (void)addEventBlock:(void (^)(void))eventBlock;
@end
