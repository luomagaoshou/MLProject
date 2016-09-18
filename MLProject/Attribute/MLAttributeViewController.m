//
//  MLAttributeViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/8/31.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLAttributeViewController.h"
extern void myprint(const char *format,...)
__attribute__((format(printf,1,2)));
@interface MLAttributeViewController ()

@end

@implementation MLAttributeViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
    [self downloadData];
    
}


#pragma mark - ========= Config UI =========
- (void)configUI
{
    
}
- (void)test1{
//    myprint("i=%d\n",6);
//    myprint("i=%s\n",6);
//    myprint("i=%s\n","abc");
//    myprint("%s,%d,%d\n",1,2);
  //  myprint("i=%d, %d", 999, 100);
}

#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
