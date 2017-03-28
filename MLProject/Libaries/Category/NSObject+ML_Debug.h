//
//  NSObject+ML_Debug.h
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/22.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MLTreeNode;
@interface NSObject (ML_Debug)
- (MLTreeNode *)printViewInfo;
- (NSString *)printObjectInfo;
- (NSString *)printIvars;
- (NSString *)printProperties;
- (NSString *)printNoAgrumentHasReturnInstanceMethod;
@end



@class MLTreeNode;
@interface MLTreeNode: NSObject
@property (nonatomic, strong) NSMutableArray <MLTreeNode *> *childrenNode;
@property (nonatomic, strong) MLTreeNode *parentNode;
@property (nonatomic, assign) NSInteger degree;
@property (nonatomic, strong) UIView *view;
@property (nonatomic, assign) NSInteger level;

@property (nonatomic, strong) MLTreeNode *ancestor;
@property (nonatomic, strong, readonly) NSArray <MLTreeNode *> *descendants;

+ (instancetype)startNodeWithView:(UIView *)view;
- (instancetype)nodeWithSequenceNumber:(NSInteger)sequenceNumber;
- (instancetype)previewNode;
- (instancetype)nextNode;
- (instancetype)rootNode;
- (BOOL)hasSameLevelNodeBehindWithLevel:(NSInteger)level;
@end



@class MLTree;
@class MLNode;
@interface MLNode : NSObject
@property (nonatomic, weak) MLTree *ownerTree;

@property (nonatomic, strong) id nodeData;

/**
 孩子(Child)：结点子树的根。
 */
@property (nonatomic, strong) NSMutableArray<MLNode *> *children;

/**
 结点的度(Degree of Node)：结点所拥有的子树的个数
 */
@property (nonatomic, assign) NSInteger degree;


/**
 阶度(level)：为树中的第几代，而根节点为第一代，阶度为1
 */
@property (nonatomic, assign) NSUInteger level;

/**
 高度(height)：指一节点往下走到叶节点的最长路径。
 */
- (NSUInteger)height;
/**
 双亲(Parent)：结点的上层结点叫该结点的双亲。
 */
@property (nonatomic, strong) MLNode *parent;

/**
 祖先(Ancestor)：从根到该结点所经分支上的所有结点
 */
- (NSArray<MLNode *> *)ancestors;

/**
 子孙(Descendant)：以某结点为根的子树中的任一结点。
 */
- (NSMutableArray<MLNode *> *)descendants;

- (void)insertChild:(MLNode *)child atIndex:(NSUInteger)index;
- (void)addChild:(MLNode *)child;
@end

@interface MLTree : NSObject


@property (nonatomic, strong) MLNode *rootNode;

/**
 叶子结点(Leaf Node)：度为0的结点，也叫终端结点
 */
@property (nonatomic, strong) NSMutableArray<MLNode *> *leafNodes;

/**
 分支结点(Branch Node)：度不为0的结点，也叫非终端结点或内部结点。
 */
@property (nonatomic, strong) NSMutableArray<MLNode *> *branchNodes;

/**
 树的度(Degree of Tree)：树中各结点度的最大值
 */
@property (nonatomic, assign) NSInteger degree;
+ (instancetype)treeWithView:(UIView *)view;
@end
