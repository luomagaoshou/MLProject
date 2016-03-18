//
//  SBHSplitOrderMaster.m
//  LotterySteward
//
//  Created by apple on 15/12/10.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "SBHSplitOrderMaster.h"
#import "MJExtension.h"
#import "SBHSplitOrderModel.h"
#import "NSObject+Add.h"
const char *externRandomTickectKeykey;

#pragma mark - ========= Ticket =========
@implementation SBHSplitOrderTicket


+ (NSDictionary *)objectClassInArray
{
    
 
//    for (NSInteger i = 0; i < randomKeys.count; i++) {
//        [SBHSplitOrderTicket addPropertyWithClass:[self class] ownerShipType:PropertyOwnershipTypeCopy propertyName:randomKeys[i]];
//}


//
//    
////        NSMutableDictionary *randomKeyDics = [[NSMutableDictionary alloc] init];
////        for (NSInteger i = 0; i < randomKeys.count; i++) {
////            [randomKeyDics setValue:@"splitOrderModel" forKey:@"cae917b78f168c8feefb643bd3cb06f7"];
////        }
////    
////        return randomKeyDics;
////
//    
//    
//
    NSArray *randomKeys = [SBHSplitOrderMaster ticketRandomKeys];
    NSMutableDictionary *randomKeysDic = [[NSMutableDictionary alloc] init];
  //  [randomKeysDic addEntriesFromDictionary:@{@"ed5a4d1b10a03df2969bc91154648b71":@"SBHSplitOrderModel"}];
    for (NSInteger i = 0; i < 1; i++) {
 
        [randomKeysDic addEntriesFromDictionary:@{randomKeys[i]:@"SBHSplitOrderModel"}];
    }
    
    return randomKeysDic;
}

//
//+ (NSDictionary *)replacedKeyFromPropertyName
//{
//    NSArray *randomKeys = objc_getAssociatedObject([SBHSplitOrderMaster class], &externRandomTickectKeykey);
//    NSMutableDictionary *randomKeyDics = [[NSMutableDictionary alloc] init];
//    for (NSInteger i = 0; i < randomKeys.count; i++) {
//  
//        [randomKeyDics setValue:[NSString stringWithFormat:@"%@_%d",@"SBHSplitOrderModel", i] forKey:randomKeys[i]];
//    }
//    
//    return randomKeyDics;
//}

@end
#pragma mark - ========= Data =========
@implementation SBHSplitOrderData



@end

#pragma mark - ========= Master =========
@implementation SBHSplitOrderMaster
+ (void)setTicketRandomKeysWithJSONObject:(NSJSONSerialization *)JSONObject
{
    NSDictionary *ticketDic = [[JSONObject valueForKey:@"data"]valueForKey:@"ticket"];
    NSArray *randomKeys = [ticketDic allKeys];
    objc_removeAssociatedObjects([SBHSplitOrderMaster class]);
    objc_setAssociatedObject([SBHSplitOrderMaster class], &externRandomTickectKeykey, randomKeys, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    for (NSInteger i = 0; i < 1; i++) {
        [SBHSplitOrderTicket addPropertyWithClass:[NSArray class] ownerShipType:PropertyOwnershipTypeCopy propertyName:randomKeys[i]];
    }
   
}
+ (NSArray *)ticketRandomKeys
{
  return  objc_getAssociatedObject([SBHSplitOrderMaster class], &externRandomTickectKeykey);
}


@end
