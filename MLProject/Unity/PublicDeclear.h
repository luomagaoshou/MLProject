//
//  PublicDeclear.h
//  express
//
//  Created by apple on 15/12/17.
//  Copyright © 2015年 apple. All rights reserved.
//

#ifndef PublicDeclear_h
#define PublicDeclear_h
#import "PublicColorDeclear.h"

/** @name DEBUG 模式下打印日志和当前行数 */
// @{
#if DEBUG

//For color log
#define XCODE_COLORS_ESCAPE_MAC @"\033["
#define XCODE_COLORS_ESCAPE  XCODE_COLORS_ESCAPE_MAC

#define XCODE_COLORS_RESET_FG  XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG  XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET     XCODE_COLORS_ESCAPE @";"   // Clear any foreground or background color

#define XCODE_COLORS "XcodeColors"
#define LogGreen(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,255,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogWarning(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)



//#define NSLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content--->>> \n%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

#define NSLog(format, ...) do {                                                                          \
fprintf(stderr, "<%s : %d> %s\n",                                           \
[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
__LINE__, __func__);                                                        \
(NSLog)((format), ##__VA_ARGS__);                                           \
fprintf(stderr, "-------\n");                                               \
} while (0)
#else

#define NSLog(FORMAT, ...)          nil

#define LogGreen(FORMAT, ...)       nil
#define LogWarning(FORMAT, ...)     nil


#endif

#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, __VA_ARGS__);
#define getParams(kind, ...) NSLog(__VA_ARGS__);
// @}end of DEBUG 模式下打印日志和当前行数

/** @name 获取屏幕 宽度、高度 */
// @{
/** @attention 勿删 */
#define SCREEN_WIDTH  ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define SCREEN_SCALE ([UIScreen mainScreen].scale)
// @}end of 获取屏幕 宽度、高度
#define CGPointWithOffset(originPoint, offsetPoint) \
CGPointMake(originPoint.x + offsetPoint.x, originPoint.y + offsetPoint.y)
/** @name version */
// @{
#define CurrentDevice [UIDevice currentDevice]
#define CurrentSystemVersion [CurrentDevice systemVersion]
#define IOS_VERSION [CurrentSystemVersion floatValue]
// @}end of version

/** @name 状态栏 高度 */
// @{
#define STATUSBAR_HEIGHT (IOS_VERSION < 7.0?20:0)
// @}end of 状态栏 高度

#define ViewRadiusBorderWidthColor(View, Radius, Width, Color)\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[(Color == nil ?[UIColor clearColor]:Color) CGColor]]

#define LabelAlignmentFontSizeTextColor(Label, Alignment, FontSize, TextColor)\
Label.textAlignment = Alignment;\
Label.font = [UIFont systemFontOfSize:FontSize];\
Label.textColor = TextColor


#define ButtonTextColorTextSizeBackground(Button, TextColor, FontSize,  BackgroundColor)\
[Button setTitleColor:TextColor forState:UIControlStateNormal];\
Button.titleLabel.font = [UIFont systemFontOfSize:FontSize];\
Button.backgroundColor = BackgroundColor

#define ButtonEventOnSelf(Action)\
[Button addTarget:self action:Action forControlEvents:UIControlEventTouchUpInside]
#endif /* PublicDeclear_h */
