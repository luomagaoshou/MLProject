//
//  NSObject+ML_Debug.h
//  MLProject
//
//  Created by 妙龙赖 on 2017/1/22.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MLViewNode;
@interface NSObject (ML_Debug)
- (MLViewNode *)printViewInfo;
- (NSString *)printObjectInfo;
@end

@class MLViewNode;
@interface MLViewNode: NSObject
@property (nonatomic, strong) NSMutableArray <MLViewNode *> *subviewNodes;
@property (nonatomic, strong) MLViewNode *superViewNode;
@property (nonatomic, strong) UIView *view;
@property (nonatomic, strong) Class class;
@property (nonatomic, assign) BOOL isCurrentView;
@property (nonatomic, assign) NSInteger level;
+ (instancetype)nodeWithView:(UIView *)view;
@end
