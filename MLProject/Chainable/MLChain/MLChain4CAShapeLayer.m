//  
//  MLChain4CAShapeLayer.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAShapeLayer.h"
#import "MLChain4CALayer.h"
@implementation MLChain4CAShapeLayer
- (MLChainParamBlock4CAShapeLayer)didChangeValueForKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"didChangeValueForKey:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)strokeStart{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setStrokeStart:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)strokeEnd{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setStrokeEnd:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)lineDashPhase{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setLineDashPhase:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)miterLimit{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setMiterLimit:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)strokeColor{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setStrokeColor:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)lineCap{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setLineCap:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)lineJoin{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setLineJoin:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)lineDashPattern{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setLineDashPattern:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)path{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setPath:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)lineWidth{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setLineWidth:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)fillColor{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setFillColor:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAShapeLayer)fillRule{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAShapeLayer *(id firstObject, ...){
NSString *selName = @"setFillRule:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}
@end
