//
//  NSObject+ML_Debug.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/22.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "NSObject+ML_Debug.h"
#import "NSObject+RunTimeHelper.h"

@implementation MLViewNode
- (NSMutableArray<MLViewNode *> *)subviewNodes{
    if (_subviewNodes == nil) {
        _subviewNodes = [[NSMutableArray alloc] init];
    }
    return _subviewNodes;
}
+ (instancetype)nodeWithView:(UIView *)view{
    
    return [self nodeWithView:view level:0];
}

+ (instancetype)nodeWithView:(UIView *)view level:(NSUInteger)level{
    
    
    MLViewNode *node = [[MLViewNode alloc] init];
    node.class = [view class];
    node.view = view;
    level++;
    for (UIView *subview in view.subviews) {
        MLViewNode *subviewNode = [self nodeWithView:subview level:level];
        subviewNode.superViewNode = node;
        subviewNode.level = level;
        [node.subviewNodes addObject:subviewNode];
        
    }
    
    return node;
}
- (NSString *)debugString{
    NSMutableArray *mutDebugStrs = [[NSMutableArray alloc] init];
    NSArray *allSubnodes = [self allSubnodes];
    return [self _debugStringWithMutDebugStrs:mutDebugStrs];
}
- (NSArray *)allSubnodes{
    
    NSMutableArray *mutNodes = [[NSMutableArray alloc] init];
    return [self _allSubnodesWithMutNodes:mutNodes];
}
- (NSArray *)_allSubnodesWithMutNodes:(NSMutableArray *)mutNodes{
    [mutNodes addObject:self];
    for (MLViewNode *subNode in self.subviewNodes) {
        [subNode _allSubnodesWithMutNodes:mutNodes];
    }
    return mutNodes;
}
- (NSString *)debugStringWithAllNodes:(NSArray *)allNodes{
    
    NSMutableString *mutDebugStrs = [[NSMutableString alloc] init];
    
    NSInteger currentLevel = 0;
    NSInteger padding = 0;
    for (NSInteger i = 0; i < allNodes.count; i++) {
        NSMutableString *str = [NSMutableString stringWithCapacity:1];
    }
    
    
    return mutDebugStrs;
}
- (NSString *)_debugStringWithMutDebugStrs:(NSMutableArray *)mutDebugStrs{
    
    
//    NSString *separatorStr = @"";
//    for (NSInteger i = 0; i < self.level; i++) {
//        NSString *_speratorStr = @"-";
//        separatorStr = [separatorStr stringByAppendingString:_speratorStr];
//    }
//

    NSString *info = [NSString stringWithFormat:@"class: %@ rect:%@\n", NSStringFromClass(self.class), NSStringFromCGRect(self.view.frame)];
    //[mutDebugStrs addObject:separatorStr];
    [mutDebugStrs addObject:info];
    for (MLViewNode *subNode in self.subviewNodes) {
        [subNode _debugStringWithMutDebugStrs:mutDebugStrs];
    }
    
    return [mutDebugStrs componentsJoinedByString:@"\n"] ;
}
@end


@implementation NSObject (ML_Debug)

- (MLViewNode *)printViewInfo{
    if (![self isKindOfClass:UIView.class]) {
        return nil;
    }
    MLViewNode *node = [MLViewNode nodeWithView:(UIView *)self];
    node.isCurrentView = YES;
    
    NSString *debugStr = [node debugString];
    NSLog(@"\n%@", debugStr);
    return node;
}

- (NSString *)printObjectInfo{
    
    NSArray *_ml_instanceMethodInfos = [self _ml_instanceMethodInfos];
    
   
    
    return nil;
}
- (NSArray *)_ml_instanceMethodInfos{
    NSArray *instanceMethods = [[self class] arrayOfInstanceMethods];
    NSMutableArray *resultArr = [[NSMutableArray alloc] init];
    for (NSString *instanceMethod in instanceMethods) {
        SEL sel = sel_registerName(instanceMethod.UTF8String);
        NSMethodSignature *methodSignature = [self methodSignatureForSelector:sel];
        if (methodSignature.numberOfArguments == 2
            && *[methodSignature methodReturnType] != 'v') {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            id returnObj = [self performSelector:sel];
#pragma clang diagnostic pop
            [resultArr addObject:@{instanceMethod: returnObj}];
        }
        
    }
    return resultArr;
}


@end
