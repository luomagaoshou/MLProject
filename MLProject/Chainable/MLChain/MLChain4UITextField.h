//  
//  MLChain4UITextField.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"



@interface MLChain4UITextField:MLChain4UIControl
- (UITextField *)chainObject;
#ifndef bk_shouldEndEditingBlock                                  
#define bk_shouldEndEditingBlock(...)  bk_shouldEndEditingBlock(@"setBk_shouldEndEditingBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_shouldEndEditingBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_shouldEndEditingBlock;


#ifndef bk_shouldReturnBlock                                  
#define bk_shouldReturnBlock(...)  bk_shouldReturnBlock(@"setBk_shouldReturnBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_shouldReturnBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_shouldReturnBlock;


#ifndef bk_shouldClearBlock                                  
#define bk_shouldClearBlock(...)  bk_shouldClearBlock(@"setBk_shouldClearBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_shouldClearBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_shouldClearBlock;


#ifndef bk_didEndEditingBlock                                  
#define bk_didEndEditingBlock(...)  bk_didEndEditingBlock(@"setBk_didEndEditingBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_didEndEditingBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_didEndEditingBlock;


#ifndef bk_didBeginEditingBlock                                  
#define bk_didBeginEditingBlock(...)  bk_didBeginEditingBlock(@"setBk_didBeginEditingBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_didBeginEditingBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_didBeginEditingBlock;


#ifndef bk_shouldBeginEditingBlock                                  
#define bk_shouldBeginEditingBlock(...)  bk_shouldBeginEditingBlock(@"setBk_shouldBeginEditingBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_shouldBeginEditingBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_shouldBeginEditingBlock;


#ifndef bk_shouldChangeCharactersInRangeWithReplacementStringBlock                                  
#define bk_shouldChangeCharactersInRangeWithReplacementStringBlock(...)  bk_shouldChangeCharactersInRangeWithReplacementStringBlock(@"setBk_shouldChangeCharactersInRangeWithReplacementStringBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBk_shouldChangeCharactersInRangeWithReplacementStringBlock: '@'
     */
- (MLChain4UITextField *(^)())bk_shouldChangeCharactersInRangeWithReplacementStringBlock;


#ifndef a2_SetDelegate                                  
#define a2_SetDelegate(...)  a2_SetDelegate(@"a2_SetDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   a2_SetDelegate: '@'
     */
- (MLChain4UITextField *(^)())a2_SetDelegate;


#ifndef selectAllText                              
#define selectAllText(...)  selectAllText(@"selectAllText")                              
#endif
/**     ClassName-> UITextField                                
SEL-> selectAllText     */
- (MLChain4UITextField *(^)())selectAllText;


#ifndef selectedRange                                  
#define selectedRange(...)  selectedRange(@"setSelectedRange:", __VA_ARGS__)                                  
#endif
#ifndef selectedRange_             
#define selectedRange_(...)  selectedRange(NSMakeRange(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setSelectedRange: '{'
     */
- (MLChain4UITextField *(^)())selectedRange;


#ifndef ab_textAttributes                                  
#define ab_textAttributes(...)  ab_textAttributes(@"setAb_textAttributes:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAb_textAttributes: '@'
     */
- (MLChain4UITextField *(^)())ab_textAttributes;


#ifndef ab_text                                  
#define ab_text(...)  ab_text(@"setAb_text:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAb_text: '@'
     */
- (MLChain4UITextField *(^)())ab_text;


#ifndef attributes_range                                  
#define attributes_range(...)  attributes_range(@"setAttributes:range:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAttributes: '@'
  range: '{'
     */
- (MLChain4UITextField *(^)())attributes_range;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UITextField *(^)())enabled;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDelegate: '@'
     */
- (MLChain4UITextField *(^)())delegate;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UITextField *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef progress                                  
#define progress(...)  progress(@"setProgress:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setProgress: 'f'
     */
- (MLChain4UITextField *(^)())progress;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setBounds: '{'
     */
- (MLChain4UITextField *(^)())bounds;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UITextField                                
SEL-> layoutSubviews     */
- (MLChain4UITextField *(^)())layoutSubviews;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UITextField *(^)())traitCollectionDidChange;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UITextField *(^)())semanticContentAttribute;


#ifndef textAlignment                                  
#define textAlignment(...)  textAlignment(@"setTextAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTextAlignment: 'q'
     */
- (MLChain4UITextField *(^)())textAlignment;


#ifndef attributedText                                  
#define attributedText(...)  attributedText(@"setAttributedText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAttributedText: '@'
     */
- (MLChain4UITextField *(^)())attributedText;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())touchesCancelled_withEvent;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())pressesCancelled_withEvent;


#ifndef increaseSize                                  
#define increaseSize(...)  increaseSize(@"increaseSize:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   increaseSize: '@'
     */
- (MLChain4UITextField *(^)())increaseSize;


#ifndef decreaseSize                                  
#define decreaseSize(...)  decreaseSize(@"decreaseSize:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   decreaseSize: '@'
     */
- (MLChain4UITextField *(^)())decreaseSize;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UITextField *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UITextField *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())pressesChanged_withEvent;


#ifndef textColor                                  
#define textColor(...)  textColor(@"setTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTextColor: '@'
     */
- (MLChain4UITextField *(^)())textColor;


#ifndef font                                  
#define font(...)  font(@"setFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFont: '@'
     */
- (MLChain4UITextField *(^)())font;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UITextField *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> tintColorDidChange     */
- (MLChain4UITextField *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UITextField *(^)())interactionTintColorDidChange;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UITextField *(^)())willMoveToWindow;


#ifndef replaceRange_withText                                  
#define replaceRange_withText(...)  replaceRange_withText(@"replaceRange:withText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   replaceRange: '@'
  withText: '@'
     */
- (MLChain4UITextField *(^)())replaceRange_withText;


#ifndef unmarkText                              
#define unmarkText(...)  unmarkText(@"unmarkText")                              
#endif
/**     ClassName-> UITextField                                
SEL-> unmarkText     */
- (MLChain4UITextField *(^)())unmarkText;


#ifndef baseWritingDirection_forRange                                  
#define baseWritingDirection_forRange(...)  baseWritingDirection_forRange(@"setBaseWritingDirection:forRange:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBaseWritingDirection: 'q'
  forRange: '@'
     */
- (MLChain4UITextField *(^)())baseWritingDirection_forRange;


#ifndef removeDictationResultPlaceholder_willInsertResult                                  
#define removeDictationResultPlaceholder_willInsertResult(...)  removeDictationResultPlaceholder_willInsertResult(@"removeDictationResultPlaceholder:willInsertResult:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeDictationResultPlaceholder: '@'
  willInsertResult: 'B'
     */
- (MLChain4UITextField *(^)())removeDictationResultPlaceholder_willInsertResult;


#ifndef beginFloatingCursorAtPoint                                  
#define beginFloatingCursorAtPoint(...)  beginFloatingCursorAtPoint(@"beginFloatingCursorAtPoint:", __VA_ARGS__)                                  
#endif
#ifndef beginFloatingCursorAtPoint_             
#define beginFloatingCursorAtPoint_(...)  beginFloatingCursorAtPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   beginFloatingCursorAtPoint: '{'
     */
- (MLChain4UITextField *(^)())beginFloatingCursorAtPoint;


#ifndef updateFloatingCursorAtPoint                                  
#define updateFloatingCursorAtPoint(...)  updateFloatingCursorAtPoint(@"updateFloatingCursorAtPoint:", __VA_ARGS__)                                  
#endif
#ifndef updateFloatingCursorAtPoint_             
#define updateFloatingCursorAtPoint_(...)  updateFloatingCursorAtPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   updateFloatingCursorAtPoint: '{'
     */
- (MLChain4UITextField *(^)())updateFloatingCursorAtPoint;


#ifndef endFloatingCursor                              
#define endFloatingCursor(...)  endFloatingCursor(@"endFloatingCursor")                              
#endif
/**     ClassName-> UITextField                                
SEL-> endFloatingCursor     */
- (MLChain4UITextField *(^)())endFloatingCursor;


#ifndef selectedTextRange                                  
#define selectedTextRange(...)  selectedTextRange(@"setSelectedTextRange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setSelectedTextRange: '@'
     */
- (MLChain4UITextField *(^)())selectedTextRange;


#ifndef markedTextStyle                                  
#define markedTextStyle(...)  markedTextStyle(@"setMarkedTextStyle:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMarkedTextStyle: '@'
     */
- (MLChain4UITextField *(^)())markedTextStyle;


#ifndef inputDelegate                                  
#define inputDelegate(...)  inputDelegate(@"setInputDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setInputDelegate: '@'
     */
- (MLChain4UITextField *(^)())inputDelegate;


#ifndef deleteBackward                              
#define deleteBackward(...)  deleteBackward(@"deleteBackward")                              
#endif
/**     ClassName-> UITextField                                
SEL-> deleteBackward     */
- (MLChain4UITextField *(^)())deleteBackward;


#ifndef keyboardAppearance                                  
#define keyboardAppearance(...)  keyboardAppearance(@"setKeyboardAppearance:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setKeyboardAppearance: 'q'
     */
- (MLChain4UITextField *(^)())keyboardAppearance;


#ifndef highlighted                                  
#define highlighted(...)  highlighted(@"setHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setHighlighted: 'B'
     */
- (MLChain4UITextField *(^)())highlighted;


#ifndef contentVerticalAlignment                                  
#define contentVerticalAlignment(...)  contentVerticalAlignment(@"setContentVerticalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentVerticalAlignment: 'q'
     */
- (MLChain4UITextField *(^)())contentVerticalAlignment;


#ifndef adjustsFontSizeToFitWidth                                  
#define adjustsFontSizeToFitWidth(...)  adjustsFontSizeToFitWidth(@"setAdjustsFontSizeToFitWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAdjustsFontSizeToFitWidth: 'B'
     */
- (MLChain4UITextField *(^)())adjustsFontSizeToFitWidth;


#ifndef keyboardInputChangedSelection                                  
#define keyboardInputChangedSelection(...)  keyboardInputChangedSelection(@"keyboardInputChangedSelection:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   keyboardInputChangedSelection: '@'
     */
- (MLChain4UITextField *(^)())keyboardInputChangedSelection;


#ifndef fieldEditorDidChange                                  
#define fieldEditorDidChange(...)  fieldEditorDidChange(@"fieldEditorDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   fieldEditorDidChange: '@'
     */
- (MLChain4UITextField *(^)())fieldEditorDidChange;


#ifndef selectAllFromFieldEditor                                  
#define selectAllFromFieldEditor(...)  selectAllFromFieldEditor(@"selectAllFromFieldEditor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   selectAllFromFieldEditor: '@'
     */
- (MLChain4UITextField *(^)())selectAllFromFieldEditor;


#ifndef cancelAutoscroll                              
#define cancelAutoscroll(...)  cancelAutoscroll(@"cancelAutoscroll")                              
#endif
/**     ClassName-> UITextField                                
SEL-> cancelAutoscroll     */
- (MLChain4UITextField *(^)())cancelAutoscroll;


#ifndef willDetachFieldEditor                                  
#define willDetachFieldEditor(...)  willDetachFieldEditor(@"willDetachFieldEditor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willDetachFieldEditor: '@'
     */
- (MLChain4UITextField *(^)())willDetachFieldEditor;


#ifndef typingAttributes                                  
#define typingAttributes(...)  typingAttributes(@"setTypingAttributes:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTypingAttributes: '@'
     */
- (MLChain4UITextField *(^)())typingAttributes;


#ifndef takeTraitsFrom                                  
#define takeTraitsFrom(...)  takeTraitsFrom(@"takeTraitsFrom:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   takeTraitsFrom: '@'
     */
- (MLChain4UITextField *(^)())takeTraitsFrom;


#ifndef willAttachFieldEditor                                  
#define willAttachFieldEditor(...)  willAttachFieldEditor(@"willAttachFieldEditor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willAttachFieldEditor: '@'
     */
- (MLChain4UITextField *(^)())willAttachFieldEditor;


#ifndef attachFieldEditor                                  
#define attachFieldEditor(...)  attachFieldEditor(@"attachFieldEditor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   attachFieldEditor: '@'
     */
- (MLChain4UITextField *(^)())attachFieldEditor;


#ifndef didAttachFieldEditor                                  
#define didAttachFieldEditor(...)  didAttachFieldEditor(@"didAttachFieldEditor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didAttachFieldEditor: '@'
     */
- (MLChain4UITextField *(^)())didAttachFieldEditor;


#ifndef clearText                              
#define clearText(...)  clearText(@"clearText")                              
#endif
/**     ClassName-> UITextField                                
SEL-> clearText     */
- (MLChain4UITextField *(^)())clearText;


#ifndef replaceRangeWithTextWithoutClosingTyping_replacementText                                  
#define replaceRangeWithTextWithoutClosingTyping_replacementText(...)  replaceRangeWithTextWithoutClosingTyping_replacementText(@"replaceRangeWithTextWithoutClosingTyping:replacementText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   replaceRangeWithTextWithoutClosingTyping: '@'
  replacementText: '@'
     */
- (MLChain4UITextField *(^)())replaceRangeWithTextWithoutClosingTyping_replacementText;


#ifndef insertDictationResult_withCorrectionIdentifier                                  
#define insertDictationResult_withCorrectionIdentifier(...)  insertDictationResult_withCorrectionIdentifier(@"insertDictationResult:withCorrectionIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertDictationResult: '@'
  withCorrectionIdentifier: '@'
     */
- (MLChain4UITextField *(^)())insertDictationResult_withCorrectionIdentifier;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> beginSelectionChange     */
- (MLChain4UITextField *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> endSelectionChange     */
- (MLChain4UITextField *(^)())endSelectionChange;


#ifndef displaySecureEditsUsingPlainText                                  
#define displaySecureEditsUsingPlainText(...)  displaySecureEditsUsingPlainText(@"setDisplaySecureEditsUsingPlainText:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDisplaySecureEditsUsingPlainText: 'B'
     */
- (MLChain4UITextField *(^)())displaySecureEditsUsingPlainText;


#ifndef startAutoscroll                                  
#define startAutoscroll(...)  startAutoscroll(@"startAutoscroll:", __VA_ARGS__)                                  
#endif
#ifndef startAutoscroll_             
#define startAutoscroll_(...)  startAutoscroll(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   startAutoscroll: '{'
     */
- (MLChain4UITextField *(^)())startAutoscroll;


#ifndef selectAll                                  
#define selectAll(...)  selectAll(@"selectAll:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   selectAll: '@'
     */
- (MLChain4UITextField *(^)())selectAll;


#ifndef animating                                  
#define animating(...)  animating(@"setAnimating:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAnimating: 'B'
     */
- (MLChain4UITextField *(^)())animating;


#ifndef cut                                  
#define cut(...)  cut(@"cut:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cut: '@'
     */
- (MLChain4UITextField *(^)())cut;


#ifndef copy                                  
#define copy(...)  copy(@"copy:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   copy: '@'
     */
- (MLChain4UITextField *(^)())copy;


#ifndef paste                                  
#define paste(...)  paste(@"paste:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   paste: '@'
     */
- (MLChain4UITextField *(^)())paste;


#ifndef select                                  
#define select(...)  select(@"select:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   select: '@'
     */
- (MLChain4UITextField *(^)())select;


#ifndef makeTextWritingDirectionLeftToRight                                  
#define makeTextWritingDirectionLeftToRight(...)  makeTextWritingDirectionLeftToRight(@"makeTextWritingDirectionLeftToRight:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   makeTextWritingDirectionLeftToRight: '@'
     */
- (MLChain4UITextField *(^)())makeTextWritingDirectionLeftToRight;


#ifndef makeTextWritingDirectionRightToLeft                                  
#define makeTextWritingDirectionRightToLeft(...)  makeTextWritingDirectionRightToLeft(@"makeTextWritingDirectionRightToLeft:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   makeTextWritingDirectionRightToLeft: '@'
     */
- (MLChain4UITextField *(^)())makeTextWritingDirectionRightToLeft;


#ifndef toggleBoldface                                  
#define toggleBoldface(...)  toggleBoldface(@"toggleBoldface:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   toggleBoldface: '@'
     */
- (MLChain4UITextField *(^)())toggleBoldface;


#ifndef toggleItalics                                  
#define toggleItalics(...)  toggleItalics(@"toggleItalics:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   toggleItalics: '@'
     */
- (MLChain4UITextField *(^)())toggleItalics;


#ifndef toggleUnderline                                  
#define toggleUnderline(...)  toggleUnderline(@"toggleUnderline:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   toggleUnderline: '@'
     */
- (MLChain4UITextField *(^)())toggleUnderline;


#ifndef allowsEditingTextAttributes                                  
#define allowsEditingTextAttributes(...)  allowsEditingTextAttributes(@"setAllowsEditingTextAttributes:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAllowsEditingTextAttributes: 'B'
     */
- (MLChain4UITextField *(^)())allowsEditingTextAttributes;


#ifndef inputAccessoryView                                  
#define inputAccessoryView(...)  inputAccessoryView(@"setInputAccessoryView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setInputAccessoryView: '@'
     */
- (MLChain4UITextField *(^)())inputAccessoryView;


#ifndef clearsOnInsertion                                  
#define clearsOnInsertion(...)  clearsOnInsertion(@"setClearsOnInsertion:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearsOnInsertion: 'B'
     */
- (MLChain4UITextField *(^)())clearsOnInsertion;


#ifndef layoutTilesNow                              
#define layoutTilesNow(...)  layoutTilesNow(@"layoutTilesNow")                              
#endif
/**     ClassName-> UITextField                                
SEL-> layoutTilesNow     */
- (MLChain4UITextField *(^)())layoutTilesNow;


#ifndef replace                                  
#define replace(...)  replace(@"replace:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   replace: '@'
     */
- (MLChain4UITextField *(^)())replace;


#ifndef disableClearsOnInsertion                              
#define disableClearsOnInsertion(...)  disableClearsOnInsertion(@"disableClearsOnInsertion")                              
#endif
/**     ClassName-> UITextField                                
SEL-> disableClearsOnInsertion     */
- (MLChain4UITextField *(^)())disableClearsOnInsertion;


#ifndef inputView                                  
#define inputView(...)  inputView(@"setInputView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setInputView: '@'
     */
- (MLChain4UITextField *(^)())inputView;


#ifndef drawTextInRect                                  
#define drawTextInRect(...)  drawTextInRect(@"drawTextInRect:", __VA_ARGS__)                                  
#endif
#ifndef drawTextInRect_             
#define drawTextInRect_(...)  drawTextInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawTextInRect: '{'
     */
- (MLChain4UITextField *(^)())drawTextInRect;


#ifndef adjustsFontForContentSizeCategory                                  
#define adjustsFontForContentSizeCategory(...)  adjustsFontForContentSizeCategory(@"setAdjustsFontForContentSizeCategory:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAdjustsFontForContentSizeCategory: 'B'
     */
- (MLChain4UITextField *(^)())adjustsFontForContentSizeCategory;


#ifndef shadowBlur                                  
#define shadowBlur(...)  shadowBlur(@"setShadowBlur:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShadowBlur: 'd'
     */
- (MLChain4UITextField *(^)())shadowBlur;


#ifndef borderStyle                                  
#define borderStyle(...)  borderStyle(@"setBorderStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBorderStyle: 'q'
     */
- (MLChain4UITextField *(^)())borderStyle;


#ifndef paddingTop_paddingLeft                                  
#define paddingTop_paddingLeft(...)  paddingTop_paddingLeft(@"setPaddingTop:paddingLeft:", (float)metamacro_at(0, __VA_ARGS__), (float)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPaddingTop: 'f'
  paddingLeft: 'f'
     */
- (MLChain4UITextField *(^)())paddingTop_paddingLeft;


#ifndef leftView                                  
#define leftView(...)  leftView(@"setLeftView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLeftView: '@'
     */
- (MLChain4UITextField *(^)())leftView;


#ifndef rightView                                  
#define rightView(...)  rightView(@"setRightView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRightView: '@'
     */
- (MLChain4UITextField *(^)())rightView;


#ifndef floatingContentView_isTransitioningFromState_toState                                  
#define floatingContentView_isTransitioningFromState_toState(...)  floatingContentView_isTransitioningFromState_toState(@"floatingContentView:isTransitioningFromState:toState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   floatingContentView: '@'
  isTransitioningFromState: 'Q'
  toState: 'Q'
     */
- (MLChain4UITextField *(^)())floatingContentView_isTransitioningFromState_toState;


#ifndef rightViewMode                                  
#define rightViewMode(...)  rightViewMode(@"setRightViewMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRightViewMode: 'q'
     */
- (MLChain4UITextField *(^)())rightViewMode;


#ifndef continuousSpellCheckingEnabled                                  
#define continuousSpellCheckingEnabled(...)  continuousSpellCheckingEnabled(@"setContinuousSpellCheckingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContinuousSpellCheckingEnabled: 'B'
     */
- (MLChain4UITextField *(^)())continuousSpellCheckingEnabled;


#ifndef displaySecureTextUsingPlainText                                  
#define displaySecureTextUsingPlainText(...)  displaySecureTextUsingPlainText(@"setDisplaySecureTextUsingPlainText:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDisplaySecureTextUsingPlainText: 'B'
     */
- (MLChain4UITextField *(^)())displaySecureTextUsingPlainText;


#ifndef undoEnabled                                  
#define undoEnabled(...)  undoEnabled(@"setUndoEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setUndoEnabled: 'B'
     */
- (MLChain4UITextField *(^)())undoEnabled;


#ifndef textCentersVertically                                  
#define textCentersVertically(...)  textCentersVertically(@"setTextCentersVertically:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTextCentersVertically: 'B'
     */
- (MLChain4UITextField *(^)())textCentersVertically;


#ifndef textCentersHorizontally                                  
#define textCentersHorizontally(...)  textCentersHorizontally(@"setTextCentersHorizontally:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTextCentersHorizontally: 'B'
     */
- (MLChain4UITextField *(^)())textCentersHorizontally;


#ifndef placeholder                                  
#define placeholder(...)  placeholder(@"setPlaceholder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPlaceholder: '@'
     */
- (MLChain4UITextField *(^)())placeholder;


#ifndef background                                  
#define background(...)  background(@"setBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBackground: '@'
     */
- (MLChain4UITextField *(^)())background;


#ifndef clearButtonOff                                  
#define clearButtonOff(...)  clearButtonOff(@"setClearButtonOffset:", __VA_ARGS__)                                  
#endif
#ifndef clearButtonOff_             
#define clearButtonOff_(...)  clearButtonOff(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setClearButtonOffset: '{'
     */
- (MLChain4UITextField *(^)())clearButtonOff;


#ifndef paddingTop                                  
#define paddingTop(...)  paddingTop(@"setPaddingTop:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPaddingTop: 'f'
     */
- (MLChain4UITextField *(^)())paddingTop;


#ifndef leftViewMode                                  
#define leftViewMode(...)  leftViewMode(@"setLeftViewMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLeftViewMode: 'q'
     */
- (MLChain4UITextField *(^)())leftViewMode;


#ifndef disabledBackground                                  
#define disabledBackground(...)  disabledBackground(@"setDisabledBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDisabledBackground: '@'
     */
- (MLChain4UITextField *(^)())disabledBackground;


#ifndef clearButtonMode                                  
#define clearButtonMode(...)  clearButtonMode(@"setClearButtonMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearButtonMode: 'q'
     */
- (MLChain4UITextField *(^)())clearButtonMode;


#ifndef paddingLeft                                  
#define paddingLeft(...)  paddingLeft(@"setPaddingLeft:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPaddingLeft: 'f'
     */
- (MLChain4UITextField *(^)())paddingLeft;


#ifndef paddingRight                                  
#define paddingRight(...)  paddingRight(@"setPaddingRight:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPaddingRight: 'f'
     */
- (MLChain4UITextField *(^)())paddingRight;


#ifndef drawsAsAtom                                  
#define drawsAsAtom(...)  drawsAsAtom(@"setDrawsAsAtom:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDrawsAsAtom: 'B'
     */
- (MLChain4UITextField *(^)())drawsAsAtom;


#ifndef clearingBehavior                                  
#define clearingBehavior(...)  clearingBehavior(@"setClearingBehavior:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearingBehavior: 'i'
     */
- (MLChain4UITextField *(^)())clearingBehavior;


#ifndef paddingBottom                                  
#define paddingBottom(...)  paddingBottom(@"setPaddingBottom:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPaddingBottom: 'f'
     */
- (MLChain4UITextField *(^)())paddingBottom;


#ifndef clearsOnBeginEditing                                  
#define clearsOnBeginEditing(...)  clearsOnBeginEditing(@"setClearsOnBeginEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearsOnBeginEditing: 'B'
     */
- (MLChain4UITextField *(^)())clearsOnBeginEditing;


#ifndef atomStyle                                  
#define atomStyle(...)  atomStyle(@"setAtomStyle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAtomStyle: 'i'
     */
- (MLChain4UITextField *(^)())atomStyle;


#ifndef createPlaceholderIfNecessary                              
#define createPlaceholderIfNecessary(...)  createPlaceholderIfNecessary(@"createPlaceholderIfNecessary")                              
#endif
/**     ClassName-> UITextField                                
SEL-> createPlaceholderIfNecessary     */
- (MLChain4UITextField *(^)())createPlaceholderIfNecessary;


#ifndef scrollTextFieldToVisible                              
#define scrollTextFieldToVisible(...)  scrollTextFieldToVisible(@"scrollTextFieldToVisible")                              
#endif
/**     ClassName-> UITextField                                
SEL-> scrollTextFieldToVisible     */
- (MLChain4UITextField *(^)())scrollTextFieldToVisible;


#ifndef selectionRange                                  
#define selectionRange(...)  selectionRange(@"setSelectionRange:", __VA_ARGS__)                                  
#endif
#ifndef selectionRange_             
#define selectionRange_(...)  selectionRange(NSMakeRange(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setSelectionRange: '{'
     */
- (MLChain4UITextField *(^)())selectionRange;


#ifndef font_fullFontSize_ambientOnly                                  
#define font_fullFontSize_ambientOnly(...)  font_fullFontSize_ambientOnly(@"setFont:fullFontSize:ambientOnly:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFont: '@'
  fullFontSize: '@'
  ambientOnly: 'B'
     */
- (MLChain4UITextField *(^)())font_fullFontSize_ambientOnly;


#ifndef finishedSettingTextOrAttributedText                              
#define finishedSettingTextOrAttributedText(...)  finishedSettingTextOrAttributedText(@"finishedSettingTextOrAttributedText")                              
#endif
/**     ClassName-> UITextField                                
SEL-> finishedSettingTextOrAttributedText     */
- (MLChain4UITextField *(^)())finishedSettingTextOrAttributedText;


#ifndef font_fullFontSize                                  
#define font_fullFontSize(...)  font_fullFontSize(@"setFont:fullFontSize:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFont: '@'
  fullFontSize: '@'
     */
- (MLChain4UITextField *(^)())font_fullFontSize;


#ifndef finishedSettingPlaceholder                              
#define finishedSettingPlaceholder(...)  finishedSettingPlaceholder(@"finishedSettingPlaceholder")                              
#endif
/**     ClassName-> UITextField                                
SEL-> finishedSettingPlaceholder     */
- (MLChain4UITextField *(^)())finishedSettingPlaceholder;


#ifndef drawPlaceholderInRect                                  
#define drawPlaceholderInRect(...)  drawPlaceholderInRect(@"drawPlaceholderInRect:", __VA_ARGS__)                                  
#endif
#ifndef drawPlaceholderInRect_             
#define drawPlaceholderInRect_(...)  drawPlaceholderInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawPlaceholderInRect: '{'
     */
- (MLChain4UITextField *(^)())drawPlaceholderInRect;


#ifndef drawSuffixInRect                                  
#define drawSuffixInRect(...)  drawSuffixInRect(@"drawSuffixInRect:", __VA_ARGS__)                                  
#endif
#ifndef drawSuffixInRect_             
#define drawSuffixInRect_(...)  drawSuffixInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawSuffixInRect: '{'
     */
- (MLChain4UITextField *(^)())drawSuffixInRect;


#ifndef drawPrefixInRect                                  
#define drawPrefixInRect(...)  drawPrefixInRect(@"drawPrefixInRect:", __VA_ARGS__)                                  
#endif
#ifndef drawPrefixInRect_             
#define drawPrefixInRect_(...)  drawPrefixInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawPrefixInRect: '{'
     */
- (MLChain4UITextField *(^)())drawPrefixInRect;


#ifndef drawBorder                                  
#define drawBorder(...)  drawBorder(@"drawBorder:", __VA_ARGS__)                                  
#endif
#ifndef drawBorder_             
#define drawBorder_(...)  drawBorder(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawBorder: '{'
     */
- (MLChain4UITextField *(^)())drawBorder;


#ifndef fieldEditorDidChangeSelection                                  
#define fieldEditorDidChangeSelection(...)  fieldEditorDidChangeSelection(@"fieldEditorDidChangeSelection:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   fieldEditorDidChangeSelection: '@'
     */
- (MLChain4UITextField *(^)())fieldEditorDidChangeSelection;


#ifndef autoresizesTextToFit                                  
#define autoresizesTextToFit(...)  autoresizesTextToFit(@"setAutoresizesTextToFit:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAutoresizesTextToFit: 'B'
     */
- (MLChain4UITextField *(^)())autoresizesTextToFit;


#ifndef textAutorresizesToFit                                  
#define textAutorresizesToFit(...)  textAutorresizesToFit(@"setTextAutorresizesToFit:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTextAutorresizesToFit: 'B'
     */
- (MLChain4UITextField *(^)())textAutorresizesToFit;


#ifndef clearButtonStyle                                  
#define clearButtonStyle(...)  clearButtonStyle(@"setClearButtonStyle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearButtonStyle: 'i'
     */
- (MLChain4UITextField *(^)())clearButtonStyle;


#ifndef inactiveHasDimAppearance                                  
#define inactiveHasDimAppearance(...)  inactiveHasDimAppearance(@"setInactiveHasDimAppearance:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setInactiveHasDimAppearance: 'B'
     */
- (MLChain4UITextField *(^)())inactiveHasDimAppearance;


#ifndef becomesFirstResponderOnClearButtonTap                                  
#define becomesFirstResponderOnClearButtonTap(...)  becomesFirstResponderOnClearButtonTap(@"setBecomesFirstResponderOnClearButtonTap:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBecomesFirstResponderOnClearButtonTap: 'B'
     */
- (MLChain4UITextField *(^)())becomesFirstResponderOnClearButtonTap;


#ifndef labelOff                                  
#define labelOff(...)  labelOff(@"setLabelOffset:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLabelOffset: 'f'
     */
- (MLChain4UITextField *(^)())labelOff;


#ifndef _tvUseVibrancy                                  
#define _tvUseVibrancy(...)  _tvUseVibrancy(@"set_tvUseVibrancy:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_tvUseVibrancy: 'B'
     */
- (MLChain4UITextField *(^)())_tvUseVibrancy;


#ifndef _tvCustomTextColor                                  
#define _tvCustomTextColor(...)  _tvCustomTextColor(@"set_tvCustomTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_tvCustomTextColor: '@'
     */
- (MLChain4UITextField *(^)())_tvCustomTextColor;


#ifndef _tvCustomFocusedTextColor                                  
#define _tvCustomFocusedTextColor(...)  _tvCustomFocusedTextColor(@"set_tvCustomFocusedTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_tvCustomFocusedTextColor: '@'
     */
- (MLChain4UITextField *(^)())_tvCustomFocusedTextColor;


#ifndef _disableTextColorUpdateOnTraitCollectionChange                                  
#define _disableTextColorUpdateOnTraitCollectionChange(...)  _disableTextColorUpdateOnTraitCollectionChange(@"set_disableTextColorUpdateOnTraitCollectionChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_disableTextColorUpdateOnTraitCollectionChange: 'B'
     */
- (MLChain4UITextField *(^)())_disableTextColorUpdateOnTraitCollectionChange;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setFrame: '{'
     */
- (MLChain4UITextField *(^)())frame;


#ifndef label                                  
#define label(...)  label(@"setLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLabel: '@'
     */
- (MLChain4UITextField *(^)())label;


#ifndef icon                                  
#define icon(...)  icon(@"setIcon:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setIcon: '@'
     */
- (MLChain4UITextField *(^)())icon;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UITextField *(^)())encodeWithCoder;


#ifndef shadowOff                                  
#define shadowOff(...)  shadowOff(@"setShadowOffset:", __VA_ARGS__)                                  
#endif
#ifndef shadowOff_             
#define shadowOff_(...)  shadowOff(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setShadowOffset: '{'
     */
- (MLChain4UITextField *(^)())shadowOff;


#ifndef shadowColor                                  
#define shadowColor(...)  shadowColor(@"setShadowColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShadowColor: '@'
     */
- (MLChain4UITextField *(^)())shadowColor;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UITextField *(^)())backgroundColor;


#ifndef secureTextEntry                                  
#define secureTextEntry(...)  secureTextEntry(@"setSecureTextEntry:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setSecureTextEntry: 'B'
     */
- (MLChain4UITextField *(^)())secureTextEntry;


#ifndef text                                  
#define text(...)  text(@"setText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setText: '@'
     */
- (MLChain4UITextField *(^)())text;


#ifndef markedText_selectedRange                                  
#define markedText_selectedRange(...)  markedText_selectedRange(@"setMarkedText:selectedRange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMarkedText: '@'
  selectedRange: '{'
     */
- (MLChain4UITextField *(^)())markedText_selectedRange;


#ifndef insertText                                  
#define insertText(...)  insertText(@"insertText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertText: '@'
     */
- (MLChain4UITextField *(^)())insertText;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   drawRect: '{'
     */
- (MLChain4UITextField *(^)())drawRect;


#ifndef attributedPlaceholder                                  
#define attributedPlaceholder(...)  attributedPlaceholder(@"setAttributedPlaceholder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAttributedPlaceholder: '@'
     */
- (MLChain4UITextField *(^)())attributedPlaceholder;


#ifndef defaultTextAttributes                                  
#define defaultTextAttributes(...)  defaultTextAttributes(@"setDefaultTextAttributes:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDefaultTextAttributes: '@'
     */
- (MLChain4UITextField *(^)())defaultTextAttributes;


#ifndef minimumFontSize                                  
#define minimumFontSize(...)  minimumFontSize(@"setMinimumFontSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMinimumFontSize: 'd'
     */
- (MLChain4UITextField *(^)())minimumFontSize;


#ifndef clearsPlaceholderOnBeginEditing                                  
#define clearsPlaceholderOnBeginEditing(...)  clearsPlaceholderOnBeginEditing(@"setClearsPlaceholderOnBeginEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearsPlaceholderOnBeginEditing: 'B'
     */
- (MLChain4UITextField *(^)())clearsPlaceholderOnBeginEditing;


#ifndef removeAllBlocksForControlEvents                                  
#define removeAllBlocksForControlEvents(...)  removeAllBlocksForControlEvents(@"removeAllBlocksForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeAllBlocksForControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())removeAllBlocksForControlEvents;


#ifndef addBlockForControlEvents_block                                  
#define addBlockForControlEvents_block(...)  addBlockForControlEvents_block(@"addBlockForControlEvents:block:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addBlockForControlEvents: 'Q'
  block: '@'
     */
- (MLChain4UITextField *(^)())addBlockForControlEvents_block;


#ifndef removeAllTargets                              
#define removeAllTargets(...)  removeAllTargets(@"removeAllTargets")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeAllTargets     */
- (MLChain4UITextField *(^)())removeAllTargets;


#ifndef target_action_forControlEvents                                  
#define target_action_forControlEvents(...)  target_action_forControlEvents(@"setTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())target_action_forControlEvents;


#ifndef blockForControlEvents_block                                  
#define blockForControlEvents_block(...)  blockForControlEvents_block(@"setBlockForControlEvents:block:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBlockForControlEvents: 'Q'
  block: '@'
     */
- (MLChain4UITextField *(^)())blockForControlEvents_block;


#ifndef bk_addEventHandler_forControlEvents                                  
#define bk_addEventHandler_forControlEvents(...)  bk_addEventHandler_forControlEvents(@"bk_addEventHandler:forControlEvents:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_addEventHandler: '@'
  forControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())bk_addEventHandler_forControlEvents;


#ifndef bk_removeEventHandlersForControlEvents                                  
#define bk_removeEventHandlersForControlEvents(...)  bk_removeEventHandlersForControlEvents(@"bk_removeEventHandlersForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_removeEventHandlersForControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())bk_removeEventHandlersForControlEvents;


#ifndef touchDownAction                                  
#define touchDownAction(...)  touchDownAction(@"touchDownAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDownAction: '@'
     */
- (MLChain4UITextField *(^)())touchDownAction;


#ifndef touchDownRepeat                                  
#define touchDownRepeat(...)  touchDownRepeat(@"touchDownRepeat:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDownRepeat: '@'
     */
- (MLChain4UITextField *(^)())touchDownRepeat;


#ifndef touchDownRepeatAction                                  
#define touchDownRepeatAction(...)  touchDownRepeatAction(@"touchDownRepeatAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDownRepeatAction: '@'
     */
- (MLChain4UITextField *(^)())touchDownRepeatAction;


#ifndef touchDragInside                                  
#define touchDragInside(...)  touchDragInside(@"touchDragInside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragInside: '@'
     */
- (MLChain4UITextField *(^)())touchDragInside;


#ifndef touchDragInsideAction                                  
#define touchDragInsideAction(...)  touchDragInsideAction(@"touchDragInsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragInsideAction: '@'
     */
- (MLChain4UITextField *(^)())touchDragInsideAction;


#ifndef touchDragOutside                                  
#define touchDragOutside(...)  touchDragOutside(@"touchDragOutside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragOutside: '@'
     */
- (MLChain4UITextField *(^)())touchDragOutside;


#ifndef touchDragOutsideAction                                  
#define touchDragOutsideAction(...)  touchDragOutsideAction(@"touchDragOutsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragOutsideAction: '@'
     */
- (MLChain4UITextField *(^)())touchDragOutsideAction;


#ifndef touchDragEnter                                  
#define touchDragEnter(...)  touchDragEnter(@"touchDragEnter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragEnter: '@'
     */
- (MLChain4UITextField *(^)())touchDragEnter;


#ifndef touchDragEnterAction                                  
#define touchDragEnterAction(...)  touchDragEnterAction(@"touchDragEnterAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragEnterAction: '@'
     */
- (MLChain4UITextField *(^)())touchDragEnterAction;


#ifndef touchDragExit                                  
#define touchDragExit(...)  touchDragExit(@"touchDragExit:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragExit: '@'
     */
- (MLChain4UITextField *(^)())touchDragExit;


#ifndef touchDragExitAction                                  
#define touchDragExitAction(...)  touchDragExitAction(@"touchDragExitAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDragExitAction: '@'
     */
- (MLChain4UITextField *(^)())touchDragExitAction;


#ifndef touchUpInsideAction                                  
#define touchUpInsideAction(...)  touchUpInsideAction(@"touchUpInsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchUpInsideAction: '@'
     */
- (MLChain4UITextField *(^)())touchUpInsideAction;


#ifndef touchUpOutsideAction                                  
#define touchUpOutsideAction(...)  touchUpOutsideAction(@"touchUpOutsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchUpOutsideAction: '@'
     */
- (MLChain4UITextField *(^)())touchUpOutsideAction;


#ifndef touchCancel                                  
#define touchCancel(...)  touchCancel(@"touchCancel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchCancel: '@'
     */
- (MLChain4UITextField *(^)())touchCancel;


#ifndef touchCancelAction                                  
#define touchCancelAction(...)  touchCancelAction(@"touchCancelAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchCancelAction: '@'
     */
- (MLChain4UITextField *(^)())touchCancelAction;


#ifndef valueChangedAction                                  
#define valueChangedAction(...)  valueChangedAction(@"valueChangedAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   valueChangedAction: '@'
     */
- (MLChain4UITextField *(^)())valueChangedAction;


#ifndef editingDidBegin                                  
#define editingDidBegin(...)  editingDidBegin(@"editingDidBegin:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidBegin: '@'
     */
- (MLChain4UITextField *(^)())editingDidBegin;


#ifndef editingDidBeginAction                                  
#define editingDidBeginAction(...)  editingDidBeginAction(@"editingDidBeginAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidBeginAction: '@'
     */
- (MLChain4UITextField *(^)())editingDidBeginAction;


#ifndef editingChanged                                  
#define editingChanged(...)  editingChanged(@"editingChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingChanged: '@'
     */
- (MLChain4UITextField *(^)())editingChanged;


#ifndef editingChangedAction                                  
#define editingChangedAction(...)  editingChangedAction(@"editingChangedAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingChangedAction: '@'
     */
- (MLChain4UITextField *(^)())editingChangedAction;


#ifndef editingDidEnd                                  
#define editingDidEnd(...)  editingDidEnd(@"editingDidEnd:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidEnd: '@'
     */
- (MLChain4UITextField *(^)())editingDidEnd;


#ifndef editingDidEndAction                                  
#define editingDidEndAction(...)  editingDidEndAction(@"editingDidEndAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidEndAction: '@'
     */
- (MLChain4UITextField *(^)())editingDidEndAction;


#ifndef editingDidEndOnExit                                  
#define editingDidEndOnExit(...)  editingDidEndOnExit(@"editingDidEndOnExit:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidEndOnExit: '@'
     */
- (MLChain4UITextField *(^)())editingDidEndOnExit;


#ifndef editingDidEndOnExitAction                                  
#define editingDidEndOnExitAction(...)  editingDidEndOnExitAction(@"editingDidEndOnExitAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   editingDidEndOnExitAction: '@'
     */
- (MLChain4UITextField *(^)())editingDidEndOnExitAction;


#ifndef touchDown                                  
#define touchDown(...)  touchDown(@"touchDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchDown: '@'
     */
- (MLChain4UITextField *(^)())touchDown;


#ifndef touchUpInside                                  
#define touchUpInside(...)  touchUpInside(@"touchUpInside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchUpInside: '@'
     */
- (MLChain4UITextField *(^)())touchUpInside;


#ifndef touchUpOutside                                  
#define touchUpOutside(...)  touchUpOutside(@"touchUpOutside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchUpOutside: '@'
     */
- (MLChain4UITextField *(^)())touchUpOutside;


#ifndef valueChanged                                  
#define valueChanged(...)  valueChanged(@"valueChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   valueChanged: '@'
     */
- (MLChain4UITextField *(^)())valueChanged;


#ifndef addTarget_action_forControlEvents                                  
#define addTarget_action_forControlEvents(...)  addTarget_action_forControlEvents(@"addTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())addTarget_action_forControlEvents;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())touchesMoved_withEvent;


#ifndef sendActionsForControlEvents                                  
#define sendActionsForControlEvents(...)  sendActionsForControlEvents(@"sendActionsForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendActionsForControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())sendActionsForControlEvents;


#ifndef contentHorizontalAlignment                                  
#define contentHorizontalAlignment(...)  contentHorizontalAlignment(@"setContentHorizontalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentHorizontalAlignment: 'q'
     */
- (MLChain4UITextField *(^)())contentHorizontalAlignment;


#ifndef addTarget_action_forEvents                                  
#define addTarget_action_forEvents(...)  addTarget_action_forEvents(@"addTarget:action:forEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addTarget: '@'
  action: ':'
  forEvents: 'i'
     */
- (MLChain4UITextField *(^)())addTarget_action_forEvents;


#ifndef selected                                  
#define selected(...)  selected(@"setSelected:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setSelected: 'B'
     */
- (MLChain4UITextField *(^)())selected;


#ifndef tracking                                  
#define tracking(...)  tracking(@"setTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTracking: 'B'
     */
- (MLChain4UITextField *(^)())tracking;


#ifndef cancelTrackingWithEvent                                  
#define cancelTrackingWithEvent(...)  cancelTrackingWithEvent(@"cancelTrackingWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cancelTrackingWithEvent: '@'
     */
- (MLChain4UITextField *(^)())cancelTrackingWithEvent;


#ifndef endTrackingWithTouch_withEvent                                  
#define endTrackingWithTouch_withEvent(...)  endTrackingWithTouch_withEvent(@"endTrackingWithTouch:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   endTrackingWithTouch: '@'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())endTrackingWithTouch_withEvent;


#ifndef sendAction_to_forEvent                                  
#define sendAction_to_forEvent(...)  sendAction_to_forEvent(@"sendAction:to:forEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendAction: ':'
  to: '@'
  forEvent: '@'
     */
- (MLChain4UITextField *(^)())sendAction_to_forEvent;


#ifndef removeTarget_action_forControlEvents                                  
#define removeTarget_action_forControlEvents(...)  removeTarget_action_forControlEvents(@"removeTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UITextField *(^)())removeTarget_action_forControlEvents;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UITextField *(^)())touchesEstimatedPropertiesUpdated;


#ifndef requiresDisplayOnTracking                                  
#define requiresDisplayOnTracking(...)  requiresDisplayOnTracking(@"setRequiresDisplayOnTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRequiresDisplayOnTracking: 'B'
     */
- (MLChain4UITextField *(^)())requiresDisplayOnTracking;


#ifndef removeTarget_forEvents                                  
#define removeTarget_forEvents(...)  removeTarget_forEvents(@"removeTarget:forEvents:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeTarget: '@'
  forEvents: 'i'
     */
- (MLChain4UITextField *(^)())removeTarget_forEvents;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTop: 'd'
     */
- (MLChain4UITextField *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRight: 'd'
     */
- (MLChain4UITextField *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBottom: 'd'
     */
- (MLChain4UITextField *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UITextField *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeAllSubviews     */
- (MLChain4UITextField *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLeft: 'd'
     */
- (MLChain4UITextField *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UITextField *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UITextField *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setWidth: 'd'
     */
- (MLChain4UITextField *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setHeight: 'd'
     */
- (MLChain4UITextField *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setSize: '{'
     */
- (MLChain4UITextField *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setOrigin: '{'
     */
- (MLChain4UITextField *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UITextField *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UITextField *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMas_key: '@'
     */
- (MLChain4UITextField *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UITextField *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UITextField *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UITextField *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setMj_size: '{'
     */
- (MLChain4UITextField *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UITextField *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UITextField *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UITextField *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UITextField *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UITextField *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UITextField *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UITextField *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UITextField *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UITextField *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UITextField *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UITextField *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UITextField *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UITextField *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UITextField *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITextField *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UITextField *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UITextField *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UITextField *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UITextField *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UITextField *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UITextField *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UITextField *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UITextField *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UITextField *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UITextField *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UITextField *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UITextField *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UITextField *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UITextField *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UITextField *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UITextField *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UITextField *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updateBadgeFrame     */
- (MLChain4UITextField *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeBadge     */
- (MLChain4UITextField *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UITextField                                
SEL-> badgeInit     */
- (MLChain4UITextField *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UITextField *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UITextField                                
SEL-> refreshBadge     */
- (MLChain4UITextField *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UITextField *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setBadge: '@'
     */
- (MLChain4UITextField *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UITextField                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UITextField *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UITextField *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UITextField *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UITextField *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UITextField *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UITextField *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UITextField *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UITextField *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UITextField *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UITextField *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UITextField *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UITextField *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addWidth: 'd'
     */
- (MLChain4UITextField *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addHeight: 'd'
     */
- (MLChain4UITextField *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setX: 'd'
     */
- (MLChain4UITextField *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setY: 'd'
     */
- (MLChain4UITextField *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UITextField *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UITextField *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   tapEvent: '@'
     */
- (MLChain4UITextField *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UITextField                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UITextField *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UITextField *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UITextField *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UITextField *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UITextField *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UITextField *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UITextField *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeLastDrawRectView     */
- (MLChain4UITextField *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UITextField *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UITextField *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UITextField *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UITextField *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   tapAction: '@'
     */
- (MLChain4UITextField *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   swipeAction: '@'
     */
- (MLChain4UITextField *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   panAction: '@'
     */
- (MLChain4UITextField *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pinchAction: '@'
     */
- (MLChain4UITextField *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UITextField *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   rotationAction: '@'
     */
- (MLChain4UITextField *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UITextField *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UITextField *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UITextField *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UITextField *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UITextField *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UITextField *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   longPressAction: '@'
     */
- (MLChain4UITextField *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UITextField *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UITextField *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UITextField                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UITextField *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UITextField *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UITextField *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UITextField *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UITextField *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UITextField *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UITextField *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())value_forKey;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UITextField *(^)())nsli_addConstraint;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UITextField *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UITextField *(^)())solutionDidChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsLayout     */
- (MLChain4UITextField *(^)())setNeedsLayout;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UITextField *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UITextField *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UITextField                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UITextField *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UITextField *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsDisplay     */
- (MLChain4UITextField *(^)())setNeedsDisplay;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setPosition: '{'
     */
- (MLChain4UITextField *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setTransform: '{'
     */
- (MLChain4UITextField *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> layoutIfNeeded     */
- (MLChain4UITextField *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UITextField *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UITextField *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UITextField *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UITextField *(^)())clipsToBounds;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UITextField *(^)())userInteractionEnabled;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UITextField *(^)())autoresizesSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UITextField *(^)())needsDisplayOnBoundsChange;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UITextField                                
SEL-> didMoveToWindow     */
- (MLChain4UITextField *(^)())didMoveToWindow;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UITextField *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UITextField                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UITextField *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UITextField *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UITextField *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UITextField *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UITextField *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UITextField *(^)())sendSubviewToBack;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UITextField *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UITextField *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UITextField *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UITextField *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UITextField *(^)())removeGestureRecognizer;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UITextField *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addConstraints: '@'
     */
- (MLChain4UITextField *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UITextField *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UITextField *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UITextField *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setCenter: '{'
     */
- (MLChain4UITextField *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UITextField *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UITextField *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UITextField *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UITextField *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UITextField *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UITextField *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UITextField *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UITextField *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UITextField *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UITextField *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UITextField *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UITextField *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UITextField *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UITextField *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTintColor: '@'
     */
- (MLChain4UITextField *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UITextField *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UITextField *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UITextField *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UITextField *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UITextField *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UITextField *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> focusedViewWillChange     */
- (MLChain4UITextField *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UITextField *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UITextField                                
SEL-> focusedViewDidChange     */
- (MLChain4UITextField *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UITextField *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addConstraint: '@'
     */
- (MLChain4UITextField *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UITextField *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UITextField *(^)())tapDelegate;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UITextField *(^)())layoutMargins;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UITextField *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UITextField *(^)())tintAdjustmentMode;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMaskView: '@'
     */
- (MLChain4UITextField *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UITextField *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setTag: 'q'
     */
- (MLChain4UITextField *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setVisualState: '@'
     */
- (MLChain4UITextField *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UITextField *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UITextField *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UITextField *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UITextField *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UITextField *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UITextField *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UITextField *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UITextField                                
SEL-> sizeToFit     */
- (MLChain4UITextField *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UITextField *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UITextField *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UITextField *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UITextField                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UITextField *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UITextField                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UITextField *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UITextField *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UITextField *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UITextField *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UITextField *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UITextField *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UITextField *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UITextField *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UITextField *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UITextField                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UITextField *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UITextField *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UITextField                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UITextField *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UITextField                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UITextField *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UITextField *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UITextField                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UITextField *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UITextField *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UITextField                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UITextField *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UITextField *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UITextField                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UITextField *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UITextField *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UITextField *(^)())viewTraversalMark;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UITextField                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UITextField *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UITextField *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UITextField                                
SEL-> didMoveToSuperview     */
- (MLChain4UITextField *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UITextField *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UITextField *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UITextField *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UITextField *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UITextField *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UITextField *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UITextField *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UITextField *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UITextField *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UITextField *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UITextField *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UITextField *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UITextField *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UITextField *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UITextField *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UITextField *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UITextField *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UITextField *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UITextField *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UITextField *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updateConstraints     */
- (MLChain4UITextField *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UITextField *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UITextField *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UITextField *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UITextField *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UITextField *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UITextField *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UITextField *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UITextField *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UITextField *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UITextField *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UITextField *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UITextField                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UITextField *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UITextField *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UITextField *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UITextField *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UITextField                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UITextField *(^)())exerciseAmbiguityInLayout;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setHidden: 'B'
     */
- (MLChain4UITextField *(^)())hidden;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeFromSuperview     */
- (MLChain4UITextField *(^)())removeFromSuperview;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UITextField *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addSubview: '@'
     */
- (MLChain4UITextField *(^)())addSubview;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UITextField *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UITextField *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UITextField *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setCharge: 'f'
     */
- (MLChain4UITextField *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UITextField *(^)())viewWillMoveToSuperview;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UITextField *(^)())motionCancelled_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UITextField *(^)())restorationIdentifier;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UITextField *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UITextField                                
SEL-> reloadInputViews     */
- (MLChain4UITextField *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UITextField *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UITextField                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UITextField *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UITextField *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UITextField *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UITextField *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UITextField *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeObserverBlocks     */
- (MLChain4UITextField *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UITextField *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UITextField *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UITextField *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UITextField *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UITextField *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UITextField                                
SEL-> removeAssociatedValues     */
- (MLChain4UITextField *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UITextField *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setViewStack: '@'
     */
- (MLChain4UITextField *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UITextField                                
SEL-> assertNotDealloc     */
- (MLChain4UITextField *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UITextField *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UITextField *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UITextField *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UITextField *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   mj_decode: '@'
     */
- (MLChain4UITextField *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   mj_encode: '@'
     */
- (MLChain4UITextField *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UITextField *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UITextField *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UITextField *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UITextField *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UITextField                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UITextField *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UITextField *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UITextField *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITextField *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITextField *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UITextField *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UITextField *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITextField *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UITextField                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UITextField *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UITextField *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UITextField                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UITextField *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UITextField *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UITextField *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UITextField *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UITextField *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UITextField *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UITextField *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UITextField                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UITextField *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UITextField *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UITextField *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UITextField *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UITextField *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UITextField                                
SEL-> allowSafePerformSelector     */
- (MLChain4UITextField *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UITextField                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UITextField *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UITextField *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UITextField *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UITextField *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UITextField *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UITextField *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UITextField *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UITextField *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UITextField *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UITextField *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UITextField *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UITextField *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UITextField                                
SEL-> mf_lock     */
- (MLChain4UITextField *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UITextField                                
SEL-> mf_unlock     */
- (MLChain4UITextField *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UITextField                                
SEL-> mf_lockWithPriority     */
- (MLChain4UITextField *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UITextField *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UITextField *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UITextField *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UITextField *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UITextField *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UITextField *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UITextField *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UITextField                                
SEL-> accessibilityIncrement     */
- (MLChain4UITextField *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UITextField                                
SEL-> accessibilityDecrement     */
- (MLChain4UITextField *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UITextField *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UITextField                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UITextField *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UITextField                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UITextField *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UITextField *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UITextField *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UITextField *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UITextField *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UITextField *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITextField                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UITextField *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UITextField *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UITextField *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UITextField *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UITextField *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UITextField *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UITextField *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UITextField *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UITextField *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UITextField *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UITextField                                
SEL-> awakeFromNib     */
- (MLChain4UITextField *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UITextField                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UITextField *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UITextField                                
SEL-> releaseOnMainThread     */
- (MLChain4UITextField *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UITextField *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UITextField                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UITextField *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UITextField *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeObservation: '@'
     */
- (MLChain4UITextField *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UITextField *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UITextField                                
SEL-> finishObserving     */
- (MLChain4UITextField *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UITextField *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UITextField *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UITextField *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UITextField *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UITextField *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UITextField *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UITextField *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UITextField *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UITextField *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UITextField *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UITextField *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UITextField *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UITextField *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UITextField *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UITextField *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UITextField *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UITextField *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITextField                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UITextField *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UITextField *(^)())removeObserver_forKeyPath;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UITextField *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UITextField *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UITextField *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UITextField *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITextField                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UITextField *(^)())doesNotRecognizeSelector;


@end
