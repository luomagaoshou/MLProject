//
//  NSObject+Add.h
//  LotterySteward
//
//  Created by apple on 15/12/11.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, PropertyOwnershipType)
{
    PropertyOwnershipTypeCopy,
};
@interface NSObject (Add)
+ (void)addPropertyWithClass:(Class)aClass
                   ownerShipType:(PropertyOwnershipType)ownerShipType
                propertyName:(NSString *)propertyName;
@end
