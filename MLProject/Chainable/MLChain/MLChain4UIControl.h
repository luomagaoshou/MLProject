//  
//  MLChain4UIControl.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIControl);
@interface MLChain4UIControl:MLChain4UIView
@property (nonatomic, strong)UIControl *control;
#ifndef removeAllBlocksForControlEvents
#define removeAllBlocksForControlEvents(...) removeAllBlocksForControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)removeAllBlocksForControlEvents;

#ifndef addBlockForControlEvents_block
#define addBlockForControlEvents_block(...) addBlockForControlEvents_block(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)addBlockForControlEvents_block;

- (MLChainParamBlock4UIControl)removeAllTargets;

#ifndef target_action_forControlEvents
#define target_action_forControlEvents(...) target_action_forControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)target_action_forControlEvents;

#ifndef blockForControlEvents_block
#define blockForControlEvents_block(...) blockForControlEvents_block(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)blockForControlEvents_block;

- (MLChainParamBlock4UIControl)touchDownAction;

#ifndef touchDownRepeat
#define touchDownRepeat(...) touchDownRepeat(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDownRepeat;

- (MLChainParamBlock4UIControl)touchDownRepeatAction;

#ifndef touchDragInside
#define touchDragInside(...) touchDragInside(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDragInside;

- (MLChainParamBlock4UIControl)touchDragInsideAction;

#ifndef touchDragOutside
#define touchDragOutside(...) touchDragOutside(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDragOutside;

- (MLChainParamBlock4UIControl)touchDragOutsideAction;

#ifndef touchDragEnter
#define touchDragEnter(...) touchDragEnter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDragEnter;

- (MLChainParamBlock4UIControl)touchDragEnterAction;

#ifndef touchDragExit
#define touchDragExit(...) touchDragExit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDragExit;

- (MLChainParamBlock4UIControl)touchDragExitAction;

- (MLChainParamBlock4UIControl)touchUpInsideAction;

- (MLChainParamBlock4UIControl)touchUpOutsideAction;

#ifndef touchCancel
#define touchCancel(...) touchCancel(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchCancel;

- (MLChainParamBlock4UIControl)touchCancelAction;

- (MLChainParamBlock4UIControl)valueChangedAction;

#ifndef editingDidBegin
#define editingDidBegin(...) editingDidBegin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)editingDidBegin;

- (MLChainParamBlock4UIControl)editingDidBeginAction;

#ifndef editingChanged
#define editingChanged(...) editingChanged(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)editingChanged;

- (MLChainParamBlock4UIControl)editingChangedAction;

#ifndef editingDidEnd
#define editingDidEnd(...) editingDidEnd(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)editingDidEnd;

- (MLChainParamBlock4UIControl)editingDidEndAction;

#ifndef editingDidEndOnExit
#define editingDidEndOnExit(...) editingDidEndOnExit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)editingDidEndOnExit;

- (MLChainParamBlock4UIControl)editingDidEndOnExitAction;

#ifndef touchDown
#define touchDown(...) touchDown(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchDown;

#ifndef valueChanged
#define valueChanged(...) valueChanged(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)valueChanged;

#ifndef touchUpInside
#define touchUpInside(...) touchUpInside(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchUpInside;

#ifndef touchUpOutside
#define touchUpOutside(...) touchUpOutside(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)touchUpOutside;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)enabled;

#ifndef addTarget_action_forControlEvents
#define addTarget_action_forControlEvents(...) addTarget_action_forControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)addTarget_action_forControlEvents;

- (MLChainParamBlock4UIControl)touchesBegan_withEvent;

- (MLChainParamBlock4UIControl)touchesMoved_withEvent;

- (MLChainParamBlock4UIControl)touchesEnded_withEvent;

- (MLChainParamBlock4UIControl)touchesCancelled_withEvent;

- (MLChainParamBlock4UIControl)touchesEstimatedPropertiesUpdated;

#ifndef highlighted
#define highlighted(...) highlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)highlighted;

#ifndef sendActionsForControlEvents
#define sendActionsForControlEvents(...) sendActionsForControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)sendActionsForControlEvents;

#ifndef contentHorizontalAlignment
#define contentHorizontalAlignment(...) contentHorizontalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)contentHorizontalAlignment;

#ifndef contentVerticalAlignment
#define contentVerticalAlignment(...) contentVerticalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)contentVerticalAlignment;

#ifndef selected
#define selected(...) selected(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)selected;

#ifndef tracking
#define tracking(...) tracking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)tracking;

- (MLChainParamBlock4UIControl)cancelTrackingWithEvent;

- (MLChainParamBlock4UIControl)endTrackingWithTouch_withEvent;

#ifndef sendAction_to_forEvent
#define sendAction_to_forEvent(...) sendAction_to_forEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)sendAction_to_forEvent;

#ifndef removeTarget_action_forControlEvents
#define removeTarget_action_forControlEvents(...) removeTarget_action_forControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)removeTarget_action_forControlEvents;

#ifndef requiresDisplayOnTracking
#define requiresDisplayOnTracking(...) requiresDisplayOnTracking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)requiresDisplayOnTracking;

#ifndef addTarget_action_forEvents
#define addTarget_action_forEvents(...) addTarget_action_forEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)addTarget_action_forEvents;

#ifndef removeTarget_forEvents
#define removeTarget_forEvents(...) removeTarget_forEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)removeTarget_forEvents;

- (MLChainParamBlock4UIControl)encodeWithCoder;

@end
