//
//  ML_CALayerChain.h
//  MLProject
//
//  Created by 妙龙赖 on 16/3/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ML_NSObjectChain.h"
#import "ML_Chain_Macro.h"
ml_chain_block_maker(CALayer);
@interface ML_CALayerChain : ML_NSObjectChain
@property (nonatomic, strong) CALayer *layer;
@property (nonatomic, strong, readonly) ML_CALayerParamBlock superLayer;



#define perspectiveDistance(...) perspectiveDistance(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)perspectiveDistance;

- (ML_CALayerParamBlock)style;

- (ML_CALayerParamBlock)delegate;


- (ML_CALayerParamBlock)bounds;

#define beginTime(...) beginTime(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)beginTime;

#define duration(...) duration(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)duration;

#define repeatDuration(...) repeatDuration(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)repeatDuration;

- (ML_CALayerParamBlock)fillMode;

#define transform(...) transform(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)transform;

- (ML_CALayerParamBlock)contents;

#define minificationFilterBias(...) minificationFilterBias(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)minificationFilterBias;

#define position(...) position(ml_chain_MASBoxValue(__VA_ARGS__))
#define position_(...) position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)position;

#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(__VA_ARGS__))
#define needsDisplayInRect_(...) needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)needsDisplayInRect;

#define sizeRequisition(...) sizeRequisition(ml_chain_MASBoxValue(__VA_ARGS__))
#define sizeRequisition_(...) sizeRequisition(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)sizeRequisition;

#define geometryFlipped(...) geometryFlipped(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)geometryFlipped;

#define maskedCorners(...) maskedCorners(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)maskedCorners;

- (ML_CALayerParamBlock)backgroundFilters;

#define flipped(...) flipped(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)flipped;

#define allowsHitTesting(...) allowsHitTesting(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)allowsHitTesting;

#define literalContentsCenter(...) literalContentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)literalContentsCenter;

#define sortsSublayers(...) sortsSublayers(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)sortsSublayers;

#define invertsShadow(...) invertsShadow(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)invertsShadow;

#define shadowPathIsBounds(...) shadowPathIsBounds(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowPathIsBounds;

#define contentsOpaque(...) contentsOpaque(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)contentsOpaque;

#define swapsMaskAndLayer(...) swapsMaskAndLayer(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)swapsMaskAndLayer;

#define motionBlurAmount(...) motionBlurAmount(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)motionBlurAmount;

#define allowsDisplayCompositing(...) allowsDisplayCompositing(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)allowsDisplayCompositing;

#define wantsExtendedDynamicRangeContent(...) wantsExtendedDynamicRangeContent(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)wantsExtendedDynamicRangeContent;

#define backgroundColorPhase(...) backgroundColorPhase(ml_chain_MASBoxValue(__VA_ARGS__))
#define backgroundColorPhase_(...) backgroundColorPhase(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)backgroundColorPhase;

- (ML_CALayerParamBlock)lights;

#define acceptsLights(...) acceptsLights(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)acceptsLights;

#define ambientReflectance(...) ambientReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)ambientReflectance;

#define diffuseReflectance(...) diffuseReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)diffuseReflectance;

#define specularReflectance(...) specularReflectance(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)specularReflectance;

#define shininess(...) shininess(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shininess;

#define metallicity(...) metallicity(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)metallicity;

#define velocityStretch(...) velocityStretch(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)velocityStretch;

#define momentOfInertia(...) momentOfInertia(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)momentOfInertia;

#define coefficientOfRestitution(...) coefficientOfRestitution(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)coefficientOfRestitution;

#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)needsDisplayOnBoundsChange;

#define hitTestsAsOpaque(...) hitTestsAsOpaque(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)hitTestsAsOpaque;

#define rasterizationPrefersDisplayCompositing(...) rasterizationPrefersDisplayCompositing(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)rasterizationPrefersDisplayCompositing;

#define affineTransform(...) affineTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#define affineTransform_(...) affineTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)affineTransform;

#define allowsGroupBlending(...) allowsGroupBlending(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)allowsGroupBlending;

- (ML_CALayerParamBlock)cornerContents;

#define cornerContentsCenter(...) cornerContentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
#define cornerContentsCenter_(...) cornerContentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)cornerContentsCenter;

#define shouldRasterize(...) shouldRasterize(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shouldRasterize;

#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)clearsContext;

#define contentsTransform(...) contentsTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#define contentsTransform_(...) contentsTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)contentsTransform;

#define allowsGroupOpacity(...) allowsGroupOpacity(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)allowsGroupOpacity;

#define preloadsCache(...) preloadsCache(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)preloadsCache;

#define frozen(...) frozen(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)frozen;

#define shadowPath(...) shadowPath(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowPath;

#define allowsEdgeAntialiasing(...) allowsEdgeAntialiasing(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)allowsEdgeAntialiasing;

- (ML_CALayerParamBlock)meshTransform;

- (ML_CALayerParamBlock)behaviors;

- (ML_CALayerParamBlock)name;

#define shadowOffset(...) shadowOffset(ml_chain_MASBoxValue(__VA_ARGS__))
#define shadowOffset_(...) shadowOffset(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)shadowOffset;

#define shadowColor(...) shadowColor(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowColor;

#define contentsScale(...) contentsScale(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)contentsScale;

#define rasterizationScale(...) rasterizationScale(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)rasterizationScale;

#define drawsAsynchronously(...) drawsAsynchronously(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)drawsAsynchronously;

#define backgroundColor(...) backgroundColor(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)backgroundColor;

#define borderColor(...) borderColor(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)borderColor;

- (ML_CALayerParamBlock)actions;

#define frame(...) frame(ml_chain_MASBoxValue(__VA_ARGS__))
#define frame_(...) frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)frame;

#define mass(...) mass(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)mass;

#define contentsCenter(...) contentsCenter(ml_chain_MASBoxValue(__VA_ARGS__))
#define contentsCenter_(...) contentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)contentsCenter;

- (ML_CALayerParamBlock)contentsScaling;

#define canDrawConcurrently(...) canDrawConcurrently(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)canDrawConcurrently;

#define borderWidth(...) borderWidth(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)borderWidth;

#define hidden(...) hidden(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)hidden;

#define opaque(...) opaque(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)opaque;

#define edgeAntialiasingMask(...) edgeAntialiasingMask(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)edgeAntialiasingMask;

#define needsLayoutOnGeometryChange(...) needsLayoutOnGeometryChange(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)needsLayoutOnGeometryChange;

#define acceleratesDrawing(...) acceleratesDrawing(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)acceleratesDrawing;

#define anchorPoint(...) anchorPoint(ml_chain_MASBoxValue(__VA_ARGS__))
#define anchorPoint_(...) anchorPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)anchorPoint;

#define timeOffset(...) timeOffset(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)timeOffset;

#define repeatCount(...) repeatCount(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)repeatCount;

#define autoreverses(...) autoreverses(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)autoreverses;

- (ML_CALayerParamBlock)filters;

#define shadowRadius(...) shadowRadius(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowRadius;

#define shadowOpacity(...) shadowOpacity(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)shadowOpacity;

- (ML_CALayerParamBlock)compositingFilter;

- (ML_CALayerParamBlock)sublayers;

- (ML_CALayerParamBlock)mask;

#define zPosition(...) zPosition(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)zPosition;

#define anchorPointZ(...) anchorPointZ(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)anchorPointZ;

#define sublayerTransform(...) sublayerTransform(ml_chain_MASBoxValue(__VA_ARGS__))
#define sublayerTransform_(...) sublayerTransform(ml_chain_MASBoxValue((null)(__VA_ARGS__)))
- (ML_CALayerParamBlock)sublayerTransform;

#define doubleSided(...) doubleSided(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)doubleSided;

#define masksToBounds(...) masksToBounds(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)masksToBounds;

#define contentsRect(...) contentsRect(ml_chain_MASBoxValue(__VA_ARGS__))
#define contentsRect_(...) contentsRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
- (ML_CALayerParamBlock)contentsRect;

- (ML_CALayerParamBlock)minificationFilter;

- (ML_CALayerParamBlock)magnificationFilter;

#define opacity(...) opacity(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)opacity;

#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)cornerRadius;

- (ML_CALayerParamBlock)contentsGravity;

#define speed(...) speed(ml_chain_MASBoxValue(__VA_ARGS__))
- (ML_CALayerParamBlock)speed;



@end
