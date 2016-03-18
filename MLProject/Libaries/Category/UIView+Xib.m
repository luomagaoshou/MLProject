//
//  UIView+Xib.m
//  MLProject
//
//  Created by 妙龙赖 on 15/11/22.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "UIView+Xib.h"
#import <objc/runtime.h>

const char *externXibContainerViewKey;
@implementation UIView (Xib)
- (void)setupSelfNameXibOnSelf
{
   
    [self setupSelfNameXibOnSelfWithSerialNumber:0];
}

- (void)setupSelfNameXibOnSelfWithSerialNumber:(NSInteger)number
{
    UIView *containerView = [self loadSelfXibWithFileOwner:self serialNumber:number];
   
    
    [self addSubview:containerView];
}
- (instancetype)loadSelfXibWithFileOwner:(id)fileOwner
{
    
   return [self loadSelfXibWithFileOwner:fileOwner serialNumber:0];
}

- (instancetype)loadSelfXibWithFileOwner:(id)fileOwner serialNumber:(NSInteger)number
{

    UIView *containerView = [[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class]) owner:fileOwner options:nil][number];
    containerView.backgroundColor = [UIColor clearColor];
    containerView.frame = self.bounds;
    containerView.autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
  
    objc_setAssociatedObject(fileOwner, &externXibContainerViewKey, containerView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    return [self loadXibWithName:NSStringFromClass([self class]) FileOwner:self serialNumber:number];
}


- (instancetype)setupXibWithName:(NSString *)name
{
    UIView *contianerView = [self loadXibWithName:name];
    [self addSubview:contianerView];
    return contianerView;
}
- (instancetype)loadXibWithName:(NSString *)name
{
    return [self loadXibWithName:name serialNumber:0];
}
- (instancetype)loadXibWithName:(NSString *)name serialNumber:(NSInteger)number
{
    return [self loadXibWithName:name FileOwner:self serialNumber:number];
}
- (instancetype)loadXibWithName:(NSString *)name  FileOwner:(id)fileOwner serialNumber:(NSInteger)number
{
    UIView *containerView = [[NSBundle mainBundle] loadNibNamed:name owner:fileOwner options:nil][number];
    containerView.backgroundColor = [UIColor clearColor];
    containerView.frame = self.bounds;
    containerView.autoresizingMask = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
    
    objc_setAssociatedObject(fileOwner, &externXibContainerViewKey, containerView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return containerView;
}

- (instancetype)initSelfNameXibOnSelfWithFrame:(CGRect)frame serialNumber:(NSInteger)number
{
  
    self = [self initWithFrame:frame];
    if (self) {
        [self setupSelfNameXibOnSelfWithSerialNumber:number];
    }
    return self;
    
}
#pragma mark - ========= Setter & Getter =========
- (id)containerView
{
    return objc_getAssociatedObject(self, &externXibContainerViewKey);
}
@end
