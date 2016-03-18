



//
//  NSObject+ML_Tools.m
//  LotteryStraightTrain
//
//  Created by apple on 16/2/26.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSObject+ML_Tools.h"

@implementation NSObject (ML_Tools)
void excuteBlockAtAndAfterAppearTime(void (^excuteBlock)(void), NSInteger time)
{
    static NSInteger startTime = 0;
    if (startTime++ >= time) {
        if (excuteBlock) {
            excuteBlock();
        }
    }
}
void excuteBlockAtAppearTime(void (^excuteBlock)(NSInteger appearTime))
{
    static NSInteger startTime = 0;
    startTime ++;
    if (excuteBlock) {
        excuteBlock(startTime);
    }
}
@end
