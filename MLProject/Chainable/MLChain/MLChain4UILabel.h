//  
//  MLChain4UILabel.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UILabel);
@interface MLChain4UILabel:MLChain4UIView
@property (nonatomic, strong)UILabel *label;
#ifndef changeTextIntegerValueWithNumber
#define changeTextIntegerValueWithNumber(...) changeTextIntegerValueWithNumber(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)changeTextIntegerValueWithNumber;

#ifndef labelCommonType
#define labelCommonType(...) labelCommonType(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)labelCommonType;

- (MLChainParamBlock4UILabel)ab_textAttributes;

- (MLChainParamBlock4UILabel)ab_text;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)enabled;

#ifndef lineBreakMode
#define lineBreakMode(...) lineBreakMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)lineBreakMode;

#ifndef lineSpacing
#define lineSpacing(...) lineSpacing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)lineSpacing;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)bounds;

#ifndef userInteractionEnabled
#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)userInteractionEnabled;

- (MLChainParamBlock4UILabel)invalidateIntrinsicContentSize;

- (MLChainParamBlock4UILabel)traitCollectionDidChange;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)semanticContentAttribute;

#ifndef numberOfLines
#define numberOfLines(...) numberOfLines(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)numberOfLines;

#ifndef textAlignment
#define textAlignment(...) textAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)textAlignment;

- (MLChainParamBlock4UILabel)attributedText;

- (MLChainParamBlock4UILabel)textColor;

- (MLChainParamBlock4UILabel)font;

- (MLChainParamBlock4UILabel)text;

- (MLChainParamBlock4UILabel)tintColorDidChange;

#ifndef highlighted
#define highlighted(...) highlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)highlighted;

#ifndef adjustsFontSizeToFitWidth
#define adjustsFontSizeToFitWidth(...) adjustsFontSizeToFitWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)adjustsFontSizeToFitWidth;

#ifndef baselineAdjustment
#define baselineAdjustment(...) baselineAdjustment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)baselineAdjustment;

- (MLChainParamBlock4UILabel)highlightedTextColor;

- (MLChainParamBlock4UILabel)updateConstraints;

- (MLChainParamBlock4UILabel)letterpressStyle;

#ifndef drawTextInRect
#define drawTextInRect(...) drawTextInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawTextInRect_
#define drawTextInRect_(...)  drawTextInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)drawTextInRect;

#ifndef marqueeRunning
#define marqueeRunning(...) marqueeRunning(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)marqueeRunning;

#ifndef preferredMaxLayoutWidth
#define preferredMaxLayoutWidth(...) preferredMaxLayoutWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)preferredMaxLayoutWidth;

#ifndef shadowBlur
#define shadowBlur(...) shadowBlur(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)shadowBlur;

#ifndef adjustsLetterSpacingToFitWidth
#define adjustsLetterSpacingToFitWidth(...) adjustsLetterSpacingToFitWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)adjustsLetterSpacingToFitWidth;

#ifndef marqueeEnabled
#define marqueeEnabled(...) marqueeEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)marqueeEnabled;

#ifndef drawsLetterpress
#define drawsLetterpress(...) drawsLetterpress(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)drawsLetterpress;

#ifndef drawsUnderline
#define drawsUnderline(...) drawsUnderline(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)drawsUnderline;

#ifndef autotrackTextToFit
#define autotrackTextToFit(...) autotrackTextToFit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)autotrackTextToFit;

#ifndef centersHorizontally
#define centersHorizontally(...) centersHorizontally(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)centersHorizontally;

#ifndef drawContentsInRect
#define drawContentsInRect(...) drawContentsInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawContentsInRect_
#define drawContentsInRect_(...)  drawContentsInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)drawContentsInRect;

#ifndef rawSize
#define rawSize(...) rawSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef rawSize_
#define rawSize_(...)  rawSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)rawSize;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)frame;

- (MLChainParamBlock4UILabel)encodeWithCoder;

#ifndef shadowOff
#define shadowOff(...) shadowOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef shadowOff_
#define shadowOff_(...)  shadowOff(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)shadowOff;

- (MLChainParamBlock4UILabel)shadowColor;

#ifndef allowsDefaultTighteningForTruncation
#define allowsDefaultTighteningForTruncation(...) allowsDefaultTighteningForTruncation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)allowsDefaultTighteningForTruncation;

#ifndef minimumScaleFactor
#define minimumScaleFactor(...) minimumScaleFactor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)minimumScaleFactor;

- (MLChainParamBlock4UILabel)color;

#ifndef drawRect
#define drawRect(...) drawRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawRect_
#define drawRect_(...)  drawRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)drawRect;

#ifndef minimumFontSize
#define minimumFontSize(...) minimumFontSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UILabel)minimumFontSize;

@end
