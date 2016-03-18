//
//  NSObject+Add.m
//  LotterySteward
//
//  Created by apple on 15/12/11.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSObject+Add.h"
#import <objc/runtime.h>
const char *key;
@implementation NSObject (Add)
+ (void)addPropertyWithClass:(Class)aClass ownerShipType:(PropertyOwnershipType)ownerShipType propertyName:(NSString *)propertyName
{
    NSString *typeStirng = [NSString stringWithFormat:@"@\"%@\"", NSStringFromClass(aClass)];
    const char *typeChar = [typeStirng cStringUsingEncoding:NSUTF8StringEncoding];
    objc_property_attribute_t type = {"T", typeChar};
    
    objc_property_attribute_t ownership = {"C", ""};

    NSString *backingIvarStr = [NSString stringWithFormat:@"_%@", propertyName];
    const char * backingIvarChar = [backingIvarStr UTF8String];
    objc_property_attribute_t backingivar = {"V", backingIvarChar};
     objc_property_attribute_t attrs[] = { type, ownership, backingivar };
       // class_addIvar([self class], [backingIvarStr UTF8String], sizeof(NSString *), log(sizeof(NSString *)), "i");

    class_addProperty([self class], [propertyName UTF8String], attrs, 3);
    
    
    
    class_addMethod(self, NSSelectorFromString(propertyName), (IMP)Getter, "@@:");
    
    
    NSString *propertyNameHead = [propertyName substringWithRange:NSMakeRange(0, 1)];
    NSString *capitalizedProperty = [propertyName stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:[propertyNameHead uppercaseString]];
    NSString *setProperyNameString = [NSString stringWithFormat:@"set%@:", capitalizedProperty];
    class_addMethod(self, NSSelectorFromString(setProperyNameString), (IMP)Setter, "v@:@");
    
    
}


void addProperty();
NSString *Getter(id self1, SEL _cmd1){
    NSLog(@"class type gettet = %@, selecter = %@", [self1 class], NSStringFromSelector(_cmd1));
    NSString *var = [NSString stringWithFormat:@"_%@", NSStringFromSelector(_cmd1)];
    
    Ivar ivar = class_getInstanceVariable([self1 class], [var cStringUsingEncoding:NSUTF8StringEncoding]);
    if (object_getIvar(self1, ivar)) {
        NSLog(@"%@", object_getIvar(self1, ivar));
         return object_getIvar(self1, ivar);
    }
    else
    {
        
          return  objc_getAssociatedObject(self1, &key);
    }
   
}

void Setter(id self1, SEL _cmd1, NSString *newName){
   NSLog(@"class type gettet = %@, selecter = %@", [self1 class], NSStringFromSelector(_cmd1));
    NSString *var = [NSStringFromSelector(_cmd1) stringByReplacingCharactersInRange:NSMakeRange(0, 3) withString:@""];
    //首字母小写
    NSString *head = [var substringWithRange:NSMakeRange(0, 1)];
    head = [head lowercaseString];
    var = [var stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:head];
    var = [var stringByReplacingCharactersInRange:NSMakeRange([var length]-1, 1) withString:@""];
    NSString *propertyName = [var copy];
    var = [var stringByReplacingCharactersInRange:NSMakeRange(0, 0) withString:@"_"];
    Ivar ivar = class_getInstanceVariable([self1 class], [var UTF8String]);
  
    if (ivar) {
        id oldName = object_getIvar(self1, ivar);
        if (oldName != newName) {
            object_setIvar(self1, ivar, newName);
        
        }
    }
    else
    {
         objc_property_t property = class_getProperty([self1 class], [@"addString" UTF8String]);
        
        NSString *propetyAttributes = [NSString stringWithCString:property_getAttributes(property) encoding:NSUTF8StringEncoding];
        
            NSLog(@"%@", propetyAttributes);
    }
    
}


@end
