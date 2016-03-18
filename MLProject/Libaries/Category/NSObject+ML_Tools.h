//
//  NSObject+ML_Tools.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/26.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ML_Tools)
void excuteBlockAtAndAfterAppearTime(void (^excuteBlock)(void), NSInteger AppearTime);
void excuteBlockAtAppearTime(void (^excuteBlock)(NSInteger appearTime));
@end
