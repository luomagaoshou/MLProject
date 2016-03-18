//
//  NSMutableString+Position.h
//  MLProject
//
//  Created by 妙龙赖 on 15/11/21.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableString (Position)
- (NSMutableString *)makeStringAtLeftAndRightWithSeparatorString:(NSString *)separatorString
                                                           targetLabel:(UILabel *)targetLabel;
@end
