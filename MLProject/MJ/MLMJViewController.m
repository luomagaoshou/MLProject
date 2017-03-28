//
//  MLMJViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 2017/3/25.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#import "MLMJViewController.h"
#import "BGTClassListMaster.h"
#import <MJExtension/MJExtension.h>
@interface MLMJViewController ()

@end

@implementation MLMJViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self mjExtensionTest];
    
}
- (void)mjExtensionTest {
    NSJSONSerialization *json = [self json];
    BGTClassListMaster *master = [BGTClassListMaster mj_objectWithKeyValues:json];
    @"";
    
}
- (NSJSONSerialization *)json {
    NSString *filePath = [[NSBundle mainBundle] pathForResource:[@"BGTClassListMaster" stringByDeletingPathExtension] ofType:@".json"];
    NSAssert(filePath, @"该文件不存在");
    NSData *data = [[NSFileManager defaultManager] contentsAtPath:filePath];
    NSJSONSerialization *json = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
    return json;
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
