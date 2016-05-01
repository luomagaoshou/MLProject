//  
//  MLChain4UITextView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UITextView);
@interface MLChain4UITextView:MLChain4UIScrollView
@property (nonatomic, strong)UITextView *textView;
- (MLChainParamBlock4UITextView)ab_textAttributes;

- (MLChainParamBlock4UITextView)ab_text;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)bounds;

- (MLChainParamBlock4UITextView)invalidateIntrinsicContentSize;

- (MLChainParamBlock4UITextView)layoutSubviews;

- (MLChainParamBlock4UITextView)traitCollectionDidChange;

#ifndef contentMode
#define contentMode(...) contentMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)contentMode;

#ifndef textAlignment
#define textAlignment(...) textAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)textAlignment;

- (MLChainParamBlock4UITextView)attributedText;

#ifndef scrollEnabled
#define scrollEnabled(...) scrollEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)scrollEnabled;

- (MLChainParamBlock4UITextView)increaseSize;

- (MLChainParamBlock4UITextView)decreaseSize;

- (MLChainParamBlock4UITextView)encodeRestorableStateWithCoder;

- (MLChainParamBlock4UITextView)decodeRestorableStateWithCoder;

- (MLChainParamBlock4UITextView)textColor;

- (MLChainParamBlock4UITextView)font;

- (MLChainParamBlock4UITextView)text;

- (MLChainParamBlock4UITextView)tintColorDidChange;

#ifndef contentOff
#define contentOff(...) contentOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentOff_
#define contentOff_(...)  contentOff(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)contentOff;

- (MLChainParamBlock4UITextView)keyboardInputChangedSelection;

#ifndef scrollSelectionToVisible
#define scrollSelectionToVisible(...) scrollSelectionToVisible(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)scrollSelectionToVisible;

- (MLChainParamBlock4UITextView)cancelAutoscroll;

- (MLChainParamBlock4UITextView)typingAttributes;

- (MLChainParamBlock4UITextView)takeTraitsFrom;

#ifndef selectedRange
#define selectedRange(...) selectedRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef selectedRange_
#define selectedRange_(...)  selectedRange(ml_chain_MASBoxValue(NSMakeRange(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)selectedRange;

#ifndef addTextAlternativesDisplayStyleToRange
#define addTextAlternativesDisplayStyleToRange(...) addTextAlternativesDisplayStyleToRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef addTextAlternativesDisplayStyleToRange_
#define addTextAlternativesDisplayStyleToRange_(...)  addTextAlternativesDisplayStyleToRange(ml_chain_MASBoxValue(NSMakeRange(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)addTextAlternativesDisplayStyleToRange;

- (MLChainParamBlock4UITextView)selectedTextRange;

- (MLChainParamBlock4UITextView)deleteBackward;

- (MLChainParamBlock4UITextView)replaceRange_withText;

- (MLChainParamBlock4UITextView)replaceRangeWithTextWithoutClosingTyping_replacementText;

- (MLChainParamBlock4UITextView)markedTextStyle;

- (MLChainParamBlock4UITextView)unmarkText;

- (MLChainParamBlock4UITextView)inputDelegate;

#ifndef baseWritingDirection_forRange
#define baseWritingDirection_forRange(...) baseWritingDirection_forRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)baseWritingDirection_forRange;

- (MLChainParamBlock4UITextView)insertDictationResult_withCorrectionIdentifier;

#ifndef removeDictationResultPlaceholder_willInsertResult
#define removeDictationResultPlaceholder_willInsertResult(...) removeDictationResultPlaceholder_willInsertResult(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)removeDictationResultPlaceholder_willInsertResult;

- (MLChainParamBlock4UITextView)beginSelectionChange;

- (MLChainParamBlock4UITextView)endSelectionChange;

- (MLChainParamBlock4UITextView)textInputDidChange;

- (MLChainParamBlock4UITextView)textInputDidChangeSelection;

#ifndef beginFloatingCursorAtPoint
#define beginFloatingCursorAtPoint(...) beginFloatingCursorAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef beginFloatingCursorAtPoint_
#define beginFloatingCursorAtPoint_(...)  beginFloatingCursorAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)beginFloatingCursorAtPoint;

#ifndef updateFloatingCursorAtPoint
#define updateFloatingCursorAtPoint(...) updateFloatingCursorAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef updateFloatingCursorAtPoint_
#define updateFloatingCursorAtPoint_(...)  updateFloatingCursorAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)updateFloatingCursorAtPoint;

- (MLChainParamBlock4UITextView)endFloatingCursor;

#ifndef startAutoscroll
#define startAutoscroll(...) startAutoscroll(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef startAutoscroll_
#define startAutoscroll_(...)  startAutoscroll(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)startAutoscroll;

- (MLChainParamBlock4UITextView)updateConstraints;

#ifndef allowsEditingTextAttributes
#define allowsEditingTextAttributes(...) allowsEditingTextAttributes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)allowsEditingTextAttributes;

#ifndef editable
#define editable(...) editable(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)editable;

#ifndef lineHeight
#define lineHeight(...) lineHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)lineHeight;

#ifndef dataDetectorTypes
#define dataDetectorTypes(...) dataDetectorTypes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)dataDetectorTypes;

- (MLChainParamBlock4UITextView)inputAccessoryView;

- (MLChainParamBlock4UITextView)updateAutoscrollAboveBottom;

- (MLChainParamBlock4UITextView)selectAll;

#ifndef clearsOnInsertion
#define clearsOnInsertion(...) clearsOnInsertion(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)clearsOnInsertion;

- (MLChainParamBlock4UITextView)makeTextWritingDirectionRightToLeft;

- (MLChainParamBlock4UITextView)makeTextWritingDirectionLeftToRight;

- (MLChainParamBlock4UITextView)replace;

- (MLChainParamBlock4UITextView)cut;

- (MLChainParamBlock4UITextView)copy;

- (MLChainParamBlock4UITextView)paste;

- (MLChainParamBlock4UITextView)toggleBoldface;

- (MLChainParamBlock4UITextView)toggleItalics;

- (MLChainParamBlock4UITextView)toggleUnderline;

- (MLChainParamBlock4UITextView)contentToHTMLString;

- (MLChainParamBlock4UITextView)cancelInteractionWithLink;

#ifndef tapLinkAtPoint
#define tapLinkAtPoint(...) tapLinkAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef tapLinkAtPoint_
#define tapLinkAtPoint_(...)  tapLinkAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)tapLinkAtPoint;

#ifndef startInteractionWithLinkAtPoint
#define startInteractionWithLinkAtPoint(...) startInteractionWithLinkAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef startInteractionWithLinkAtPoint_
#define startInteractionWithLinkAtPoint_(...)  startInteractionWithLinkAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)startInteractionWithLinkAtPoint;

#ifndef updateInteractionWithLinkAtPoint
#define updateInteractionWithLinkAtPoint(...) updateInteractionWithLinkAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef updateInteractionWithLinkAtPoint_
#define updateInteractionWithLinkAtPoint_(...)  updateInteractionWithLinkAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)updateInteractionWithLinkAtPoint;

#ifndef validateInteractionWithLinkAtPoint
#define validateInteractionWithLinkAtPoint(...) validateInteractionWithLinkAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef validateInteractionWithLinkAtPoint_
#define validateInteractionWithLinkAtPoint_(...)  validateInteractionWithLinkAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)validateInteractionWithLinkAtPoint;

#ifndef startLongInteractionWithLinkAtPoint
#define startLongInteractionWithLinkAtPoint(...) startLongInteractionWithLinkAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef startLongInteractionWithLinkAtPoint_
#define startLongInteractionWithLinkAtPoint_(...)  startLongInteractionWithLinkAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)startLongInteractionWithLinkAtPoint;

- (MLChainParamBlock4UITextView)disableClearsOnInsertion;

- (MLChainParamBlock4UITextView)updateSelection;

- (MLChainParamBlock4UITextView)select;

#ifndef becomesEditableWithGestures
#define becomesEditableWithGestures(...) becomesEditableWithGestures(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)becomesEditableWithGestures;

#ifndef marginTop
#define marginTop(...) marginTop(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)marginTop;

#ifndef shouldAutoscrollAboveBottom
#define shouldAutoscrollAboveBottom(...) shouldAutoscrollAboveBottom(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)shouldAutoscrollAboveBottom;

#ifndef scrollRangeToVisible
#define scrollRangeToVisible(...) scrollRangeToVisible(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef scrollRangeToVisible_
#define scrollRangeToVisible_(...)  scrollRangeToVisible(ml_chain_MASBoxValue(NSMakeRange(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)scrollRangeToVisible;

- (MLChainParamBlock4UITextView)inputView;

#ifndef continuousSpellCheckingEnabled
#define continuousSpellCheckingEnabled(...) continuousSpellCheckingEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)continuousSpellCheckingEnabled;

#ifndef forceEnableDictation
#define forceEnableDictation(...) forceEnableDictation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)forceEnableDictation;

#ifndef textContainerIn
#define textContainerIn(...) textContainerIn(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef textContainerIn_
#define textContainerIn_(...)  textContainerIn(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)textContainerIn;

#ifndef drawRect_forViewPrintFormatter
#define drawRect_forViewPrintFormatter(...) drawRect_forViewPrintFormatter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)drawRect_forViewPrintFormatter;

#ifndef selectable
#define selectable(...) selectable(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)selectable;

#ifndef usesTiledViews
#define usesTiledViews(...) usesTiledViews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)usesTiledViews;

- (MLChainParamBlock4UITextView)linkTextAttributes;

#ifndef tiledViewsDrawAsynchronously
#define tiledViewsDrawAsynchronously(...) tiledViewsDrawAsynchronously(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)tiledViewsDrawAsynchronously;

#ifndef shouldPresentSheetsInAWindowLayeredAboveTheKeyboard
#define shouldPresentSheetsInAWindowLayeredAboveTheKeyboard(...) shouldPresentSheetsInAWindowLayeredAboveTheKeyboard(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)frame;

- (MLChainParamBlock4UITextView)encodeWithCoder;

#ifndef markedText_selectedRange
#define markedText_selectedRange(...) markedText_selectedRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextView)markedText_selectedRange;

- (MLChainParamBlock4UITextView)insertText;

- (MLChainParamBlock4UITextView)attributedPlaceholder;

@end
