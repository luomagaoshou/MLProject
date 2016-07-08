//
//  MLTextField.h
//  MLProject
//
//  Created by 妙龙赖 on 16/7/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLTextField : UITextField



@property (nonatomic, assign) CGPoint leftViewOffset;
@property (nonatomic, assign) CGPoint rightViewOffset;

@property (nonatomic, assign) CGPoint textLabelOffset;
@property (nonatomic, assign) CGPoint editRectOffset;
@property (nonatomic, assign) CGPoint placeHolderLabelOffset;

@property (nonatomic, assign) CGRect leftViewRect;
@property (nonatomic, assign) CGRect rightViewRect;

- (void)setMiddleLabelsOffset:(CGPoint)offset;
@end
