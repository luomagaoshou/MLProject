//
//  MenuScrollView.m
//  LotteryStraightTrain
//
//  Created by apple on 16/1/13.
//  Copyright © 2016年 apple. All rights reserved.
//

#import "MenuScrollView.h"
#import <Masonry/Masonry.h>
@implementation MenuScrollView

#pragma mark - ========= Helper Methods =========
- (instancetype)initWithFrame:(CGRect)frame titles:(NSArray *)titles
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setTitles:titles];
        
    }
    return self;
}
- (instancetype)initWithFrame:(CGRect)frame attrTitles:(NSArray *)attrTitles
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setAttrTitle:attrTitles];
    }
    return self;
}
- (void)setTitles:(NSArray *)titles
{
   
   
    [self setupMenuTitles:titles];
    [self addSubview:self.animationIdentifierView];
    self.animationIdentifierView.frame = CGRectMake(0, self.height - 3, self.width/titles.count, 3);
    
}
- (void)setAttrTitle:(NSArray *)attrTitles
{
    self.autoresizingMask = UIViewAutoresizingFlexibleWidth;
    [self setupMenuAttrTitles:attrTitles];
    [self addSubview:self.animationIdentifierView];
    self.animationIdentifierView.frame = CGRectMake(0, self.height - 3, self.width/attrTitles.count, 3);
}
- (void)awakeFromNib
{
    self.width = SCREEN_WIDTH;
}
#pragma mark - ========= Helper Methods =========
- (void)handleSenderEvent:(UIButton *)btn
{
     __weak typeof(self) weakSelf = self;
    
  
    for (NSInteger i = 0; i < self.buttons.count; i++) {
        UIButton *button = self.buttons[i];
        if (button == btn) {
            button.selected = YES;
            if (self.delegateOfClick) {
                if ([self.delegateOfClick respondsToSelector:@selector(MenuButtonClickAtIndex:)]) {
                    [self.delegateOfClick MenuButtonClickAtIndex:i];
                }
            }
            if (self.handleBlock) {
                  self.handleBlock(i);
            }
            [UIView animateWithDuration:0.3 animations:^{
                weakSelf.animationIdentifierView.x = btn.x;
                
            }];
            
        }
        else
        {
            button.selected = NO;
        }
        
    }
    
}

- (void)handleClickBlock:(MenuButtonClickBlock)handleBlock
{
        self.handleBlock = handleBlock;

}
- (void)setupMenuAttrTitles:(NSArray *)attrTitles
{
    for (NSInteger i = 0; i < attrTitles.count; i++) {
        
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
  
        [self.buttons addObject:btn];
        [btn setTitle:attrTitles[i] forState:UIControlStateNormal];
        [btn setAttributedTitle:attrTitles[i] forState:UIControlStateNormal];
       // btn.buttonCommonType = UIButtonCommonTypeGrayText;
        btn.frame = CGRectMake(i * self.width/attrTitles.count, 0, self.width/attrTitles.count, self.height);
        
       
         [self addSubview:btn];
        __weak typeof(self) weakSelf = self;
        
        [btn touchDown:^{
            [weakSelf handleSenderEvent:btn];
        }];
        
    }
}

- (void)setupMenuTitles:(NSArray *)titles
{
    for (NSInteger i = 0; i < titles.count; i++) {
        
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        if (i == 0) {
            btn.selected = YES;
        }
        [self.buttons addObject:btn];
        [btn setTitle:titles[i] forState:UIControlStateNormal];
       //btn.buttonCommonType = UIButtonCommonTypeSelectedRed;
        btn.frame = CGRectMake(i * self.width/titles.count, 0, self.width/titles.count, self.height);
        
     
        [self updateConstraintsIfNeeded];
         __weak typeof(self) weakSelf = self;
        
        [self addSubview:btn];

        [btn touchDown:^{
            [weakSelf handleSenderEvent:btn];
        }];
        
    }
}

#pragma mark - ========= Setter & Getter =========
- (NSMutableArray *)buttons
{
    if (_buttons == nil) {
        
        _buttons = [[NSMutableArray alloc] init];
    }
    return _buttons;
}
- (UIView *)animationIdentifierView
{
    if (_animationIdentifierView == nil) {
        
        _animationIdentifierView = [[UIView alloc] init];
        _animationIdentifierView.backgroundColor = [UIColor redColor];
        
    }
    return _animationIdentifierView;
}
- (void)setNormalIndex:(NSInteger)normalIndex
{
    _normalIndex = normalIndex;
    self.handleBlock(normalIndex);
}
@end
