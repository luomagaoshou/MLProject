//  
//  MLChain4CAShapeLayer.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"



@interface MLChain4CAShapeLayer:MLChain4CALayer
- (CAShapeLayer *)chainObject;
#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())didChangeValueForKey;


#ifndef strokeStart                                  
#define strokeStart(...)  strokeStart(@"setStrokeStart:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setStrokeStart: 'd'
     */
- (MLChain4CAShapeLayer *(^)())strokeStart;


#ifndef strokeEnd                                  
#define strokeEnd(...)  strokeEnd(@"setStrokeEnd:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setStrokeEnd: 'd'
     */
- (MLChain4CAShapeLayer *(^)())strokeEnd;


#ifndef lineDashPhase                                  
#define lineDashPhase(...)  lineDashPhase(@"setLineDashPhase:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLineDashPhase: 'd'
     */
- (MLChain4CAShapeLayer *(^)())lineDashPhase;


#ifndef miterLimit                                  
#define miterLimit(...)  miterLimit(@"setMiterLimit:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMiterLimit: 'd'
     */
- (MLChain4CAShapeLayer *(^)())miterLimit;


#ifndef strokeColor                                  
#define strokeColor(...)  strokeColor(@"setStrokeColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setStrokeColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())strokeColor;


#ifndef lineCap                                  
#define lineCap(...)  lineCap(@"setLineCap:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLineCap: '@'
     */
- (MLChain4CAShapeLayer *(^)())lineCap;


#ifndef lineJoin                                  
#define lineJoin(...)  lineJoin(@"setLineJoin:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLineJoin: '@'
     */
- (MLChain4CAShapeLayer *(^)())lineJoin;


#ifndef lineDashPattern                                  
#define lineDashPattern(...)  lineDashPattern(@"setLineDashPattern:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLineDashPattern: '@'
     */
- (MLChain4CAShapeLayer *(^)())lineDashPattern;


#ifndef path                                  
#define path(...)  path(@"setPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setPath: '^'
     */
- (MLChain4CAShapeLayer *(^)())path;


#ifndef lineWidth                                  
#define lineWidth(...)  lineWidth(@"setLineWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLineWidth: 'd'
     */
- (MLChain4CAShapeLayer *(^)())lineWidth;


#ifndef fillColor                                  
#define fillColor(...)  fillColor(@"setFillColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFillColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())fillColor;


#ifndef fillRule                                  
#define fillRule(...)  fillRule(@"setFillRule:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFillRule: '@'
     */
- (MLChain4CAShapeLayer *(^)())fillRule;


#ifndef imageWithURL_placeholder_options_manager_progress_transform_completion                                  
#define imageWithURL_placeholder_options_manager_progress_transform_completion(...)  imageWithURL_placeholder_options_manager_progress_transform_completion(@"setImageWithURL:placeholder:options:manager:progress:transform:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), metamacro_at(5, __VA_ARGS__), metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  manager: '@'
  progress: '@'
  transform: '@'
  completion: '@'
     */
- (MLChain4CAShapeLayer *(^)())imageWithURL_placeholder_options_manager_progress_transform_completion;


#ifndef imageWithURL_placeholder                                  
#define imageWithURL_placeholder(...)  imageWithURL_placeholder(@"setImageWithURL:placeholder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
     */
- (MLChain4CAShapeLayer *(^)())imageWithURL_placeholder;


#ifndef imageWithURL_options                                  
#define imageWithURL_options(...)  imageWithURL_options(@"setImageWithURL:options:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageWithURL: '@'
  options: 'Q'
     */
- (MLChain4CAShapeLayer *(^)())imageWithURL_options;


#ifndef imageWithURL_placeholder_options_completion                                  
#define imageWithURL_placeholder_options_completion(...)  imageWithURL_placeholder_options_completion(@"setImageWithURL:placeholder:options:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  completion: '@'
     */
- (MLChain4CAShapeLayer *(^)())imageWithURL_placeholder_options_completion;


#ifndef imageWithURL_placeholder_options_progress_transform_completion                                  
#define imageWithURL_placeholder_options_progress_transform_completion(...)  imageWithURL_placeholder_options_progress_transform_completion(@"setImageWithURL:placeholder:options:progress:transform:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  progress: '@'
  transform: '@'
  completion: '@'
     */
- (MLChain4CAShapeLayer *(^)())imageWithURL_placeholder_options_progress_transform_completion;


#ifndef cancelCurrentImageRequest                              
#define cancelCurrentImageRequest(...)  cancelCurrentImageRequest(@"cancelCurrentImageRequest")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> cancelCurrentImageRequest     */
- (MLChain4CAShapeLayer *(^)())cancelCurrentImageRequest;


#ifndef imageURL                                  
#define imageURL(...)  imageURL(@"setImageURL:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setImageURL: '@'
     */
- (MLChain4CAShapeLayer *(^)())imageURL;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTop: 'd'
     */
- (MLChain4CAShapeLayer *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setRight: 'd'
     */
- (MLChain4CAShapeLayer *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBottom: 'd'
     */
- (MLChain4CAShapeLayer *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4CAShapeLayer *(^)())layerShadow_off_radius;


#ifndef removeAllSublayers                              
#define removeAllSublayers(...)  removeAllSublayers(@"removeAllSublayers")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removeAllSublayers     */
- (MLChain4CAShapeLayer *(^)())removeAllSublayers;


#ifndef transformRotation                                  
#define transformRotation(...)  transformRotation(@"setTransformRotation:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformRotation: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformRotation;


#ifndef transformRotationX                                  
#define transformRotationX(...)  transformRotationX(@"setTransformRotationX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformRotationX: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformRotationX;


#ifndef transformRotationY                                  
#define transformRotationY(...)  transformRotationY(@"setTransformRotationY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformRotationY: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformRotationY;


#ifndef transformRotationZ                                  
#define transformRotationZ(...)  transformRotationZ(@"setTransformRotationZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformRotationZ: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformRotationZ;


#ifndef transformScaleX                                  
#define transformScaleX(...)  transformScaleX(@"setTransformScaleX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformScaleX: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformScaleX;


#ifndef transformScaleY                                  
#define transformScaleY(...)  transformScaleY(@"setTransformScaleY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformScaleY: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformScaleY;


#ifndef transformScaleZ                                  
#define transformScaleZ(...)  transformScaleZ(@"setTransformScaleZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformScaleZ: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformScaleZ;


#ifndef transformScale                                  
#define transformScale(...)  transformScale(@"setTransformScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformScale: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformScale;


#ifndef transformTranslationX                                  
#define transformTranslationX(...)  transformTranslationX(@"setTransformTranslationX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformTranslationX: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformTranslationX;


#ifndef transformTranslationY                                  
#define transformTranslationY(...)  transformTranslationY(@"setTransformTranslationY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformTranslationY: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformTranslationY;


#ifndef transformTranslationZ                                  
#define transformTranslationZ(...)  transformTranslationZ(@"setTransformTranslationZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformTranslationZ: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformTranslationZ;


#ifndef transformDepth                                  
#define transformDepth(...)  transformDepth(@"setTransformDepth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTransformDepth: 'd'
     */
- (MLChain4CAShapeLayer *(^)())transformDepth;


#ifndef addFadeAnimationWithDuration_curve                                  
#define addFadeAnimationWithDuration_curve(...)  addFadeAnimationWithDuration_curve(@"addFadeAnimationWithDuration:curve:", (double)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addFadeAnimationWithDuration: 'd'
  curve: 'q'
     */
- (MLChain4CAShapeLayer *(^)())addFadeAnimationWithDuration_curve;


#ifndef removePreviousFadeAnimation                              
#define removePreviousFadeAnimation(...)  removePreviousFadeAnimation(@"removePreviousFadeAnimation")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removePreviousFadeAnimation     */
- (MLChain4CAShapeLayer *(^)())removePreviousFadeAnimation;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentMode: 'q'
     */
- (MLChain4CAShapeLayer *(^)())contentMode;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setCenter: '{'
     */
- (MLChain4CAShapeLayer *(^)())center;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLeft: 'd'
     */
- (MLChain4CAShapeLayer *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCenterX: 'd'
     */
- (MLChain4CAShapeLayer *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCenterY: 'd'
     */
- (MLChain4CAShapeLayer *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setWidth: 'd'
     */
- (MLChain4CAShapeLayer *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setHeight: 'd'
     */
- (MLChain4CAShapeLayer *(^)())height;


#ifndef frameSize                                  
#define frameSize(...)  frameSize(@"setFrameSize:", __VA_ARGS__)                                  
#endif
#ifndef frameSize_             
#define frameSize_(...)  frameSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setFrameSize: '{'
     */
- (MLChain4CAShapeLayer *(^)())frameSize;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setOrigin: '{'
     */
- (MLChain4CAShapeLayer *(^)())origin;


#ifndef ml_shake                              
#define ml_shake(...)  ml_shake(@"ml_shake")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> ml_shake     */
- (MLChain4CAShapeLayer *(^)())ml_shake;


#ifndef doublePosition                                  
#define doublePosition(...)  doublePosition(@"setDoublePosition:", __VA_ARGS__)                                  
#endif
#ifndef doublePosition_             
#define doublePosition_(...)  doublePosition(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setDoublePosition: '{'
     */
- (MLChain4CAShapeLayer *(^)())doublePosition;


#ifndef doubleBounds                                  
#define doubleBounds(...)  doubleBounds(@"setDoubleBounds:", __VA_ARGS__)                                  
#endif
#ifndef doubleBounds_             
#define doubleBounds_(...)  doubleBounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setDoubleBounds: '{'
     */
- (MLChain4CAShapeLayer *(^)())doubleBounds;


#ifndef perspectiveDistance                                  
#define perspectiveDistance(...)  perspectiveDistance(@"setPerspectiveDistance:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setPerspectiveDistance: 'd'
     */
- (MLChain4CAShapeLayer *(^)())perspectiveDistance;


#ifndef web_disableAllActions                              
#define web_disableAllActions(...)  web_disableAllActions(@"web_disableAllActions")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> web_disableAllActions     */
- (MLChain4CAShapeLayer *(^)())web_disableAllActions;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())value_forKey;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setDelegate: '@'
     */
- (MLChain4CAShapeLayer *(^)())delegate;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())value_forUndefinedKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())value_forKeyPath;


#ifndef style                                  
#define style(...)  style(@"setStyle:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setStyle: '@'
     */
- (MLChain4CAShapeLayer *(^)())style;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> setNeedsLayout     */
- (MLChain4CAShapeLayer *(^)())setNeedsLayout;


#ifndef CAMLParser_setValue_forKey                                  
#define CAMLParser_setValue_forKey(...)  CAMLParser_setValue_forKey(@"CAMLParser:setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   CAMLParser: '@'
  setValue: '@'
  forKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())CAMLParser_setValue_forKey;


#ifndef reloadValueForKeyPath                                  
#define reloadValueForKeyPath(...)  reloadValueForKeyPath(@"reloadValueForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   reloadValueForKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())reloadValueForKeyPath;


#ifndef removeAnimationForKey                                  
#define removeAnimationForKey(...)  removeAnimationForKey(@"removeAnimationForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeAnimationForKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeAnimationForKey;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4CAShapeLayer *(^)())encodeWithCAMLWriter;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4CAShapeLayer *(^)())needsDisplayInRect;


#ifndef setContentsChanged                              
#define setContentsChanged(...)  setContentsChanged(@"setContentsChanged")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> setContentsChanged     */
- (MLChain4CAShapeLayer *(^)())setContentsChanged;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> setNeedsDisplay     */
- (MLChain4CAShapeLayer *(^)())setNeedsDisplay;


#ifndef contents                                  
#define contents(...)  contents(@"setContents:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContents: '@'
     */
- (MLChain4CAShapeLayer *(^)())contents;


#ifndef drawInContext                                  
#define drawInContext(...)  drawInContext(@"drawInContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   drawInContext: '^'
     */
- (MLChain4CAShapeLayer *(^)())drawInContext;


#ifndef sizeRequisition                                  
#define sizeRequisition(...)  sizeRequisition(@"setSizeRequisition:", __VA_ARGS__)                                  
#endif
#ifndef sizeRequisition_             
#define sizeRequisition_(...)  sizeRequisition(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setSizeRequisition: '{'
     */
- (MLChain4CAShapeLayer *(^)())sizeRequisition;


#ifndef insertState_atIndex                                  
#define insertState_atIndex(...)  insertState_atIndex(@"insertState:atIndex:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   insertState: '@'
  atIndex: 'I'
     */
- (MLChain4CAShapeLayer *(^)())insertState_atIndex;


#ifndef addState                                  
#define addState(...)  addState(@"addState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addState: '@'
     */
- (MLChain4CAShapeLayer *(^)())addState;


#ifndef removeState                                  
#define removeState(...)  removeState(@"removeState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeState: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeState;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setBounds: '{'
     */
- (MLChain4CAShapeLayer *(^)())bounds;


#ifndef beginTime                                  
#define beginTime(...)  beginTime(@"setBeginTime:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBeginTime: 'd'
     */
- (MLChain4CAShapeLayer *(^)())beginTime;


#ifndef repeatDuration                                  
#define repeatDuration(...)  repeatDuration(@"setRepeatDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setRepeatDuration: 'd'
     */
- (MLChain4CAShapeLayer *(^)())repeatDuration;


#ifndef fillMode                                  
#define fillMode(...)  fillMode(@"setFillMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFillMode: '@'
     */
- (MLChain4CAShapeLayer *(^)())fillMode;


#ifndef minificationFilterBias                                  
#define minificationFilterBias(...)  minificationFilterBias(@"setMinificationFilterBias:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMinificationFilterBias: 'f'
     */
- (MLChain4CAShapeLayer *(^)())minificationFilterBias;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setPosition: '{'
     */
- (MLChain4CAShapeLayer *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())addAnimation_forKey;


#ifndef layerDidBecomeVisible                                  
#define layerDidBecomeVisible(...)  layerDidBecomeVisible(@"layerDidBecomeVisible:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   layerDidBecomeVisible: 'B'
     */
- (MLChain4CAShapeLayer *(^)())layerDidBecomeVisible;


#ifndef contentsFormat                                  
#define contentsFormat(...)  contentsFormat(@"setContentsFormat:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsFormat: '@'
     */
- (MLChain4CAShapeLayer *(^)())contentsFormat;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform((null)(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setTransform: '{'
     */
- (MLChain4CAShapeLayer *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> layoutIfNeeded     */
- (MLChain4CAShapeLayer *(^)())layoutIfNeeded;


#ifndef displayIfNeeded                              
#define displayIfNeeded(...)  displayIfNeeded(@"displayIfNeeded")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> displayIfNeeded     */
- (MLChain4CAShapeLayer *(^)())displayIfNeeded;


#ifndef renderInContext                                  
#define renderInContext(...)  renderInContext(@"renderInContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   renderInContext: '^'
     */
- (MLChain4CAShapeLayer *(^)())renderInContext;


#ifndef layoutSublayers                              
#define layoutSublayers(...)  layoutSublayers(@"layoutSublayers")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> layoutSublayers     */
- (MLChain4CAShapeLayer *(^)())layoutSublayers;


#ifndef geometryFlipped                                  
#define geometryFlipped(...)  geometryFlipped(@"setGeometryFlipped:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setGeometryFlipped: 'B'
     */
- (MLChain4CAShapeLayer *(^)())geometryFlipped;


#ifndef contentsContainsSubtitles                                  
#define contentsContainsSubtitles(...)  contentsContainsSubtitles(@"setContentsContainsSubtitles:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsContainsSubtitles: 'B'
     */
- (MLChain4CAShapeLayer *(^)())contentsContainsSubtitles;


#ifndef backgroundFilters                                  
#define backgroundFilters(...)  backgroundFilters(@"setBackgroundFilters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBackgroundFilters: '@'
     */
- (MLChain4CAShapeLayer *(^)())backgroundFilters;


#ifndef flipped                                  
#define flipped(...)  flipped(@"setFlipped:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFlipped: 'B'
     */
- (MLChain4CAShapeLayer *(^)())flipped;


#ifndef allowsContentsRectCornerMasking                                  
#define allowsContentsRectCornerMasking(...)  allowsContentsRectCornerMasking(@"setAllowsContentsRectCornerMasking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsContentsRectCornerMasking: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsContentsRectCornerMasking;


#ifndef literalContentsCenter                                  
#define literalContentsCenter(...)  literalContentsCenter(@"setLiteralContentsCenter:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLiteralContentsCenter: 'B'
     */
- (MLChain4CAShapeLayer *(^)())literalContentsCenter;


#ifndef invertsShadow                                  
#define invertsShadow(...)  invertsShadow(@"setInvertsShadow:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setInvertsShadow: 'B'
     */
- (MLChain4CAShapeLayer *(^)())invertsShadow;


#ifndef contentsDither                                  
#define contentsDither(...)  contentsDither(@"setContentsDither:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsDither: 'B'
     */
- (MLChain4CAShapeLayer *(^)())contentsDither;


#ifndef motionBlurAmount                                  
#define motionBlurAmount(...)  motionBlurAmount(@"setMotionBlurAmount:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMotionBlurAmount: 'd'
     */
- (MLChain4CAShapeLayer *(^)())motionBlurAmount;


#ifndef wantsExtendedDynamicRangeContent                                  
#define wantsExtendedDynamicRangeContent(...)  wantsExtendedDynamicRangeContent(@"setWantsExtendedDynamicRangeContent:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setWantsExtendedDynamicRangeContent: 'B'
     */
- (MLChain4CAShapeLayer *(^)())wantsExtendedDynamicRangeContent;


#ifndef backgroundColorPhase                                  
#define backgroundColorPhase(...)  backgroundColorPhase(@"setBackgroundColorPhase:", __VA_ARGS__)                                  
#endif
#ifndef backgroundColorPhase_             
#define backgroundColorPhase_(...)  backgroundColorPhase(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setBackgroundColorPhase: '{'
     */
- (MLChain4CAShapeLayer *(^)())backgroundColorPhase;


#ifndef lights                                  
#define lights(...)  lights(@"setLights:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setLights: '@'
     */
- (MLChain4CAShapeLayer *(^)())lights;


#ifndef velocityStretch                                  
#define velocityStretch(...)  velocityStretch(@"setVelocityStretch:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setVelocityStretch: 'd'
     */
- (MLChain4CAShapeLayer *(^)())velocityStretch;


#ifndef momentOfInertia                                  
#define momentOfInertia(...)  momentOfInertia(@"setMomentOfInertia:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMomentOfInertia: 'd'
     */
- (MLChain4CAShapeLayer *(^)())momentOfInertia;


#ifndef coefficientOfRestitution                                  
#define coefficientOfRestitution(...)  coefficientOfRestitution(@"setCoefficientOfRestitution:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCoefficientOfRestitution: 'd'
     */
- (MLChain4CAShapeLayer *(^)())coefficientOfRestitution;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4CAShapeLayer *(^)())needsDisplayOnBoundsChange;


#ifndef hitTestsAsOpaque                                  
#define hitTestsAsOpaque(...)  hitTestsAsOpaque(@"setHitTestsAsOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setHitTestsAsOpaque: 'B'
     */
- (MLChain4CAShapeLayer *(^)())hitTestsAsOpaque;


#ifndef rasterizationPrefersDisplayCompositing                                  
#define rasterizationPrefersDisplayCompositing(...)  rasterizationPrefersDisplayCompositing(@"setRasterizationPrefersDisplayCompositing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setRasterizationPrefersDisplayCompositing: 'B'
     */
- (MLChain4CAShapeLayer *(^)())rasterizationPrefersDisplayCompositing;


#ifndef affineTransform                                  
#define affineTransform(...)  affineTransform(@"setAffineTransform:", __VA_ARGS__)                                  
#endif
#ifndef affineTransform_             
#define affineTransform_(...)  affineTransform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setAffineTransform: '{'
     */
- (MLChain4CAShapeLayer *(^)())affineTransform;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4CAShapeLayer *(^)())layoutBelowIfNeeded;


#ifndef allowsGroupBlending                                  
#define allowsGroupBlending(...)  allowsGroupBlending(@"setAllowsGroupBlending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsGroupBlending: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsGroupBlending;


#ifndef cornerContents                                  
#define cornerContents(...)  cornerContents(@"setCornerContents:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCornerContents: '@'
     */
- (MLChain4CAShapeLayer *(^)())cornerContents;


#ifndef cornerContentsCenter                                  
#define cornerContentsCenter(...)  cornerContentsCenter(@"setCornerContentsCenter:", __VA_ARGS__)                                  
#endif
#ifndef cornerContentsCenter_             
#define cornerContentsCenter_(...)  cornerContentsCenter(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setCornerContentsCenter: '{'
     */
- (MLChain4CAShapeLayer *(^)())cornerContentsCenter;


#ifndef shouldRasterize                                  
#define shouldRasterize(...)  shouldRasterize(@"setShouldRasterize:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShouldRasterize: 'B'
     */
- (MLChain4CAShapeLayer *(^)())shouldRasterize;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4CAShapeLayer *(^)())clearsContext;


#ifndef clearHasBeenCommitted                              
#define clearHasBeenCommitted(...)  clearHasBeenCommitted(@"clearHasBeenCommitted")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> clearHasBeenCommitted     */
- (MLChain4CAShapeLayer *(^)())clearHasBeenCommitted;


#ifndef removeAllAnimations                              
#define removeAllAnimations(...)  removeAllAnimations(@"removeAllAnimations")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removeAllAnimations     */
- (MLChain4CAShapeLayer *(^)())removeAllAnimations;


#ifndef invalidateContents                              
#define invalidateContents(...)  invalidateContents(@"invalidateContents")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> invalidateContents     */
- (MLChain4CAShapeLayer *(^)())invalidateContents;


#ifndef contentsTransform                                  
#define contentsTransform(...)  contentsTransform(@"setContentsTransform:", __VA_ARGS__)                                  
#endif
#ifndef contentsTransform_             
#define contentsTransform_(...)  contentsTransform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setContentsTransform: '{'
     */
- (MLChain4CAShapeLayer *(^)())contentsTransform;


#ifndef insertSublayer_below                                  
#define insertSublayer_below(...)  insertSublayer_below(@"insertSublayer:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   insertSublayer: '@'
  below: '@'
     */
- (MLChain4CAShapeLayer *(^)())insertSublayer_below;


#ifndef allowsGroupOpacity                                  
#define allowsGroupOpacity(...)  allowsGroupOpacity(@"setAllowsGroupOpacity:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsGroupOpacity: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsGroupOpacity;


#ifndef preloadsCache                                  
#define preloadsCache(...)  preloadsCache(@"setPreloadsCache:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setPreloadsCache: 'B'
     */
- (MLChain4CAShapeLayer *(^)())preloadsCache;


#ifndef frozen                                  
#define frozen(...)  frozen(@"setFrozen:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFrozen: 'B'
     */
- (MLChain4CAShapeLayer *(^)())frozen;


#ifndef maskedCorners                                  
#define maskedCorners(...)  maskedCorners(@"setMaskedCorners:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMaskedCorners: 'I'
     */
- (MLChain4CAShapeLayer *(^)())maskedCorners;


#ifndef cornerContentsMasksEdges                                  
#define cornerContentsMasksEdges(...)  cornerContentsMasksEdges(@"setCornerContentsMasksEdges:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCornerContentsMasksEdges: 'B'
     */
- (MLChain4CAShapeLayer *(^)())cornerContentsMasksEdges;


#ifndef contentsMultiplyColor                                  
#define contentsMultiplyColor(...)  contentsMultiplyColor(@"setContentsMultiplyColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsMultiplyColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())contentsMultiplyColor;


#ifndef allowsEdgeAntialiasing                                  
#define allowsEdgeAntialiasing(...)  allowsEdgeAntialiasing(@"setAllowsEdgeAntialiasing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsEdgeAntialiasing: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsEdgeAntialiasing;


#ifndef meshTransform                                  
#define meshTransform(...)  meshTransform(@"setMeshTransform:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMeshTransform: '@'
     */
- (MLChain4CAShapeLayer *(^)())meshTransform;


#ifndef allowsHitTesting                                  
#define allowsHitTesting(...)  allowsHitTesting(@"setAllowsHitTesting:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsHitTesting: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsHitTesting;


#ifndef shadowPath                                  
#define shadowPath(...)  shadowPath(@"setShadowPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShadowPath: '^'
     */
- (MLChain4CAShapeLayer *(^)())shadowPath;


#ifndef behaviors                                  
#define behaviors(...)  behaviors(@"setBehaviors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBehaviors: '@'
     */
- (MLChain4CAShapeLayer *(^)())behaviors;


#ifndef shadowPathIsBounds                                  
#define shadowPathIsBounds(...)  shadowPathIsBounds(@"setShadowPathIsBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShadowPathIsBounds: 'B'
     */
- (MLChain4CAShapeLayer *(^)())shadowPathIsBounds;


#ifndef contentsOpaque                                  
#define contentsOpaque(...)  contentsOpaque(@"setContentsOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsOpaque: 'B'
     */
- (MLChain4CAShapeLayer *(^)())contentsOpaque;


#ifndef allowsDisplayCompositing                                  
#define allowsDisplayCompositing(...)  allowsDisplayCompositing(@"setAllowsDisplayCompositing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAllowsDisplayCompositing: 'B'
     */
- (MLChain4CAShapeLayer *(^)())allowsDisplayCompositing;


#ifndef actions                                  
#define actions(...)  actions(@"setActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setActions: '@'
     */
- (MLChain4CAShapeLayer *(^)())actions;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setFrame: '{'
     */
- (MLChain4CAShapeLayer *(^)())frame;


#ifndef mass                                  
#define mass(...)  mass(@"setMass:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMass: 'd'
     */
- (MLChain4CAShapeLayer *(^)())mass;


#ifndef duration                                  
#define duration(...)  duration(@"setDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setDuration: 'd'
     */
- (MLChain4CAShapeLayer *(^)())duration;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4CAShapeLayer *(^)())encodeWithCoder;


#ifndef name                                  
#define name(...)  name(@"setName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setName: '@'
     */
- (MLChain4CAShapeLayer *(^)())name;


#ifndef display                              
#define display(...)  display(@"display")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> display     */
- (MLChain4CAShapeLayer *(^)())display;


#ifndef shadowOff                                  
#define shadowOff(...)  shadowOff(@"setShadowOffset:", __VA_ARGS__)                                  
#endif
#ifndef shadowOff_             
#define shadowOff_(...)  shadowOff(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setShadowOffset: '{'
     */
- (MLChain4CAShapeLayer *(^)())shadowOff;


#ifndef shadowColor                                  
#define shadowColor(...)  shadowColor(@"setShadowColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShadowColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())shadowColor;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setHidden: 'B'
     */
- (MLChain4CAShapeLayer *(^)())hidden;


#ifndef removeFromSuperlayer                              
#define removeFromSuperlayer(...)  removeFromSuperlayer(@"removeFromSuperlayer")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removeFromSuperlayer     */
- (MLChain4CAShapeLayer *(^)())removeFromSuperlayer;


#ifndef addSublayer                                  
#define addSublayer(...)  addSublayer(@"addSublayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addSublayer: '@'
     */
- (MLChain4CAShapeLayer *(^)())addSublayer;


#ifndef contentsScale                                  
#define contentsScale(...)  contentsScale(@"setContentsScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsScale: 'd'
     */
- (MLChain4CAShapeLayer *(^)())contentsScale;


#ifndef rasterizationScale                                  
#define rasterizationScale(...)  rasterizationScale(@"setRasterizationScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setRasterizationScale: 'd'
     */
- (MLChain4CAShapeLayer *(^)())rasterizationScale;


#ifndef drawsAsynchronously                                  
#define drawsAsynchronously(...)  drawsAsynchronously(@"setDrawsAsynchronously:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setDrawsAsynchronously: 'B'
     */
- (MLChain4CAShapeLayer *(^)())drawsAsynchronously;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBackgroundColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())backgroundColor;


#ifndef borderColor                                  
#define borderColor(...)  borderColor(@"setBorderColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBorderColor: '^'
     */
- (MLChain4CAShapeLayer *(^)())borderColor;


#ifndef contentsCenter                                  
#define contentsCenter(...)  contentsCenter(@"setContentsCenter:", __VA_ARGS__)                                  
#endif
#ifndef contentsCenter_             
#define contentsCenter_(...)  contentsCenter(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setContentsCenter: '{'
     */
- (MLChain4CAShapeLayer *(^)())contentsCenter;


#ifndef contentsScaling                                  
#define contentsScaling(...)  contentsScaling(@"setContentsScaling:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsScaling: '@'
     */
- (MLChain4CAShapeLayer *(^)())contentsScaling;


#ifndef scrollRectToVisible                                  
#define scrollRectToVisible(...)  scrollRectToVisible(@"scrollRectToVisible:", __VA_ARGS__)                                  
#endif
#ifndef scrollRectToVisible_             
#define scrollRectToVisible_(...)  scrollRectToVisible(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   scrollRectToVisible: '{'
     */
- (MLChain4CAShapeLayer *(^)())scrollRectToVisible;


#ifndef canDrawConcurrently                                  
#define canDrawConcurrently(...)  canDrawConcurrently(@"setCanDrawConcurrently:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCanDrawConcurrently: 'B'
     */
- (MLChain4CAShapeLayer *(^)())canDrawConcurrently;


#ifndef borderWidth                                  
#define borderWidth(...)  borderWidth(@"setBorderWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setBorderWidth: 'd'
     */
- (MLChain4CAShapeLayer *(^)())borderWidth;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setOpaque: 'B'
     */
- (MLChain4CAShapeLayer *(^)())opaque;


#ifndef insertSublayer_atIndex                                  
#define insertSublayer_atIndex(...)  insertSublayer_atIndex(@"insertSublayer:atIndex:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   insertSublayer: '@'
  atIndex: 'I'
     */
- (MLChain4CAShapeLayer *(^)())insertSublayer_atIndex;


#ifndef insertSublayer_above                                  
#define insertSublayer_above(...)  insertSublayer_above(@"insertSublayer:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   insertSublayer: '@'
  above: '@'
     */
- (MLChain4CAShapeLayer *(^)())insertSublayer_above;


#ifndef edgeAntialiasingMask                                  
#define edgeAntialiasingMask(...)  edgeAntialiasingMask(@"setEdgeAntialiasingMask:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setEdgeAntialiasingMask: 'I'
     */
- (MLChain4CAShapeLayer *(^)())edgeAntialiasingMask;


#ifndef needsLayoutOnGeometryChange                                  
#define needsLayoutOnGeometryChange(...)  needsLayoutOnGeometryChange(@"setNeedsLayoutOnGeometryChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setNeedsLayoutOnGeometryChange: 'B'
     */
- (MLChain4CAShapeLayer *(^)())needsLayoutOnGeometryChange;


#ifndef acceleratesDrawing                                  
#define acceleratesDrawing(...)  acceleratesDrawing(@"setAcceleratesDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAcceleratesDrawing: 'B'
     */
- (MLChain4CAShapeLayer *(^)())acceleratesDrawing;


#ifndef anchorPoint                                  
#define anchorPoint(...)  anchorPoint(@"setAnchorPoint:", __VA_ARGS__)                                  
#endif
#ifndef anchorPoint_             
#define anchorPoint_(...)  anchorPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setAnchorPoint: '{'
     */
- (MLChain4CAShapeLayer *(^)())anchorPoint;


#ifndef timeOff                                  
#define timeOff(...)  timeOff(@"setTimeOffset:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setTimeOffset: 'd'
     */
- (MLChain4CAShapeLayer *(^)())timeOff;


#ifndef repeatCount                                  
#define repeatCount(...)  repeatCount(@"setRepeatCount:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setRepeatCount: 'f'
     */
- (MLChain4CAShapeLayer *(^)())repeatCount;


#ifndef autoreverses                                  
#define autoreverses(...)  autoreverses(@"setAutoreverses:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAutoreverses: 'B'
     */
- (MLChain4CAShapeLayer *(^)())autoreverses;


#ifndef filters                                  
#define filters(...)  filters(@"setFilters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFilters: '@'
     */
- (MLChain4CAShapeLayer *(^)())filters;


#ifndef shadowRadius                                  
#define shadowRadius(...)  shadowRadius(@"setShadowRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShadowRadius: 'd'
     */
- (MLChain4CAShapeLayer *(^)())shadowRadius;


#ifndef shadowOpacity                                  
#define shadowOpacity(...)  shadowOpacity(@"setShadowOpacity:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShadowOpacity: 'f'
     */
- (MLChain4CAShapeLayer *(^)())shadowOpacity;


#ifndef compositingFilter                                  
#define compositingFilter(...)  compositingFilter(@"setCompositingFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCompositingFilter: '@'
     */
- (MLChain4CAShapeLayer *(^)())compositingFilter;


#ifndef sublayers                                  
#define sublayers(...)  sublayers(@"setSublayers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setSublayers: '@'
     */
- (MLChain4CAShapeLayer *(^)())sublayers;


#ifndef replaceSublayer_with                                  
#define replaceSublayer_with(...)  replaceSublayer_with(@"replaceSublayer:with:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   replaceSublayer: '@'
  with: '@'
     */
- (MLChain4CAShapeLayer *(^)())replaceSublayer_with;


#ifndef mask                                  
#define mask(...)  mask(@"setMask:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMask: '@'
     */
- (MLChain4CAShapeLayer *(^)())mask;


#ifndef zPosition                                  
#define zPosition(...)  zPosition(@"setZPosition:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setZPosition: 'd'
     */
- (MLChain4CAShapeLayer *(^)())zPosition;


#ifndef anchorPointZ                                  
#define anchorPointZ(...)  anchorPointZ(@"setAnchorPointZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAnchorPointZ: 'd'
     */
- (MLChain4CAShapeLayer *(^)())anchorPointZ;


#ifndef sublayerTransform                                  
#define sublayerTransform(...)  sublayerTransform(@"setSublayerTransform:", __VA_ARGS__)                                  
#endif
#ifndef sublayerTransform_             
#define sublayerTransform_(...)  sublayerTransform((null)(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setSublayerTransform: '{'
     */
- (MLChain4CAShapeLayer *(^)())sublayerTransform;


#ifndef doubleSided                                  
#define doubleSided(...)  doubleSided(@"setDoubleSided:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setDoubleSided: 'B'
     */
- (MLChain4CAShapeLayer *(^)())doubleSided;


#ifndef masksToBounds                                  
#define masksToBounds(...)  masksToBounds(@"setMasksToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMasksToBounds: 'B'
     */
- (MLChain4CAShapeLayer *(^)())masksToBounds;


#ifndef contentsRect                                  
#define contentsRect(...)  contentsRect(@"setContentsRect:", __VA_ARGS__)                                  
#endif
#ifndef contentsRect_             
#define contentsRect_(...)  contentsRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setContentsRect: '{'
     */
- (MLChain4CAShapeLayer *(^)())contentsRect;


#ifndef minificationFilter                                  
#define minificationFilter(...)  minificationFilter(@"setMinificationFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMinificationFilter: '@'
     */
- (MLChain4CAShapeLayer *(^)())minificationFilter;


#ifndef magnificationFilter                                  
#define magnificationFilter(...)  magnificationFilter(@"setMagnificationFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMagnificationFilter: '@'
     */
- (MLChain4CAShapeLayer *(^)())magnificationFilter;


#ifndef opacity                                  
#define opacity(...)  opacity(@"setOpacity:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setOpacity: 'f'
     */
- (MLChain4CAShapeLayer *(^)())opacity;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4CAShapeLayer *(^)())cornerRadius;


#ifndef scrollPoint                                  
#define scrollPoint(...)  scrollPoint(@"scrollPoint:", __VA_ARGS__)                                  
#endif
#ifndef scrollPoint_             
#define scrollPoint_(...)  scrollPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   scrollPoint: '{'
     */
- (MLChain4CAShapeLayer *(^)())scrollPoint;


#ifndef contentsGravity                                  
#define contentsGravity(...)  contentsGravity(@"setContentsGravity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setContentsGravity: '@'
     */
- (MLChain4CAShapeLayer *(^)())contentsGravity;


#ifndef speed                                  
#define speed(...)  speed(@"setSpeed:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setSpeed: 'f'
     */
- (MLChain4CAShapeLayer *(^)())speed;


#ifndef sortsSublayers                                  
#define sortsSublayers(...)  sortsSublayers(@"setSortsSublayers:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setSortsSublayers: 'B'
     */
- (MLChain4CAShapeLayer *(^)())sortsSublayers;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4CAShapeLayer *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4CAShapeLayer *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removeObserverBlocks     */
- (MLChain4CAShapeLayer *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4CAShapeLayer *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4CAShapeLayer *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4CAShapeLayer *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4CAShapeLayer *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> removeAssociatedValues     */
- (MLChain4CAShapeLayer *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4CAShapeLayer *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setViewStack: '@'
     */
- (MLChain4CAShapeLayer *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> assertNotDealloc     */
- (MLChain4CAShapeLayer *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4CAShapeLayer *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4CAShapeLayer *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4CAShapeLayer *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4CAShapeLayer *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   mj_decode: '@'
     */
- (MLChain4CAShapeLayer *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   mj_encode: '@'
     */
- (MLChain4CAShapeLayer *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4CAShapeLayer *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4CAShapeLayer *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAShapeLayer *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAShapeLayer *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4CAShapeLayer *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4CAShapeLayer *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAShapeLayer *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4CAShapeLayer *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4CAShapeLayer *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4CAShapeLayer *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4CAShapeLayer *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4CAShapeLayer *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4CAShapeLayer *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMobClickId: '@'
     */
- (MLChain4CAShapeLayer *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4CAShapeLayer *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4CAShapeLayer *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4CAShapeLayer *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4CAShapeLayer *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4CAShapeLayer *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4CAShapeLayer *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4CAShapeLayer *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> allowSafePerformSelector     */
- (MLChain4CAShapeLayer *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> disallowSafePerformSelector     */
- (MLChain4CAShapeLayer *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4CAShapeLayer *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4CAShapeLayer *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4CAShapeLayer *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4CAShapeLayer *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4CAShapeLayer *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4CAShapeLayer *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4CAShapeLayer *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4CAShapeLayer *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CAShapeLayer *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4CAShapeLayer *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> mf_lock     */
- (MLChain4CAShapeLayer *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> mf_unlock     */
- (MLChain4CAShapeLayer *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> mf_lockWithPriority     */
- (MLChain4CAShapeLayer *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4CAShapeLayer *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4CAShapeLayer *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4CAShapeLayer *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4CAShapeLayer *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4CAShapeLayer *(^)())willUpdateFocusToView;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4CAShapeLayer *(^)())didUpdateFocusFromView;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> accessibilityIncrement     */
- (MLChain4CAShapeLayer *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> accessibilityDecrement     */
- (MLChain4CAShapeLayer *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4CAShapeLayer *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4CAShapeLayer *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4CAShapeLayer *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4CAShapeLayer *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4CAShapeLayer *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> awakeFromNib     */
- (MLChain4CAShapeLayer *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4CAShapeLayer *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> releaseOnMainThread     */
- (MLChain4CAShapeLayer *(^)())releaseOnMainThread;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> CA_prepareRenderValue     */
- (MLChain4CAShapeLayer *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4CAShapeLayer *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeObservation: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4CAShapeLayer *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> CAShapeLayer                                
SEL-> finishObserving     */
- (MLChain4CAShapeLayer *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAShapeLayer *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4CAShapeLayer *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAShapeLayer *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4CAShapeLayer *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4CAShapeLayer *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())willChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAShapeLayer *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAShapeLayer *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4CAShapeLayer *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4CAShapeLayer *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4CAShapeLayer *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4CAShapeLayer *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4CAShapeLayer *(^)())nilValueForKey;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4CAShapeLayer *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAShapeLayer                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4CAShapeLayer *(^)())doesNotRecognizeSelector;


@end
