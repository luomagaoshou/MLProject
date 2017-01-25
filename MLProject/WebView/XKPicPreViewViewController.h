//
//  XKPicPreViewViewController.h
//  BondCommunity
//
//  Created by xunke03 on 16/6/13.
//  Copyright © 2016年 xunke03. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  查看大图（文章底层页的图片）
 */
@interface XKPicPreViewViewController : UIViewController

@property (strong, nonatomic) NSArray *photos;
@property (strong, nonatomic) NSArray *picSizes;
@property (assign, nonatomic) NSInteger tag;

@end
