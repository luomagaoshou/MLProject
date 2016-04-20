//
//  NSObject+RunTimeHelper.m
//  LotterySteward
//
//  Created by apple on 15/10/16.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSObject+RunTimeHelper.h"
#import <objc/runtime.h>
static const char *externBlockSenderKey;
static const char *externBlockCallbackKey;
static const char *externBlockCallbackKeyOfNoneValue;
static const char *externFeatureIdentifierKey;
static const char *externOperationIdentifierKey;
static const char *externAssociationObjectKey;
@implementation NSObject (RunTimeHelper)
@dynamic blockSender;
@dynamic featureIdentifier;
- (NSArray *)getIvarList
{
  return [[self class] getIvarList];
}
+ (NSArray *)getIvarList
{
    unsigned int count = 0;
    //获取类中所有属性名
    Ivar *ivar = class_copyIvarList([self class], &count);
    NSMutableArray *propertyNameArray = [[NSMutableArray alloc] init];
    for (int i = 0; i<count; i++) {
        Ivar iva = ivar[i];
        const char *name = ivar_getName(iva);
        NSString *strName = [NSString stringWithUTF8String:name];
        [propertyNameArray addObject:strName];
        
    }
    
    free(ivar);
    return propertyNameArray;
    
}

- (NSArray *)getPropertyList
{
    return [[self class] getPropertyList];
}
+ (NSArray *)getPropertyList
{
    unsigned int count = 0;
    //获取类中所有成员变量
    objc_property_t *properties = class_copyPropertyList(self, &count);
    
    NSMutableArray *propertyNameArray = [[NSMutableArray alloc] init];
    for (int i = 0; i<count; i++) {
        objc_property_t property = properties[i];
        const char *name = property_getName(property);
        NSString *strName = [NSString stringWithUTF8String:name];
        [propertyNameArray addObject:strName];
        
    }
    
    free(properties);
    return propertyNameArray;
    
}
- (NSArray *)getInstanceMethodList
{
    return [[self class] getInstanceMethodList];
}
+ (NSArray *)getInstanceMethodList
{
    unsigned int count = 0;
    Method *methodList = class_copyMethodList([self class], &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];
    
    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
        Method classMethod = class_getInstanceMethod([self class], selector);
        if (!classMethod) {
            continue;
        }
        
        NSString *methodString = NSStringFromSelector(selector);
        [methods addObject:methodString];
    }
    
    free(methodList);
    return methods;
}
- (NSArray *)getClassMethodList
{

    unsigned int count = 0;
    Method *methodList = class_copyMethodList(object_getClass(self), &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];
   
    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
             const char * type = method_getTypeEncoding(methodList[i]);
        Method classMethod = class_getClassMethod([self class], selector);
        if (!classMethod) {
            continue;
        }
        
        NSString *methodString = NSStringFromSelector(selector);
        [methods addObject:methodString];
    }
  
    free(methodList);
    return methods;
}
+ (NSArray *)getPropertyAttributeList
{
    {
        
        unsigned int count = 0;
        //获取类中所有成员变量
        objc_property_t *properties = class_copyPropertyList(self, &count);
        NSMutableArray *propertyAttriArray = [[NSMutableArray alloc] init];
        for (int i = 0; i<count; i++) {
            objc_property_t property = properties[i];
            const char *attr = property_getAttributes(property);
            
            NSString *attrStr = [NSString stringWithUTF8String:attr];
            NSMutableString *mutAttrStr = [NSMutableString stringWithFormat:@"%@", attrStr];
            [mutAttrStr replaceOccurrencesOfString:@"\"" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            [mutAttrStr replaceOccurrencesOfString:@"@" withString:@"," options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            [mutAttrStr replaceOccurrencesOfString:@"_" withString:@"," options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            NSArray *attrs = [mutAttrStr componentsSeparatedByString:@","];
            [propertyAttriArray addObject:attrs];
            
        }
        
        free(properties);
        return propertyAttriArray;
    }
    

}
- (void)printValueForKeyListWith:(NSArray *)array
{
    for (NSString *key in array) {
        id obj = [self valueForKey:key];
        if (obj) {
            NSLog(@"key:%@     value:%@",key, obj);
        }
        else
        {
            NSLog(@"key:%@     value:%@",key, @"该值为空");
        }
    }
}
- (id)createSameObject
{

    id object =  [[[self class] alloc] init];
    NSArray *urlConfigProperties = [self getPropertyList];
    for (NSInteger i = 0; i< urlConfigProperties.count; i++) {
        if ([self valueForKey:urlConfigProperties[i]]) {
            [object setValue:[self valueForKey:urlConfigProperties[i]] forKey:urlConfigProperties[i]];
        }
    }
    return object;
}
- (void)setObjectPropertyAllKeyValueNil
{
    NSArray *properties = [self getPropertyList];
   
    for (NSInteger i = 0; i < properties.count; i++) {
        if ([self valueForKey:properties[i]]) {
            if ([[self valueForKey:properties[i]] isKindOfClass:[NSString class]]) {
                 [self setValue:nil forKey:properties[i]];
            }
           else if([[self valueForKey:properties[i]] isKindOfClass:[NSNumber class]])
           {
               [self setValue:@0 forKey:properties[i]];
           }
        }
    }
    

}
#pragma mark - ========= 拼接 =========

- (NSDictionary *)getPropertyKeyValueOnlyHaveValueDictionary
{
    NSArray *properties = [self getPropertyList];
    NSMutableDictionary *keyValueDictionary = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0; i < properties.count; i++) {
        if ([self valueForKey:properties[i]]) {
            [keyValueDictionary setObject:[self valueForKey:properties[i]] forKey:properties[i]];
        }
    }
    return keyValueDictionary;
}
+ (NSDictionary *)getPropertyDictionaryJoinedWithIvarList:(NSArray *)ivarList model:(id)model
{
    //取Model成员变量拼接字典
    NSMutableDictionary *postParameter = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0 ; i< ivarList.count; i++) {
        
        NSString *propertyName = ivarList[i];
        id propertyValue = [model valueForKey:propertyName];
        if (!propertyValue) {
            propertyValue = @"";
        }
        NSString *actualPropertyName = [propertyName substringFromIndex:1];
        [postParameter addEntriesFromDictionary:@{actualPropertyName:propertyValue}];
        
    }
    return postParameter;
}
- (void)setAssociationValue:(id)value withKey:(const void *)key
{
    objc_setAssociatedObject(self, key, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
}
- (id)getAssociationValueWithKey:(const void *)key
{
    return objc_getAssociatedObject(self, key);
}
- (void)removeAllAssociationValue
{
    objc_removeAssociatedObjects(self);
}
+ (void)setAssociationValue:(id)value
{
    if ([value isMemberOfClass:[NSArray class]]||
        [value isMemberOfClass:[NSDictionary class]]||
        [value isMemberOfClass:[NSString class]]) {
        objc_setAssociatedObject(self, &externAssociationObjectKey, value, OBJC_ASSOCIATION_COPY_NONATOMIC);
    }
    else
    {
        objc_setAssociatedObject(self, &externAssociationObjectKey, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}
+ (id)getAssociationValue
{
    return objc_getAssociatedObject(self, &externAssociationObjectKey);
}
+ (void)removeAllAssociationValue
{
    objc_removeAssociatedObjects(self);
}
#pragma mark - ========= Setter & Getter =========
- (void)setBlockCallback:(NSObjectBlockCallback)blockCallback
{
    [self setAssociationValue:blockCallback withKey:&externBlockCallbackKey];
}
- (NSObjectBlockCallback)blockCallback
{
    
    return [self getAssociationValueWithKey:&externBlockCallbackKey];
}
- (void)setBlockCallbackOfNoneValue:(NSObjectBlockCallbackOfNoneValue)blockCallbackOfNoneValue
{
     [self setAssociationValue:blockCallbackOfNoneValue withKey:&externBlockCallbackKeyOfNoneValue];
}
- (NSObjectBlockCallbackOfNoneValue)blockCallbackOfNoneValue
{
    return [self getAssociationValueWithKey:&externBlockCallbackKeyOfNoneValue];
}

- (void)setBlockSender:(UIViewBlockSender)blockSender
{
    [self setAssociationValue:blockSender withKey:&externBlockSenderKey];
}
- (UIViewBlockSender)blockSender
{
  
    return [self getAssociationValueWithKey:&externBlockSenderKey];
}

- (void)setFeatureIdentifier:(NSString *)featureIdentifier
{

    [self setAssociationValue:featureIdentifier withKey:&externFeatureIdentifierKey];

}
- (NSString *)featureIdentifier
{
    if ([self getAssociationValueWithKey:&externFeatureIdentifierKey] == nil) {
        if ([self isMemberOfClass:[UIButton class]]) {
          
            self.featureIdentifier = [NSString stringWithFormat:@"%@按钮",((UIButton *)self).titleLabel.text];
            NSLog(@"%@为自动添加，如需改变自行设置 superview:%@",self.featureIdentifier, ((UIButton *)self).superview );
        }
    }
    if ([self isKindOfClass:[UIView class]]) {
          //  NSLog(@"当前对象:%@\nsuperview:%@",self, ((UIView *)self).superview);
    }
    else
    {
       //  NSLog(@"当前对象:%@",self);
    }
     return [self getAssociationValueWithKey:&externFeatureIdentifierKey];
}

- (void)setOperationIdentifier:(NSString *)operationIdentifier
{
    
    objc_setAssociatedObject(self, @selector(operationIdentifier), operationIdentifier, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (NSString *)operationIdentifier
{
    return [self getAssociationValueWithKey:@selector(operationIdentifier)];
}
- (void)setAssociationObject:(id)associationObject
{
    if ([associationObject isMemberOfClass:[NSArray class]]||
        [associationObject isMemberOfClass:[NSDictionary class]]||
        [associationObject isMemberOfClass:[NSString class]]) {
           objc_setAssociatedObject(self, &externAssociationObjectKey, associationObject, OBJC_ASSOCIATION_COPY_NONATOMIC);
    }
    else
    {
    objc_setAssociatedObject(self, &externAssociationObjectKey, associationObject, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}
- (id)associationObject
{
    return objc_getAssociatedObject(self, &externAssociationObjectKey);
}

@end
