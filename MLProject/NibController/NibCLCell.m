//
//  NibCLCell.m
//  MLProject
//
//  Created by 妙龙赖 on 15/12/22.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import "NibCLCell.h"
#import "UIView+CellXib.h"

@implementation NibCLCell

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
      // [self setupSelfNameCollectionViewCellXibOnSelf];
       

           

        

    }
    
    return self;
}


- (IBAction)clickEvent:(id)sender {
    NSLog(@"%@", sender);
}
@end
