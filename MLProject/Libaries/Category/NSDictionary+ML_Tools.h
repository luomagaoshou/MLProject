//
//  NSDictionary+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/11/12.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (ML_Tools)
- (NSString *)urlParameterString;
- (NSString *)jsonString;
@property (nonatomic, strong, readonly) id firstValue;
@property (nonatomic, strong, readonly) id firstKey;

@end
