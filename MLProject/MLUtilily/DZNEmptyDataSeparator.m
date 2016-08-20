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
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType imageName:(NSString *)imageName title:(NSString *)title descriptionString:(NSString *)descriptionString
{
    return [self modelWithTableViewStatus:statusType imageName:imageName title:title descriptionString:descriptionString moreConfig:nil];
}
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType imageName:(NSString *)imageName title:(NSString *)title descriptionString:(NSString *)descriptionString moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock
{
    return [self modelWithTableViewStatus:statusType imageName:imageName title:title descriptionString:descriptionString buttonTitle:nil moreConfig:configBlock];
}
+ (instancetype)modelWithTableViewStatus:(UIScrollViewStatusType)statusType
                               imageName:(NSString *)imageName
                                   title:(NSString *)title
                       descriptionString:(NSString *)descriptionString
                             buttonTitle:(NSString *)buttonTitle
                              moreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock
{
    DZNEmptyDataSeparatorModel *model = [[DZNEmptyDataSeparatorModel alloc] init];
    model.statusType = statusType;
    model.imageName = imageName;
    model.title = title;
    model.descriptionString = descriptionString;
    model.buttonTitle = buttonTitle;
    if (configBlock) {
        configBlock(model);
    }
    
    NSAssert(!(model.image && model.imageName), @"不可同时设置图片名与图片");
    NSAssert(!(model.title && model.titleAttrStr), @"不可同时设置标题与标题富文本");
    NSAssert(!(model.descriptionString && model.descriptionAttrStr), @"不可同时设置描述与描述富文本");
    NSAssert(!(model.buttonTitle && model.buttonAttrStr), @"不可同时设置按钮标题与按钮标题富文本");
    return model;
}
+ (instancetype)noConnectionModelWithMoreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock
{
    DZNEmptyDataSeparatorModel *modelOfNoConnection =
    [DZNEmptyDataSeparatorModel
     modelWithTableViewStatus:UIScrollViewStatusTypeNoConnetion imageName:@"pic_network_no_connection"
     title:@"网络不给力喔!"
     descriptionString:nil
     buttonTitle:@"点击屏幕重新加载"
     moreConfig:configBlock];
    
    return modelOfNoConnection;
}
+ (instancetype)noConnectionModelWithTapViewBlock:(void (^)(void))tapViewBlock
{

    DZNEmptyDataSeparatorModel *modelOfNoConnection = [self noConnectionModelWithMoreConfig:^(DZNEmptyDataSeparatorModel *model) {
        model.tapViewBlock = tapViewBlock;
        model.allowTouch = YES;
    }];
    
    
    
    return modelOfNoConnection;
}
+ (instancetype)errorModelWithMoreConfig:(DZNEmptyDataSeparatorConfigBlock)configBlock
{
    DZNEmptyDataSeparatorModel *modelOfError =
    [DZNEmptyDataSeparatorModel
     modelWithTableViewStatus:UIScrollViewStatusTypeNetworkError imageName:@"pic_network_error"
     title:@"这个星球没找到哦!"
     descriptionString:nil
     buttonTitle:@"点击屏幕重新加载"
     moreConfig:configBlock];
    return modelOfError;
}

+ (instancetype)errorModelWithTapViewBlock:(void (^)(void))tapViewBlock{
    DZNEmptyDataSeparatorModel *modelOfError = [self errorModelWithMoreConfig:^(DZNEmptyDataSeparatorModel *model) {
        model.tapViewBlock = tapViewBlock;
         model.allowTouch = YES;
    }];
    return modelOfError;
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
    
    //加背景Control  才能全屏点击(详情请看DZN内部hitTest过滤)
    UIControl *control = [UIControl new];
    control.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    UIView *emptyDataSetView = [scrollView valueForKey: @"emptyDataSetView"];
     emptyDataSetView.autoresizingMask = UIViewAutoresizingFlexibleWidth|UIViewAutoresizingFlexibleHeight;
    if (emptyDataSetView) {
        [emptyDataSetView addSubview:control];
        [emptyDataSetView sendSubviewToBack:control];
    }
    

    return separator;
}
- (void)configureWithModels:(NSArray<DZNEmptyDataSeparatorModel *> *)models
{
    for (NSInteger i = 0; i < models.count; i++) {
        self.separatorModelDic[@(models[i].statusType)] = models[i];
    }

}
#pragma mark - DZNEmptyDataSetSource Methods

- (NSAttributedString *)titleForEmptyDataSet:(UIScrollView *)scrollView
{
    
  
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.titleAttrStr) {
        return model.titleAttrStr;
    }
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

- (NSAttributedString *)descriptionForEmptyDataSet:(UIScrollView *)scrollView
{
    
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.descriptionAttrStr) {
        return model.descriptionAttrStr;
    }
    if (!model.descriptionString) {
        return nil;
    }
    NSString *text = model.descriptionString;
    NSMutableParagraphStyle *paragraphStyle = [NSMutableParagraphStyle new];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    paragraphStyle.alignment = NSTextAlignmentCenter;
    
    NSDictionary *attributes = @{NSFontAttributeName: [UIFont systemFontOfSize:14.0],
                                 NSForegroundColorAttributeName: kUI_COLOR_GRAY_999999,
                                 NSParagraphStyleAttributeName: paragraphStyle};
    
    return [[NSMutableAttributedString alloc] initWithString:text attributes:attributes];
}

- (NSAttributedString *)buttonTitleForEmptyDataSet:(UIScrollView *)scrollView forState:(UIControlState)state
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.buttonAttrStr) {
        return model.buttonAttrStr;
    }
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


- (UIImage *)imageForEmptyDataSet:(UIScrollView *)scrollView
{
    
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    if (model.image) {
        return model.image;
    }
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
        //重设状态  隐藏背景提示图
        scrollView.statusType = UIScrollViewStatusTypeDefault;
        [scrollView reloadEmptyDataSet];
        model.tapViewBlock();
    }
}

- (void)emptyDataSet:(UIScrollView *)scrollView didTapButton:(UIButton *)button
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    //防止button遮挡全屏手势  若无button手势则调用view手势
    if (model.tapButtonClock) {
        model.tapButtonClock();
    }
    else
    {
        if (model.tapViewBlock) {
            model.tapViewBlock();
        }
    }
   
}
#pragma mark - ========= Offset =========
- (CGFloat)verticalOffsetForEmptyDataSet:(UIScrollView *)scrollView
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    
    //整体偏移
    UIView *emptyDataSetView = [scrollView valueForKey: @"emptyDataSetView"];

    if (!objc_getAssociatedObject(self, @selector(verticalOffsetForEmptyDataSet:))) {
        objc_setAssociatedObject(self, @selector(verticalOffsetForEmptyDataSet:), [NSValue valueWithCGRect:emptyDataSetView.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    CGRect oringalRect = [objc_getAssociatedObject(self, @selector(verticalOffsetForEmptyDataSet:)) CGRectValue];
    emptyDataSetView.frame = oringalRect;
    emptyDataSetView.top += model.verticalOffsetOfEmptyDataSetView;
    if (model.hidden) {
        emptyDataSetView.top += 10000;
    }
        return model.verticalOffset;
    
    
    
  
}
- (CGFloat)spaceHeightForEmptyDataSet:(UIScrollView *)scrollView
{
    DZNEmptyDataSeparatorModel *model = self.separatorModelDic[@(scrollView.statusType)];
    

        return model.spaceHeight;
    
   
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

