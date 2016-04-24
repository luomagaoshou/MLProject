//
//  UIView+DrawRectBlock.m
//  TestDrawRect
//
//  Created by mhergon on 20/06/14.
//  Copyright (c) 2014 mhergon. All rights reserved.
//

#import "UIView+DrawRectBlock.h"

@implementation UIView (DrawBlock)
@dynamic drawRectViewArray;
@dynamic drawRectBlock;
- (void)removeAllDrawRectViews{
    for (NSInteger i = 0; i < self.drawRectViewArray.count; i++) {
        [((UIImageView *)self.drawRectViewArray[i]) removeFromSuperview];
    }
    self.drawRectViewArray = nil;
    
}
- (void)removeLastDrawRectView
{
    if (self.drawRectViewArray.count > 0) {
         [((UIImageView *)self.drawRectViewArray[self.drawRectViewArray.count - 1]) removeFromSuperview];
        [self.drawRectViewArray removeObjectAtIndex:self.drawRectViewArray.count - 1];
    }
   
 
}
- (void)configDrawRectBlock:(UIViewDrawRectBlock)drawRectBlock
{
    self.drawRectBlock = drawRectBlock;
}
- (void)startDrawInsideWithBlock:(UIViewDrawRectBlock)block{
    if (block) {
        
        // Add subview
        UIImageView *drawView = [[UIImageView alloc] init];
        drawView.translatesAutoresizingMaskIntoConstraints = NO;
        drawView.userInteractionEnabled = NO;
        drawView.backgroundColor = [UIColor clearColor];
        [self.drawRectViewArray addObject:drawView];
      
        [self addSubview:drawView];
        
        NSDictionary *views = NSDictionaryOfVariableBindings(drawView);
        NSArray *constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"H:|[drawView]|"
                                                                       options:0
                                                                       metrics:nil
                                                                         views:views];
        [self addConstraints:constraints];
        constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|[drawView]|"
                                                              options:0
                                                              metrics:nil
                                                                views:views];
        [self addConstraints:constraints];
        [self setNeedsLayout];
        
        // Draw
        UIGraphicsBeginImageContextWithOptions(self.bounds.size, NO, 0.0);
        CGContextRef ref = UIGraphicsGetCurrentContext();
        block(ref, self.bounds);
        drawView.image = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        
             
    }
    
}
#pragma mark - ========= Setter & Getter =========
- (void)setDrawRectBlock:(UIViewDrawRectBlock)drawRectBlock
{
       objc_setAssociatedObject(self, @selector(drawRectBlock), drawRectBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [self startDrawInsideWithBlock:drawRectBlock];
   
}
- (UIViewDrawRectBlock)drawRectBlock
{
    return objc_getAssociatedObject(self, @selector(drawRectBlock));
}

- (void)setDrawRectViewArray:(NSMutableArray *)drawRectViewArray
{

    objc_setAssociatedObject(self, @selector(drawRectViewArray), drawRectViewArray, OBJC_ASSOCIATION_COPY_NONATOMIC);
}
- (NSMutableArray *)drawRectViewArray
{
    if (objc_getAssociatedObject(self, @selector(drawRectViewArray)) == nil) {
        NSMutableArray *viewArray = [[NSMutableArray alloc] init];
        self.drawRectViewArray = viewArray;
    }
    return objc_getAssociatedObject(self, @selector(drawRectViewArray)) ;
}

@end
