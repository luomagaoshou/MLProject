//
//  MLChain4UIView.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MLChain4NSObject.h"
ml_chain_block_maker(UIView);
@interface MLChain4UIView : MLChain4NSObject
@property (nonatomic, strong) UIView *view;

@property (nonatomic, strong, readonly) MLChain4UIViewParamBlock superView;



#ifndef _countOfMotionEffectsInSubtree
#define _countOfMotionEffectsInSubtree(...) _countOfMotionEffectsInSubtree(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)_countOfMotionEffectsInSubtree;

#ifndef contentScaleFactor
#define contentScaleFactor(...) contentScaleFactor(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)contentScaleFactor;

#ifndef tintAdjustmentMode
#define tintAdjustmentMode(...) tintAdjustmentMode(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)tintAdjustmentMode;

#ifndef gesturesEnabled
#define gesturesEnabled(...) gesturesEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)gesturesEnabled;

- (MLChain4UIViewParamBlock)previousInvocation;

- (MLChain4UIViewParamBlock)upXibWithName;

#ifndef size
#define size(...) size(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef size_
#define size_(...) size(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)size;

#ifndef multipleTouchEnabled
#define multipleTouchEnabled(...) multipleTouchEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)multipleTouchEnabled;

#ifndef center
#define center(...) center(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef center_
#define center_(...) center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)center;

#ifndef transform
#define transform(...) transform(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef transform_
#define transform_(...) transform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)transform;

#ifndef charge
#define charge(...) charge(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)charge;

#ifndef clipsSubviews
#define clipsSubviews(...) clipsSubviews(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)clipsSubviews;

- (MLChain4UIViewParamBlock)shadeView;

#ifndef clearsContextBeforeDrawing
#define clearsContextBeforeDrawing(...) clearsContextBeforeDrawing(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)clearsContextBeforeDrawing;

- (MLChain4UIViewParamBlock)doneInvocation;

#ifndef contentMode
#define contentMode(...) contentMode(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)contentMode;

#ifndef clearsContext
#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)clearsContext;

#ifndef translatesAutoresizingMaskIntoConstraints
#define translatesAutoresizingMaskIntoConstraints(...) translatesAutoresizingMaskIntoConstraints(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)translatesAutoresizingMaskIntoConstraints;

#ifndef tag
#define tag(...) tag(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)tag;

- (MLChain4UIViewParamBlock)tintColor;

#ifndef autoresizesSubviews
#define autoresizesSubviews(...) autoresizesSubviews(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)autoresizesSubviews;

#ifndef upSelfNameXibOnSelfWithSerialNumber
#define upSelfNameXibOnSelfWithSerialNumber(...) upSelfNameXibOnSelfWithSerialNumber(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)upSelfNameXibOnSelfWithSerialNumber;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)enabled;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)semanticContentAttribute;

#ifndef preservesSuperviewLayoutMargins
#define preservesSuperviewLayoutMargins(...) preservesSuperviewLayoutMargins(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)preservesSuperviewLayoutMargins;

#ifndef iba_contentHuggingPriorities
#define iba_contentHuggingPriorities(...) iba_contentHuggingPriorities(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)iba_contentHuggingPriorities;

#ifndef width
#define width(...) width(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)width;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef frame_
#define frame_(...) frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)frame;

- (MLChain4UIViewParamBlock)motionEffects;

#ifndef left
#define left(...) left(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)left;

- (MLChain4UIViewParamBlock)tapDelegate;

#ifndef x
#define x(...) x(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)x;

#ifndef iba_contentCompressionResistancePriorities
#define iba_contentCompressionResistancePriorities(...) iba_contentCompressionResistancePriorities(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)iba_contentCompressionResistancePriorities;

#ifndef exclusiveTouch
#define exclusiveTouch(...) exclusiveTouch(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)exclusiveTouch;

#ifndef fixedBackgroundPattern
#define fixedBackgroundPattern(...) fixedBackgroundPattern(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)fixedBackgroundPattern;

#ifndef deliversTouchesForGesturesToSuperview
#define deliversTouchesForGesturesToSuperview(...) deliversTouchesForGesturesToSuperview(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)deliversTouchesForGesturesToSuperview;

- (MLChain4UIViewParamBlock)upSelfNameCellXibOnSelfWithReuseIDDictionary;

#ifndef needsDisplayOnBoundsChange
#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)needsDisplayOnBoundsChange;

#ifndef deliversButtonsForGesturesToSuperview
#define deliversButtonsForGesturesToSuperview(...) deliversButtonsForGesturesToSuperview(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)deliversButtonsForGesturesToSuperview;

- (MLChain4UIViewParamBlock)drawRectViewArray;

- (MLChain4UIViewParamBlock)gestureRecognizers;

#ifndef enabledGestures
#define enabledGestures(...) enabledGestures(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)enabledGestures;

#ifndef top
#define top(...) top(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)top;

#ifndef skipsSubviewEnumeration
#define skipsSubviewEnumeration(...) skipsSubviewEnumeration(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)skipsSubviewEnumeration;

#ifndef contentsPosition
#define contentsPosition(...) contentsPosition(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)contentsPosition;

#ifndef cornerRadius
#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)cornerRadius;

- (MLChain4UIViewParamBlock)asyncdisplaykit_node;

- (MLChain4UIViewParamBlock)clearColorShadeView;

#ifndef opaque
#define opaque(...) opaque(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)opaque;

- (MLChain4UIViewParamBlock)nextInvocation;

#ifndef layoutMarginsFollowReadableWidth
#define layoutMarginsFollowReadableWidth(...) layoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)layoutMarginsFollowReadableWidth;

#ifndef origin
#define origin(...) origin(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef origin_
#define origin_(...) origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)origin;

- (MLChain4UIViewParamBlock)backgroundColor;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef bounds_
#define bounds_(...) bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)bounds;

#ifndef shouldHideTitle
#define shouldHideTitle(...) shouldHideTitle(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)shouldHideTitle;

#ifndef frameOrigin
#define frameOrigin(...) frameOrigin(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef frameOrigin_
#define frameOrigin_(...) frameOrigin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)frameOrigin;

#ifndef contentStretch
#define contentStretch(...) contentStretch(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef contentStretch_
#define contentStretch_(...) contentStretch(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)contentStretch;

#ifndef needsDisplayInRect
#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef needsDisplayInRect_
#define needsDisplayInRect_(...) needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)needsDisplayInRect;

#ifndef centerX
#define centerX(...) centerX(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)centerX;

#ifndef rotationBy
#define rotationBy(...) rotationBy(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)rotationBy;

#ifndef position
#define position(...) position(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef position_
#define position_(...) position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)position;

- (MLChain4UIViewParamBlock)gestureDelegate;

#ifndef centerY
#define centerY(...) centerY(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)centerY;

#ifndef autoresizingMask
#define autoresizingMask(...) autoresizingMask(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)autoresizingMask;

#ifndef bottom
#define bottom(...) bottom(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)bottom;

#ifndef y
#define y(...) y(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)y;

#ifndef alpha
#define alpha(...) alpha(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)alpha;

#ifndef drawRectBlock
#define drawRectBlock(...) drawRectBlock(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)drawRectBlock;

#ifndef clipsToBounds
#define clipsToBounds(...) clipsToBounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)clipsToBounds;

- (MLChain4UIViewParamBlock)previewingSegueTemplateStorage;

- (MLChain4UIViewParamBlock)maskView;

#ifndef keyboardDistanceFromTextField
#define keyboardDistanceFromTextField(...) keyboardDistanceFromTextField(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)keyboardDistanceFromTextField;

#ifndef layoutMargins
#define layoutMargins(...) layoutMargins(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef layoutMargins_
#define layoutMargins_(...) layoutMargins(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChain4UIViewParamBlock)layoutMargins;

#ifndef hidden
#define hidden(...) hidden(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)hidden;

#ifndef _countOfFocusedAncestorTrackingViewsInSubtree
#define _countOfFocusedAncestorTrackingViewsInSubtree(...) _countOfFocusedAncestorTrackingViewsInSubtree(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)_countOfFocusedAncestorTrackingViewsInSubtree;

#ifndef height
#define height(...) height(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)height;

#ifndef right
#define right(...) right(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)right;

#ifndef userInteractionEnabled
#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)userInteractionEnabled;

- (MLChain4UIViewParamBlock)interactionTintColor;

- (MLChain4UIViewParamBlock)mas_key;

- (MLChain4UIViewParamBlock)superview;

#ifndef viewTraversalMark
#define viewTraversalMark(...) viewTraversalMark(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4UIViewParamBlock)viewTraversalMark;




@end

