//  
//  MLChain4UITextView.m
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UITextView.h"
#import "MLChain4UIScrollView.h"
@implementation MLChain4UITextView
- (MLChainParamBlock4UITextView)ab_textAttributes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setAb_textAttributes:";
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

- (MLChainParamBlock4UITextView)ab_text{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setAb_text:";
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

- (MLChainParamBlock4UITextView)bounds{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setBounds:";
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

- (MLChainParamBlock4UITextView)invalidateIntrinsicContentSize{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"invalidateIntrinsicContentSize";
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

- (MLChainParamBlock4UITextView)layoutSubviews{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"layoutSubviews";
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

- (MLChainParamBlock4UITextView)traitCollectionDidChange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"traitCollectionDidChange:";
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

- (MLChainParamBlock4UITextView)contentMode{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setContentMode:";
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

- (MLChainParamBlock4UITextView)textAlignment{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setTextAlignment:";
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

- (MLChainParamBlock4UITextView)attributedText{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setAttributedText:";
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

- (MLChainParamBlock4UITextView)scrollEnabled{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setScrollEnabled:";
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

- (MLChainParamBlock4UITextView)increaseSize{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"increaseSize:";
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

- (MLChainParamBlock4UITextView)decreaseSize{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"decreaseSize:";
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

- (MLChainParamBlock4UITextView)encodeRestorableStateWithCoder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"encodeRestorableStateWithCoder:";
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

- (MLChainParamBlock4UITextView)decodeRestorableStateWithCoder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"decodeRestorableStateWithCoder:";
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

- (MLChainParamBlock4UITextView)textColor{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setTextColor:";
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

- (MLChainParamBlock4UITextView)font{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setFont:";
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

- (MLChainParamBlock4UITextView)text{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setText:";
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

- (MLChainParamBlock4UITextView)tintColorDidChange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"tintColorDidChange";
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

- (MLChainParamBlock4UITextView)contentOff{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setContentOffset:";
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

- (MLChainParamBlock4UITextView)keyboardInputChangedSelection{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"keyboardInputChangedSelection:";
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

- (MLChainParamBlock4UITextView)scrollSelectionToVisible{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"scrollSelectionToVisible:";
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

- (MLChainParamBlock4UITextView)cancelAutoscroll{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"cancelAutoscroll";
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

- (MLChainParamBlock4UITextView)typingAttributes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setTypingAttributes:";
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

- (MLChainParamBlock4UITextView)takeTraitsFrom{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"takeTraitsFrom:";
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

- (MLChainParamBlock4UITextView)selectedRange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setSelectedRange:";
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

- (MLChainParamBlock4UITextView)addTextAlternativesDisplayStyleToRange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"addTextAlternativesDisplayStyleToRange:";
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

- (MLChainParamBlock4UITextView)selectedTextRange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setSelectedTextRange:";
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

- (MLChainParamBlock4UITextView)deleteBackward{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"deleteBackward";
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

- (MLChainParamBlock4UITextView)replaceRange_withText{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"replaceRange:withText:";
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

- (MLChainParamBlock4UITextView)replaceRangeWithTextWithoutClosingTyping_replacementText{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"replaceRangeWithTextWithoutClosingTyping:replacementText:";
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

- (MLChainParamBlock4UITextView)markedTextStyle{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setMarkedTextStyle:";
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

- (MLChainParamBlock4UITextView)unmarkText{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"unmarkText";
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

- (MLChainParamBlock4UITextView)inputDelegate{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setInputDelegate:";
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

- (MLChainParamBlock4UITextView)baseWritingDirection_forRange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setBaseWritingDirection:forRange:";
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

- (MLChainParamBlock4UITextView)insertDictationResult_withCorrectionIdentifier{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"insertDictationResult:withCorrectionIdentifier:";
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

- (MLChainParamBlock4UITextView)removeDictationResultPlaceholder_willInsertResult{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"removeDictationResultPlaceholder:willInsertResult:";
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

- (MLChainParamBlock4UITextView)beginSelectionChange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"beginSelectionChange";
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

- (MLChainParamBlock4UITextView)endSelectionChange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"endSelectionChange";
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

- (MLChainParamBlock4UITextView)textInputDidChange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"textInputDidChange:";
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

- (MLChainParamBlock4UITextView)textInputDidChangeSelection{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"textInputDidChangeSelection:";
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

- (MLChainParamBlock4UITextView)beginFloatingCursorAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"beginFloatingCursorAtPoint:";
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

- (MLChainParamBlock4UITextView)updateFloatingCursorAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"updateFloatingCursorAtPoint:";
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

- (MLChainParamBlock4UITextView)endFloatingCursor{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"endFloatingCursor";
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

- (MLChainParamBlock4UITextView)startAutoscroll{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"startAutoscroll:";
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

- (MLChainParamBlock4UITextView)updateConstraints{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"updateConstraints";
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

- (MLChainParamBlock4UITextView)allowsEditingTextAttributes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setAllowsEditingTextAttributes:";
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

- (MLChainParamBlock4UITextView)editable{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setEditable:";
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

- (MLChainParamBlock4UITextView)lineHeight{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setLineHeight:";
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

- (MLChainParamBlock4UITextView)dataDetectorTypes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setDataDetectorTypes:";
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

- (MLChainParamBlock4UITextView)inputAccessoryView{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setInputAccessoryView:";
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

- (MLChainParamBlock4UITextView)updateAutoscrollAboveBottom{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"updateAutoscrollAboveBottom";
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

- (MLChainParamBlock4UITextView)selectAll{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"selectAll:";
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

- (MLChainParamBlock4UITextView)clearsOnInsertion{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setClearsOnInsertion:";
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

- (MLChainParamBlock4UITextView)makeTextWritingDirectionRightToLeft{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"makeTextWritingDirectionRightToLeft:";
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

- (MLChainParamBlock4UITextView)makeTextWritingDirectionLeftToRight{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"makeTextWritingDirectionLeftToRight:";
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

- (MLChainParamBlock4UITextView)replace{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"replace:";
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

- (MLChainParamBlock4UITextView)cut{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"cut:";
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

- (MLChainParamBlock4UITextView)copy{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"copy:";
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

- (MLChainParamBlock4UITextView)paste{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"paste:";
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

- (MLChainParamBlock4UITextView)toggleBoldface{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"toggleBoldface:";
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

- (MLChainParamBlock4UITextView)toggleItalics{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"toggleItalics:";
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

- (MLChainParamBlock4UITextView)toggleUnderline{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"toggleUnderline:";
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

- (MLChainParamBlock4UITextView)contentToHTMLString{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setContentToHTMLString:";
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

- (MLChainParamBlock4UITextView)cancelInteractionWithLink{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"cancelInteractionWithLink";
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

- (MLChainParamBlock4UITextView)tapLinkAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"tapLinkAtPoint:";
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

- (MLChainParamBlock4UITextView)startInteractionWithLinkAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"startInteractionWithLinkAtPoint:";
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

- (MLChainParamBlock4UITextView)updateInteractionWithLinkAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"updateInteractionWithLinkAtPoint:";
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

- (MLChainParamBlock4UITextView)validateInteractionWithLinkAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"validateInteractionWithLinkAtPoint:";
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

- (MLChainParamBlock4UITextView)startLongInteractionWithLinkAtPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"startLongInteractionWithLinkAtPoint:";
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

- (MLChainParamBlock4UITextView)disableClearsOnInsertion{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"disableClearsOnInsertion";
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

- (MLChainParamBlock4UITextView)updateSelection{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"updateSelection";
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

- (MLChainParamBlock4UITextView)select{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"select:";
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

- (MLChainParamBlock4UITextView)becomesEditableWithGestures{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setBecomesEditableWithGestures:";
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

- (MLChainParamBlock4UITextView)marginTop{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setMarginTop:";
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

- (MLChainParamBlock4UITextView)shouldAutoscrollAboveBottom{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setShouldAutoscrollAboveBottom:";
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

- (MLChainParamBlock4UITextView)scrollRangeToVisible{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"scrollRangeToVisible:";
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

- (MLChainParamBlock4UITextView)inputView{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setInputView:";
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

- (MLChainParamBlock4UITextView)continuousSpellCheckingEnabled{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setContinuousSpellCheckingEnabled:";
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

- (MLChainParamBlock4UITextView)forceEnableDictation{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setForceEnableDictation:";
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

- (MLChainParamBlock4UITextView)textContainerIn{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setTextContainerInset:";
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

- (MLChainParamBlock4UITextView)drawRect_forViewPrintFormatter{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"drawRect:forViewPrintFormatter:";
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

- (MLChainParamBlock4UITextView)selectable{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setSelectable:";
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

- (MLChainParamBlock4UITextView)usesTiledViews{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setUsesTiledViews:";
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

- (MLChainParamBlock4UITextView)linkTextAttributes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setLinkTextAttributes:";
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

- (MLChainParamBlock4UITextView)tiledViewsDrawAsynchronously{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setTiledViewsDrawAsynchronously:";
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

- (MLChainParamBlock4UITextView)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:";
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

- (MLChainParamBlock4UITextView)frame{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setFrame:";
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

- (MLChainParamBlock4UITextView)encodeWithCoder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"encodeWithCoder:";
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

- (MLChainParamBlock4UITextView)markedText_selectedRange{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setMarkedText:selectedRange:";
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

- (MLChainParamBlock4UITextView)insertText{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"insertText:";
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

- (MLChainParamBlock4UITextView)attributedPlaceholder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4UITextView *(id firstObject, ...){
NSString *selName = @"setAttributedPlaceholder:";
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
