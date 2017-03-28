//
//  NSObject+ML_Debug.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/22.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "NSObject+ML_Debug.h"
#import "NSObject+RunTimeHelper.h"

@implementation MLTreeNode
- (NSMutableArray<MLTreeNode *> *)childrenNode{
    if (_childrenNode == nil) {
        _childrenNode = [[NSMutableArray alloc] init];
    }
    return _childrenNode;
}


- (instancetype)previewNode {

     return [self nodeWithSequenceNumber:self.sequenceNumber - 1];
    return nil;
}
- (instancetype)nextNode {
    
    return [self nodeWithSequenceNumber:self.sequenceNumber + 1];
    
}
- (instancetype)rootNode {
    MLTreeNode *rootNode = self;
    do {
        rootNode = self.parentNode;
    } while (!self.parentNode);
    return rootNode;
}
- (BOOL)hasSameLevelNodeBehindWithLevel:(NSInteger)level {
   
    BOOL hasSameLevelNodeBehind = NO;
    for (MLTreeNode *currentNode = self; currentNode; currentNode = currentNode.nextNode) {
        if (currentNode.level == level) {
            hasSameLevelNodeBehind = YES;
            break;
        }
    }
    return hasSameLevelNodeBehind;
}

- (instancetype)nodeWithSequenceNumber:(NSInteger)sequenceNumber {
    
    MLTreeNode *startNode = nil;
    do {
        startNode = self.parentNode;
    } while (!self.parentNode);
    NSArray *allNodes = [startNode allSubnodes];
    if (sequenceNumber > allNodes.count || sequenceNumber < 0) {
        return nil;
    }
    return allNodes[sequenceNumber];
    
    return nil;;
}

- (NSInteger)sequenceNumber {
    MLTreeNode *startNode = nil;
    do {
        startNode = self.parentNode;
    } while (!self.parentNode);
    NSArray *allNodes = [startNode allSubnodes];
    NSInteger sequenceNumber = [allNodes indexOfObject:self];
    return sequenceNumber;
}

+ (instancetype)startNodeWithView:(UIView *)view {
    MLTreeNode *startNode = [self nodeWithView:view level:0 crrentNode:nil];
    return startNode;
}

+ (instancetype)nodeWithView:(UIView *)view level:(NSUInteger)level crrentNode:(MLTreeNode *)currentNode{
    
    
    MLTreeNode *node = [[MLTreeNode alloc] init];
    node.view = view;
    node.degree = view.subviews.count;
    level++;
    
    for (UIView *subview in view.subviews) {

        MLTreeNode *subviewNode = [self nodeWithView:subview level:level crrentNode:nil];
        
        subviewNode.parentNode = node;
        subviewNode.level = level;
        [node.childrenNode addObject:subviewNode];
        
    }
    
    return node;
}
- (NSString *)debugString {
    NSMutableArray *mutDebugStrs = [[NSMutableArray alloc] init];
    //NSArray *allSubnodes = [self allSubnodes];
    return [self _debugStringWithMutDebugStrs:mutDebugStrs];
}
- (NSArray *)allSubnodes {
    
    NSMutableArray *mutNodes = [[NSMutableArray alloc] init];
    return [self _allSubnodesWithMutNodes:mutNodes];
}
- (NSArray *)_allSubnodesWithMutNodes:(NSMutableArray *)mutNodes{
    [mutNodes addObject:self];
    for (MLTreeNode *subNode in self.childrenNode) {
        [subNode _allSubnodesWithMutNodes:mutNodes];
    }
    return mutNodes;
}
- (NSString *)debugStringWithAllNodes:(NSArray *)allNodes {
    
    NSMutableString *mutDebugStrs = [[NSMutableString alloc] init];
    
    NSInteger currentLevel = 0;
    NSInteger padding = 0;
    for (NSInteger i = 0; i < allNodes.count; i++) {
        NSMutableString *str = [NSMutableString stringWithCapacity:1];
    }
    
    
    return mutDebugStrs;
}
- (NSString *)_debugStringWithMutDebugStrs:(NSMutableArray *)mutDebugStrs {
    
    
    NSString *separatorStr = @"";
    for (NSInteger i = 0; i < self.level; i++) {
        
        
        NSString *_speratorStr = nil;
       // (i == 0) ? @"|" :  @"_";
        
        if (i < self.level - 1) {
            
                _speratorStr = @" ";
            
        } else {
            
            if (self.nextNode.level == (self.level + 1)) {
                _speratorStr = @"└┬";
            } else if (self.nextNode.level == self.level) {
                _speratorStr = @"├";
            } else {
                _speratorStr = @"└";
            }
        }
        separatorStr = [separatorStr stringByAppendingString:_speratorStr];
    }

    NSString *info = [NSString stringWithFormat:@" <%@> sequenceNumber:%ld level:%ld rect:%@", NSStringFromClass(self.view.class), self.sequenceNumber, self.level, NSStringFromCGRect(self.view.frame)];
    [mutDebugStrs addObject:[separatorStr stringByAppendingString:info]];
    for (MLTreeNode *subNode in self.childrenNode) {
        [subNode _debugStringWithMutDebugStrs:mutDebugStrs];
    }
    
    return [mutDebugStrs componentsJoinedByString:@"\n"] ;
}
@end


@implementation NSObject (ML_Debug)

- (MLTreeNode *)printViewInfo{
    if (![self isKindOfClass:UIView.class]) {
        return nil;
    }
    MLTreeNode *node = [MLTreeNode startNodeWithView:(UIView *)self];

    node.view = (id)self;
    
    NSString *debugStr = [node debugString];
    NSLog(@"\n%@", debugStr);
    return node;
}

- (NSString *)printObjectInfo{
    
    NSArray *ml_instanceMethodInfos = [self _ml_instanceMethodInfos];
    
   
    
    return nil;
}
- (NSString *)printIvars {
    NSArray *ivars = [[self class] arrayOfIvars];
    for (NSString *ivar in ivars) {
        @try {
            NSLog(@"\nivarName: %@\nivar: %@", ivar, [self valueForKey:ivar]);
        } @catch (NSException *exception) {
            
        } @finally {
            
        }
        
    }
    return nil;
}

- (NSString *)printProperties {
    NSArray *properties = [[self class] arrayOfProperties];
    for (NSString *property in properties) {
        @try {
            NSLog(@"\npropertyName: %@\nproperty: %@", property, [self valueForKey:property]);
            
        } @catch (NSException *exception) {
            
        } @finally {
            
        }
           }
    return nil;
}

- (NSString *)printNoAgrumentHasReturnMethod {
    NSArray *instanceMethods = [[self class] arrayOfInstanceMethods];
    for (NSString *instanceMethod in instanceMethods) {
        @try {
            NSMethodSignature *methodSignature = [self methodSignatureForSelector:NSSelectorFromString(instanceMethod)];
            
            if (methodSignature.numberOfArguments == 2
                && *methodSignature.methodReturnType != 'v') {
                    NSLog(@"%@ -- %@", instanceMethods, [self performSelector:NSSelectorFromString(instanceMethod)]);
            }
        
            
        } @catch (NSException *exception) {
            
        } @finally {
            
        }
    }
    return nil;
}

- (NSArray *)_ml_instanceMethodInfos {
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

@implementation MLNode


- (void)insertChild:(MLNode *)child atIndex:(NSUInteger)index {
    [self.children insertObject:child atIndex:index];
}
- (void)addChild:(MLNode *)child {
    [self.children addObject:child];
}


- (void)configWithView:(UIView *)view level:(NSUInteger)level {
    
    MLNode *node = [[MLNode alloc] init];
    if (view.subviews.count > self.ownerTree.degree) {
        self.ownerTree.degree = view.subviews.count;
    }
    node.degree = view.subviews.count;
    node.parent = self;
    node.ownerTree = self.ownerTree;
    node.level = ++level;
    [self.children addObject:node];
    for (UIView *subview in view.subviews) {
        [node configWithView:subview level:node.level];
    }
}

#pragma mark - setter & getter
- (NSArray<MLNode *> *)ancestors {
     NSMutableArray *ancestors = [[NSMutableArray alloc] init];
    MLNode *currentNode = self;
    while (currentNode.parent) {
        [ancestors addObject:currentNode.parent];
        currentNode = currentNode.parent;
    }
    return ancestors;
}
- (NSMutableArray<MLNode *> *)descendants {
    NSMutableArray *descendants = [[NSMutableArray alloc] init];
    [self _configureDescendantsWithMutArr:descendants];
    return descendants;
}
- (void)_configureDescendantsWithMutArr:(NSMutableArray *)mutArr {
    [mutArr addObject:self];
    for (MLNode *child in self.children) {
        [child _configureDescendantsWithMutArr:mutArr];
    }
    
}
- (NSUInteger)height {
    NSUInteger maxHeight = 0;
    [self _heightWithCurrentHeight:0 maxHeight:&maxHeight];
    return maxHeight;
}

- (void)_heightWithCurrentHeight:(NSUInteger)currentHeight maxHeight:(NSUInteger *)maxHeight {
    for (MLNode *node in self.children) {
        if (node.children) {
            currentHeight++;
            if (currentHeight > *maxHeight) {
                *maxHeight = currentHeight;
            }
        }
        [node _heightWithCurrentHeight:currentHeight maxHeight:maxHeight];
    }
}

- (NSMutableArray<MLNode *> *)children {
    
    if (_children == nil) {
        _children = [[NSMutableArray alloc] init];
    }
    return _children;
}
@end

@implementation MLTree


+ (instancetype)treeWithView:(UIView *)view {
    MLTree *tree = [[MLTree alloc] init];
    MLNode *rootNode = [[MLNode alloc] init];
    rootNode.level = 1;
    rootNode.nodeData = view;
    [rootNode configWithView:view level:rootNode.level];
    tree.rootNode = rootNode;
    rootNode.ownerTree = tree;
    return tree;
}


@end




