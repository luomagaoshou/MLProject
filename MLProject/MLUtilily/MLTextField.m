//
//  MLTextField.m
//  MLProject
//
//  Created by 妙龙赖 on 16/7/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTextField.h"
#import "UIView+Frame.h"
@implementation MLTextField
- (void)setMiddleLabelsOffset:(CGPoint)offset
{
    self.placeHolderLabelOffset = offset;
    self.textLabelOffset = offset;
    self.editRectOffset = offset;
}

#pragma mark - ========= Overrided =========
- (CGRect)leftViewRectForBounds:(CGRect)bounds
{

    CGRect leftViewRect;
    if (CGRectIsEmpty(self.leftViewRect)) {
        leftViewRect = [super leftViewRectForBounds:bounds];
        
    }
    else
    {
        leftViewRect = self.leftViewRect;
    }
    
    leftViewRect = CGRectOffset(leftViewRect, self.leftViewOffset.x, self.leftViewOffset.y);
    
    return leftViewRect;
}
-(CGRect)rightViewRectForBounds:(CGRect)bounds
{
    CGRect rightViewRect;
    if (CGRectIsEmpty(self.rightViewRect)) {
        rightViewRect = [super rightViewRectForBounds:bounds];
        
    }
    else
    {
        rightViewRect = self.rightViewRect;
    }
    
    
    rightViewRect = CGRectOffset(rightViewRect, self.rightViewOffset.x, self.rightViewOffset.y);
    
    
    return rightViewRect;
}
- (CGRect)placeholderRectForBounds:(CGRect)bounds
{

   CGRect placeholderLabelRect = [self calculateMiddelLabelRectWithBounds:bounds];
    placeholderLabelRect = CGRectOffset(placeholderLabelRect, self.placeHolderLabelOffset.x, self.placeHolderLabelOffset.y);
    return placeholderLabelRect;
}


- (CGRect)textRectForBounds:(CGRect)bounds
{

    
    CGRect  textLabelRect = [self calculateMiddelLabelRectWithBounds:bounds];
    textLabelRect = CGRectOffset(textLabelRect, self.textLabelOffset.x, self.textLabelOffset.y);
    
    return  textLabelRect;
    
}


- (CGRect)calculateMiddelLabelRectWithBounds:(CGRect)bounds
{
     // CGRect rect = CGRectMake(self.leftView.right, 0, self.width - self.leftView.right - (self.width - self.rightView.left) - self.leftViewOffset.x + self.rightViewOffset.x, CGRectGetHeight(bounds));
      CGRect rect = CGRectMake(self.leftView.right, 0, self.width, CGRectGetHeight(bounds));
    return rect;
}
- (CGRect)editingRectForBounds:(CGRect)bounds
{

    
   CGRect editRect = [self calculateMiddelLabelRectWithBounds:bounds];
     editRect = CGRectOffset(editRect, self.editRectOffset.x, self.editRectOffset.y);
    
    return editRect;
    
}
//- (CGRect)clearButtonRectForBounds:(CGRect)bounds
//{
//    CGRect clearButtonRect = [super clearButtonRectForBounds:bounds];
//   clearButtonRect = CGRectOffset(clearButtonRect, -12, 0);
//    return clearButtonRect;
//    
//}



@end
