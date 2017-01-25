//
//  NSObject+UM_MobClick.m
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/10/27.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "NSObject+UM_MobClick.h"

@implementation NSObject (UM_MobClick)

- (void)setMobClickId:(NSString *)mobClickId{
    objc_setAssociatedObject(self, @selector(mobClickId), mobClickId, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.enableMobClick = YES;
}
- (NSString *)mobClickId{
    return objc_getAssociatedObject(self, @selector(mobClickId));
}

- (void)setMobClickIdIndex:(NSUInteger)mobClickIdIndex{
    objc_setAssociatedObject(self, @selector(mobClickIdIndex), @(mobClickIdIndex), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSUInteger)mobClickIdIndex{
    return [objc_getAssociatedObject(self, @selector(mobClickIdIndex)) integerValue];
}

- (void)setEnableMobClick:(BOOL)enableMobClick{
    objc_setAssociatedObject(self, @selector(isEnableMobClick), @(enableMobClick), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (BOOL)isEnableMobClick{
    return [objc_getAssociatedObject(self, @selector(isEnableMobClick)) boolValue];
}
- (NSString *)currentMobClickId{
    
    if (!self.mobClickId) {
        return nil;
    }
    
    if ([self.mobClickId isKindOfClass:[NSArray class]]) {
        if (self.mobClickIdIndex < [self.mobClickId count]) {
            return self.mobClickId[self.mobClickIdIndex];
        }
#ifdef DEBUG
        else{
            assert(@"mobClickIdIndex越界");
        }
#endif
    }else if ([self.mobClickId isKindOfClass:[NSString class]]){
        return self.mobClickId;
    }
    return nil;
    
}
@end
