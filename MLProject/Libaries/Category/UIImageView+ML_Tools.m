//
//  UIImageView+ML_Tools.m
//  ML_Demo
//
//  Created by 妙龙赖 on 15/8/18.
//  Copyright (c) 2015年 妙龙赖. All rights reserved.
//

#import "UIImageView+ML_Tools.h"

@implementation UIImageView (ML_Tools)

- (void)transformWithScale:(CGFloat)scale rotation:(CGFloat)rotation
{
    //x,y的缩放
   CGAffineTransform scaleTransform = CGAffineTransformMakeScale(scale, scale);
    //旋转
   CGAffineTransform rotationTransform = CGAffineTransformMakeRotation(rotation);
    
    [UIView animateWithDuration:0.25f animations:^{
        self.transform = CGAffineTransformConcat(scaleTransform, rotationTransform);
    }];
    
    
    

}

+ (void)createButtnGroupWithFrame:(CGRect)frame
                           titles:(NSArray *)titles
             randomBackgrondColor:(BOOL)randomBackgrondColor
                      totalNumber:(NSInteger)totalNumber
                     columnNumber:(NSInteger)columnNumber
                         showView:(UIView *)showView imageViewArrayCallback:(MLCallback)callback

{
    
    NSMutableArray *imageViewArray = [[NSMutableArray alloc] init];
    for (NSInteger i = 0; i<totalNumber; i++) {
        
        
        UIImageView *imageView = [[UIImageView alloc] init];
        imageView.frame = CGRectMake(frame.origin.x + i%3*frame.size.width/3, frame.origin.y+i/3 * frame.size.height/3, frame.size.width/3, frame.size.height/3);
        if (titles) {
           // [btn setTitle:titles[i] forState:UIControlStateNormal];
        }
        if(randomBackgrondColor)
        {
            [imageView setBackgroundColor:[UIColor colorWithRed:arc4random()%256/255.0f green:arc4random()%256/255.0f blue:arc4random()%256/255.0f alpha:1.0f]];
        }
        else
        {
            [imageView setBackgroundColor:[UIColor whiteColor]];
        }
        
        
        [imageViewArray addObject:imageView];
        [showView addSubview:imageView];
        
        
    }
    callback(imageViewArray);
}


- (instancetype)initWithFrame:(CGRect)frame
                  contentMode:(UIViewContentMode)contentMode
                        image:(UIImage *)image
{
    self = [super initWithFrame:frame];
    if (self) {
        self.contentMode = contentMode;
        self.image = image;
    }
    return self;
}
@end
