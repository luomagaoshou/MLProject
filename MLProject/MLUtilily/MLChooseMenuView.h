//
//  MLChooseMenuView.h
//  BondGoodTeacher
//
//  Created by xunke01 on 16/8/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import <UIKit/UIKit.h>
//如需自定义cell的高度与header的高度，则设置
@protocol MLChooseMenuCellProtocol
@required
+ (CGFloat)cellHeight;
@optional
+ (NSArray *)headerHeights;
@end

typedef NS_ENUM(NSUInteger, MLChooseMenuViewType) {
    MLChooseMenuViewTypeSignalSelection,
    MLChooseMenuViewTypeMultipleSelection,
    
};
@class MLChooseMenuView;
typedef void (^MLChooseViewClickBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef void (^MLChooseViewConfigBlock)(UITableView *tableView, __kindof UITableViewCell *cell, NSArray *cellDatas, NSIndexPath *indexPath);
@interface MLChooseMenuView : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *titleLabelHeightConstraint;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

//左下 右下两个按钮  可多选时才显示
@property (weak, nonatomic) IBOutlet UIButton *leftBottomButton;
@property (weak, nonatomic) IBOutlet UIButton *rightBottomButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leftBottomButtonHeightConstraint;



//默认indexPath
@property (nonatomic, strong) NSIndexPath *defaultIndexPath;
//view类型，单选与多选两种,默认为单选
@property (nonatomic, assign) MLChooseMenuViewType viewType;

- (void)show;
- (void)dismiss;
+ (instancetype)chooseTabelView;
+ (instancetype)chooseTabelViewWithTitle:(NSString *)title;
+ (instancetype)chooseTabelViewWithTitle:(NSString *)title viewType:(MLChooseMenuViewType)viewType;
//必须先配置cell 再setTitle **must**
- (void)configureCellWithClassName:(NSString *)className configBlock:(MLChooseViewConfigBlock)configBlock;

- (void)setCellDatas:(NSArray <NSArray *>*)cellDatas clickBlock:(MLChooseViewClickBlock)clickBlock;

@end
