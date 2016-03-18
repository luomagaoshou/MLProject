//
//  SomeClass.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/12.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "SomeClass.h"



@implementation SomeClass
//- (id)init {
//    self = [super init];
//    if (self)
//    {
//       [self name] = @"Steve";
//    }
//    return self;
//}
@end
NSString *nameGetter(id self, SEL _cmd) {
    Ivar ivar = class_getInstanceVariable([SomeClass class], "_name");
    [self getPropertyList];
    return object_getIvar(self, ivar);
}

void nameSetter(id self, SEL _cmd, NSString *newName) {
    Ivar ivar = class_getInstanceVariable([SomeClass class], "_name");
    id oldName = object_getIvar(self, ivar);
    if (oldName != newName) object_setIvar(self, ivar, [newName copy]);
}

void testRunTime() {

        objc_property_attribute_t type = { "T", "@\"NSString\"" };
        objc_property_attribute_t ownership = { "C", "" }; // C = copy
        objc_property_attribute_t backingivar  = { "V", "_name" };
        objc_property_attribute_t attrs[] = { type, ownership, backingivar };
     
        class_addProperty([SomeClass class], "name", attrs, 3);
 
        class_addMethod([SomeClass class], @selector(name), (IMP)nameGetter, "@@:");
        class_addMethod([SomeClass class], @selector(setName:), (IMP)nameSetter, "v@:@");
        
        id o = [SomeClass new];
        NSLog(@"%@", [o name]);

        [o setName:@"Jobs"];
        NSLog(@"%@", [o name]);
    
}
