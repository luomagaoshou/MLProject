//
//  UITextField+ML_Tools.m
//  LotterySteward
//
//  Created by apple on 15/9/28.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "UITextField+ML_Tools.h"
static const char *ExternLeftViewOffsetKey;
static const char *ExternRightViewOffsetKey;
static const char *ExternEditRectOffsetKey;
static const char *ExternTextLabelOffsetKey;
static const char *ExternPlaceHolderLabelOffsetKey;

static const char *ExternLeftViewRectKey;
static const char *ExtrenLeftViewSizeProportionKey;

static const char *ExternRightViewRectKey;
static const char *ExtrenRightViewSizeProportionKey;
@implementation UITextField (ML_Tools)

- (instancetype)initWithPlaceHolder:(NSString *)placeholder
{
    return [self initWithFrame:CGRectZero placeHolder:placeholder borderColor:nil borderWidth:0 cornerRadius:0];
}
- (instancetype)initWithPlaceHolder:(NSString *)placeholder placeholderLabelColor:(UIColor *)placeholderLabelColor
                           fontSize:(CGFloat)fontSize
{
    return [self initWithFrame:CGRectZero placeHolder:placeholder placeholderLabelColor:placeholderLabelColor fontSize:fontSize borderColor:0 borderWidth:0 cornerRadius:0];
}


- (instancetype)initWithFrame:(CGRect)frame placeHolder:(NSString *)placeholder borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius
{
    return [self initWithFrame:frame placeHolder:placeholder placeholderLabelColor:[UIColor grayColor] fontSize:14 borderColor:borderColor borderWidth:borderWidth cornerRadius:cornerRadius];
}

- (instancetype)initWithFrame:(CGRect)frame
                  placeHolder:(NSString *)placeholder placeholderLabelColor:(UIColor *)placeholderLabelColor
                     fontSize:(CGFloat)fontSize
                  borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth cornerRadius:(CGFloat)cornerRadius
{
    self = [super init];
    if (self) {
        self.frame = frame;
        self.placeholder = placeholder;
        self.layer.borderColor = borderColor.CGColor;
        self.layer.borderWidth = borderWidth;
        self.layer.cornerRadius = cornerRadius;
        [self setValue:placeholderLabelColor forKeyPath:@"_placeholderLabel.textColor"];
        [self setValue:[UIFont systemFontOfSize:fontSize] forKeyPath:@"_placeholderLabel.font"];
    }
    return self;
}
- (UILabel *)placeholderLabel
{
    return [self valueForKey:@"_placeholderLabel"];
}
- (UILabel *)displayLabel
{
    return [self valueForKey:@"_displayLabel"];
}

#pragma mark - ========= LayoutSubviews =========

#pragma mark - ========= Setter & Getter =========
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-protocol-method-implementation"

- (CGRect)leftViewRectForBounds:(CGRect)bounds
{


    CGRect leftViewRect = [self getLeftOrRightViewDefaultFrameWithView:self.leftView type:@"leftView"];
    
  
    
    if (!CGRectIsEmpty(self.leftViewRect)) {
        leftViewRect = self.leftViewRect;
    }
    
    leftViewRect.origin.x += self.leftViewOffset.x;
    leftViewRect.origin.y += self.leftViewOffset.y;
    
    return leftViewRect;
}
-(CGRect)rightViewRectForBounds:(CGRect)bounds
{
    CGRect rightViewRect =[self getLeftOrRightViewDefaultFrameWithView:self.rightView type:@"rightView"];

    
    if (!CGRectIsEmpty(self.rightViewRect)) {
        rightViewRect = self.rightViewRect;
    }
    
    rightViewRect.origin.x += self.rightViewOffset.x;
    rightViewRect.origin.y += self.rightViewOffset.y;
    
    return rightViewRect;
}
- (CGRect)placeholderRectForBounds:(CGRect)bounds
{
    CGRect leftViewRect = self.leftView.frame;
    CGRect rightViewRect = self.rightView.frame;
    NSLog(@"leftViewRect :%@", NSStringFromCGRect(leftViewRect));
    NSLog(@"rightViewRect:%@\n\n", NSStringFromCGRect(rightViewRect));
  
    CGRect placeholderLabelRect;
    placeholderLabelRect = CGRectMake(CGRectGetMaxX(leftViewRect), 0, CGRectGetWidth(bounds) - CGRectGetMaxX(leftViewRect) -( CGRectGetMaxX(self.rightViewRect) - CGRectGetMinX(self.rightViewRect)), CGRectGetHeight(bounds));

    placeholderLabelRect.origin.x += self.placeHolderLabelOffet.x;
    placeholderLabelRect.origin.y += self.placeHolderLabelOffet.y;
    
    return placeholderLabelRect;
}


- (CGRect)textRectForBounds:(CGRect)bounds
{

    
    CGRect leftViewRect = self.leftView.frame;
    CGRect rightViewRect = self.rightView.frame;
    NSLog(@"leftViewRect :%@", NSStringFromCGRect(leftViewRect));
    NSLog(@"rightViewRect:%@\n\n", NSStringFromCGRect(rightViewRect));
    
    CGRect textLabelRect;
    textLabelRect = CGRectMake(CGRectGetMaxX(leftViewRect), 0, CGRectGetWidth(bounds) - CGRectGetMaxX(leftViewRect) -( CGRectGetMaxX(self.rightViewRect) - CGRectGetMinX(self.rightViewRect)), CGRectGetHeight(bounds));
    
    textLabelRect.origin.x += self.textLabelOffset.x;
    textLabelRect.origin.y += self.textLabelOffset.y;
 
    
    return  textLabelRect;

}
- (CGRect)editingRectForBounds:(CGRect)bounds
{
    CGRect leftViewRect = self.leftView.frame;
    CGRect rightViewRect = self.rightView.frame;
    NSLog(@"leftViewRect :%@", NSStringFromCGRect(leftViewRect));
    NSLog(@"rightViewRect:%@\n\n", NSStringFromCGRect(rightViewRect));
    
    CGRect editRect;
    editRect = CGRectMake(CGRectGetMaxX(leftViewRect), 0, CGRectGetWidth(bounds) - CGRectGetMaxX(leftViewRect) - ( CGRectGetMaxX(self.rightViewRect) - CGRectGetMinX(self.rightViewRect)), CGRectGetHeight(bounds));
    
    editRect.origin.x += self.editRectOffset.x;
    editRect.origin.y += self.editRectOffset.y;

    
    return editRect;

}

#pragma mark - ========= Helper Methods =========
- (CGRect)getLeftOrRightViewDefaultFrameWithView:(UIView *)view type:(NSString *)type
{
    CGRect defaultRect;
    UIImage *image;
     CGSize size;
    defaultRect = CGRectMake(0, CGRectGetHeight(self.bounds)/2 - 10, 20, 20);
    if ([view isKindOfClass:[UIImageView class]]) {
        image = [view valueForKey:@"image"];
        size = image.size;
    }
    else if ([view isKindOfClass:[UIButton class]])
    {
        UIButton *btn = (UIButton *)view;
        if ([btn imageForState:UIControlStateNormal]) {
            image = [btn imageForState:UIControlStateNormal];
              size = image.size;
        }
        else if (btn.imageView.image)
        {
            image = btn.imageView.image;
              size = image.size;
        }
        else
        {
            size = btn.bounds.size;
        }
        
        
    }
    else if ([view isKindOfClass:[UILabel class]])
    {
        size = view.bounds.size;
    }
    
  
    
   
    if ([type isEqualToString:@"leftView"]) {
        if (self.leftViewSizeProportion) {
            size.width = size.width * self.leftViewSizeProportion;
            size.height = size.height * self.leftViewSizeProportion;
        }
              defaultRect = CGRectMake(0, CGRectGetHeight(self.bounds)/2 - size.height/2, size.width, size.height);
    }
    else if ([type isEqualToString:@"rightView"])
    {
        if (self.rightViewSizeProportion) {
            size.width = size.width * self.rightViewSizeProportion;
            size.height = size.height * self.rightViewSizeProportion;
        }
               defaultRect = CGRectMake(CGRectGetWidth(self.bounds) - size.width, CGRectGetHeight(self.bounds)/2 - size.height/2, size.width, size.height);
    }
    
    
    return defaultRect;

}
#pragma mark - ========= Setter & Getter =========
-(void)setEditRectOffset:(CGPoint)editRectOffset
{
     objc_setAssociatedObject(self, &ExternEditRectOffsetKey, NSStringFromCGPoint(editRectOffset), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGPoint)editRectOffset
{
    return CGPointFromString(objc_getAssociatedObject(self, &ExternEditRectOffsetKey));
}
- (void)setTextLabelOffset:(CGPoint)textLabelOffset
{
     objc_setAssociatedObject(self, &ExternTextLabelOffsetKey, NSStringFromCGPoint(textLabelOffset), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGPoint)textLabelOffset
{
    return CGPointFromString(objc_getAssociatedObject(self, &ExternTextLabelOffsetKey));
}
- (void)setPlaceHolderLabelOffet:(CGPoint)placeHolderLabelOffet
{
    objc_setAssociatedObject(self, &ExternPlaceHolderLabelOffsetKey, NSStringFromCGPoint(placeHolderLabelOffet), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGPoint)placeHolderLabelOffet
{
    return  CGPointFromString(objc_getAssociatedObject(self, &ExternPlaceHolderLabelOffsetKey));
}
- (void)setLeftViewOffset:(CGPoint)leftViewOffset
{
    objc_setAssociatedObject(self, &ExternLeftViewOffsetKey, NSStringFromCGPoint(leftViewOffset), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGPoint)leftViewOffset
{
    return CGPointFromString(objc_getAssociatedObject(self, &ExternLeftViewOffsetKey));
}
- (void)setRightViewOffset:(CGPoint)rightViewOffset
{
     objc_setAssociatedObject(self, &ExternRightViewOffsetKey, NSStringFromCGPoint(rightViewOffset), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGPoint)rightViewOffset
{
    return CGPointFromString(objc_getAssociatedObject(self, &ExternRightViewOffsetKey));
}




- (void)setLeftViewRect:(CGRect)leftViewRect
{
    objc_setAssociatedObject(self, &ExternLeftViewRectKey, NSStringFromCGRect(leftViewRect), OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGRect)leftViewRect
{
    return  CGRectFromString(objc_getAssociatedObject(self, &ExternLeftViewRectKey));
}
- (void)setLeftViewSizeProportion:(CGFloat)leftViewSizeProportion
{
    objc_setAssociatedObject(self, &ExtrenLeftViewSizeProportionKey,[NSString stringWithFormat:@"%f",leftViewSizeProportion], OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGFloat)leftViewSizeProportion
{
    return [objc_getAssociatedObject(self, &ExtrenLeftViewSizeProportionKey) floatValue];
}
- (void)setRightViewRect:(CGRect)rightViewRect
{
    objc_setAssociatedObject(self, &ExternRightViewRectKey, NSStringFromCGRect(rightViewRect), OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (CGRect)rightViewRect
{
    return  CGRectFromString(objc_getAssociatedObject(self, &ExternRightViewRectKey));
}
- (void)setRightViewSizeProportion:(CGFloat)rightViewSizeProportion
{
    objc_setAssociatedObject(self, &ExtrenRightViewSizeProportionKey,[NSString stringWithFormat:@"%f",rightViewSizeProportion], OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (CGFloat)rightViewSizeProportion
{
    return [objc_getAssociatedObject(self, &ExtrenRightViewSizeProportionKey) floatValue];
}

@end
