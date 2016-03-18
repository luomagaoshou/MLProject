//
//  UIBarButtonItem+EventBlock.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/20.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UIBarButtonItem+EventBlock.h"

@implementation UIBarButtonItem (EventBlock)
- (void)addEventBlock:(void (^)(void))eventBlock
{
    
    if (eventBlock) {
        objc_setAssociatedObject(self,  @selector(handleEvent:), eventBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
    }
    self.target = self;
    self.action = @selector(handleEvent:);
}
- (void)handleEvent:(UIBarButtonItem *)BBI
{
    void (^block)() = objc_getAssociatedObject(self,  @selector(handleEvent:));
    if (block) {
        block();
    }
}
@end
