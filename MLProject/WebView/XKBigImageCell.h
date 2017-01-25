//
//  XKBigImageCell.h
//  BondCommunity
//
//  Created by xunke03 on 16/4/15.
//  Copyright © 2016年 xunke03. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XKBigImageCell : UICollectionViewCell

/**
 *  图片名
 */
@property (nonatomic, copy) NSString *imageUrl;

@property (nonatomic, copy) NSString *imageSize;

@property (nonatomic, copy) void (^singleTapGestureBlock)();

/**
 *  内容高度
 */
@property (assign, nonatomic) CGFloat contentH;

@property (assign, nonatomic) BOOL lastHide;

@end
