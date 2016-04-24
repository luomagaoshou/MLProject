//
//  MLChain4CALayer.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "MLChain4NSObject.h"
#import "MLChainMacro.h"
ml_chain_block_maker(CALayer);
@interface MLChain4CALayer : MLChain4NSObject
@property (nonatomic, strong) CALayer *layer;
@property (nonatomic, strong, readonly) MLChain4CALayerParamBlock superLayer;






- (MLChain4CALayerParamBlock)imageURL;

#ifndef top
#define top(...) top(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)top;

#ifndef right
#define right(...) right(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)right;

#ifndef bottom
#define bottom(...) bottom(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)bottom;

#ifndef centerX
#define centerX(...) centerX(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)centerX;

#ifndef centerY
#define centerY(...) centerY(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)centerY;

#ifndef transformRotation
#define transformRotation(...) transformRotation(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformRotation;

#ifndef transformRotationX
#define transformRotationX(...) transformRotationX(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformRotationX;

#ifndef transformRotationY
#define transformRotationY(...) transformRotationY(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformRotationY;

#ifndef transformRotationZ
#define transformRotationZ(...) transformRotationZ(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformRotationZ;

#ifndef transformScaleX
#define transformScaleX(...) transformScaleX(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformScaleX;

#ifndef transformScaleY
#define transformScaleY(...) transformScaleY(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformScaleY;

#ifndef transformScaleZ
#define transformScaleZ(...) transformScaleZ(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformScaleZ;

#ifndef transformScale
#define transformScale(...) transformScale(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformScale;

#ifndef transformTranslationX
#define transformTranslationX(...) transformTranslationX(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformTranslationX;

#ifndef transformTranslationY
#define transformTranslationY(...) transformTranslationY(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformTranslationY;

#ifndef transformTranslationZ
#define transformTranslationZ(...) transformTranslationZ(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformTranslationZ;

#ifndef transformDepth
#define transformDepth(...) transformDepth(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)transformDepth;

#ifndef contentMode
#define contentMode(...) contentMode(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)contentMode;

#ifndef center
#define center(...) center(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef center_
#define center_(...) center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)center;

#ifndef origin
#define origin(...) origin(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef origin_
#define origin_(...) origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)origin;

#ifndef left
#define left(...) left(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)left;

#ifndef width
#define width(...) width(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)width;

#ifndef height
#define height(...) height(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)height;

#ifndef frameSize
#define frameSize(...) frameSize(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef frameSize_
#define frameSize_(...) frameSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)frameSize;

- (MLChain4CALayerParamBlock)asyncdisplaykit_node;

#ifndef doublePosition
#define doublePosition(...) doublePosition(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef doublePosition_
#define doublePosition_(...) doublePosition(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)doublePosition;

#ifndef doubleBounds
#define doubleBounds(...) doubleBounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef doubleBounds_
#define doubleBounds_(...) doubleBounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)doubleBounds;

#ifndef perspectiveDistance
#define perspectiveDistance(...) perspectiveDistance(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)perspectiveDistance;

- (MLChain4CALayerParamBlock)delegate;

- (MLChain4CALayerParamBlock)style;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef bounds_
#define bounds_(...) bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)bounds;

#ifndef beginTime
#define beginTime(...) beginTime(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)beginTime;

#ifndef repeatDuration
#define repeatDuration(...) repeatDuration(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)repeatDuration;

- (MLChain4CALayerParamBlock)fillMode;

#ifndef transform
#define transform(...) transform(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef transform_
#define transform_(...) transform(ml_chain_MASBoxValue((null)(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)transform;

- (MLChain4CALayerParamBlock)contents;

#ifndef minificationFilterBias
#define minificationFilterBias(...) minificationFilterBias(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)minificationFilterBias;

#ifndef position
#define position(...) position(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef position_
#define position_(...) position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)position;

#ifndef needsDisplayInRect
#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef needsDisplayInRect_
#define needsDisplayInRect_(...) needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)needsDisplayInRect;

#ifndef sizeRequisition
#define sizeRequisition(...) sizeRequisition(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef sizeRequisition_
#define sizeRequisition_(...) sizeRequisition(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)sizeRequisition;

#ifndef geometryFlipped
#define geometryFlipped(...) geometryFlipped(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)geometryFlipped;

#ifndef maskedCorners
#define maskedCorners(...) maskedCorners(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)maskedCorners;

- (MLChain4CALayerParamBlock)backgroundFilters;

#ifndef flipped
#define flipped(...) flipped(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)flipped;

#ifndef allowsHitTesting
#define allowsHitTesting(...) allowsHitTesting(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsHitTesting;

#ifndef literalContentsCenter
#define literalContentsCenter(...) literalContentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)literalContentsCenter;

#ifndef invertsShadow
#define invertsShadow(...) invertsShadow(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)invertsShadow;

#ifndef contentsOpaque
#define contentsOpaque(...) contentsOpaque(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)contentsOpaque;

#ifndef swapsMaskAndLayer
#define swapsMaskAndLayer(...) swapsMaskAndLayer(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)swapsMaskAndLayer;

#ifndef allowsContentsRectCornerMasking
#define allowsContentsRectCornerMasking(...) allowsContentsRectCornerMasking(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsContentsRectCornerMasking;

#ifndef motionBlurAmount
#define motionBlurAmount(...) motionBlurAmount(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)motionBlurAmount;

#ifndef wantsExtendedDynamicRangeContent
#define wantsExtendedDynamicRangeContent(...) wantsExtendedDynamicRangeContent(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)wantsExtendedDynamicRangeContent;

#ifndef backgroundColorPhase
#define backgroundColorPhase(...) backgroundColorPhase(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef backgroundColorPhase_
#define backgroundColorPhase_(...) backgroundColorPhase(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)backgroundColorPhase;

- (MLChain4CALayerParamBlock)lights;

#ifndef acceptsLights
#define acceptsLights(...) acceptsLights(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)acceptsLights;

#ifndef ambientReflectance
#define ambientReflectance(...) ambientReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)ambientReflectance;

#ifndef diffuseReflectance
#define diffuseReflectance(...) diffuseReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)diffuseReflectance;

#ifndef specularReflectance
#define specularReflectance(...) specularReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)specularReflectance;

#ifndef shininess
#define shininess(...) shininess(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shininess;

#ifndef metallicity
#define metallicity(...) metallicity(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)metallicity;

#ifndef velocityStretch
#define velocityStretch(...) velocityStretch(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)velocityStretch;

#ifndef momentOfInertia
#define momentOfInertia(...) momentOfInertia(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)momentOfInertia;

#ifndef coefficientOfRestitution
#define coefficientOfRestitution(...) coefficientOfRestitution(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)coefficientOfRestitution;

#ifndef needsDisplayOnBoundsChange
#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)needsDisplayOnBoundsChange;

#ifndef hitTestsAsOpaque
#define hitTestsAsOpaque(...) hitTestsAsOpaque(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)hitTestsAsOpaque;

#ifndef rasterizationPrefersDisplayCompositing
#define rasterizationPrefersDisplayCompositing(...) rasterizationPrefersDisplayCompositing(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)rasterizationPrefersDisplayCompositing;

#ifndef affineTransform
#define affineTransform(...) affineTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef affineTransform_
#define affineTransform_(...) affineTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)affineTransform;

#ifndef allowsGroupBlending
#define allowsGroupBlending(...) allowsGroupBlending(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsGroupBlending;

- (MLChain4CALayerParamBlock)cornerContents;

#ifndef cornerContentsCenter
#define cornerContentsCenter(...) cornerContentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef cornerContentsCenter_
#define cornerContentsCenter_(...) cornerContentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)cornerContentsCenter;

#ifndef shouldRasterize
#define shouldRasterize(...) shouldRasterize(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shouldRasterize;

#ifndef clearsContext
#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)clearsContext;

#ifndef contentsTransform
#define contentsTransform(...) contentsTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef contentsTransform_
#define contentsTransform_(...) contentsTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)contentsTransform;

#ifndef allowsGroupOpacity
#define allowsGroupOpacity(...) allowsGroupOpacity(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsGroupOpacity;

#ifndef preloadsCache
#define preloadsCache(...) preloadsCache(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)preloadsCache;

#ifndef frozen
#define frozen(...) frozen(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)frozen;

#ifndef shadowPath
#define shadowPath(...) shadowPath(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shadowPath;

#ifndef allowsEdgeAntialiasing
#define allowsEdgeAntialiasing(...) allowsEdgeAntialiasing(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsEdgeAntialiasing;

- (MLChain4CALayerParamBlock)meshTransform;

- (MLChain4CALayerParamBlock)behaviors;

#ifndef shadowPathIsBounds
#define shadowPathIsBounds(...) shadowPathIsBounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shadowPathIsBounds;

#ifndef allowsDisplayCompositing
#define allowsDisplayCompositing(...) allowsDisplayCompositing(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)allowsDisplayCompositing;

- (MLChain4CALayerParamBlock)actions;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef frame_
#define frame_(...) frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)frame;

#ifndef mass
#define mass(...) mass(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)mass;

#ifndef duration
#define duration(...) duration(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)duration;

- (MLChain4CALayerParamBlock)name;

#ifndef shadowOffset
#define shadowOffset(...) shadowOffset(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef shadowOffset_
#define shadowOffset_(...) shadowOffset(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)shadowOffset;

#ifndef shadowColor
#define shadowColor(...) shadowColor(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shadowColor;

#ifndef contentsScale
#define contentsScale(...) contentsScale(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)contentsScale;

#ifndef rasterizationScale
#define rasterizationScale(...) rasterizationScale(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)rasterizationScale;

#ifndef drawsAsynchronously
#define drawsAsynchronously(...) drawsAsynchronously(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)drawsAsynchronously;

#ifndef backgroundColor
#define backgroundColor(...) backgroundColor(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)backgroundColor;

#ifndef borderColor
#define borderColor(...) borderColor(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)borderColor;

#ifndef contentsCenter
#define contentsCenter(...) contentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef contentsCenter_
#define contentsCenter_(...) contentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)contentsCenter;

- (MLChain4CALayerParamBlock)contentsScaling;

#ifndef canDrawConcurrently
#define canDrawConcurrently(...) canDrawConcurrently(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)canDrawConcurrently;

#ifndef borderWidth
#define borderWidth(...) borderWidth(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)borderWidth;

#ifndef hidden
#define hidden(...) hidden(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)hidden;

#ifndef opaque
#define opaque(...) opaque(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)opaque;

#ifndef edgeAntialiasingMask
#define edgeAntialiasingMask(...) edgeAntialiasingMask(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)edgeAntialiasingMask;

#ifndef needsLayoutOnGeometryChange
#define needsLayoutOnGeometryChange(...) needsLayoutOnGeometryChange(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)needsLayoutOnGeometryChange;

#ifndef acceleratesDrawing
#define acceleratesDrawing(...) acceleratesDrawing(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)acceleratesDrawing;

- (MLChain4CALayerParamBlock)contentsFormat;

#ifndef anchorPoint
#define anchorPoint(...) anchorPoint(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef anchorPoint_
#define anchorPoint_(...) anchorPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)anchorPoint;

#ifndef timeOffset
#define timeOffset(...) timeOffset(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)timeOffset;

#ifndef repeatCount
#define repeatCount(...) repeatCount(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)repeatCount;

#ifndef autoreverses
#define autoreverses(...) autoreverses(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)autoreverses;

- (MLChain4CALayerParamBlock)filters;

#ifndef shadowRadius
#define shadowRadius(...) shadowRadius(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shadowRadius;

#ifndef shadowOpacity
#define shadowOpacity(...) shadowOpacity(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)shadowOpacity;

- (MLChain4CALayerParamBlock)compositingFilter;

- (MLChain4CALayerParamBlock)sublayers;

- (MLChain4CALayerParamBlock)mask;

#ifndef zPosition
#define zPosition(...) zPosition(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)zPosition;

#ifndef anchorPointZ
#define anchorPointZ(...) anchorPointZ(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)anchorPointZ;

#ifndef sublayerTransform
#define sublayerTransform(...) sublayerTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef sublayerTransform_
#define sublayerTransform_(...) sublayerTransform(ml_chain_MASBoxValue((null)(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)sublayerTransform;

#ifndef doubleSided
#define doubleSided(...) doubleSided(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)doubleSided;

#ifndef masksToBounds
#define masksToBounds(...) masksToBounds(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)masksToBounds;

#ifndef contentsRect
#define contentsRect(...) contentsRect(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
#ifndef contentsRect_
#define contentsRect_(...) contentsRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChain4CALayerParamBlock)contentsRect;

- (MLChain4CALayerParamBlock)minificationFilter;

- (MLChain4CALayerParamBlock)magnificationFilter;

#ifndef opacity
#define opacity(...) opacity(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)opacity;

#ifndef cornerRadius
#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)cornerRadius;

- (MLChain4CALayerParamBlock)contentsGravity;

#ifndef speed
#define speed(...) speed(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)speed;

#ifndef sortsSublayers
#define sortsSublayers(...) sortsSublayers(ml_chain_MASBoxValue(__VA_ARGS__))
#endif
- (MLChain4CALayerParamBlock)sortsSublayers;



@end
