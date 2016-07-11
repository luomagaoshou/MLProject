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
    
    leftViewRect.origin = CGPointWithOffset(leftViewRect.origin, self.leftViewOffset);
    
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
    
    
    rightViewRect.origin = CGPointWithOffset(rightViewRect.origin, self.rightViewOffset);
    
    
    return rightViewRect;
}
- (CGRect)placeholderRectForBounds:(CGRect)bounds
{

   CGRect placeholderLabelRect = [self calculateMiddelLabelRectWithBounds:bounds];
    placeholderLabelRect.origin = CGPointWithOffset(placeholderLabelRect.origin, self.placeHolderLabelOffset);
    return placeholderLabelRect;
}


- (CGRect)textRectForBounds:(CGRect)bounds
{
    
    
    CGRect  textLabelRect = [self calculateMiddelLabelRectWithBounds:bounds];
    textLabelRect.origin = CGPointWithOffset(textLabelRect.origin, self.textLabelOffset);
    
    return  textLabelRect;
    
}


- (CGRect)calculateMiddelLabelRectWithBounds:(CGRect)bounds
{
      CGRect rect = CGRectMake(self.leftView.right, 0, self.width, CGRectGetHeight(bounds));
    return rect;
}
- (CGRect)editingRectForBounds:(CGRect)bounds
{

    
   CGRect editRect = [self calculateMiddelLabelRectWithBounds:bounds];
     editRect.origin = CGPointWithOffset(editRect.origin, self.editRectOffset);
    
    return editRect;
    
}




@end
