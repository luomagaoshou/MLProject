//
//  NSNotificationCenter+Block.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/21.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNotificationCenter (Block)
- (void)addObserver:(id)observer name:(NSString *)aName object:(id)anObject eventBlock:(void(^)(void))eventBlock;
@end
