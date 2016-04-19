//
//  CALayer+ML_CALayerChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "ML_Chain_Macro.h"
#import "ML_CALayerChain.h"
@interface CALayer (ML_CALayerChain)
ml_chain_category_method_declear(CALayer);
@end
@interface CALayer (ML_CALayerChainMothod)
- (void)superLayer:(CALayer *)superLayer;
@end