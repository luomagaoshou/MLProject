//
//  MenuScrollView.h
//  LotteryStraightTrain
//
//  Created by apple on 16/1/13.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

//代理方法
@protocol MenuButtonClickDelegate
- (void)MenuButtonClickAtIndex:(NSInteger)index;
@end

typedef void(^MenuButtonClickBlock)(NSInteger index);
@interface MenuScrollView : UIScrollView
@property (nonatomic, strong) NSMutableArray *buttons;
@property (nonatomic, strong) UIView *animationIdentifierView;
@property (nonatomic, weak) id <MenuButtonClickDelegate, NSObject> delegateOfClick;
@property (nonatomic, copy) MenuButtonClickBlock handleBlock;
@property (nonatomic, assign) NSInteger normalIndex;
//初始化
- (instancetype)initWithFrame:(CGRect)frame titles:(NSArray *)titles;
- (instancetype)initWithFrame:(CGRect)frame attrTitles:(NSArray *)attrTitles;
- (void)setTitles:(NSArray *)titles;
- (void)setAttrTitle:(NSArray *)attrTitles;

//block回调方法
- (void)handleClickBlock:(MenuButtonClickBlock)handleBlock;
@end
