//
//  MLResponerChainViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/2/21.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "MLResponerChainViewController.h"
#import <Aspects/Aspects.h>
#import "MLResponerChainView.h"
#import "UITableView+ML_Tools.h"
#import "UIView+GestureBlock.h"
#import "UIControl+Block.h"
@interface MLResponerChainViewController ()<UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) IBOutlet MLResponerChainView *view_;

@end

@implementation MLResponerChainViewController

+ (void)load {

//    [UIResponder ml_swizzleInstanceMethodSel:@selector(touchesBegan:withEvent:) withTargetClass:[self class] andSel:@selector(ml_touchesBegan:withEvent:)];
//    [UIResponder ml_swizzleInstanceMethodSel:@selector(touchesMoved:withEvent:) withTargetClass:[self class] andSel:@selector(ml_touchesMoved:withEvent:)];
//    [UIResponder ml_swizzleInstanceMethodSel:@selector(touchesEnded:withEvent:) withTargetClass:[self class] andSel:@selector(ml_touchesEnded:withEvent:)];
//    [UIResponder ml_swizzleInstanceMethodSel:@selector(touchesCancelled:withEvent:) withTargetClass:[self class] andSel:@selector(ml_touchesCancelled:withEvent:)];
//    
//    [UIApplication ml_swizzleInstanceMethodSel:@selector(sendEvent:) withTargetClass:[self class] andSel:@selector(ml_sendEvent:)];
//    
    

//    Class class = objc_getMetaClass(NSStringFromClass([self class]).UTF8String);
//    [class aspect_hookSelector:@selector(fuck) withOptions:AspectPositionAfter usingBlock:^(id obj1, id obj2){
//        NSLog(@"%@-%@", obj1, obj2);
//    }error:nil];
    
}
- (void)fuck {
    
    NSLog(@"%@",NSStringFromSelector(_cmd));
}
+ (void)fuck {
     NSLog(@"%@",NSStringFromSelector(_cmd));
    
}
- (void)ml_sendEvent:(UIEvent *)event {
    NSLog(@"%@", event);
    if ([self respondsToSelector:@selector(ml_sendEvent:)]) {
            [(id)self ml_sendEvent:event];
    }

}
- (BOOL)sendAction:(SEL)action to:(nullable id)target from:(nullable id)sender forEvent:(nullable UIEvent *)event {
    return YES;
}

- (void)ml_touchesBegan:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event {
    [self ml_touchesBegan:touches withEvent:event];
    NSLog(@"%@\n%@", touches, event);
}
- (void)ml_touchesMoved:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event {
    [self ml_touchesBegan:touches withEvent:event];
    NSLog(@"%@\n%@", touches, event);
}
- (void)ml_touchesEnded:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event {
    [self ml_touchesBegan:touches withEvent:event];
    NSLog(@"%@\n%@", touches, event);
}
- (void)ml_touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(nullable UIEvent *)event {
    [self ml_touchesBegan:touches withEvent:event];
    NSLog(@"%@\n%@", touches, event);
}
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    [MLResponerChainViewController aspect_hookSelector:@selector(fuck) withOptions:AspectPositionAfter usingBlock:^(id obj1, id obj2){
        
        NSLog(@"%@-%@", obj1, obj2);
        
    }error:nil];
    [MLResponerChainViewController aspect_hookSelector:@selector(viewWillAppear:) withOptions:AspectPositionAfter usingBlock:^(id obj1, id obj2){
        
        NSLog(@"%@-%@", obj1, obj2);
        
    }error:nil];
    
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self fuck];
         [[self class] fuck];
    });
    [self configureTableView];
    [self.view_ tapWithEvent:^(id gesture) {
        NSLog(@"%@", gesture);
    }];
//
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(20, 300, 300, 300)];
    view.backgroundColor = [UIColor redColor];
    view.userInteractionEnabled = YES;
    [self.view_ addSubview:view];
}

- (void)configureTableView {
    self.view_.tableView.delegate = self;
    self.view_.tableView.dataSource = self;
    [self.view_.tableView ml_registerClassForCellWithNameOrClass:[UITableViewCell class]];
    self.view_.tableView.userInteractionEnabled = YES;
    [self.view_.tableView tapWithEvent:^(id gesture) {
        NSLog(@"%@", gesture);
    }];
    
    
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}

#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"UITableViewCell" forIndexPath:indexPath];
    cell.textLabel.text  = [NSString stringWithFormat:@"%ld-%ld",indexPath.section, indexPath.row];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [cell addSubview:btn];
    [btn touchDown:^{
        
    }];
    NSLog(@"%@--%@", cell ,btn);
    
//   [cell tapWithEvent:^(id gesture) {
//       NSLog(@"%@", gesture);
//   }];
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 3;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 44;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
   
    
}



#pragma mark - ========= Setter & Getter =========


@end
