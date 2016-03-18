//
//  NSMutableArray+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/10/27.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (ML_Tools)
- (void)addCGPointStirngWith:(CGPoint)CGPoint;

-(float)getMinusFromArray:(NSMutableArray *)array;

-(float)getMaxFromArray:(NSMutableArray *)array;
@end
