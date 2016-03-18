//
//  WHC_ModelCreate.m
//  WHC_DataModelFactory
//
//  Created by 妙龙赖 on 15/12/20.
//  Copyright © 2015年 吴海超. All rights reserved.
//

#import "WHC_ModelCreate.h"

@implementation WHC_ModelCreate

- (void)initConfig
{
    _classString = [NSMutableString new];
    _classMString = [NSMutableString new];
    _isOC = @"YES";
}
+ (void)createClassStringWithJSONString:(NSString *)JSONString className:(NSString *)className
{
    WHC_ModelCreate *creater = [[WHC_ModelCreate alloc] init];
    [creater createClassStringWithJSONString:JSONString className:className];
}
- (void)createClassStringWithJSONString:(NSString *)JSONString  className:(NSString *)className
{
    [self initConfig];
    NSData  * jsonData = [JSONString dataUsingEncoding:NSUTF8StringEncoding];
   NSDictionary * dict = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableLeaves error:NULL];
    [_classMString appendFormat:kWHC_CLASS_M,className];
    [_classString appendFormat:kWHC_CLASS,className,[self handleDataEngine:dict key:@""]];
}
- (NSString*)handleDataEngine:(id)object key:(NSString*)key{
    if(object){
        NSMutableString  * property = [NSMutableString new];
        if([object isKindOfClass:[NSDictionary class]]){
            NSDictionary  * dict = object;
            NSInteger       count = dict.count;
            NSArray       * keyArr = [dict allKeys];
            for (NSInteger i = 0; i < count; i++) {
                id subObject = dict[keyArr[i]];
                if([subObject isKindOfClass:[NSDictionary class]]){
                    NSString * classContent = [self handleDataEngine:subObject key:keyArr[i]];
                    if(_isOC){
                        [property appendFormat:kWHC_PROPERTY('s'),keyArr[i],keyArr[i]];
                        [_classString appendFormat:kWHC_CLASS,keyArr[i],classContent];
                        [_classMString appendFormat:kWHC_CLASS_M,keyArr[i]];
                    }else{
                        [property appendFormat:kSWHC_PROPERTY,keyArr[i],keyArr[i]];
                        [_classString appendFormat:kSWHC_CLASS,keyArr[i],keyArr[i],classContent];
                    }
                }else if ([subObject isKindOfClass:[NSArray class]]){
                    NSString * classContent = [self handleDataEngine:subObject key:keyArr[i]];
                    if(_isOC){
                        [property appendFormat:kWHC_PROPERTY('s'),@"NSArray",keyArr[i]];
                        [_classString appendFormat:kWHC_CLASS,keyArr[i],classContent];
                        [_classMString appendFormat:kWHC_CLASS_M,keyArr[i]];
                    }else{
                        [property appendFormat:kSWHC_PROPERTY,keyArr[i],@"NSArray"];
                        [_classString appendFormat:kSWHC_CLASS,keyArr[i],keyArr[i],classContent];
                    }
                }else if ([subObject isKindOfClass:[NSString class]]){
                    if(_isOC){
                        [property appendFormat:kWHC_PROPERTY('c'),@"NSString",keyArr[i]];
                    }else{
                        [property appendFormat:kSWHC_PROPERTY,keyArr[i],@"String"];
                    }
                }else if ([subObject isKindOfClass:[NSNumber class]]){
                    if(_isOC){
                        [property appendFormat:kWHC_PROPERTY('c'),@"NSString",keyArr[i]];
                    }else{
                        [property appendFormat:kSWHC_PROPERTY,keyArr[i],@"String"];
                    }
                }else{
                    if(subObject == nil){
                        if(_isOC){
                            [property appendFormat:kWHC_PROPERTY('c'),@"NSString",keyArr[i]];
                        }else{
                            [property appendFormat:kSWHC_PROPERTY,keyArr[i],@"String"];
                        }
                    }else if([subObject isKindOfClass:[NSNull class]]){
                        if(_isOC){
                            [property appendFormat:kWHC_PROPERTY('c'),@"NSString",keyArr[i]];
                        }else{
                            [property appendFormat:kSWHC_PROPERTY,keyArr[i],@"String"];
                        }
                    }
                }
            }
        }else if ([object isKindOfClass:[NSArray class]]){
            NSArray  * dictArr = object;
            NSUInteger  count = dictArr.count;
            if(count){
                NSObject  * tempObject = dictArr[0];
                for (NSInteger i = 0; i < dictArr.count; i++) {
                    NSObject * subObject = dictArr[i];
                    if([subObject isKindOfClass:[NSDictionary class]]){
                        if(((NSDictionary *)subObject).count > ((NSDictionary *)tempObject).count){
                            tempObject = subObject;
                        }
                    }
                    if([subObject isKindOfClass:[NSDictionary class]]){
                        if(((NSArray *)subObject).count > ((NSArray *)tempObject).count){
                            tempObject = subObject;
                        }
                    }
                }
                [property appendString:[self handleDataEngine:tempObject key:key]];
            }
        }else{
            NSLog(@"key = %@",key);
        }
        return property;
    }
    return @"";
}

@end
