//
//  ML_UIViewChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ML_Chain_Macro.h"
ml_chain_block_maker(UIView);
@interface ML_UIViewChain : ML_NSObjectChain
@property (nonatomic, strong) UIView *view;

@property (nonatomic, strong, readonly) ML_UIViewParamBlock superView;



#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)needsDisplayOnBoundsChange;

#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)userInteractionEnabled;

#define clipsToBounds(...) clipsToBounds(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)clipsToBounds;

#define alpha(...) alpha(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)alpha;

#define contentScaleFactor(...) contentScaleFactor(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)contentScaleFactor;

#define clipsSubviews(...) clipsSubviews(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)clipsSubviews;

#define contentMode(...) contentMode(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)contentMode;

#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)semanticContentAttribute;

#define translatesAutoresizingMaskIntoConstraints(...) translatesAutoresizingMaskIntoConstraints(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)translatesAutoresizingMaskIntoConstraints;

#define center_(...) center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#define center(...) center(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)center;

#define clearsContextBeforeDrawing(...) clearsContextBeforeDrawing(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)clearsContextBeforeDrawing;

#define layoutMarginsFollowReadableWidth(...) layoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)layoutMarginsFollowReadableWidth;

- (ML_UIViewParamBlock)previewingSegueTemplateStorage;

- (ML_UIViewParamBlock)interactionTintColor;

- (ML_UIViewParamBlock)tintColor;

#define _countOfMotionEffectsInSubtree(...) _countOfMotionEffectsInSubtree(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)_countOfMotionEffectsInSubtree;

#define _countOfFocusedAncestorTrackingViewsInSubtree(...) _countOfFocusedAncestorTrackingViewsInSubtree(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)_countOfFocusedAncestorTrackingViewsInSubtree;

- (ML_UIViewParamBlock)tapDelegate;

#define layoutMargins(...) layoutMargins(ml_chain_MASBoxValue(__VA_ARGS__))
#define layoutMargins_(...) layoutMargins(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)layoutMargins;

#define preservesSuperviewLayoutMargins(...) preservesSuperviewLayoutMargins(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)preservesSuperviewLayoutMargins;

#define tintAdjustmentMode(...) tintAdjustmentMode(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)tintAdjustmentMode;

- (ML_UIViewParamBlock)maskView;

- (ML_UIViewParamBlock)motionEffects;

#define tag(...) tag(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)tag;

#define multipleTouchEnabled(...) multipleTouchEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)multipleTouchEnabled;

#define exclusiveTouch(...) exclusiveTouch(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)exclusiveTouch;

#define rotationBy(...) rotationBy(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)rotationBy;

#define autoresizesSubviews(...) autoresizesSubviews(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)autoresizesSubviews;

#define origin(...) origin(ml_chain_MASBoxValue(__VA_ARGS__))
#define origin_(...) origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)origin;

#define viewTraversalMark(...) viewTraversalMark(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)viewTraversalMark;

#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)clearsContext;

#define contentStretch(...) contentStretch(ml_chain_MASBoxValue(__VA_ARGS__))
#define contentStretch_(...) contentStretch(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)contentStretch;

#define fixedBackgroundPattern(...) fixedBackgroundPattern(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)fixedBackgroundPattern;

#define contentsPosition(...) contentsPosition(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)contentsPosition;

#define skipsSubviewEnumeration(...) skipsSubviewEnumeration(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)skipsSubviewEnumeration;

- (ML_UIViewParamBlock)gestureRecognizers;

#define gesturesEnabled(...) gesturesEnabled(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)gesturesEnabled;

#define deliversTouchesForGesturesToSuperview(...) deliversTouchesForGesturesToSuperview(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)deliversTouchesForGesturesToSuperview;

#define deliversButtonsForGesturesToSuperview(...) deliversButtonsForGesturesToSuperview(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)deliversButtonsForGesturesToSuperview;

- (ML_UIViewParamBlock)gestureDelegate;

#define enabledGestures(...) enabledGestures(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)enabledGestures;

#define size(...) size(ml_chain_MASBoxValue(__VA_ARGS__))
#define size_(...) size(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))

- (ML_UIViewParamBlock)size;
- (ML_UIViewParamBlock)backgroundColor;

#define frame(...) frame(ml_chain_MASBoxValue(__VA_ARGS__))
#define frame_(...) frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)frame;

#define bounds(...) bounds(ml_chain_MASBoxValue(__VA_ARGS__))
#define bounds_(...) bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#define bounds(...) bounds(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)bounds;


#define transform(...) transform(ml_chain_MASBoxValue(__VA_ARGS__))
#define transform_(...) transform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)transform;

#define position(...) position(ml_chain_MASBoxValue(__VA_ARGS__))
#define position_(...) position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)position;

#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(__VA_ARGS__))
#define needsDisplayInRect_(...) needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)needsDisplayInRect;

#define hidden(...) hidden(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)hidden;

#define opaque(...) opaque(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)opaque;

#define frameOrigin(...) frameOrigin(ml_chain_MASBoxValue(__VA_ARGS__))
#define frameOrigin_(...) frameOrigin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_UIViewParamBlock)frameOrigin;

#define autoresizingMask(...) autoresizingMask(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)autoresizingMask;

#define charge(...) charge(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)charge;

#define enabled(...) enabled(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_UIViewParamBlock)enabled;






@end

