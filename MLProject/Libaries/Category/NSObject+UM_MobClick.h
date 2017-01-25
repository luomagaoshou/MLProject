//
//  NSObject+UM_MobClick.h
//  BondGoodTeacher
//
//  Created by 妙龙赖 on 2016/10/27.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (UM_MobClick)
/** 埋点id 可传array*/
@property (nonatomic, strong) id mobClickId;
/** 若同一个控件多个埋点id 则需要设置index,默认为0*/
@property (nonatomic, assign) NSUInteger mobClickIdIndex;
/** 埋点开关 若设置了id，则开启 */
@property (nonatomic, assign, getter=isEnableMobClick) BOOL enableMobClick;

- (NSString *)currentMobClickId;
@end
