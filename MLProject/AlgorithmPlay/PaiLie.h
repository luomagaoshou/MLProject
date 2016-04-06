//
//  PaiLie.h
//  LotterySteward
//
//  Created by ytx on 13-8-21.
//  Copyright (c) 2013年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaiLie : NSObject

@property (nonatomic, assign) NSMutableArray *arrayOut;


- (void)matCombin:(NSArray *)array withArray:(NSMutableArray *)arrayOut;


@end
