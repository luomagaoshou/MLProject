//
//  UITextView+PlaceHolder.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/14.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "UITextView+PlaceHolder.h"
#import "NSString+Size.h"
#import "NSObject+ML_Tools.h"
@implementation UITextView (PlaceHolder)
- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:UITextViewTextDidChangeNotification];
    [[NSNotificationCenter defaultCenter] removeObserver:UITextViewTextDidBeginEditingNotification];
    
}
- (void)textViewTextChange
{
    if (self.isHiddenWhenHasText) {
        self.placeHolderLabel.hidden = self.hasText;
       
    }
    else
    {
        self.placeHolderLabel.hidden = NO;
        if (self.hasText) {
      
             [self reverseFirstLineCursorPositionInset];
            [self moveFirstLineStringIndentToPlaceHolder];
            
           
        }
        else  {
           
           [self reverseFirstLineCursorPositionInset];
            [self moveFirstLineStringIndentToPlaceHolder];
            
        }
       
    }

}
- (void)textViewBeginEdit
{

    if (self.isAutoHandleCursorPosition) {
        
        if (self.hasText) {
          
            
            excuteBlockAtAppearTime(^(NSInteger appearTime) {
                if (appearTime == 1) {
                    [self reverseFirstLineStringHeadIndent];
                }
                else
                {
                    [self moveFirstLineStringIndentToPlaceHolder];
                }
            });
          
        }
        else
        {
            
            excuteBlockAtAppearTime(^(NSInteger appearTime) {
                if (appearTime == 1) {
                     [self moveFirstLineCursorPositionToPlaceHolder];
                }
                else
                {
                      [self reverseFirstLineStringHeadIndent];
                }
            });
        }
        
    }
  
  
}
#pragma mark - ========= FirstLineCursorPosition =========
/**
 *  移动第一行光标到palceHolder 无内容时调整(实际调整textContainerInset)
 */
- (void)moveFirstLineCursorPositionToPlaceHolder
{
    UIEdgeInsets textContainerInset = self.originalTextContainerInset;
    CGSize size = [self getFittingSize];
    textContainerInset.left = size.width + self.editIdentToPlaceHolder;

    self.textContainerInset = textContainerInset;
   
 
}
/**
 *  还原光标 有内容是还原
 */
- (void)reverseFirstLineCursorPositionInset
{
    self.textContainerInset = self.originalTextContainerInset;
}


#pragma mark - ========= FirstLineStringHeadIndent =========
/**
 *  移动第一行缩进 有内容时调整（实质调整attrString）
 */
- (void)moveFirstLineStringIndentToPlaceHolder
{
    CGSize size = [self getFittingSize];
  
    
    CGFloat indent = size.width + self.editIdentToPlaceHolder;
    
    [self setFirstLineHeadStringIndentWith:indent];
}
/**
 *  第一行缩进 无内容时还原
 */
- (void)reverseFirstLineStringHeadIndent
{
    [self setFirstLineHeadStringIndentWith:0];
}
- (void)setFirstLineHeadStringIndentWith:(CGFloat)indent
{
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    
    paragraphStyle.firstLineHeadIndent = indent;    /**首行缩进宽度*/
    paragraphStyle.alignment = NSTextAlignmentJustified;
    NSDictionary *attributes = @{
                                 NSFontAttributeName:self.font,
                                 NSParagraphStyleAttributeName:paragraphStyle
                                 };
    self.attributedText = [[NSAttributedString alloc] initWithString:self.text attributes:attributes];
}
#pragma mark - ========= Size =========
- (CGSize)getFittingSize
{
    CGSize size;
    switch (self.cursorPositionAdjustType) {
        case UITextViewAdjustCursorPositionTypeAccrodingByStringSize:
        {
            size = [self.placeHolderLabel.text sizeWithFont:self.placeHolderLabel.font constrainedToHeight:MAXFLOAT];
        }
            break;
        case UITextViewAdjustCursorPositionTypeAccrodingByPlaceHolderLabelSize:
        {
            size = self.placeHolderLabel.size;
        }
            break;
        default:
        {
            size = self.placeHolderLabel.size;
        }
            
            break;
    }
    return size;
}

- (void)ML_SetDefaultSetting
{
    self.cursorPositionAdjustType = UITextViewAdjustCursorPositionTypeAccrodingByPlaceHolderLabelSize;
    self.autoHandleCursorPosition = YES;
    self.originalTextContainerInset = self.textContainerInset;
    self.editIdentToPlaceHolder = 10;
    self.placeHolderLabel.size = CGSizeMake(100, 20);
    
}
#pragma mark - ========= Setter & Getter =========
- (void)setPlaceHolderLabel:(UILabel *)placeHolderLabel
{
    
    objc_setAssociatedObject(self, @selector(setPlaceHolderLabel:), placeHolderLabel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
}
- (UILabel *)placeHolderLabel
{
    if (objc_getAssociatedObject(self, @selector(setPlaceHolderLabel:)) == nil) {
        UILabel *label = [[UILabel alloc] initWithFrame:self.bounds];
        if (label.bounds.size.height > 20) {
            CGRect origionRect = label.frame;
            CGRect newRect = CGRectMake(origionRect.origin.x, origionRect.origin.y, origionRect.size.width, 20);
            label.frame = newRect;
        }
        label.textColor = kUI_TEXT_COLOR_LIGHT_GRAY;
        label.userInteractionEnabled = NO;
        [self addSubview:label];
        [self setPlaceHolderLabel:label];
        
     
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textViewTextChange) name:UITextViewTextDidChangeNotification object:self];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textViewBeginEdit) name:UITextViewTextDidBeginEditingNotification object:self];
    }
    return objc_getAssociatedObject(self, @selector(setPlaceHolderLabel:));
}
- (void)setHiddenWhenHasText:(BOOL)hiddenWhenHasText
{
    
    objc_setAssociatedObject(self, @selector(isHiddenWhenHasText), @(hiddenWhenHasText), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (BOOL)isHiddenWhenHasText
{
   return  [objc_getAssociatedObject(self, @selector(isHiddenWhenHasText)) boolValue];
}
- (void)setAutoHandleCursorPosition:(BOOL)autoHandleCursorPosition
{
    objc_setAssociatedObject(self, @selector(isAutoHandleCursorPosition), @(autoHandleCursorPosition), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


- (BOOL)isAutoHandleCursorPosition
{
    return [objc_getAssociatedObject(self, @selector(isAutoHandleCursorPosition)) boolValue];
}

- (void)setOriginalTextContainerInset:(UIEdgeInsets)originalTextContainerInset
{
    objc_setAssociatedObject(self, @selector(originalTextContainerInset), [NSValue valueWithUIEdgeInsets:originalTextContainerInset], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}


- (UIEdgeInsets)originalTextContainerInset
{
    return [objc_getAssociatedObject(self, @selector(originalTextContainerInset)) UIEdgeInsetsValue];
}
- (void)setEditIdentToPlaceHolder:(CGFloat)editIdentToPlaceHolder
{
    objc_setAssociatedObject(self, @selector(editIdentToPlaceHolder), @(editIdentToPlaceHolder), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (CGFloat)editIdentToPlaceHolder
{
    return [objc_getAssociatedObject(self, @selector(editIdentToPlaceHolder)) floatValue];
}
- (void)setCursorPositionAdjustType:(UITextViewAdjustCursorPositionType)cursorPositionAdjustType
{
    objc_setAssociatedObject(self, @selector(cursorPositionAdjustType), @(cursorPositionAdjustType), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (UITextViewAdjustCursorPositionType)cursorPositionAdjustType
{
    return [objc_getAssociatedObject(self, @selector(cursorPositionAdjustType)) integerValue];
}
@end
