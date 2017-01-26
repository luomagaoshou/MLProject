//  
//  MLChain4UIView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"



@interface MLChain4UIView:MLChain4UIResponder
- (UIView *)chainObject;
#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTop: 'd'
     */
- (MLChain4UIView *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setRight: 'd'
     */
- (MLChain4UIView *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBottom: 'd'
     */
- (MLChain4UIView *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UIView *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeAllSubviews     */
- (MLChain4UIView *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setLeft: 'd'
     */
- (MLChain4UIView *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UIView *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UIView *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setWidth: 'd'
     */
- (MLChain4UIView *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setHeight: 'd'
     */
- (MLChain4UIView *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setSize: '{'
     */
- (MLChain4UIView *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setOrigin: '{'
     */
- (MLChain4UIView *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UIView *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UIView *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMas_key: '@'
     */
- (MLChain4UIView *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UIView *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UIView *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UIView *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setMj_size: '{'
     */
- (MLChain4UIView *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UIView *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UIView *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UIView *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UIView *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UIView *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UIView *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UIView *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UIView *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UIView *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UIView *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UIView *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UIView *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UIView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UIView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UIView *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UIView *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UIView *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UIView *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UIView *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UIView *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UIView *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UIView *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UIView *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UIView *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UIView *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UIView *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UIView *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UIView *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UIView                                
SEL-> updateBadgeFrame     */
- (MLChain4UIView *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeBadge     */
- (MLChain4UIView *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UIView                                
SEL-> badgeInit     */
- (MLChain4UIView *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UIView *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UIView                                
SEL-> refreshBadge     */
- (MLChain4UIView *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UIView *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBadge: '@'
     */
- (MLChain4UIView *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UIView                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UIView *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UIView *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UIView *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UIView                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UIView *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UIView                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UIView *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIView *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UIView *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UIView *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UIView *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIView *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UIView *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UIView *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addWidth: 'd'
     */
- (MLChain4UIView *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addHeight: 'd'
     */
- (MLChain4UIView *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setX: 'd'
     */
- (MLChain4UIView *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setY: 'd'
     */
- (MLChain4UIView *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UIView *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UIView *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   tapEvent: '@'
     */
- (MLChain4UIView *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UIView                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UIView *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UIView *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UIView *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UIView *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UIView *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UIView *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UIView *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeLastDrawRectView     */
- (MLChain4UIView *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UIView *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UIView *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UIView                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UIView *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UIView *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   tapAction: '@'
     */
- (MLChain4UIView *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   swipeAction: '@'
     */
- (MLChain4UIView *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   panAction: '@'
     */
- (MLChain4UIView *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pinchAction: '@'
     */
- (MLChain4UIView *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UIView *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   rotationAction: '@'
     */
- (MLChain4UIView *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UIView *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UIView *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UIView *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UIView *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UIView *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UIView *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   longPressAction: '@'
     */
- (MLChain4UIView *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UIView *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UIView *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UIView                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UIView *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UIView *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UIView *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UIView *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UIView *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UIView *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UIView *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UIView *(^)())enabled;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UIView *(^)())nsli_addConstraint;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UIView *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UIView *(^)())solutionDidChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsLayout     */
- (MLChain4UIView *(^)())setNeedsLayout;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UIView *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UIView *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UIView                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UIView *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UIView *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsDisplay     */
- (MLChain4UIView *(^)())setNeedsDisplay;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setBounds: '{'
     */
- (MLChain4UIView *(^)())bounds;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setPosition: '{'
     */
- (MLChain4UIView *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setTransform: '{'
     */
- (MLChain4UIView *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> layoutIfNeeded     */
- (MLChain4UIView *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UIView *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UIView *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UIView *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UIView *(^)())clipsToBounds;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UIView *(^)())userInteractionEnabled;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UIView *(^)())autoresizesSubviews;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UIView                                
SEL-> layoutSubviews     */
- (MLChain4UIView *(^)())layoutSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UIView *(^)())needsDisplayOnBoundsChange;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UIView                                
SEL-> didMoveToWindow     */
- (MLChain4UIView *(^)())didMoveToWindow;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UIView *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UIView                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UIView *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UIView *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UIView *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UIView *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UIView *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UIView *(^)())sendSubviewToBack;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UIView *(^)())traitCollectionDidChange;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UIView *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UIView *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UIView *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UIView *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UIView *(^)())removeGestureRecognizer;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UIView *(^)())semanticContentAttribute;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UIView *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addConstraints: '@'
     */
- (MLChain4UIView *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UIView *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UIView *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UIView *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setCenter: '{'
     */
- (MLChain4UIView *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UIView *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UIView *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UIView *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIView *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UIView *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UIView *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UIView *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UIView *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UIView *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UIView *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UIView *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UIView *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UIView *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UIView *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UIView *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTintColor: '@'
     */
- (MLChain4UIView *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UIView *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UIView *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UIView *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UIView *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIView *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UIView *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> focusedViewWillChange     */
- (MLChain4UIView *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UIView *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> focusedViewDidChange     */
- (MLChain4UIView *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UIView *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addConstraint: '@'
     */
- (MLChain4UIView *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UIView *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UIView *(^)())tapDelegate;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UIView *(^)())layoutMargins;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UIView *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UIView *(^)())tintAdjustmentMode;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> tintColorDidChange     */
- (MLChain4UIView *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UIView *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMaskView: '@'
     */
- (MLChain4UIView *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UIView *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setTag: 'q'
     */
- (MLChain4UIView *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setVisualState: '@'
     */
- (MLChain4UIView *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UIView *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UIView *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UIView *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UIView *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UIView *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UIView *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UIView *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UIView                                
SEL-> sizeToFit     */
- (MLChain4UIView *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UIView *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UIView *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UIView *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UIView                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UIView *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UIView                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UIView *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UIView *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UIView *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UIView *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UIView *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UIView *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UIView *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UIView *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UIView *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UIView                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UIView *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UIView *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UIView                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UIView *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UIView                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UIView *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UIView *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UIView                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UIView *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UIView *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UIView                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UIView *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UIView                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UIView *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UIView                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UIView *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UIView *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UIView *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UIView *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UIView                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UIView *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UIView *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UIView                                
SEL-> didMoveToSuperview     */
- (MLChain4UIView *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UIView *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UIView *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UIView *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UIView *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UIView *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UIView *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UIView *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UIView *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UIView *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UIView *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UIView *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UIView *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UIView *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UIView *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UIView *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UIView *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UIView *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UIView *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UIView *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UIView                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UIView *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UIView                                
SEL-> updateConstraints     */
- (MLChain4UIView *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UIView *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UIView *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIView *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UIView *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UIView *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UIView *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UIView *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UIView *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UIView *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UIView *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UIView *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UIView                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UIView *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UIView *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIView *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UIView *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UIView                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UIView *(^)())exerciseAmbiguityInLayout;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setFrame: '{'
     */
- (MLChain4UIView *(^)())frame;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UIView *(^)())encodeWithCoder;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setHidden: 'B'
     */
- (MLChain4UIView *(^)())hidden;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UIView *(^)())backgroundColor;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeFromSuperview     */
- (MLChain4UIView *(^)())removeFromSuperview;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UIView *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addSubview: '@'
     */
- (MLChain4UIView *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   drawRect: '{'
     */
- (MLChain4UIView *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UIView *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UIView *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UIView *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setCharge: 'f'
     */
- (MLChain4UIView *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UIView *(^)())viewWillMoveToSuperview;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())touchesCancelled_withEvent;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())pressesCancelled_withEvent;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())motionCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIView *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIView *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UIView *(^)())pressesChanged_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UIView *(^)())restorationIdentifier;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UIView *(^)())touchesEstimatedPropertiesUpdated;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> beginSelectionChange     */
- (MLChain4UIView *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UIView                                
SEL-> endSelectionChange     */
- (MLChain4UIView *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UIView *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UIView                                
SEL-> reloadInputViews     */
- (MLChain4UIView *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UIView *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UIView                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UIView *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UIView *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UIView *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UIView *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UIView *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeObserverBlocks     */
- (MLChain4UIView *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UIView *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UIView *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UIView *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UIView *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UIView *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UIView                                
SEL-> removeAssociatedValues     */
- (MLChain4UIView *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UIView *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setViewStack: '@'
     */
- (MLChain4UIView *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UIView                                
SEL-> assertNotDealloc     */
- (MLChain4UIView *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UIView *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UIView *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UIView *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UIView *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   mj_decode: '@'
     */
- (MLChain4UIView *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   mj_encode: '@'
     */
- (MLChain4UIView *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UIView *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIView *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIView *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UIView *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UIView                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UIView *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UIView *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UIView *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIView *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIView *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIView *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIView *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIView *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UIView                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UIView *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UIView *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UIView                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UIView *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UIView *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UIView *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UIView *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UIView *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UIView *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UIView *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UIView                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UIView *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UIView *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UIView *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UIView *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UIView *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UIView                                
SEL-> allowSafePerformSelector     */
- (MLChain4UIView *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UIView                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UIView *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIView *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIView *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UIView *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UIView *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIView *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIView *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UIView *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UIView *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UIView *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIView *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UIView *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UIView                                
SEL-> mf_lock     */
- (MLChain4UIView *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UIView                                
SEL-> mf_unlock     */
- (MLChain4UIView *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UIView                                
SEL-> mf_lockWithPriority     */
- (MLChain4UIView *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UIView *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UIView *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UIView *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UIView *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UIView *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UIView *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UIView *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UIView                                
SEL-> accessibilityIncrement     */
- (MLChain4UIView *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UIView                                
SEL-> accessibilityDecrement     */
- (MLChain4UIView *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UIView *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UIView                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UIView *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UIView                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UIView *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UIView *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UIView *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UIView *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UIView *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UIView *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIView                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UIView *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UIView *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UIView *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UIView *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UIView *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UIView *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UIView *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UIView *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UIView *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UIView *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UIView                                
SEL-> awakeFromNib     */
- (MLChain4UIView *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UIView                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UIView *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UIView                                
SEL-> releaseOnMainThread     */
- (MLChain4UIView *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UIView *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UIView                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UIView *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UIView *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeObservation: '@'
     */
- (MLChain4UIView *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UIView *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UIView                                
SEL-> finishObserving     */
- (MLChain4UIView *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIView *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIView *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIView *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UIView *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIView *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIView *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UIView *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UIView *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UIView *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UIView *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UIView *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UIView *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UIView *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIView *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIView *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIView *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UIView *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIView                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UIView *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UIView *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UIView *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UIView *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UIView *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UIView *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UIView *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UIView *(^)())doesNotRecognizeSelector;


@end
