//
//  MLFaceDetectorView.h
//  MLProject
//
//  Created by 妙龙赖 on 2016/12/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLFaceDetectorView : UIView
@property (weak, nonatomic) IBOutlet UIButton *detectButton;
@property (weak, nonatomic) IBOutlet UIImageView *faceImageView;
@property (weak, nonatomic) IBOutlet UIImageView *resultImageView;

@end
