//
//  MLHookViewController.m
//  MLProject
//
//  Created by xunke01 on 16/8/20.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLHookViewController.h"
#import <Aspects/Aspects.h>
#import <BlocksKit/BlocksKit.h>

@interface MLHookView : UIView

@end
@implementation MLHookView



@end
@interface MLHookViewController ()

@end

@implementation MLHookViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
#if 0
    NSMutableString *mutStr = [[NSMutableString alloc] initWithString:@"f"];
    CFBridgingRetain(mutStr);
    CFBridgingRetain(mutStr);
    CFBridgingRelease((__bridge CFTypeRef) mutStr);
        CFBridgingRelease((__bridge CFTypeRef) mutStr);
     CFBridgingRelease((__bridge CFTypeRef) mutStr);
     CFBridgingRelease((__bridge CFTypeRef) mutStr);
    NSLog(@"%ld -- %@ -- %ld", _objc_rootRetainCount(mutStr), [mutStr valueForKey:@"retainCount"], CFGetRetainCount((__bridge CFTypeRef) (mutStr)));
   Method method = class_getInstanceMethod([self class], @selector(test));
   IMP imp = method_getImplementation(method);
  id block = imp_getBlock(imp);
    
    
    void(^block2) (NSString *string)  = ^(NSString *string){
        NSLog(@"%@", string);
    };
    IMP impOfBlock = imp_implementationWithBlock(block2);
    
    @"";
#endif

    
    
//    [self aspect_hookSelector:@selector(configureUI) withOptions:AspectPositionAfter usingBlock:^{
//        NSLog(@"%@", @"Aspect");
//    }error:nil];
//        [self configureUI];
//    
    
    
    MLHookView *view = [[MLHookView alloc] initWithFrame:CGRectMake(100, 100, 200, 200)];
    view.backgroundColor = [UIColor blueColor];
    LayerCornerRadius_borderWidth_borderColor(view.layer, view.width/2, 10, [UIColor redColor]);
    [self.view addSubview:view];
    
    
 
    
//    [view aspect_hookSelector:@selector(setFrame:) withOptions:AspectPositionAfter usingBlock:^{
//        NSLog(@"%@", @"haha");
//    }error:nil];
    //[view setFrame:CGRectMake(200, 200, 100, 100)];
    
    
    
//    [[self class] aspect_hookSelector:@selector(configureUI) withOptions:AspectPositionAfter usingBlock:^{
//        NSLog(@"%@", @"Aspect");
//    }error:nil];
//    [self configureUI];
    [self downloadData];
    
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


#pragma mark - ========= Configure UI =========
- (void)configureUI
{
    NSLog(@"%@", @"1");
}
- (void)test
{
      NSLog(@"%@", @"2");
}

#pragma mark - ========= Network Operation  =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
