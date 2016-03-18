//
//  NSDictionary+GetKeyOrValue.h
//  LotteryStraightTrain
//
//  Created by apple on 16/2/17.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (GetKeyOrValue)
@property (nonatomic, strong, readonly) id firstKey;
@property (nonatomic, strong, readonly) id firstValue;
@end
