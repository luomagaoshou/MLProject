//
//  MLTintColorViewController.m
//  MLProject
//
//  Created by 妙龙赖 on 16/8/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTintColorViewController.h"
#import "UIImage+FX.h"
#import "UIImage+Color.h"
#import "MLTintColorTBCell.h"
@interface MLTintColorViewController ()<UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, copy) NSArray *filters;
@end

@implementation MLTintColorViewController
#pragma mark - ========= View LifeCycle =========
- (void)viewDidLoad {
    [super viewDidLoad];
    [self configUI];
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


#pragma mark - ========= Config UI =========
- (void)configUI
{
    [self configureTableView];
    self.filters = @[@"CIPhotoEffectChrome", @"CIPhotoEffectFade",
                     @"CIPhotoEffectInstant",
                     @"CIPhotoEffectMono", @"CIPhotoEffectNoir", @"CIPhotoEffectProcess",
                     @"CIPhotoEffectTonal", @"CIPhotoEffectTransfer"
                     ];
}
- (void)configureButtons
{
    //    for (NSInteger i = 0; i < 3; i++) {
    //        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    //        [button setTitle:@"haha" forState:UIControlStateNormal];
    //        [button setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    //        UIImage *image = [UIImage imageNamed:@"test"];
    //        [button setImage:image forState:UIControlStateNormal];
    //        [button setImage:[UIImage covertToGrayImageFromImage:image] forState:UIControlStateNormal];
    //
    //        button.tintAdjustmentMode = i;
    //        button.tintColor = [UIColor greenColor];
    //        button.frame = CGRectMake(i * 100 + 80, SCREEN_HEIGHT/2, 80, 80);
    //        [self.view addSubview:button];
    //    }
}
- (void)configureTableView
{
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.tableView ml_registerNibForCellWithNameOrClass:@"MLTintColorTBCell"];
    
}
#pragma mark - ========= TabelView Cell =========
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    MLTintColorTBCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MLTintColorTBCell" forIndexPath:indexPath];
 
//cell.imageView_.image = [UIImage imageNamed:@"test"];
     cell.tintColor = [UIColor redColor];
    NSString *type = self.filters[indexPath.row % (self.filters.count)];
    UIImage *image = [UIImage imageNamed:@"test"];
//    CIFilter *filter = [CIFilter filterWithName:type];
//   
//    [filter setValue:[CIImage imageWithCGImage:image.CGImage] forKey:kCIInputImageKey];
//    CGImageRef cgImage = [[CIContext contextWithOptions:nil] createCGImage:filter.outputImage fromRect:filter.outputImage.extent];
//    image = [UIImage imageWithCGImage:cgImage];
//    CGImageRelease(cgImage);
//    NSLog(@"%@", image);

   
    [cell.button setImage:image forState:UIControlStateNormal];
  //  cell.button.tintColor = [UIColor greenColor];
    return cell;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 20;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 80;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    
}



#pragma mark - ========= DownloadData =========
- (void)downloadData
{
    
}


#pragma mark - ========= Setter & Getter =========

@end
