//
//  DZNEmptyDataSeparator.m
//  BondGoodTeacher
//
//  Created by xunke01 on 16/7/12.
//  Copyright © 2016年 Bond. All rights reserved.
//

#import "DZNEmptyDataSeparator.h"
#import "UIImage+FX.h"
#import <DZNEmptyDataSet/UIScrollView+EmptyDataSet.h>
#import "UIScrollView+Refresh.h"
#import "UIImage+FileName.h"
@implementation DZNEmptyDataSeparatorModel
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType imageName:(NSString *)imageName title:(NSString *)title buttonTitle:(NSString *)buttonTitle
{
    return [self modelWithTableViewStatus:statusType imageName:imageName title:title buttonTitle:buttonTitle moreConfig:nil];
}
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType imageName:(NSString *)imageName title:(NSString *)title buttonTitle:(NSString *)buttonTitle moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock
{
    DZNEmptyDataSeparatorModel *model = [[DZNEmptyDataSeparatorModel alloc] init];
    model.statusType = statusType;
    model.imageName = imageName;
    model.title = title;
    model.buttonTitle = buttonTitle;
    if (configBlock) {
        configBlock(model);
    }
    return model;
}
+ (instancetype)noSignalModel
{
    
    return [self noSignalModelWithTapViewBlock:nil];
}
+ (instancetype)noSignalModelWithTapViewBlock:(void (^)(void))tapViewBlock
{
    DZNEmptyDataSeparatorModel *modelOfNoSignal = [DZNEmptyDataSeparatorModel modelWithTableViewStatus:UIScrollViewStatusTypeError imageName:@"pic_network_no_signal" title:@"这个星球没找到哦!" buttonTitle:@"点击屏幕重新加载" moreConfig:^(DZNEmptyDataSeparatorModel *model) {
        model.allowTouch = YES;
        model.tapViewBlock = tapViewBlock;
    }];
    return modelOfNoSignal;
}
+ (instancetype)delayModel{
    return [self delayModelWithTapViewBlock:nil];
}
+ (instancetype)delayModelWithTapViewBlock:(void (^)(void))tapViewBlock{
    DZNEmptyDataSeparatorModel *modelOfDelay = [DZNEmptyDataSeparatorModel modelWithTableViewStatus:UIScrollViewStatusTypeNetworkDelay imageName:@"pic_network_response_delay" title:@"网络不给力喔!" buttonTitle:@"点击屏幕重新加载" moreConfig:^(DZNEmptyDataSeparatorModel *model) {
        model.allowTouch = YES;
        model.tapViewBlock = tapViewBlock;
    }];
    return modelOfDelay;
}
@end

@interface DZNEmptyDataSeparator()<DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) NSMutableDictionary *separatorModelDic;

@end
@implementation DZNEmptyDataSeparator
+ (instancetype)separatorWithScrollView:(__kindof UIScrollView *)scrollView
{
    DZNEmptyDataSeparator *separator = [[DZNEmptyDataSeparator alloc] init];
    separator.scrollView = scrollView;
    
    scrollView.emptyDataSetSource = separator;
    scrollView.emptyDataSetDelegate = separator;
    //防止自动释放
    objc_setAssociatedObject(scrollView, @selector(separatorWithScrollView:), separator, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    //加背景Control  才能全屏点击(DZN有hitTest过滤)
    UIControl *control = [UIControl new];
    control.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    UIView *emptyDataSetView = [scrollView valueForKey: @"emptyDataSetView"];
    if (emptyDataSetView) {
        [emptyDataSetView addSubview:control];
           [emptyDataSetView sendSubviewToBack:control];
    }
    
    return separator;
}
- (void)configWithModels:(NSArray<DZNEmptyDataSeparatorModel *> *)models
{
    for (NSInteger i = 0; i < models.count; i++) {
        self.separatorModelDic[@(models[i].statusType)] = models[i];
    }

}
#pragma mark - DZNEmptyDataSetSource Methods

- (NSAttributedString *)titleForEmptyDataSet:(UIScrollView *)scrollView
{
    
  
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (!model.title) {
        return nil;
    }
    NSString *text = model.title;
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont systemFontOfSize:16.0],
                                 NSForegroundColorAttributeName: kUI_COLOR_GRAY_999999,
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
    
    
}
- (NSAttributedString *)buttonTitleForEmptyDataSet:(UIScrollView *)scrollView forState:(UIControlState)state
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (!model.buttonTitle) {
        return nil;
    }
       NSString *text = model.buttonTitle;
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont systemFontOfSize:14.0],
                                 NSForegroundColorAttributeName: kUI_COLOR_BLUE_61c7e2,
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}
- (NSAttributedString *)descriptionForEmptyDataSet:(UIScrollView *)scrollView
{
    
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (!model.descriptionString) {
        return nil;
    }
    NSString *text = model.descriptionString;
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont boldSystemFontOfSize:16.0],
                                 NSForegroundColorAttributeName: kUI_COLOR_GRAY_999999,
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}

- (UIImage *)imageForEmptyDataSet:(UIScrollView *)scrollView
{
    
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (!model.imageName) {
        return nil;
    }
    return [[UIImage imageWithFileName:model.imageName] imageScaledToSize:CGSizeMake(110, 95)];
    
}

- (UIColor *)imageTintColorForEmptyDataSet:(UIScrollView *)scrollView
{
    return nil;
}

- (UIColor *)backgroundColorForEmptyDataSet:(UIScrollView *)scrollView
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (!model.backgourdColor) {
        return kUI_COLOR_GRAY_f5f7f8;
    }
    return model.backgourdColor;
}

- (UIView *)customViewForEmptyDataSet:(UIScrollView *)scrollView
{
    return nil;
}


#pragma mark - DZNEmptyDataSetSource Methods

- (BOOL)emptyDataSetShouldAllowTouch:(UIScrollView *)scrollView
{
     DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    return model.allowTouch;
}

- (BOOL)emptyDataSetShouldAllowScroll:(UIScrollView *)scrollView
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    return model.allowScroll;
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapView:(UIView *)view
{
    
     DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.tapViewBlock) {
        model.tapViewBlock();
    }
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapButton:(UIButton *)button
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.tapButtonClock) {
        model.tapButtonClock();
    }
}
#pragma mark - ========= Offset =========
- (CGFloat)verticalOffsetForEmptyDataSet:(UIScrollView *)scrollView
{
    return -64;
}

#pragma mark - ========= Setter & Getter =========
- (NSMutableDictionary *)separatorModelDic
{
    if (_separatorModelDic == nil) {
        
        _separatorModelDic = [[NSMutableDictionary alloc] init];
    }
    return _separatorModelDic;
}
@end
//@class DZNEmptyDataSetView;
//@interface DZNEmptyDataSetView(OverridedHitTest)
//
//@end
//@implementation DZNEmptyDataSetView(OverridedHitTest)
//
//
//
//@end
