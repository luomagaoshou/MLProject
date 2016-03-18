//
//  SBHSplitOrderMaster.h
//  LotterySteward
//
//  Created by apple on 15/12/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBHSplitOrderModel.h"



@interface SBHSplitOrderTicket : NSObject   
//动态加随机key
//@property (nonatomic, copy) NSArray *ed5a4d1b10a03df2969bc91154648b71;

@end


@interface SBHSplitOrderData : NSObject
@property (nonatomic, copy) NSString *advanceaward;
@property (nonatomic, copy) NSString *bettype;
@property (nonatomic, copy) NSString *paystatus;
@property (nonatomic, copy) NSString *revokestatus;
@property (nonatomic, strong) SBHSplitOrderTicket *ticket;

@end

@interface SBHSplitOrderMaster : NSObject
@property (nonatomic, copy) NSString *allOrdMoney;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, strong) SBHSplitOrderData *data;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *nowtime;
+ (void)setTicketRandomKeysWithJSONObject:(NSJSONSerialization *)JSONObject;
+ (NSArray *)ticketRandomKeys;
@end
