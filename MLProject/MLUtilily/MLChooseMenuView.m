//
//  MLChooseMenuView.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/8/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "MLChooseMenuView.h"
#import "CALayer+Line.h"
#import "UIView+Shade.h"
#import "UIButton+CommonType.h"
@interface MLChooseMenuView()<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, copy) NSString *cellClassName;
@property (nonatomic, copy) MLChooseViewClickBlock clickBlock;
@property (nonatomic, copy) MLChooseViewConfigBlock cellConfigBlock;

@end
@implementation MLChooseMenuView

- (void)awakeFromNib
{
    self.backgroundColor = kUI_COLOR_GRAY_f5f7f8;
    LayerCornerRadius_borderWidth_borderColor(self.layer, 3, 0, nil);
    [super awakeFromNib];
    [self commitConfig];
    
}
- (void)show
{
    [UIView addFullScreenShadeWithTapEvent:^{
        [UIView removeShadeView];
        if (self.superview) {
            [self removeFromSuperview];
        }
    }];
    [[[UIApplication sharedApplication].delegate window] addSubview:self];
    
}
- (void)dismiss
{
    [UIView removeShadeView];
    if (self.superview) {
        [self removeFromSuperview];
    }
}

+ (instancetype)chooseTabelView
{
    return [self chooseTabelViewWithTitle:nil];
}
+ (instancetype)chooseTabelViewWithTitle:(NSString *)title
{
    return [self chooseTabelViewWithTitle:title viewType:MLChooseMenuViewTypeSignalSelection];
}
+ (instancetype)chooseTabelViewWithTitle:(NSString *)title viewType:(MLChooseMenuViewType)viewType
{
    MLChooseMenuView *chooseTabelView = [NSBundle loadNibWithNameOrClass:NSStringFromClass(self)];
    chooseTabelView.frame = CGRectMake(22, 100, SCREEN_WIDTH - 44, SCREEN_HEIGHT - 200);
    chooseTabelView.titleLabel.text = title;
    chooseTabelView.viewType = viewType;
    switch (viewType) {
        case MLChooseMenuViewTypeSignalSelection:{
            chooseTabelView.leftBottomButtonHeightConstraint.constant = 0;
             chooseTabelView.tableView.allowsMultipleSelection = NO;
        }
            break;
        case MLChooseMenuViewTypeMultipleSelection:{
            chooseTabelView.leftBottomButtonHeightConstraint.constant = 50;
            chooseTabelView.tableView.allowsMultipleSelection = YES;
        }
        default:
            break;
    }
    return chooseTabelView;
}
- (void)setCellDatas:(NSArray<NSArray *> *)cellDatas clickBlock:(MLChooseViewClickBlock)clickBlock
{
    NSAssert(self.cellConfigBlock, @"请先设置cellConfigBlock");
    self.clickBlock = clickBlock;
    
    [self.tableView.cellDatas removeAllObjects];
    if (cellDatas) {
        [self.tableView.cellDatas addObjectsFromArray:cellDatas];
    }
    [self.tableView reloadData];
}
- (void)configureCellWithClassName:(NSString *)className configBlock:(MLChooseViewConfigBlock)configBlock
{
   
    NSAssert(NSClassFromString(className), @"不存在该类");
    
    NSString *path = [[NSBundle mainBundle] pathForResource:className ofType:@"nib"];
    
    if (path) {
        [self.tableView ml_registerNibForCellWithNameOrClass:className];
    }else{
        [self.tableView ml_registerClassForCellWithNameOrClass:className];
    }
  
    self.cellClassName = className;
    
    self.cellConfigBlock = configBlock;
    
}

#pragma mark - ========= Xib View Config Helper =========
- (void)commitConfig
{
    [self configureTitleLabel];
    [self configureTableView];
    [self configLeftBottomButton];
    [self configRightBottomButton];
}

- (void)configureTitleLabel
{
    

    LabelTextColor_fontSizeOfPx_alignment(self.titleLabel, kUI_COLOR_BLUE_00b4e9, 32, NSTextAlignmentCenter);
    self.titleLabel.backgroundColor = [kUI_COLOR_BLUE_2293E3 colorWithAlphaComponent:0.1];
    self.titleLabel.numberOfLines = 0;
}

- (void)configureTableView
{
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    self.tableView.tableFooterView = [[UIView alloc] init];
    self.tableView.backgroundColor = kUI_COLOR_GRAY_f5f7f8;
    
}
- (void)configLeftBottomButton{
    self.leftBottomButton.buttonCommonType = UIButtonCommonTypeGrayText;
    self.leftBottomButton.backgroundColor = kUI_COLOR_WHITE_ffffff;
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.leftBottomButton.layer drawLineWithPositionOption:CALayerDrawLinePositionOptionTop lineColor:kUI_COLOR_GRAY_dedede lineWidthOrHeight:1];
    });
}
- (void)configRightBottomButton
{
    self.rightBottomButton.buttonCommonType = UIButtonCommonTypeBlueText;
    self.rightBottomButton.backgroundColor = kUI_COLOR_WHITE_ffffff;
    [self.rightBottomButton setTitleColor:kUI_COLOR_BLUE_2293E3 forState:UIControlStateNormal];
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.rightBottomButton.layer drawLineWithPositionOption:CALayerDrawLinePositionOptionLeft|CALayerDrawLinePositionOptionTop lineColor:kUI_COLOR_GRAY_dedede lineWidthOrHeight:1];
    });
}
#pragma mark - ========= TableView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:self.cellClassName forIndexPath:indexPath];
    if (self.cellConfigBlock) {
        self.cellConfigBlock(tableView, cell, tableView.cellDatas, indexPath);
    }
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return tableView.cellDatas.count;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return tableView.cellDatas[section].count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    

    Class cellClass = NSClassFromString(self.cellClassName);
    if ([(id)cellClass respondsToSelector:@selector(cellHeight)]) {
       CGFloat height = ((CGFloat (*)(id, SEL))objc_msgSend)((cellClass), @selector(cellHeight));
        return height;
    }
    return 50;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    if (self.viewType == MLChooseMenuViewTypeSignalSelection) {
        if (self.clickBlock) {
            self.clickBlock(tableView, indexPath);
        }
        [self dismiss];
    }
}

#pragma mark - ========= TabelView HeaderView =========

-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    Class cellClass = NSClassFromString(self.cellClassName);
    if ([(id)cellClass respondsToSelector:@selector(headerHeights)]) {
        NSArray *heights = ((NSArray * (*)(id, SEL))objc_msgSend)((cellClass), @selector(headerHeights));
        return [heights[section] floatValue];
    }
    return 0.01;
}


@end
