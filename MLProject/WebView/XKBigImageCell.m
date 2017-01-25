//
//  XKBigImageCell.m
//  BondCommunity
//
//  Created by xunke03 on 16/4/15.
//  Copyright © 2016年 xunke03. All rights reserved.
//

#import "XKBigImageCell.h"
#import "UIImageView+WebCache.h"
#import "FLAnimatedImageView.h"
#import "FLAnimatedImage.h"
#import "UIImage+Stretch.h"
@interface XKBigImageCell () <UIGestureRecognizerDelegate,UIScrollViewDelegate> {
    CGFloat _aspectRatio;
}

@property (strong, nonatomic) FLAnimatedImageView *imageView;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *imageContainerView;

@end

@implementation XKBigImageCell

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        
        self.backgroundColor = [UIColor blackColor];
        
        _scrollView = [[UIScrollView alloc] init];
        _scrollView.frame = CGRectMake(0, 0, self.width, self.height);
        _scrollView.bouncesZoom = YES;
        _scrollView.maximumZoomScale = 2.5;
        _scrollView.minimumZoomScale = 1.0;
        _scrollView.multipleTouchEnabled = YES;
        _scrollView.delegate = self;
        _scrollView.scrollsToTop = NO;
        _scrollView.showsHorizontalScrollIndicator = NO;
        _scrollView.showsVerticalScrollIndicator = NO;
        _scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        _scrollView.delaysContentTouches = NO;
        _scrollView.canCancelContentTouches = YES;
        _scrollView.alwaysBounceVertical = NO;
        [self.contentView addSubview:_scrollView];
        
        _imageContainerView = [[UIView alloc] init];
        _imageContainerView.clipsToBounds = YES;
        [_scrollView addSubview:_imageContainerView];
        
        _imageView = [[FLAnimatedImageView alloc] init];
        // _imageView.backgroundColor = [UIColor colorWithWhite:1.000 alpha:0.500];
        _imageView.contentMode = UIViewContentModeScaleAspectFill;
        [_imageContainerView addSubview:_imageView];
        self.clipsToBounds = YES;
        
        UITapGestureRecognizer *tap1 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(singleTap:)];
        [self addGestureRecognizer:tap1];
        
        UILongPressGestureRecognizer *longPress = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPress:)];
//        longPress.minimumPressDuration = .6f;
        [self addGestureRecognizer:longPress];
        UITapGestureRecognizer *tap2 = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(doubleTap:)];
        tap2.numberOfTapsRequired = 2;
        [tap1 requireGestureRecognizerToFail:tap2];
        [self addGestureRecognizer:tap2];
    }
    return self;
}

//- (void)layoutSubviews {
//    
//    [super layoutSubviews];
//
//}

- (void)setImageUrl:(NSString *)imageUrl
{
    [_scrollView setZoomScale:1.0 animated:NO];
    _imageUrl = imageUrl;

//    [self.imageView sd_setImageWithURL:[NSURL URLWithString:imageUrl] placeholderImage:LPlaceImage];
  
    
    [UIImage downLoadPicWithUrl:[NSURL URLWithString:imageUrl] success:^(UIImage *image) {
        
        dispatch_async(dispatch_get_main_queue(), ^{
            if (image.size.width && image.size.height) {
                [self setPicSize:NSStringFromCGSize(image.size)];
            }
            NSData *imageData = [UIImage getImageData:imageUrl];
            //调用获取图片扩展名
            NSString *string = [UIImage contentTypeForImageData:imageData];
            if ([string isEqualToString:@"gif"]) {
                FLAnimatedImage *image = [FLAnimatedImage animatedImageWithGIFData:imageData];
                self.imageView.animatedImage = image;
            } else {
                [self.imageView sd_setImageWithURL:[NSURL URLWithString:imageUrl] placeholderImage:[UIImage imageNamed:@"test"]];
            }
        });
    }];
    [self setPicSize:NSStringFromCGSize(self.imageView.image.size)];
}

//- (void)setImageSize:(NSString *)imageSize {
//    _imageSize = imageSize;
//    _imageContainerView.x = 0;
//    _imageContainerView.y = 0;
//    _imageContainerView.width = self.width;
//    
//    CGSize size = CGSizeFromString(imageSize);
//    
////    _imageView.width = self.width;
//    if (size.height / size.width > self.height / self.width) {
//        _imageContainerView.height = floor(size.height / (size.width / self.width));
////        _imageView.height = floor(size.height / (size.width / self.width));
//    } else {
//        CGFloat height = size.height / size.width * self.width;
//        if (height < 1 || isnan(height)) height = self.height;
//        height = floor(height);
////        _imageView.height = height;
//        _imageContainerView.height = height;
//        _imageContainerView.centerY = self.height / 2;
//    }
//    
//    if (_imageContainerView.height > self.height && _imageContainerView.height - self.height <= 1) {
////        _imageView.height = self.height;
//        _imageContainerView.height = self.height;
//    }
//    _imageView.centerY = self.height / 2;
//    
//    _scrollView.contentSize = CGSizeMake(self.width, MAX(_imageContainerView.height, self.height));
//    [_scrollView scrollRectToVisible:self.bounds animated:NO];
//    _scrollView.alwaysBounceVertical = _imageContainerView.width <= self.height ? NO : YES;
//    _imageView.frame = _imageContainerView.bounds;
//}

- (void)setPicSize:(NSString *)imageSize {
    _imageSize = imageSize;
    _imageContainerView.x = 0;
    _imageContainerView.y = 0;
    _imageContainerView.width = self.width;
    
    CGSize size = CGSizeFromString(imageSize);
 
    //    _imageView.width = self.width;
    if (size.height / size.width > self.height / self.width) {
        _imageContainerView.height = floor(size.height / (size.width / self.width));
        //        _imageView.height = floor(size.height / (size.width / self.width));
    } else {
        CGFloat height = size.height / size.width * self.width;
        if (height < 1 || isnan(height)) height = self.height;
        height = floor(height);
        //        _imageView.height = height;
        _imageContainerView.height = height;
        _imageContainerView.centerY = self.height / 2;
    }
    
    if (_imageContainerView.height > self.height && _imageContainerView.height - self.height <= 1) {
        //        _imageView.height = self.height;
        _imageContainerView.height = self.height;
    }
    _imageView.centerY = self.height / 2;
    
    _scrollView.contentSize = CGSizeMake(self.width, MAX(_imageContainerView.height, self.height));
    [_scrollView scrollRectToVisible:self.bounds animated:NO];
    _scrollView.alwaysBounceVertical = _imageContainerView.width <= self.height ? NO : YES;
    _imageView.frame = _imageContainerView.bounds;
}



#pragma mark - 单击事件
- (void)singleTap:(UITapGestureRecognizer *)singleTap
{
    if (_singleTapGestureBlock) {
        _singleTapGestureBlock();
    }
}


#pragma mark - 双击事件
- (void)doubleTap:(UITapGestureRecognizer *)doubleTap
{
    if (_scrollView.zoomScale > 1.0) {
        [_scrollView setZoomScale:1.0 animated:YES];
    } else {
        CGPoint touchPoint = [doubleTap locationInView:self.imageView];
        CGFloat newZoomScale = _scrollView.maximumZoomScale;
        CGFloat xsize = self.frame.size.width / newZoomScale;
        CGFloat ysize = self.frame.size.height / newZoomScale;
        [_scrollView zoomToRect:CGRectMake(touchPoint.x - xsize/2, touchPoint.y - ysize/2, xsize, ysize) animated:YES];
    }
}

#pragma mark - 长按事件
- (void)longPress:(UILongPressGestureRecognizer *)longPress {
    if (longPress.state == UIGestureRecognizerStateBegan) {
        //TODO: 图片查看页面，长按保存图片统计
       
        
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"是否保存图片" message:@"" delegate:self cancelButtonTitle:@"保存" otherButtonTitles:@"取消", nil];
        [alertView show];
    }
    if ( longPress.state == UIGestureRecognizerStateChanged ) {
        
    }
}

#pragma mark - UIScrollViewDelegate

- (nullable UIView *)viewForZoomingInScrollView:(UIScrollView *)scrollView {
    return _imageContainerView;
}

- (void)scrollViewDidZoom:(UIScrollView *)scrollView {
    CGFloat offsetX = (scrollView.width > scrollView.contentSize.width) ? (scrollView.width - scrollView.contentSize.width) * 0.5 : 0.0;
    CGFloat offsetY = (scrollView.height > scrollView.contentSize.height) ? (scrollView.height - scrollView.contentSize.height) * 0.5 : 0.0;
    self.imageContainerView.center = CGPointMake(scrollView.contentSize.width * 0.5 + offsetX, scrollView.contentSize.height * 0.5 + offsetY);
}


// 指定回调方法
- (void)image: (UIImage *) image didFinishSavingWithError: (NSError *) error contextInfo: (void *) contextInfo
{
    
}

//alert的代理
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    
    if (buttonIndex == 0 ) {//确定按钮
        //TODO: 图片查看页面，长按保存图片统计
      
        
        UIImage *savedImage = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_imageUrl]]];
        UIImageWriteToSavedPhotosAlbum(savedImage, self, @selector(image:didFinishSavingWithError:contextInfo:), NULL);
    } else {
        //TODO: 图片查看页面，长按保存图片统计
  
    }
}

//- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
//    
//}
//
//// called on start of dragging (may require some time and or distance to move)
//- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
//    
//}
//
//- (void)scrollViewWillEndDragging:(UIScrollView *)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)targetContentOffset NS_AVAILABLE_IOS(5_0) {
//    
//}
//// called on finger up if the user dragged. decelerate is true if it will continue moving afterwards
//- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate {
//    
//}
//
//- (void)scrollViewWillBeginDecelerating:(UIScrollView *)scrollView {
//    
//}
//
//- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
//    
//}
//
//- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView {
//    
//}
//
//
//- (void)scrollViewWillBeginZooming:(UIScrollView *)scrollView withView:(nullable UIView *)view NS_AVAILABLE_IOS(3_2) {
//
//}

#pragma makr - 放大缩小结束后调用   用作统计
- (void)scrollViewDidEndZooming:(UIScrollView *)scrollView withView:(nullable UIView *)view atScale:(CGFloat)scale {
    //TODO: 图片查看页面，放大缩小查看图片统计
  
}


@end
