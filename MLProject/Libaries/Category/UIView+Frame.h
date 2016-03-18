//
//  UIView+Frame.h
//  iOS-Categories (https://github.com/shaojiankui/iOS-Categories)
//
//  Created by Jakey on 14/12/15.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
// shortcuts for frame properties
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;

// shortcuts for positions
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;



@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat left;

@property (nonatomic) CGFloat x;
@property (nonatomic) CGFloat y;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;



//Move methods

- (void)moveHorizontal:(CGFloat)horizontal vertical:(CGFloat)vertical;

- (void)moveHorizontal:(CGFloat)horizontal vertical:(CGFloat)vertical addWidth:(CGFloat)widthAdded addHeight:(CGFloat)heightAdded;

- (void)moveToHorizontal:(CGFloat)horizontal toVertical:(CGFloat)vertical;

- (void)moveToHorizontal:(CGFloat)horizontal toVertical:(CGFloat)vertical setWidth:(CGFloat)width setHeight:(CGFloat)height;

//Set width/height

- (void)setWidth:(CGFloat)width height:(CGFloat)height;

- (void)setWidth:(CGFloat)width;

- (void)setHeight:(CGFloat)height;

//Add width/height

- (void)addWidth:(CGFloat)widthAdded addHeight:(CGFloat)heightAdded;

- (void)addWidth:(CGFloat)widthAdded;

- (void)addHeight:(CGFloat)heightAdded;

//Set corner radius

- (void)setCornerRadius:(CGFloat)radius;

- (void)setCornerRadius:(CGFloat)radius borderColor:(UIColor *)borderColor;

- (CGRect)frameInWindow;

@end
