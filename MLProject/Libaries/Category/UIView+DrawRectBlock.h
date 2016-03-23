//
//  UIView+DrawRectBlock.h
//  TestDrawRect
//
//  Created by mhergon on 20/06/14.
//  Copyright (c) 2014 mhergon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import "NSObject+RunTimeHelper.h"

typedef void (^UIViewDrawRectBlock)(CGContextRef ref, CGRect rect);


@interface UIView (DrawBlock)
@property (nonatomic, copy) UIViewDrawRectBlock drawRectBlock;
@property (nonatomic, strong) NSMutableArray *drawRectViewArray;
- (void)removeAllDrawRectViews;
- (void)removeLastDrawRectView;
- (void)configDrawRectBlock:(UIViewDrawRectBlock)drawRectBlock;
@end
