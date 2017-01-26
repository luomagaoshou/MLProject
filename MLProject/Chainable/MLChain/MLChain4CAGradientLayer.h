//  
//  MLChain4CAGradientLayer.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"



@interface MLChain4CAGradientLayer:MLChain4CALayer
- (CAGradientLayer *)chainObject;
#ifndef type                                  
#define type(...)  type(@"setType:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setType: '@'
     */
- (MLChain4CAGradientLayer *(^)())type;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())didChangeValueForKey;


#ifndef colors                                  
#define colors(...)  colors(@"setColors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setColors: '@'
     */
- (MLChain4CAGradientLayer *(^)())colors;


#ifndef locations                                  
#define locations(...)  locations(@"setLocations:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setLocations: '@'
     */
- (MLChain4CAGradientLayer *(^)())locations;


#ifndef startPoint                                  
#define startPoint(...)  startPoint(@"setStartPoint:", __VA_ARGS__)                                  
#endif
#ifndef startPoint_             
#define startPoint_(...)  startPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setStartPoint: '{'
     */
- (MLChain4CAGradientLayer *(^)())startPoint;


#ifndef endPoint                                  
#define endPoint(...)  endPoint(@"setEndPoint:", __VA_ARGS__)                                  
#endif
#ifndef endPoint_             
#define endPoint_(...)  endPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setEndPoint: '{'
     */
- (MLChain4CAGradientLayer *(^)())endPoint;


#ifndef colorMap                                  
#define colorMap(...)  colorMap(@"setColorMap:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setColorMap: '@'
     */
- (MLChain4CAGradientLayer *(^)())colorMap;


#ifndef imageWithURL_placeholder_options_manager_progress_transform_completion                                  
#define imageWithURL_placeholder_options_manager_progress_transform_completion(...)  imageWithURL_placeholder_options_manager_progress_transform_completion(@"setImageWithURL:placeholder:options:manager:progress:transform:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), metamacro_at(5, __VA_ARGS__), metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  manager: '@'
  progress: '@'
  transform: '@'
  completion: '@'
     */
- (MLChain4CAGradientLayer *(^)())imageWithURL_placeholder_options_manager_progress_transform_completion;


#ifndef imageWithURL_placeholder                                  
#define imageWithURL_placeholder(...)  imageWithURL_placeholder(@"setImageWithURL:placeholder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
     */
- (MLChain4CAGradientLayer *(^)())imageWithURL_placeholder;


#ifndef imageWithURL_options                                  
#define imageWithURL_options(...)  imageWithURL_options(@"setImageWithURL:options:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageWithURL: '@'
  options: 'Q'
     */
- (MLChain4CAGradientLayer *(^)())imageWithURL_options;


#ifndef imageWithURL_placeholder_options_completion                                  
#define imageWithURL_placeholder_options_completion(...)  imageWithURL_placeholder_options_completion(@"setImageWithURL:placeholder:options:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  completion: '@'
     */
- (MLChain4CAGradientLayer *(^)())imageWithURL_placeholder_options_completion;


#ifndef imageWithURL_placeholder_options_progress_transform_completion                                  
#define imageWithURL_placeholder_options_progress_transform_completion(...)  imageWithURL_placeholder_options_progress_transform_completion(@"setImageWithURL:placeholder:options:progress:transform:completion:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageWithURL: '@'
  placeholder: '@'
  options: 'Q'
  progress: '@'
  transform: '@'
  completion: '@'
     */
- (MLChain4CAGradientLayer *(^)())imageWithURL_placeholder_options_progress_transform_completion;


#ifndef cancelCurrentImageRequest                              
#define cancelCurrentImageRequest(...)  cancelCurrentImageRequest(@"cancelCurrentImageRequest")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> cancelCurrentImageRequest     */
- (MLChain4CAGradientLayer *(^)())cancelCurrentImageRequest;


#ifndef imageURL                                  
#define imageURL(...)  imageURL(@"setImageURL:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setImageURL: '@'
     */
- (MLChain4CAGradientLayer *(^)())imageURL;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTop: 'd'
     */
- (MLChain4CAGradientLayer *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setRight: 'd'
     */
- (MLChain4CAGradientLayer *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBottom: 'd'
     */
- (MLChain4CAGradientLayer *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4CAGradientLayer *(^)())layerShadow_off_radius;


#ifndef removeAllSublayers                              
#define removeAllSublayers(...)  removeAllSublayers(@"removeAllSublayers")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removeAllSublayers     */
- (MLChain4CAGradientLayer *(^)())removeAllSublayers;


#ifndef transformRotation                                  
#define transformRotation(...)  transformRotation(@"setTransformRotation:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformRotation: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformRotation;


#ifndef transformRotationX                                  
#define transformRotationX(...)  transformRotationX(@"setTransformRotationX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformRotationX: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformRotationX;


#ifndef transformRotationY                                  
#define transformRotationY(...)  transformRotationY(@"setTransformRotationY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformRotationY: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformRotationY;


#ifndef transformRotationZ                                  
#define transformRotationZ(...)  transformRotationZ(@"setTransformRotationZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformRotationZ: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformRotationZ;


#ifndef transformScaleX                                  
#define transformScaleX(...)  transformScaleX(@"setTransformScaleX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformScaleX: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformScaleX;


#ifndef transformScaleY                                  
#define transformScaleY(...)  transformScaleY(@"setTransformScaleY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformScaleY: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformScaleY;


#ifndef transformScaleZ                                  
#define transformScaleZ(...)  transformScaleZ(@"setTransformScaleZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformScaleZ: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformScaleZ;


#ifndef transformScale                                  
#define transformScale(...)  transformScale(@"setTransformScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformScale: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformScale;


#ifndef transformTranslationX                                  
#define transformTranslationX(...)  transformTranslationX(@"setTransformTranslationX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformTranslationX: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformTranslationX;


#ifndef transformTranslationY                                  
#define transformTranslationY(...)  transformTranslationY(@"setTransformTranslationY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformTranslationY: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformTranslationY;


#ifndef transformTranslationZ                                  
#define transformTranslationZ(...)  transformTranslationZ(@"setTransformTranslationZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformTranslationZ: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformTranslationZ;


#ifndef transformDepth                                  
#define transformDepth(...)  transformDepth(@"setTransformDepth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTransformDepth: 'd'
     */
- (MLChain4CAGradientLayer *(^)())transformDepth;


#ifndef addFadeAnimationWithDuration_curve                                  
#define addFadeAnimationWithDuration_curve(...)  addFadeAnimationWithDuration_curve(@"addFadeAnimationWithDuration:curve:", (double)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addFadeAnimationWithDuration: 'd'
  curve: 'q'
     */
- (MLChain4CAGradientLayer *(^)())addFadeAnimationWithDuration_curve;


#ifndef removePreviousFadeAnimation                              
#define removePreviousFadeAnimation(...)  removePreviousFadeAnimation(@"removePreviousFadeAnimation")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removePreviousFadeAnimation     */
- (MLChain4CAGradientLayer *(^)())removePreviousFadeAnimation;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentMode: 'q'
     */
- (MLChain4CAGradientLayer *(^)())contentMode;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setCenter: '{'
     */
- (MLChain4CAGradientLayer *(^)())center;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setLeft: 'd'
     */
- (MLChain4CAGradientLayer *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCenterX: 'd'
     */
- (MLChain4CAGradientLayer *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCenterY: 'd'
     */
- (MLChain4CAGradientLayer *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setWidth: 'd'
     */
- (MLChain4CAGradientLayer *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setHeight: 'd'
     */
- (MLChain4CAGradientLayer *(^)())height;


#ifndef frameSize                                  
#define frameSize(...)  frameSize(@"setFrameSize:", __VA_ARGS__)                                  
#endif
#ifndef frameSize_             
#define frameSize_(...)  frameSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setFrameSize: '{'
     */
- (MLChain4CAGradientLayer *(^)())frameSize;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setOrigin: '{'
     */
- (MLChain4CAGradientLayer *(^)())origin;


#ifndef ml_shake                              
#define ml_shake(...)  ml_shake(@"ml_shake")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> ml_shake     */
- (MLChain4CAGradientLayer *(^)())ml_shake;


#ifndef doublePosition                                  
#define doublePosition(...)  doublePosition(@"setDoublePosition:", __VA_ARGS__)                                  
#endif
#ifndef doublePosition_             
#define doublePosition_(...)  doublePosition(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setDoublePosition: '{'
     */
- (MLChain4CAGradientLayer *(^)())doublePosition;


#ifndef doubleBounds                                  
#define doubleBounds(...)  doubleBounds(@"setDoubleBounds:", __VA_ARGS__)                                  
#endif
#ifndef doubleBounds_             
#define doubleBounds_(...)  doubleBounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setDoubleBounds: '{'
     */
- (MLChain4CAGradientLayer *(^)())doubleBounds;


#ifndef perspectiveDistance                                  
#define perspectiveDistance(...)  perspectiveDistance(@"setPerspectiveDistance:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setPerspectiveDistance: 'd'
     */
- (MLChain4CAGradientLayer *(^)())perspectiveDistance;


#ifndef web_disableAllActions                              
#define web_disableAllActions(...)  web_disableAllActions(@"web_disableAllActions")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> web_disableAllActions     */
- (MLChain4CAGradientLayer *(^)())web_disableAllActions;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())value_forKey;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setDelegate: '@'
     */
- (MLChain4CAGradientLayer *(^)())delegate;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())value_forUndefinedKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())value_forKeyPath;


#ifndef style                                  
#define style(...)  style(@"setStyle:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setStyle: '@'
     */
- (MLChain4CAGradientLayer *(^)())style;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> setNeedsLayout     */
- (MLChain4CAGradientLayer *(^)())setNeedsLayout;


#ifndef CAMLParser_setValue_forKey                                  
#define CAMLParser_setValue_forKey(...)  CAMLParser_setValue_forKey(@"CAMLParser:setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   CAMLParser: '@'
  setValue: '@'
  forKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())CAMLParser_setValue_forKey;


#ifndef reloadValueForKeyPath                                  
#define reloadValueForKeyPath(...)  reloadValueForKeyPath(@"reloadValueForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   reloadValueForKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())reloadValueForKeyPath;


#ifndef removeAnimationForKey                                  
#define removeAnimationForKey(...)  removeAnimationForKey(@"removeAnimationForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeAnimationForKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeAnimationForKey;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4CAGradientLayer *(^)())encodeWithCAMLWriter;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4CAGradientLayer *(^)())needsDisplayInRect;


#ifndef setContentsChanged                              
#define setContentsChanged(...)  setContentsChanged(@"setContentsChanged")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> setContentsChanged     */
- (MLChain4CAGradientLayer *(^)())setContentsChanged;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> setNeedsDisplay     */
- (MLChain4CAGradientLayer *(^)())setNeedsDisplay;


#ifndef contents                                  
#define contents(...)  contents(@"setContents:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContents: '@'
     */
- (MLChain4CAGradientLayer *(^)())contents;


#ifndef drawInContext                                  
#define drawInContext(...)  drawInContext(@"drawInContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   drawInContext: '^'
     */
- (MLChain4CAGradientLayer *(^)())drawInContext;


#ifndef sizeRequisition                                  
#define sizeRequisition(...)  sizeRequisition(@"setSizeRequisition:", __VA_ARGS__)                                  
#endif
#ifndef sizeRequisition_             
#define sizeRequisition_(...)  sizeRequisition(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setSizeRequisition: '{'
     */
- (MLChain4CAGradientLayer *(^)())sizeRequisition;


#ifndef insertState_atIndex                                  
#define insertState_atIndex(...)  insertState_atIndex(@"insertState:atIndex:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   insertState: '@'
  atIndex: 'I'
     */
- (MLChain4CAGradientLayer *(^)())insertState_atIndex;


#ifndef addState                                  
#define addState(...)  addState(@"addState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addState: '@'
     */
- (MLChain4CAGradientLayer *(^)())addState;


#ifndef removeState                                  
#define removeState(...)  removeState(@"removeState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeState: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeState;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setBounds: '{'
     */
- (MLChain4CAGradientLayer *(^)())bounds;


#ifndef beginTime                                  
#define beginTime(...)  beginTime(@"setBeginTime:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBeginTime: 'd'
     */
- (MLChain4CAGradientLayer *(^)())beginTime;


#ifndef repeatDuration                                  
#define repeatDuration(...)  repeatDuration(@"setRepeatDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setRepeatDuration: 'd'
     */
- (MLChain4CAGradientLayer *(^)())repeatDuration;


#ifndef fillMode                                  
#define fillMode(...)  fillMode(@"setFillMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setFillMode: '@'
     */
- (MLChain4CAGradientLayer *(^)())fillMode;


#ifndef minificationFilterBias                                  
#define minificationFilterBias(...)  minificationFilterBias(@"setMinificationFilterBias:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMinificationFilterBias: 'f'
     */
- (MLChain4CAGradientLayer *(^)())minificationFilterBias;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setPosition: '{'
     */
- (MLChain4CAGradientLayer *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())addAnimation_forKey;


#ifndef layerDidBecomeVisible                                  
#define layerDidBecomeVisible(...)  layerDidBecomeVisible(@"layerDidBecomeVisible:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   layerDidBecomeVisible: 'B'
     */
- (MLChain4CAGradientLayer *(^)())layerDidBecomeVisible;


#ifndef contentsFormat                                  
#define contentsFormat(...)  contentsFormat(@"setContentsFormat:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsFormat: '@'
     */
- (MLChain4CAGradientLayer *(^)())contentsFormat;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform((null)(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setTransform: '{'
     */
- (MLChain4CAGradientLayer *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> layoutIfNeeded     */
- (MLChain4CAGradientLayer *(^)())layoutIfNeeded;


#ifndef displayIfNeeded                              
#define displayIfNeeded(...)  displayIfNeeded(@"displayIfNeeded")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> displayIfNeeded     */
- (MLChain4CAGradientLayer *(^)())displayIfNeeded;


#ifndef renderInContext                                  
#define renderInContext(...)  renderInContext(@"renderInContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   renderInContext: '^'
     */
- (MLChain4CAGradientLayer *(^)())renderInContext;


#ifndef layoutSublayers                              
#define layoutSublayers(...)  layoutSublayers(@"layoutSublayers")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> layoutSublayers     */
- (MLChain4CAGradientLayer *(^)())layoutSublayers;


#ifndef geometryFlipped                                  
#define geometryFlipped(...)  geometryFlipped(@"setGeometryFlipped:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setGeometryFlipped: 'B'
     */
- (MLChain4CAGradientLayer *(^)())geometryFlipped;


#ifndef contentsContainsSubtitles                                  
#define contentsContainsSubtitles(...)  contentsContainsSubtitles(@"setContentsContainsSubtitles:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsContainsSubtitles: 'B'
     */
- (MLChain4CAGradientLayer *(^)())contentsContainsSubtitles;


#ifndef backgroundFilters                                  
#define backgroundFilters(...)  backgroundFilters(@"setBackgroundFilters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBackgroundFilters: '@'
     */
- (MLChain4CAGradientLayer *(^)())backgroundFilters;


#ifndef flipped                                  
#define flipped(...)  flipped(@"setFlipped:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setFlipped: 'B'
     */
- (MLChain4CAGradientLayer *(^)())flipped;


#ifndef allowsContentsRectCornerMasking                                  
#define allowsContentsRectCornerMasking(...)  allowsContentsRectCornerMasking(@"setAllowsContentsRectCornerMasking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsContentsRectCornerMasking: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsContentsRectCornerMasking;


#ifndef literalContentsCenter                                  
#define literalContentsCenter(...)  literalContentsCenter(@"setLiteralContentsCenter:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setLiteralContentsCenter: 'B'
     */
- (MLChain4CAGradientLayer *(^)())literalContentsCenter;


#ifndef invertsShadow                                  
#define invertsShadow(...)  invertsShadow(@"setInvertsShadow:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setInvertsShadow: 'B'
     */
- (MLChain4CAGradientLayer *(^)())invertsShadow;


#ifndef contentsDither                                  
#define contentsDither(...)  contentsDither(@"setContentsDither:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsDither: 'B'
     */
- (MLChain4CAGradientLayer *(^)())contentsDither;


#ifndef motionBlurAmount                                  
#define motionBlurAmount(...)  motionBlurAmount(@"setMotionBlurAmount:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMotionBlurAmount: 'd'
     */
- (MLChain4CAGradientLayer *(^)())motionBlurAmount;


#ifndef wantsExtendedDynamicRangeContent                                  
#define wantsExtendedDynamicRangeContent(...)  wantsExtendedDynamicRangeContent(@"setWantsExtendedDynamicRangeContent:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setWantsExtendedDynamicRangeContent: 'B'
     */
- (MLChain4CAGradientLayer *(^)())wantsExtendedDynamicRangeContent;


#ifndef backgroundColorPhase                                  
#define backgroundColorPhase(...)  backgroundColorPhase(@"setBackgroundColorPhase:", __VA_ARGS__)                                  
#endif
#ifndef backgroundColorPhase_             
#define backgroundColorPhase_(...)  backgroundColorPhase(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setBackgroundColorPhase: '{'
     */
- (MLChain4CAGradientLayer *(^)())backgroundColorPhase;


#ifndef lights                                  
#define lights(...)  lights(@"setLights:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setLights: '@'
     */
- (MLChain4CAGradientLayer *(^)())lights;


#ifndef velocityStretch                                  
#define velocityStretch(...)  velocityStretch(@"setVelocityStretch:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setVelocityStretch: 'd'
     */
- (MLChain4CAGradientLayer *(^)())velocityStretch;


#ifndef momentOfInertia                                  
#define momentOfInertia(...)  momentOfInertia(@"setMomentOfInertia:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMomentOfInertia: 'd'
     */
- (MLChain4CAGradientLayer *(^)())momentOfInertia;


#ifndef coefficientOfRestitution                                  
#define coefficientOfRestitution(...)  coefficientOfRestitution(@"setCoefficientOfRestitution:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCoefficientOfRestitution: 'd'
     */
- (MLChain4CAGradientLayer *(^)())coefficientOfRestitution;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4CAGradientLayer *(^)())needsDisplayOnBoundsChange;


#ifndef hitTestsAsOpaque                                  
#define hitTestsAsOpaque(...)  hitTestsAsOpaque(@"setHitTestsAsOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setHitTestsAsOpaque: 'B'
     */
- (MLChain4CAGradientLayer *(^)())hitTestsAsOpaque;


#ifndef rasterizationPrefersDisplayCompositing                                  
#define rasterizationPrefersDisplayCompositing(...)  rasterizationPrefersDisplayCompositing(@"setRasterizationPrefersDisplayCompositing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setRasterizationPrefersDisplayCompositing: 'B'
     */
- (MLChain4CAGradientLayer *(^)())rasterizationPrefersDisplayCompositing;


#ifndef affineTransform                                  
#define affineTransform(...)  affineTransform(@"setAffineTransform:", __VA_ARGS__)                                  
#endif
#ifndef affineTransform_             
#define affineTransform_(...)  affineTransform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setAffineTransform: '{'
     */
- (MLChain4CAGradientLayer *(^)())affineTransform;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4CAGradientLayer *(^)())layoutBelowIfNeeded;


#ifndef allowsGroupBlending                                  
#define allowsGroupBlending(...)  allowsGroupBlending(@"setAllowsGroupBlending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsGroupBlending: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsGroupBlending;


#ifndef cornerContents                                  
#define cornerContents(...)  cornerContents(@"setCornerContents:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCornerContents: '@'
     */
- (MLChain4CAGradientLayer *(^)())cornerContents;


#ifndef cornerContentsCenter                                  
#define cornerContentsCenter(...)  cornerContentsCenter(@"setCornerContentsCenter:", __VA_ARGS__)                                  
#endif
#ifndef cornerContentsCenter_             
#define cornerContentsCenter_(...)  cornerContentsCenter(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setCornerContentsCenter: '{'
     */
- (MLChain4CAGradientLayer *(^)())cornerContentsCenter;


#ifndef shouldRasterize                                  
#define shouldRasterize(...)  shouldRasterize(@"setShouldRasterize:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShouldRasterize: 'B'
     */
- (MLChain4CAGradientLayer *(^)())shouldRasterize;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4CAGradientLayer *(^)())clearsContext;


#ifndef clearHasBeenCommitted                              
#define clearHasBeenCommitted(...)  clearHasBeenCommitted(@"clearHasBeenCommitted")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> clearHasBeenCommitted     */
- (MLChain4CAGradientLayer *(^)())clearHasBeenCommitted;


#ifndef removeAllAnimations                              
#define removeAllAnimations(...)  removeAllAnimations(@"removeAllAnimations")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removeAllAnimations     */
- (MLChain4CAGradientLayer *(^)())removeAllAnimations;


#ifndef invalidateContents                              
#define invalidateContents(...)  invalidateContents(@"invalidateContents")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> invalidateContents     */
- (MLChain4CAGradientLayer *(^)())invalidateContents;


#ifndef contentsTransform                                  
#define contentsTransform(...)  contentsTransform(@"setContentsTransform:", __VA_ARGS__)                                  
#endif
#ifndef contentsTransform_             
#define contentsTransform_(...)  contentsTransform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setContentsTransform: '{'
     */
- (MLChain4CAGradientLayer *(^)())contentsTransform;


#ifndef insertSublayer_below                                  
#define insertSublayer_below(...)  insertSublayer_below(@"insertSublayer:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   insertSublayer: '@'
  below: '@'
     */
- (MLChain4CAGradientLayer *(^)())insertSublayer_below;


#ifndef allowsGroupOpacity                                  
#define allowsGroupOpacity(...)  allowsGroupOpacity(@"setAllowsGroupOpacity:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsGroupOpacity: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsGroupOpacity;


#ifndef preloadsCache                                  
#define preloadsCache(...)  preloadsCache(@"setPreloadsCache:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setPreloadsCache: 'B'
     */
- (MLChain4CAGradientLayer *(^)())preloadsCache;


#ifndef frozen                                  
#define frozen(...)  frozen(@"setFrozen:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setFrozen: 'B'
     */
- (MLChain4CAGradientLayer *(^)())frozen;


#ifndef maskedCorners                                  
#define maskedCorners(...)  maskedCorners(@"setMaskedCorners:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMaskedCorners: 'I'
     */
- (MLChain4CAGradientLayer *(^)())maskedCorners;


#ifndef cornerContentsMasksEdges                                  
#define cornerContentsMasksEdges(...)  cornerContentsMasksEdges(@"setCornerContentsMasksEdges:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCornerContentsMasksEdges: 'B'
     */
- (MLChain4CAGradientLayer *(^)())cornerContentsMasksEdges;


#ifndef contentsMultiplyColor                                  
#define contentsMultiplyColor(...)  contentsMultiplyColor(@"setContentsMultiplyColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsMultiplyColor: '^'
     */
- (MLChain4CAGradientLayer *(^)())contentsMultiplyColor;


#ifndef allowsEdgeAntialiasing                                  
#define allowsEdgeAntialiasing(...)  allowsEdgeAntialiasing(@"setAllowsEdgeAntialiasing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsEdgeAntialiasing: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsEdgeAntialiasing;


#ifndef meshTransform                                  
#define meshTransform(...)  meshTransform(@"setMeshTransform:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMeshTransform: '@'
     */
- (MLChain4CAGradientLayer *(^)())meshTransform;


#ifndef allowsHitTesting                                  
#define allowsHitTesting(...)  allowsHitTesting(@"setAllowsHitTesting:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsHitTesting: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsHitTesting;


#ifndef shadowPath                                  
#define shadowPath(...)  shadowPath(@"setShadowPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShadowPath: '^'
     */
- (MLChain4CAGradientLayer *(^)())shadowPath;


#ifndef behaviors                                  
#define behaviors(...)  behaviors(@"setBehaviors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBehaviors: '@'
     */
- (MLChain4CAGradientLayer *(^)())behaviors;


#ifndef shadowPathIsBounds                                  
#define shadowPathIsBounds(...)  shadowPathIsBounds(@"setShadowPathIsBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShadowPathIsBounds: 'B'
     */
- (MLChain4CAGradientLayer *(^)())shadowPathIsBounds;


#ifndef contentsOpaque                                  
#define contentsOpaque(...)  contentsOpaque(@"setContentsOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsOpaque: 'B'
     */
- (MLChain4CAGradientLayer *(^)())contentsOpaque;


#ifndef allowsDisplayCompositing                                  
#define allowsDisplayCompositing(...)  allowsDisplayCompositing(@"setAllowsDisplayCompositing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAllowsDisplayCompositing: 'B'
     */
- (MLChain4CAGradientLayer *(^)())allowsDisplayCompositing;


#ifndef actions                                  
#define actions(...)  actions(@"setActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setActions: '@'
     */
- (MLChain4CAGradientLayer *(^)())actions;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setFrame: '{'
     */
- (MLChain4CAGradientLayer *(^)())frame;


#ifndef mass                                  
#define mass(...)  mass(@"setMass:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMass: 'd'
     */
- (MLChain4CAGradientLayer *(^)())mass;


#ifndef duration                                  
#define duration(...)  duration(@"setDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setDuration: 'd'
     */
- (MLChain4CAGradientLayer *(^)())duration;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4CAGradientLayer *(^)())encodeWithCoder;


#ifndef name                                  
#define name(...)  name(@"setName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setName: '@'
     */
- (MLChain4CAGradientLayer *(^)())name;


#ifndef display                              
#define display(...)  display(@"display")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> display     */
- (MLChain4CAGradientLayer *(^)())display;


#ifndef shadowOff                                  
#define shadowOff(...)  shadowOff(@"setShadowOffset:", __VA_ARGS__)                                  
#endif
#ifndef shadowOff_             
#define shadowOff_(...)  shadowOff(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setShadowOffset: '{'
     */
- (MLChain4CAGradientLayer *(^)())shadowOff;


#ifndef shadowColor                                  
#define shadowColor(...)  shadowColor(@"setShadowColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShadowColor: '^'
     */
- (MLChain4CAGradientLayer *(^)())shadowColor;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setHidden: 'B'
     */
- (MLChain4CAGradientLayer *(^)())hidden;


#ifndef removeFromSuperlayer                              
#define removeFromSuperlayer(...)  removeFromSuperlayer(@"removeFromSuperlayer")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removeFromSuperlayer     */
- (MLChain4CAGradientLayer *(^)())removeFromSuperlayer;


#ifndef addSublayer                                  
#define addSublayer(...)  addSublayer(@"addSublayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addSublayer: '@'
     */
- (MLChain4CAGradientLayer *(^)())addSublayer;


#ifndef contentsScale                                  
#define contentsScale(...)  contentsScale(@"setContentsScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsScale: 'd'
     */
- (MLChain4CAGradientLayer *(^)())contentsScale;


#ifndef rasterizationScale                                  
#define rasterizationScale(...)  rasterizationScale(@"setRasterizationScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setRasterizationScale: 'd'
     */
- (MLChain4CAGradientLayer *(^)())rasterizationScale;


#ifndef drawsAsynchronously                                  
#define drawsAsynchronously(...)  drawsAsynchronously(@"setDrawsAsynchronously:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setDrawsAsynchronously: 'B'
     */
- (MLChain4CAGradientLayer *(^)())drawsAsynchronously;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBackgroundColor: '^'
     */
- (MLChain4CAGradientLayer *(^)())backgroundColor;


#ifndef borderColor                                  
#define borderColor(...)  borderColor(@"setBorderColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBorderColor: '^'
     */
- (MLChain4CAGradientLayer *(^)())borderColor;


#ifndef contentsCenter                                  
#define contentsCenter(...)  contentsCenter(@"setContentsCenter:", __VA_ARGS__)                                  
#endif
#ifndef contentsCenter_             
#define contentsCenter_(...)  contentsCenter(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setContentsCenter: '{'
     */
- (MLChain4CAGradientLayer *(^)())contentsCenter;


#ifndef contentsScaling                                  
#define contentsScaling(...)  contentsScaling(@"setContentsScaling:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsScaling: '@'
     */
- (MLChain4CAGradientLayer *(^)())contentsScaling;


#ifndef scrollRectToVisible                                  
#define scrollRectToVisible(...)  scrollRectToVisible(@"scrollRectToVisible:", __VA_ARGS__)                                  
#endif
#ifndef scrollRectToVisible_             
#define scrollRectToVisible_(...)  scrollRectToVisible(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   scrollRectToVisible: '{'
     */
- (MLChain4CAGradientLayer *(^)())scrollRectToVisible;


#ifndef canDrawConcurrently                                  
#define canDrawConcurrently(...)  canDrawConcurrently(@"setCanDrawConcurrently:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCanDrawConcurrently: 'B'
     */
- (MLChain4CAGradientLayer *(^)())canDrawConcurrently;


#ifndef borderWidth                                  
#define borderWidth(...)  borderWidth(@"setBorderWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setBorderWidth: 'd'
     */
- (MLChain4CAGradientLayer *(^)())borderWidth;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setOpaque: 'B'
     */
- (MLChain4CAGradientLayer *(^)())opaque;


#ifndef insertSublayer_atIndex                                  
#define insertSublayer_atIndex(...)  insertSublayer_atIndex(@"insertSublayer:atIndex:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   insertSublayer: '@'
  atIndex: 'I'
     */
- (MLChain4CAGradientLayer *(^)())insertSublayer_atIndex;


#ifndef insertSublayer_above                                  
#define insertSublayer_above(...)  insertSublayer_above(@"insertSublayer:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   insertSublayer: '@'
  above: '@'
     */
- (MLChain4CAGradientLayer *(^)())insertSublayer_above;


#ifndef edgeAntialiasingMask                                  
#define edgeAntialiasingMask(...)  edgeAntialiasingMask(@"setEdgeAntialiasingMask:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setEdgeAntialiasingMask: 'I'
     */
- (MLChain4CAGradientLayer *(^)())edgeAntialiasingMask;


#ifndef needsLayoutOnGeometryChange                                  
#define needsLayoutOnGeometryChange(...)  needsLayoutOnGeometryChange(@"setNeedsLayoutOnGeometryChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setNeedsLayoutOnGeometryChange: 'B'
     */
- (MLChain4CAGradientLayer *(^)())needsLayoutOnGeometryChange;


#ifndef acceleratesDrawing                                  
#define acceleratesDrawing(...)  acceleratesDrawing(@"setAcceleratesDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAcceleratesDrawing: 'B'
     */
- (MLChain4CAGradientLayer *(^)())acceleratesDrawing;


#ifndef anchorPoint                                  
#define anchorPoint(...)  anchorPoint(@"setAnchorPoint:", __VA_ARGS__)                                  
#endif
#ifndef anchorPoint_             
#define anchorPoint_(...)  anchorPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setAnchorPoint: '{'
     */
- (MLChain4CAGradientLayer *(^)())anchorPoint;


#ifndef timeOff                                  
#define timeOff(...)  timeOff(@"setTimeOffset:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setTimeOffset: 'd'
     */
- (MLChain4CAGradientLayer *(^)())timeOff;


#ifndef repeatCount                                  
#define repeatCount(...)  repeatCount(@"setRepeatCount:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setRepeatCount: 'f'
     */
- (MLChain4CAGradientLayer *(^)())repeatCount;


#ifndef autoreverses                                  
#define autoreverses(...)  autoreverses(@"setAutoreverses:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAutoreverses: 'B'
     */
- (MLChain4CAGradientLayer *(^)())autoreverses;


#ifndef filters                                  
#define filters(...)  filters(@"setFilters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setFilters: '@'
     */
- (MLChain4CAGradientLayer *(^)())filters;


#ifndef shadowRadius                                  
#define shadowRadius(...)  shadowRadius(@"setShadowRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShadowRadius: 'd'
     */
- (MLChain4CAGradientLayer *(^)())shadowRadius;


#ifndef shadowOpacity                                  
#define shadowOpacity(...)  shadowOpacity(@"setShadowOpacity:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShadowOpacity: 'f'
     */
- (MLChain4CAGradientLayer *(^)())shadowOpacity;


#ifndef compositingFilter                                  
#define compositingFilter(...)  compositingFilter(@"setCompositingFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCompositingFilter: '@'
     */
- (MLChain4CAGradientLayer *(^)())compositingFilter;


#ifndef sublayers                                  
#define sublayers(...)  sublayers(@"setSublayers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setSublayers: '@'
     */
- (MLChain4CAGradientLayer *(^)())sublayers;


#ifndef replaceSublayer_with                                  
#define replaceSublayer_with(...)  replaceSublayer_with(@"replaceSublayer:with:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   replaceSublayer: '@'
  with: '@'
     */
- (MLChain4CAGradientLayer *(^)())replaceSublayer_with;


#ifndef mask                                  
#define mask(...)  mask(@"setMask:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMask: '@'
     */
- (MLChain4CAGradientLayer *(^)())mask;


#ifndef zPosition                                  
#define zPosition(...)  zPosition(@"setZPosition:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setZPosition: 'd'
     */
- (MLChain4CAGradientLayer *(^)())zPosition;


#ifndef anchorPointZ                                  
#define anchorPointZ(...)  anchorPointZ(@"setAnchorPointZ:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAnchorPointZ: 'd'
     */
- (MLChain4CAGradientLayer *(^)())anchorPointZ;


#ifndef sublayerTransform                                  
#define sublayerTransform(...)  sublayerTransform(@"setSublayerTransform:", __VA_ARGS__)                                  
#endif
#ifndef sublayerTransform_             
#define sublayerTransform_(...)  sublayerTransform((null)(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setSublayerTransform: '{'
     */
- (MLChain4CAGradientLayer *(^)())sublayerTransform;


#ifndef doubleSided                                  
#define doubleSided(...)  doubleSided(@"setDoubleSided:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setDoubleSided: 'B'
     */
- (MLChain4CAGradientLayer *(^)())doubleSided;


#ifndef masksToBounds                                  
#define masksToBounds(...)  masksToBounds(@"setMasksToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMasksToBounds: 'B'
     */
- (MLChain4CAGradientLayer *(^)())masksToBounds;


#ifndef contentsRect                                  
#define contentsRect(...)  contentsRect(@"setContentsRect:", __VA_ARGS__)                                  
#endif
#ifndef contentsRect_             
#define contentsRect_(...)  contentsRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setContentsRect: '{'
     */
- (MLChain4CAGradientLayer *(^)())contentsRect;


#ifndef minificationFilter                                  
#define minificationFilter(...)  minificationFilter(@"setMinificationFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMinificationFilter: '@'
     */
- (MLChain4CAGradientLayer *(^)())minificationFilter;


#ifndef magnificationFilter                                  
#define magnificationFilter(...)  magnificationFilter(@"setMagnificationFilter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMagnificationFilter: '@'
     */
- (MLChain4CAGradientLayer *(^)())magnificationFilter;


#ifndef opacity                                  
#define opacity(...)  opacity(@"setOpacity:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setOpacity: 'f'
     */
- (MLChain4CAGradientLayer *(^)())opacity;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4CAGradientLayer *(^)())cornerRadius;


#ifndef scrollPoint                                  
#define scrollPoint(...)  scrollPoint(@"scrollPoint:", __VA_ARGS__)                                  
#endif
#ifndef scrollPoint_             
#define scrollPoint_(...)  scrollPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   scrollPoint: '{'
     */
- (MLChain4CAGradientLayer *(^)())scrollPoint;


#ifndef contentsGravity                                  
#define contentsGravity(...)  contentsGravity(@"setContentsGravity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setContentsGravity: '@'
     */
- (MLChain4CAGradientLayer *(^)())contentsGravity;


#ifndef speed                                  
#define speed(...)  speed(@"setSpeed:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setSpeed: 'f'
     */
- (MLChain4CAGradientLayer *(^)())speed;


#ifndef sortsSublayers                                  
#define sortsSublayers(...)  sortsSublayers(@"setSortsSublayers:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setSortsSublayers: 'B'
     */
- (MLChain4CAGradientLayer *(^)())sortsSublayers;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4CAGradientLayer *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4CAGradientLayer *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removeObserverBlocks     */
- (MLChain4CAGradientLayer *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4CAGradientLayer *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4CAGradientLayer *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4CAGradientLayer *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4CAGradientLayer *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> removeAssociatedValues     */
- (MLChain4CAGradientLayer *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4CAGradientLayer *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setViewStack: '@'
     */
- (MLChain4CAGradientLayer *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> assertNotDealloc     */
- (MLChain4CAGradientLayer *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4CAGradientLayer *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4CAGradientLayer *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4CAGradientLayer *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4CAGradientLayer *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   mj_decode: '@'
     */
- (MLChain4CAGradientLayer *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   mj_encode: '@'
     */
- (MLChain4CAGradientLayer *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4CAGradientLayer *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4CAGradientLayer *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAGradientLayer *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAGradientLayer *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4CAGradientLayer *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4CAGradientLayer *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4CAGradientLayer *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4CAGradientLayer *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4CAGradientLayer *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4CAGradientLayer *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4CAGradientLayer *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4CAGradientLayer *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4CAGradientLayer *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMobClickId: '@'
     */
- (MLChain4CAGradientLayer *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4CAGradientLayer *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4CAGradientLayer *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4CAGradientLayer *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4CAGradientLayer *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4CAGradientLayer *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4CAGradientLayer *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4CAGradientLayer *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> allowSafePerformSelector     */
- (MLChain4CAGradientLayer *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> disallowSafePerformSelector     */
- (MLChain4CAGradientLayer *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4CAGradientLayer *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4CAGradientLayer *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4CAGradientLayer *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4CAGradientLayer *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4CAGradientLayer *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4CAGradientLayer *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4CAGradientLayer *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4CAGradientLayer *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CAGradientLayer *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4CAGradientLayer *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> mf_lock     */
- (MLChain4CAGradientLayer *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> mf_unlock     */
- (MLChain4CAGradientLayer *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> mf_lockWithPriority     */
- (MLChain4CAGradientLayer *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4CAGradientLayer *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4CAGradientLayer *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4CAGradientLayer *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4CAGradientLayer *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4CAGradientLayer *(^)())willUpdateFocusToView;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4CAGradientLayer *(^)())didUpdateFocusFromView;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> accessibilityIncrement     */
- (MLChain4CAGradientLayer *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> accessibilityDecrement     */
- (MLChain4CAGradientLayer *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4CAGradientLayer *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4CAGradientLayer *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4CAGradientLayer *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4CAGradientLayer *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4CAGradientLayer *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> awakeFromNib     */
- (MLChain4CAGradientLayer *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4CAGradientLayer *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> releaseOnMainThread     */
- (MLChain4CAGradientLayer *(^)())releaseOnMainThread;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> CA_prepareRenderValue     */
- (MLChain4CAGradientLayer *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4CAGradientLayer *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeObservation: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4CAGradientLayer *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> CAGradientLayer                                
SEL-> finishObserving     */
- (MLChain4CAGradientLayer *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAGradientLayer *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4CAGradientLayer *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAGradientLayer *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4CAGradientLayer *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4CAGradientLayer *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())willChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAGradientLayer *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAGradientLayer *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4CAGradientLayer *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4CAGradientLayer *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4CAGradientLayer *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4CAGradientLayer *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4CAGradientLayer *(^)())nilValueForKey;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4CAGradientLayer *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAGradientLayer                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4CAGradientLayer *(^)())doesNotRecognizeSelector;


@end
