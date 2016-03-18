//
//  UITextField+ML_Tools.h
//  LotterySteward
//
//  Created by apple on 15/9/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (ML_Tools)

- (instancetype)initWithPlaceHolder:(NSString *)placeholder;
- (instancetype)initWithPlaceHolder:(NSString *)placeholder placeholderLabelColor:(UIColor *)placeholderLabelColor
                           fontSize:(CGFloat)fontSize;
- (instancetype)initWithFrame:(CGRect)frame placeHolder:(NSString *)placeholder borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius;

- (UILabel *)placeholderLabel;
- (UILabel *)displayLabel;


@property (nonatomic, assign) CGPoint leftViewOffset;
@property (nonatomic, assign) CGPoint rightViewOffset;
@property (nonatomic, assign) CGPoint textLabelOffset;
@property (nonatomic, assign) CGPoint editRectOffset;
@property (nonatomic, assign) CGPoint placeHolderLabelOffet;

@property (nonatomic, assign) CGRect leftViewRect;
@property (nonatomic, assign) CGFloat leftViewSizeProportion;

@property (nonatomic, assign) CGRect rightViewRect;
@property (nonatomic, assign) CGFloat rightViewSizeProportion;

@end
