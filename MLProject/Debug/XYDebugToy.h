//
//  __  __          ____           _          _
//  \ \/ / /\_/\   /___ \  _   _  (_)   ___  | | __
//   \  /  \_ _/  //  / / | | | | | |  / __| | |/ /
//   /  \   / \  / \_/ /  | |_| | | | | (__  |   <
//  /_/\_\  \_/  \___,_\   \__,_| |_|  \___| |_|\_\
//
//  Copyright (C) Heaven.
//
//	https://github.com/uxyheaven/XYQuick
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#pragma mark -

#pragma mark - XYDebugToy
// 这个个debug的玩具类
@interface XYDebugToy : NSObject

// 当被观察的对象释放的时候打印一段String
+ (void)hookObject:(id)anObject whenDeallocLogString:(NSString *)string;

/**
 * @brief 提取视图层次结构的方法
 * @param aView 要提取的视图
 * @param indent 层次 请给0值
 * @param outstring 保存层次的字符串
 */
+ (void)dumpView:(UIView *)aView atIndent:(int)indent into:(NSMutableString *)outstring;
// 打印视图层次结构
+ (NSString *)displayViews:(UIView *)aView;

@end

#pragma mark - XYDebug
#undef	XY_PRINT_CALLSTACK
#define XY_PRINT_CALLSTACK( __n )	[XYDebug printCallstack:__n];
// 断点
#undef	XY_BREAK_POINT
#define XY_BREAK_POINT()			[XYDebug breakPoint];

#undef	XY_BREAK_POINT_IF
#define XY_BREAK_POINT_IF( __x )	if ( __x ) { [XYDebug breakPoint]; }

#undef	XY_BB
#define XY_BB						[XYDebug breakPoint];

#ifdef DEBUG
#define uxy_breakPoint_on_debug asm("int3")
#else
#define uxy_breakPoint_on_debug
#endif

// 验证
#define XY_ASSERT_RETURN_ON_RELEASE( __condition, __desc, ... ) \
        metamacro_if_eq(0, metamacro_argcount(__VA_ARGS__)) \
        (__XY_ASSERT_1(__condition, __desc, __VA_ARGS__))    \
        (__XY_ASSERT_2(__condition, __desc, __VA_ARGS__))

#define __XY_ASSERT_1( __condition, __desc ) \
        if ( !(__condition) ) uxy_breakPoint_on_debug;   \
        else return;

#define __XY_ASSERT_2( __condition, __desc, __returnedValue ) \
        if ( !(__condition) ) uxy_breakPoint_on_debug;   \
        else return __returnedValue;


// 这个类名字需要在想下
@interface XYDebug : NSObject

+ (instancetype)sharedInstance;
+ (void)purgeSharedInstance;

+ (NSArray *)callstack:(NSUInteger)depth;
+ (void)printCallstack:(NSUInteger)depth;

+ (void)breakPoint;
+ (void)breakPointOnDebug;

// memory
- (void)allocAllMemory;
- (void)freeAllMemory;
- (void)allocMemory:(NSInteger)MB;
- (void)freeLastMemory;

/// window上的调试的label
+ (UILabel *)debugLabel;

@end;

// uiview点击时 加边框
@interface UIWindow(XYDebug)

/// 调试用的label, tag = 66666, 可以在viewDidAppear or 其他方法里添加当前页面的调试信息
@property (nonatomic, strong, readonly) UILabel *uxy_debugLabel;

@end

#pragma mark - BorderView

@interface BorderView : UIView
- (void)startAnimation;
@end

