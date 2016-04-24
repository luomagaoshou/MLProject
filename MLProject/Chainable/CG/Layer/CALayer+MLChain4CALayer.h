//
//  CALayer+MLChain4CALayer.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "MLChainMacro.h"
#import "MLChain4CALayer.h"
@interface CALayer (MLChain4CALayer)
ml_chain_category_method_declear(CALayer);
@end
@interface CALayer (MLChain4CALayerMothod)
- (void)superLayer:(CALayer *)superLayer;
@end