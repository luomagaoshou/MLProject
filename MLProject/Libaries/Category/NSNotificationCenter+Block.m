//
//  NSNotificationCenter+Block.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/21.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "NSNotificationCenter+Block.h"

@implementation NSNotificationCenter (Block)
- (void)addObserver:(id)observer name:(NSString *)aName object:(id)anObject eventBlock:(void (^)(void))eventBlock
{
    [self addObserver:self selector:@selector(hanedlEventBlock:) name:aName object:anObject];
    objc_setAssociatedObject(self, @selector(hanedlEventBlock:), eventBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (void)hanedlEventBlock:(id)sender
{
    void (^block) (void) = objc_getAssociatedObject(self, @selector(hanedlEventBlock:));
    if (block) {
        block();
    }
}
@end
