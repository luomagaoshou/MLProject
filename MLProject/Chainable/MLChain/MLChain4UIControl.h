//  
//  MLChain4UIControl.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"



@interface MLChain4UIControl:MLChain4UIView
- (UIControl *)chainObject;
#ifndef removeAllBlocksForControlEvents                                  
#define removeAllBlocksForControlEvents(...)  removeAllBlocksForControlEvents(@"removeAllBlocksForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeAllBlocksForControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())removeAllBlocksForControlEvents;


#ifndef addBlockForControlEvents_block                                  
#define addBlockForControlEvents_block(...)  addBlockForControlEvents_block(@"addBlockForControlEvents:block:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addBlockForControlEvents: 'Q'
  block: '@'
     */
- (MLChain4UIControl *(^)())addBlockForControlEvents_block;


#ifndef removeAllTargets                              
#define removeAllTargets(...)  removeAllTargets(@"removeAllTargets")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeAllTargets     */
- (MLChain4UIControl *(^)())removeAllTargets;


#ifndef target_action_forControlEvents                                  
#define target_action_forControlEvents(...)  target_action_forControlEvents(@"setTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())target_action_forControlEvents;


#ifndef blockForControlEvents_block                                  
#define blockForControlEvents_block(...)  blockForControlEvents_block(@"setBlockForControlEvents:block:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBlockForControlEvents: 'Q'
  block: '@'
     */
- (MLChain4UIControl *(^)())blockForControlEvents_block;


#ifndef bk_addEventHandler_forControlEvents                                  
#define bk_addEventHandler_forControlEvents(...)  bk_addEventHandler_forControlEvents(@"bk_addEventHandler:forControlEvents:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_addEventHandler: '@'
  forControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())bk_addEventHandler_forControlEvents;


#ifndef bk_removeEventHandlersForControlEvents                                  
#define bk_removeEventHandlersForControlEvents(...)  bk_removeEventHandlersForControlEvents(@"bk_removeEventHandlersForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_removeEventHandlersForControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())bk_removeEventHandlersForControlEvents;


#ifndef touchDownAction                                  
#define touchDownAction(...)  touchDownAction(@"touchDownAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDownAction: '@'
     */
- (MLChain4UIControl *(^)())touchDownAction;


#ifndef touchDownRepeat                                  
#define touchDownRepeat(...)  touchDownRepeat(@"touchDownRepeat:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDownRepeat: '@'
     */
- (MLChain4UIControl *(^)())touchDownRepeat;


#ifndef touchDownRepeatAction                                  
#define touchDownRepeatAction(...)  touchDownRepeatAction(@"touchDownRepeatAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDownRepeatAction: '@'
     */
- (MLChain4UIControl *(^)())touchDownRepeatAction;


#ifndef touchDragInside                                  
#define touchDragInside(...)  touchDragInside(@"touchDragInside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragInside: '@'
     */
- (MLChain4UIControl *(^)())touchDragInside;


#ifndef touchDragInsideAction                                  
#define touchDragInsideAction(...)  touchDragInsideAction(@"touchDragInsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragInsideAction: '@'
     */
- (MLChain4UIControl *(^)())touchDragInsideAction;


#ifndef touchDragOutside                                  
#define touchDragOutside(...)  touchDragOutside(@"touchDragOutside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragOutside: '@'
     */
- (MLChain4UIControl *(^)())touchDragOutside;


#ifndef touchDragOutsideAction                                  
#define touchDragOutsideAction(...)  touchDragOutsideAction(@"touchDragOutsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragOutsideAction: '@'
     */
- (MLChain4UIControl *(^)())touchDragOutsideAction;


#ifndef touchDragEnter                                  
#define touchDragEnter(...)  touchDragEnter(@"touchDragEnter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragEnter: '@'
     */
- (MLChain4UIControl *(^)())touchDragEnter;


#ifndef touchDragEnterAction                                  
#define touchDragEnterAction(...)  touchDragEnterAction(@"touchDragEnterAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragEnterAction: '@'
     */
- (MLChain4UIControl *(^)())touchDragEnterAction;


#ifndef touchDragExit                                  
#define touchDragExit(...)  touchDragExit(@"touchDragExit:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragExit: '@'
     */
- (MLChain4UIControl *(^)())touchDragExit;


#ifndef touchDragExitAction                                  
#define touchDragExitAction(...)  touchDragExitAction(@"touchDragExitAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDragExitAction: '@'
     */
- (MLChain4UIControl *(^)())touchDragExitAction;


#ifndef touchUpInsideAction                                  
#define touchUpInsideAction(...)  touchUpInsideAction(@"touchUpInsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchUpInsideAction: '@'
     */
- (MLChain4UIControl *(^)())touchUpInsideAction;


#ifndef touchUpOutsideAction                                  
#define touchUpOutsideAction(...)  touchUpOutsideAction(@"touchUpOutsideAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchUpOutsideAction: '@'
     */
- (MLChain4UIControl *(^)())touchUpOutsideAction;


#ifndef touchCancel                                  
#define touchCancel(...)  touchCancel(@"touchCancel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchCancel: '@'
     */
- (MLChain4UIControl *(^)())touchCancel;


#ifndef touchCancelAction                                  
#define touchCancelAction(...)  touchCancelAction(@"touchCancelAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchCancelAction: '@'
     */
- (MLChain4UIControl *(^)())touchCancelAction;


#ifndef valueChangedAction                                  
#define valueChangedAction(...)  valueChangedAction(@"valueChangedAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   valueChangedAction: '@'
     */
- (MLChain4UIControl *(^)())valueChangedAction;


#ifndef editingDidBegin                                  
#define editingDidBegin(...)  editingDidBegin(@"editingDidBegin:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidBegin: '@'
     */
- (MLChain4UIControl *(^)())editingDidBegin;


#ifndef editingDidBeginAction                                  
#define editingDidBeginAction(...)  editingDidBeginAction(@"editingDidBeginAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidBeginAction: '@'
     */
- (MLChain4UIControl *(^)())editingDidBeginAction;


#ifndef editingChanged                                  
#define editingChanged(...)  editingChanged(@"editingChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingChanged: '@'
     */
- (MLChain4UIControl *(^)())editingChanged;


#ifndef editingChangedAction                                  
#define editingChangedAction(...)  editingChangedAction(@"editingChangedAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingChangedAction: '@'
     */
- (MLChain4UIControl *(^)())editingChangedAction;


#ifndef editingDidEnd                                  
#define editingDidEnd(...)  editingDidEnd(@"editingDidEnd:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidEnd: '@'
     */
- (MLChain4UIControl *(^)())editingDidEnd;


#ifndef editingDidEndAction                                  
#define editingDidEndAction(...)  editingDidEndAction(@"editingDidEndAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidEndAction: '@'
     */
- (MLChain4UIControl *(^)())editingDidEndAction;


#ifndef editingDidEndOnExit                                  
#define editingDidEndOnExit(...)  editingDidEndOnExit(@"editingDidEndOnExit:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidEndOnExit: '@'
     */
- (MLChain4UIControl *(^)())editingDidEndOnExit;


#ifndef editingDidEndOnExitAction                                  
#define editingDidEndOnExitAction(...)  editingDidEndOnExitAction(@"editingDidEndOnExitAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   editingDidEndOnExitAction: '@'
     */
- (MLChain4UIControl *(^)())editingDidEndOnExitAction;


#ifndef touchDown                                  
#define touchDown(...)  touchDown(@"touchDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchDown: '@'
     */
- (MLChain4UIControl *(^)())touchDown;


#ifndef touchUpInside                                  
#define touchUpInside(...)  touchUpInside(@"touchUpInside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchUpInside: '@'
     */
- (MLChain4UIControl *(^)())touchUpInside;


#ifndef touchUpOutside                                  
#define touchUpOutside(...)  touchUpOutside(@"touchUpOutside:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchUpOutside: '@'
     */
- (MLChain4UIControl *(^)())touchUpOutside;


#ifndef valueChanged                                  
#define valueChanged(...)  valueChanged(@"valueChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   valueChanged: '@'
     */
- (MLChain4UIControl *(^)())valueChanged;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UIControl *(^)())enabled;


#ifndef addTarget_action_forControlEvents                                  
#define addTarget_action_forControlEvents(...)  addTarget_action_forControlEvents(@"addTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())addTarget_action_forControlEvents;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())touchesCancelled_withEvent;


#ifndef highlighted                                  
#define highlighted(...)  highlighted(@"setHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setHighlighted: 'B'
     */
- (MLChain4UIControl *(^)())highlighted;


#ifndef sendActionsForControlEvents                                  
#define sendActionsForControlEvents(...)  sendActionsForControlEvents(@"sendActionsForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendActionsForControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())sendActionsForControlEvents;


#ifndef contentHorizontalAlignment                                  
#define contentHorizontalAlignment(...)  contentHorizontalAlignment(@"setContentHorizontalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentHorizontalAlignment: 'q'
     */
- (MLChain4UIControl *(^)())contentHorizontalAlignment;


#ifndef contentVerticalAlignment                                  
#define contentVerticalAlignment(...)  contentVerticalAlignment(@"setContentVerticalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentVerticalAlignment: 'q'
     */
- (MLChain4UIControl *(^)())contentVerticalAlignment;


#ifndef addTarget_action_forEvents                                  
#define addTarget_action_forEvents(...)  addTarget_action_forEvents(@"addTarget:action:forEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addTarget: '@'
  action: ':'
  forEvents: 'i'
     */
- (MLChain4UIControl *(^)())addTarget_action_forEvents;


#ifndef selected                                  
#define selected(...)  selected(@"setSelected:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setSelected: 'B'
     */
- (MLChain4UIControl *(^)())selected;


#ifndef tracking                                  
#define tracking(...)  tracking(@"setTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTracking: 'B'
     */
- (MLChain4UIControl *(^)())tracking;


#ifndef cancelTrackingWithEvent                                  
#define cancelTrackingWithEvent(...)  cancelTrackingWithEvent(@"cancelTrackingWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cancelTrackingWithEvent: '@'
     */
- (MLChain4UIControl *(^)())cancelTrackingWithEvent;


#ifndef endTrackingWithTouch_withEvent                                  
#define endTrackingWithTouch_withEvent(...)  endTrackingWithTouch_withEvent(@"endTrackingWithTouch:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   endTrackingWithTouch: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())endTrackingWithTouch_withEvent;


#ifndef sendAction_to_forEvent                                  
#define sendAction_to_forEvent(...)  sendAction_to_forEvent(@"sendAction:to:forEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendAction: ':'
  to: '@'
  forEvent: '@'
     */
- (MLChain4UIControl *(^)())sendAction_to_forEvent;


#ifndef removeTarget_action_forControlEvents                                  
#define removeTarget_action_forControlEvents(...)  removeTarget_action_forControlEvents(@"removeTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UIControl *(^)())removeTarget_action_forControlEvents;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UIControl *(^)())touchesEstimatedPropertiesUpdated;


#ifndef requiresDisplayOnTracking                                  
#define requiresDisplayOnTracking(...)  requiresDisplayOnTracking(@"setRequiresDisplayOnTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setRequiresDisplayOnTracking: 'B'
     */
- (MLChain4UIControl *(^)())requiresDisplayOnTracking;


#ifndef removeTarget_forEvents                                  
#define removeTarget_forEvents(...)  removeTarget_forEvents(@"removeTarget:forEvents:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeTarget: '@'
  forEvents: 'i'
     */
- (MLChain4UIControl *(^)())removeTarget_forEvents;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UIControl *(^)())encodeWithCoder;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTop: 'd'
     */
- (MLChain4UIControl *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setRight: 'd'
     */
- (MLChain4UIControl *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBottom: 'd'
     */
- (MLChain4UIControl *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UIControl *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeAllSubviews     */
- (MLChain4UIControl *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setLeft: 'd'
     */
- (MLChain4UIControl *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UIControl *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UIControl *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setWidth: 'd'
     */
- (MLChain4UIControl *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setHeight: 'd'
     */
- (MLChain4UIControl *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setSize: '{'
     */
- (MLChain4UIControl *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setOrigin: '{'
     */
- (MLChain4UIControl *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UIControl *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UIControl *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMas_key: '@'
     */
- (MLChain4UIControl *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UIControl *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UIControl *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UIControl *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setMj_size: '{'
     */
- (MLChain4UIControl *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UIControl *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UIControl *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UIControl *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UIControl *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UIControl *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UIControl *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIControl *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UIControl *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UIControl *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UIControl *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UIControl *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UIControl *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UIControl *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIControl *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIControl *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UIControl *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UIControl *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIControl *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UIControl *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UIControl *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UIControl *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UIControl *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UIControl *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UIControl *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UIControl *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UIControl *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UIControl *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UIControl *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UIControl *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UIControl *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UIControl *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UIControl *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updateBadgeFrame     */
- (MLChain4UIControl *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeBadge     */
- (MLChain4UIControl *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UIControl                                
SEL-> badgeInit     */
- (MLChain4UIControl *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UIControl *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UIControl                                
SEL-> refreshBadge     */
- (MLChain4UIControl *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UIControl *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBadge: '@'
     */
- (MLChain4UIControl *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UIControl                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UIControl *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UIControl *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UIControl *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UIControl *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UIControl *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIControl *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UIControl *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UIControl *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UIControl *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIControl *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UIControl *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UIControl *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addWidth: 'd'
     */
- (MLChain4UIControl *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addHeight: 'd'
     */
- (MLChain4UIControl *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setX: 'd'
     */
- (MLChain4UIControl *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setY: 'd'
     */
- (MLChain4UIControl *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UIControl *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UIControl *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   tapEvent: '@'
     */
- (MLChain4UIControl *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UIControl                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UIControl *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UIControl *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UIControl *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UIControl *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UIControl *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UIControl *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UIControl *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeLastDrawRectView     */
- (MLChain4UIControl *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UIControl *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UIControl *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UIControl *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UIControl *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   tapAction: '@'
     */
- (MLChain4UIControl *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   swipeAction: '@'
     */
- (MLChain4UIControl *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   panAction: '@'
     */
- (MLChain4UIControl *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pinchAction: '@'
     */
- (MLChain4UIControl *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UIControl *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   rotationAction: '@'
     */
- (MLChain4UIControl *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UIControl *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UIControl *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UIControl *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UIControl *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UIControl *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UIControl *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   longPressAction: '@'
     */
- (MLChain4UIControl *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UIControl *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UIControl *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UIControl                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UIControl *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UIControl *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UIControl *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UIControl *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UIControl *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UIControl *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UIControl *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())value_forKey;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UIControl *(^)())nsli_addConstraint;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UIControl *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UIControl *(^)())solutionDidChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsLayout     */
- (MLChain4UIControl *(^)())setNeedsLayout;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UIControl *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UIControl *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UIControl                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UIControl *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UIControl *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsDisplay     */
- (MLChain4UIControl *(^)())setNeedsDisplay;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setBounds: '{'
     */
- (MLChain4UIControl *(^)())bounds;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setPosition: '{'
     */
- (MLChain4UIControl *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setTransform: '{'
     */
- (MLChain4UIControl *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> layoutIfNeeded     */
- (MLChain4UIControl *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UIControl *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UIControl *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UIControl *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UIControl *(^)())clipsToBounds;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UIControl *(^)())userInteractionEnabled;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UIControl *(^)())autoresizesSubviews;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UIControl                                
SEL-> layoutSubviews     */
- (MLChain4UIControl *(^)())layoutSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UIControl *(^)())needsDisplayOnBoundsChange;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UIControl                                
SEL-> didMoveToWindow     */
- (MLChain4UIControl *(^)())didMoveToWindow;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UIControl *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UIControl                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UIControl *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UIControl *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UIControl *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UIControl *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UIControl *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UIControl *(^)())sendSubviewToBack;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UIControl *(^)())traitCollectionDidChange;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UIControl *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UIControl *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UIControl *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UIControl *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UIControl *(^)())removeGestureRecognizer;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UIControl *(^)())semanticContentAttribute;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UIControl *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addConstraints: '@'
     */
- (MLChain4UIControl *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UIControl *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UIControl *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UIControl *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setCenter: '{'
     */
- (MLChain4UIControl *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UIControl *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UIControl *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UIControl *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIControl *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UIControl *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UIControl *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UIControl *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UIControl *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UIControl *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UIControl *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UIControl *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UIControl *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UIControl *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UIControl *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UIControl *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTintColor: '@'
     */
- (MLChain4UIControl *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UIControl *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UIControl *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UIControl *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UIControl *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIControl *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UIControl *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> focusedViewWillChange     */
- (MLChain4UIControl *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UIControl *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> focusedViewDidChange     */
- (MLChain4UIControl *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UIControl *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addConstraint: '@'
     */
- (MLChain4UIControl *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UIControl *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UIControl *(^)())tapDelegate;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UIControl *(^)())layoutMargins;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UIControl *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UIControl *(^)())tintAdjustmentMode;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> tintColorDidChange     */
- (MLChain4UIControl *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UIControl *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMaskView: '@'
     */
- (MLChain4UIControl *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UIControl *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setTag: 'q'
     */
- (MLChain4UIControl *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setVisualState: '@'
     */
- (MLChain4UIControl *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UIControl *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UIControl *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UIControl *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UIControl *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UIControl *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UIControl *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UIControl *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UIControl                                
SEL-> sizeToFit     */
- (MLChain4UIControl *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UIControl *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UIControl *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UIControl *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UIControl                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UIControl *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UIControl                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UIControl *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UIControl *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UIControl *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UIControl *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UIControl *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UIControl *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UIControl *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UIControl *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UIControl *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UIControl                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UIControl *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UIControl *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UIControl                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UIControl *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UIControl                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UIControl *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UIControl *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UIControl                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UIControl *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UIControl *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UIControl                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UIControl *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UIControl *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UIControl                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UIControl *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UIControl *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UIControl *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UIControl *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UIControl                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UIControl *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UIControl *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UIControl                                
SEL-> didMoveToSuperview     */
- (MLChain4UIControl *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UIControl *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UIControl *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UIControl *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UIControl *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UIControl *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UIControl *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UIControl *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UIControl *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UIControl *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UIControl *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UIControl *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UIControl *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UIControl *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UIControl *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UIControl *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UIControl *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UIControl *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UIControl *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UIControl *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UIControl *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updateConstraints     */
- (MLChain4UIControl *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UIControl *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UIControl *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIControl *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UIControl *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UIControl *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UIControl *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UIControl *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UIControl *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UIControl *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UIControl *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UIControl *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UIControl                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UIControl *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UIControl *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIControl *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UIControl *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UIControl                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UIControl *(^)())exerciseAmbiguityInLayout;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setFrame: '{'
     */
- (MLChain4UIControl *(^)())frame;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setHidden: 'B'
     */
- (MLChain4UIControl *(^)())hidden;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UIControl *(^)())backgroundColor;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeFromSuperview     */
- (MLChain4UIControl *(^)())removeFromSuperview;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UIControl *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addSubview: '@'
     */
- (MLChain4UIControl *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   drawRect: '{'
     */
- (MLChain4UIControl *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UIControl *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UIControl *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UIControl *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setCharge: 'f'
     */
- (MLChain4UIControl *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UIControl *(^)())viewWillMoveToSuperview;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())pressesCancelled_withEvent;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())motionCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIControl *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIControl *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UIControl *(^)())pressesChanged_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UIControl *(^)())restorationIdentifier;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> beginSelectionChange     */
- (MLChain4UIControl *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UIControl                                
SEL-> endSelectionChange     */
- (MLChain4UIControl *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UIControl *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UIControl                                
SEL-> reloadInputViews     */
- (MLChain4UIControl *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UIControl *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UIControl                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UIControl *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UIControl *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UIControl *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UIControl *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UIControl *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeObserverBlocks     */
- (MLChain4UIControl *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UIControl *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UIControl *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UIControl *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UIControl *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UIControl *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UIControl                                
SEL-> removeAssociatedValues     */
- (MLChain4UIControl *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UIControl *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setViewStack: '@'
     */
- (MLChain4UIControl *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UIControl                                
SEL-> assertNotDealloc     */
- (MLChain4UIControl *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UIControl *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UIControl *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UIControl *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UIControl *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   mj_decode: '@'
     */
- (MLChain4UIControl *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   mj_encode: '@'
     */
- (MLChain4UIControl *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UIControl *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIControl *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIControl *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UIControl *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UIControl                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UIControl *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UIControl *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UIControl *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIControl *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIControl *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIControl *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIControl *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIControl *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UIControl                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UIControl *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UIControl *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UIControl                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UIControl *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UIControl *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UIControl *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UIControl *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UIControl *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UIControl *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UIControl *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UIControl                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UIControl *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UIControl *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UIControl *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UIControl *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UIControl *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UIControl                                
SEL-> allowSafePerformSelector     */
- (MLChain4UIControl *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UIControl                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UIControl *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIControl *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIControl *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UIControl *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UIControl *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIControl *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIControl *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UIControl *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UIControl *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UIControl *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIControl *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UIControl *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UIControl                                
SEL-> mf_lock     */
- (MLChain4UIControl *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UIControl                                
SEL-> mf_unlock     */
- (MLChain4UIControl *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UIControl                                
SEL-> mf_lockWithPriority     */
- (MLChain4UIControl *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UIControl *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UIControl *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UIControl *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UIControl *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UIControl *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UIControl *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UIControl *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UIControl                                
SEL-> accessibilityIncrement     */
- (MLChain4UIControl *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UIControl                                
SEL-> accessibilityDecrement     */
- (MLChain4UIControl *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UIControl *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UIControl                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UIControl *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UIControl                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UIControl *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UIControl *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UIControl *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UIControl *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UIControl *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UIControl *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIControl                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UIControl *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UIControl *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UIControl *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UIControl *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UIControl *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UIControl *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UIControl *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UIControl *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UIControl *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UIControl *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UIControl                                
SEL-> awakeFromNib     */
- (MLChain4UIControl *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UIControl                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UIControl *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UIControl                                
SEL-> releaseOnMainThread     */
- (MLChain4UIControl *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UIControl *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UIControl                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UIControl *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UIControl *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeObservation: '@'
     */
- (MLChain4UIControl *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UIControl *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UIControl                                
SEL-> finishObserving     */
- (MLChain4UIControl *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIControl *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIControl *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIControl *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UIControl *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIControl *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIControl *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UIControl *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UIControl *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UIControl *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UIControl *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UIControl *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UIControl *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UIControl *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIControl *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIControl *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIControl *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UIControl *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIControl                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UIControl *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UIControl *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UIControl *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UIControl *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UIControl *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UIControl *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UIControl *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIControl                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UIControl *(^)())doesNotRecognizeSelector;


@end
