//
//  MLTintColorTBCell.m
//  MLProject
//
//  Created by 妙龙赖 on 16/8/7.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLTintColorTBCell.h"
@interface MLTintColorTBCell()
@property (nonatomic, copy) NSArray *filters;
@end
@implementation MLTintColorTBCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.filters = @[@"CIPhotoEffectChrome", @"CIPhotoEffectFade",
                     @"CIPhotoEffectInstant",
                     @"CIPhotoEffectMono", @"CIPhotoEffectNoir", @"CIPhotoEffectProcess",
                     @"CIPhotoEffectTonal", @"CIPhotoEffectTransfer",
                     @"CIQRCodeGenerator"];
   
    
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (void)tintColorDidChange
{
//    dispatch_async(dispatch_get_main_queue(), ^{
//        self.label.tintColor = self.tintColor;
//        //self.imageView_.image = [self.imageView_.image  imageWithRenderingMode:UIImageRenderingModeAutomatic];
//        UIImage *image = [UIImage imageNamed:@"test"];
//        CIFilter *filter = [CIFilter filterWithName:self.filters[arc4random()%self.filters.count]];
//        [filter setValue:image.CIImage forKey:kCIInputImageKey];
//        CGImageRef cgImage = [[CIContext contextWithOptions:nil] createCGImage:filter.outputImage fromRect:filter.outputImage.extent];
//        image = [UIImage imageWithCGImage:cgImage];
//        CGImageRelease(cgImage);
//        NSLog(@"%@", image);
//        self.imageView_.image = image;
//    });
    

    
    
}

@end
