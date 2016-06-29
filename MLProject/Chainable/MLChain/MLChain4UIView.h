//  
//  MLChain4UIView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIView);
@interface MLChain4UIView:MLChain4UIResponder
@property (nonatomic, strong)UIView *view;
@property (nonatomic, copy, readonly) MLChainParamBlock4UIView (^test)(NSString *title) ;

#ifndef top
#define top(...) top(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)top;

#ifndef right
#define right(...) right(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)right;

#ifndef bottom
#define bottom(...) bottom(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)bottom;

#ifndef centerX
#define centerX(...) centerX(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)centerX;

#ifndef centerY
#define centerY(...) centerY(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)centerY;

#ifndef layerShadow_off_radius
#define layerShadow_off_radius(...) layerShadow_off_radius(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)layerShadow_off_radius;

- (MLChainParamBlock4UIView)removeAllSubviews;

#ifndef origin
#define origin(...) origin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef origin_
#define origin_(...)  origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)origin;

#ifndef left
#define left(...) left(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)left;

#ifndef width
#define width(...) width(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)width;

#ifndef height
#define height(...) height(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)height;

#ifndef size
#define size(...) size(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef size_
#define size_(...)  size(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)size;

- (MLChainParamBlock4UIView)mas_key;

#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...) addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;

#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...) addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;

#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...) addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;

#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...) addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;

#ifndef enablePrevious_next
#define enablePrevious_next(...) enablePrevious_next(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)enablePrevious_next;

- (MLChainParamBlock4UIView)previousInvocation;

- (MLChainParamBlock4UIView)nextInvocation;

- (MLChainParamBlock4UIView)doneInvocation;

#ifndef addRightButtonOnKeyboardWithText_target_action_titleText
#define addRightButtonOnKeyboardWithText_target_action_titleText(...) addRightButtonOnKeyboardWithText_target_action_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addRightButtonOnKeyboardWithText_target_action_titleText;

#ifndef addDoneOnKeyboardWithTarget_action_titleText
#define addDoneOnKeyboardWithTarget_action_titleText(...) addDoneOnKeyboardWithTarget_action_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addDoneOnKeyboardWithTarget_action_titleText;

#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...) addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;

#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...) addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;

#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...) addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;

#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...) addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;

#ifndef shouldHideTitle
#define shouldHideTitle(...) shouldHideTitle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)shouldHideTitle;

#ifndef customPreviousTarget_action
#define customPreviousTarget_action(...) customPreviousTarget_action(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)customPreviousTarget_action;

#ifndef customNextTarget_action
#define customNextTarget_action(...) customNextTarget_action(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)customNextTarget_action;

#ifndef customDoneTarget_action
#define customDoneTarget_action(...) customDoneTarget_action(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)customDoneTarget_action;

#ifndef addRightButtonOnKeyboardWithText_target_action
#define addRightButtonOnKeyboardWithText_target_action(...) addRightButtonOnKeyboardWithText_target_action(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addRightButtonOnKeyboardWithText_target_action;

#ifndef addDoneOnKeyboardWithTarget_action
#define addDoneOnKeyboardWithTarget_action(...) addDoneOnKeyboardWithTarget_action(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addDoneOnKeyboardWithTarget_action;

#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...) addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;

#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...) addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;

#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...) addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;

#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...) addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;

#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...) addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;

#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...) addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;

#ifndef keyboardDistanceFromTextField
#define keyboardDistanceFromTextField(...) keyboardDistanceFromTextField(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)keyboardDistanceFromTextField;

- (MLChainParamBlock4UIView)addSubnode;

- (MLChainParamBlock4UIView)asyncdisplaykit_node;

- (MLChainParamBlock4UIView)asyncdisplaykit_cancelAsyncTransactions;

- (MLChainParamBlock4UIView)asyncdisplaykit_asyncTransactionContainerStateDidChange;

#ifndef asyncdisplaykit_setAsyncTransactionContainer
#define asyncdisplaykit_setAsyncTransactionContainer(...) asyncdisplaykit_setAsyncTransactionContainer(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)asyncdisplaykit_setAsyncTransactionContainer;

- (MLChainParamBlock4UIView)resignFirstResponderCommonMothed;

- (MLChainParamBlock4UIView)setupSelfNameCellXibOnSelfWithReuseIDDictionary;

- (MLChainParamBlock4UIView)setupSelfNameCellXibOnSelf;

- (MLChainParamBlock4UIView)setupSelfNameCollectionViewCellXibOnSelf;

#ifndef addWidth_addHeight
#define addWidth_addHeight(...) addWidth_addHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addWidth_addHeight;

#ifndef cornerRadius_borderColor
#define cornerRadius_borderColor(...) cornerRadius_borderColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)cornerRadius_borderColor;

#ifndef width_height
#define width_height(...) width_height(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)width_height;

#ifndef moveHorizontal_vertical
#define moveHorizontal_vertical(...) moveHorizontal_vertical(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)moveHorizontal_vertical;

#ifndef moveHorizontal_vertical_addWidth_addHeight
#define moveHorizontal_vertical_addWidth_addHeight(...) moveHorizontal_vertical_addWidth_addHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)moveHorizontal_vertical_addWidth_addHeight;

#ifndef moveToHorizontal_toVertical
#define moveToHorizontal_toVertical(...) moveToHorizontal_toVertical(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)moveToHorizontal_toVertical;

#ifndef moveToHorizontal_toVertical_setWidth_setHeight
#define moveToHorizontal_toVertical_setWidth_setHeight(...) moveToHorizontal_toVertical_setWidth_setHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)moveToHorizontal_toVertical_setWidth_setHeight;

#ifndef addWidth
#define addWidth(...) addWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addWidth;

#ifndef addHeight
#define addHeight(...) addHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addHeight;

#ifndef x
#define x(...) x(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)x;

#ifndef y
#define y(...) y(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)y;

#ifndef cornerRadius
#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)cornerRadius;

- (MLChainParamBlock4UIView)tapEvent;

- (MLChainParamBlock4UIView)addFullScreenShade;

#ifndef addFullScreenShadeWithTapEvent
#define addFullScreenShadeWithTapEvent(...) addFullScreenShadeWithTapEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addFullScreenShadeWithTapEvent;

- (MLChainParamBlock4UIView)shadeView;

- (MLChainParamBlock4UIView)addFullScreenClearColorShade;

#ifndef addFullScreenClearColorShadeWithTapEvent
#define addFullScreenClearColorShadeWithTapEvent(...) addFullScreenClearColorShadeWithTapEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)addFullScreenClearColorShadeWithTapEvent;

- (MLChainParamBlock4UIView)clearColorShadeView;

- (MLChainParamBlock4UIView)drawRectViewArray;

#ifndef drawRectBlock
#define drawRectBlock(...) drawRectBlock(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawRectBlock;

#ifndef startDrawInsideWithBlock
#define startDrawInsideWithBlock(...) startDrawInsideWithBlock(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)startDrawInsideWithBlock;

- (MLChainParamBlock4UIView)removeAllDrawRectViews;

- (MLChainParamBlock4UIView)removeLastDrawRectView;

#ifndef configDrawRectBlock
#define configDrawRectBlock(...) configDrawRectBlock(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)configDrawRectBlock;

#ifndef setupSelfNameXibOnSelfWithSerialNumber
#define setupSelfNameXibOnSelfWithSerialNumber(...) setupSelfNameXibOnSelfWithSerialNumber(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)setupSelfNameXibOnSelfWithSerialNumber;

- (MLChainParamBlock4UIView)setupSelfNameXibOnSelf;

- (MLChainParamBlock4UIView)tapAction;

- (MLChainParamBlock4UIView)swipeAction;

- (MLChainParamBlock4UIView)panAction;

- (MLChainParamBlock4UIView)pinchAction;

- (MLChainParamBlock4UIView)rotationAction;

#ifndef tapWithConfig_event
#define tapWithConfig_event(...) tapWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)tapWithConfig_event;

#ifndef swipeWithConfig_event
#define swipeWithConfig_event(...) swipeWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)swipeWithConfig_event;

#ifndef longPressWithConfig_event
#define longPressWithConfig_event(...) longPressWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)longPressWithConfig_event;

#ifndef panWithConfig_event
#define panWithConfig_event(...) panWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)panWithConfig_event;

#ifndef pinchWithConfig_event
#define pinchWithConfig_event(...) pinchWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)pinchWithConfig_event;

#ifndef rotationWithConfig_event
#define rotationWithConfig_event(...) rotationWithConfig_event(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotationWithConfig_event;

- (MLChainParamBlock4UIView)longPressAction;

- (MLChainParamBlock4UIView)cam_addConstraints_forKey;

- (MLChainParamBlock4UIView)cam_removeAllConstraintsForKey;

- (MLChainParamBlock4UIView)cam_addConstraint_forKey;

- (MLChainParamBlock4UIView)cam_clearAllConstraintsForKey;

#ifndef cam_rotateWithDeviceOrientation_animated
#define cam_rotateWithDeviceOrientation_animated(...) cam_rotateWithDeviceOrientation_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)cam_rotateWithDeviceOrientation_animated;

#ifndef cam_setHidden_animated
#define cam_setHidden_animated(...) cam_setHidden_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)cam_setHidden_animated;

#ifndef cam_setHidden_delay_animated
#define cam_setHidden_delay_animated(...) cam_setHidden_delay_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)cam_setHidden_delay_animated;

- (MLChainParamBlock4UIView)abSetLayoutDebuggingColor;

- (MLChainParamBlock4UIView)value_forKey;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)enabled;

- (MLChainParamBlock4UIView)nsli_addConstraint;

- (MLChainParamBlock4UIView)nsis_valueOfVariable_didChangeInEngine;

- (MLChainParamBlock4UIView)engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;

- (MLChainParamBlock4UIView)constraintsDidChangeInEngine;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)bounds;

- (MLChainParamBlock4UIView)addAnimation_forKey;

#ifndef transform
#define transform(...) transform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef transform_
#define transform_(...)  transform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)transform;

- (MLChainParamBlock4UIView)needsLayout;

- (MLChainParamBlock4UIView)needsDisplay;

#ifndef position
#define position(...) position(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef position_
#define position_(...)  position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)position;

#ifndef needsDisplayInRect
#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef needsDisplayInRect_
#define needsDisplayInRect_(...)  needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)needsDisplayInRect;

- (MLChainParamBlock4UIView)layoutIfNeeded;

#ifndef drawLayer_inContext
#define drawLayer_inContext(...) drawLayer_inContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawLayer_inContext;

- (MLChainParamBlock4UIView)layoutSublayersOfLayer;

#ifndef needsDisplayOnBoundsChange
#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)needsDisplayOnBoundsChange;

#ifndef userInteractionEnabled
#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)userInteractionEnabled;

#ifndef clipsToBounds
#define clipsToBounds(...) clipsToBounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clipsToBounds;

#ifndef alpha
#define alpha(...) alpha(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)alpha;

- (MLChainParamBlock4UIView)didMoveToWindow;

- (MLChainParamBlock4UIView)invalidateIntrinsicContentSize;

- (MLChainParamBlock4UIView)bringSubviewToFront;

- (MLChainParamBlock4UIView)layoutSubviews;

#ifndef contentScaleFactor
#define contentScaleFactor(...) contentScaleFactor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentScaleFactor;

#ifndef insertSubview_atIndex
#define insertSubview_atIndex(...) insertSubview_atIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)insertSubview_atIndex;

#ifndef clipsSubviews
#define clipsSubviews(...) clipsSubviews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clipsSubviews;

- (MLChainParamBlock4UIView)sendSubviewToBack;

- (MLChainParamBlock4UIView)traitCollectionDidChange;

- (MLChainParamBlock4UIView)insertSubview_below;

- (MLChainParamBlock4UIView)insertSubview_belowSubview;

#ifndef contentMode
#define contentMode(...) contentMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentMode;

- (MLChainParamBlock4UIView)addGestureRecognizer;

- (MLChainParamBlock4UIView)removeGestureRecognizer;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)semanticContentAttribute;

#ifndef translatesAutoresizingMaskIntoConstraints
#define translatesAutoresizingMaskIntoConstraints(...) translatesAutoresizingMaskIntoConstraints(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)translatesAutoresizingMaskIntoConstraints;

- (MLChainParamBlock4UIView)addConstraints;

- (MLChainParamBlock4UIView)updateUserActivityState;

- (MLChainParamBlock4UIView)restoreUserActivityState;

- (MLChainParamBlock4UIView)needsPreferredFocusedItemUpdate;

- (MLChainParamBlock4UIView)needsFocusUpdate;

#ifndef center
#define center(...) center(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef center_
#define center_(...)  center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)center;

- (MLChainParamBlock4UIView)layoutBelowIfNeeded;

#ifndef gestureEnded
#define gestureEnded(...) gestureEnded(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureEnded;

- (MLChainParamBlock4UIView)updatePreferredFocusedItemIfNeeded;

- (MLChainParamBlock4UIView)updateFocusIfNeeded;

- (MLChainParamBlock4UIView)removeConstraints;

#ifndef clearsContextBeforeDrawing
#define clearsContextBeforeDrawing(...) clearsContextBeforeDrawing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clearsContextBeforeDrawing;

- (MLChainParamBlock4UIView)addLayoutGuide;

#ifndef layoutMarginsFollowReadableWidth
#define layoutMarginsFollowReadableWidth(...) layoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)layoutMarginsFollowReadableWidth;

- (MLChainParamBlock4UIView)previewingSegueTemplateStorage;

- (MLChainParamBlock4UIView)removeAllGestureRecognizers;

- (MLChainParamBlock4UIView)layoutMarginsDidChange;

- (MLChainParamBlock4UIView)forceDisplayIfNeeded;

- (MLChainParamBlock4UIView)interactionTintColor;

- (MLChainParamBlock4UIView)tintColor;

#ifndef _countOfMotionEffectsInSubtree
#define _countOfMotionEffectsInSubtree(...) _countOfMotionEffectsInSubtree(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)_countOfMotionEffectsInSubtree;

- (MLChainParamBlock4UIView)addMotionEffect;

- (MLChainParamBlock4UIView)removeMotionEffect;

#ifndef _countOfFocusedAncestorTrackingViewsInSubtree
#define _countOfFocusedAncestorTrackingViewsInSubtree(...) _countOfFocusedAncestorTrackingViewsInSubtree(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)_countOfFocusedAncestorTrackingViewsInSubtree;

- (MLChainParamBlock4UIView)didUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4UIView)willUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4UIView)willUpdateFocusToView;

- (MLChainParamBlock4UIView)focusedViewWillChange;

- (MLChainParamBlock4UIView)didUpdateFocusFromView;

- (MLChainParamBlock4UIView)focusedViewDidChange;

- (MLChainParamBlock4UIView)removeConstraint;

- (MLChainParamBlock4UIView)addConstraint;

- (MLChainParamBlock4UIView)removeLayoutGuide;

- (MLChainParamBlock4UIView)tapDelegate;

#ifndef startHeartbeat_inRunLoopMode
#define startHeartbeat_inRunLoopMode(...) startHeartbeat_inRunLoopMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)startHeartbeat_inRunLoopMode;

#ifndef stopHeartbeat
#define stopHeartbeat(...) stopHeartbeat(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)stopHeartbeat;

#ifndef layoutMargins
#define layoutMargins(...) layoutMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef layoutMargins_
#define layoutMargins_(...)  layoutMargins(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)layoutMargins;

#ifndef preservesSuperviewLayoutMargins
#define preservesSuperviewLayoutMargins(...) preservesSuperviewLayoutMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)preservesSuperviewLayoutMargins;

#ifndef tintAdjustmentMode
#define tintAdjustmentMode(...) tintAdjustmentMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)tintAdjustmentMode;

- (MLChainParamBlock4UIView)tintColorDidChange;

- (MLChainParamBlock4UIView)interactionTintColorDidChange;

- (MLChainParamBlock4UIView)maskView;

- (MLChainParamBlock4UIView)motionEffects;

#ifndef tag
#define tag(...) tag(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)tag;

#ifndef resizeSubviewsWithOldSize
#define resizeSubviewsWithOldSize(...) resizeSubviewsWithOldSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef resizeSubviewsWithOldSize_
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)resizeSubviewsWithOldSize;

#ifndef resizeWithOldSuperviewSize
#define resizeWithOldSuperviewSize(...) resizeWithOldSuperviewSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef resizeWithOldSuperviewSize_
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)resizeWithOldSuperviewSize;

#ifndef multipleTouchEnabled
#define multipleTouchEnabled(...) multipleTouchEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)multipleTouchEnabled;

#ifndef exclusiveTouch
#define exclusiveTouch(...) exclusiveTouch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)exclusiveTouch;

#ifndef frame_forFields
#define frame_forFields(...) frame_forFields(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frame_forFields;

#ifndef rotationBy
#define rotationBy(...) rotationBy(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotationBy;

#ifndef autoresizesSubviews
#define autoresizesSubviews(...) autoresizesSubviews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)autoresizesSubviews;

- (MLChainParamBlock4UIView)sizeToFit;

#ifndef viewTraversalMark
#define viewTraversalMark(...) viewTraversalMark(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)viewTraversalMark;

- (MLChainParamBlock4UIView)willMoveToWindow;

- (MLChainParamBlock4UIView)deferredBecomeFirstResponder;

- (MLChainParamBlock4UIView)movedFromSuperview;

- (MLChainParamBlock4UIView)didMoveToSuperview;

#ifndef exchangeSubviewAtIndex_withSubviewAtIndex
#define exchangeSubviewAtIndex_withSubviewAtIndex(...) exchangeSubviewAtIndex_withSubviewAtIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)exchangeSubviewAtIndex_withSubviewAtIndex;

- (MLChainParamBlock4UIView)insertSubview_aboveSubview;

- (MLChainParamBlock4UIView)didAddSubview;

- (MLChainParamBlock4UIView)willMoveToSuperview;

- (MLChainParamBlock4UIView)insertSubview_above;

- (MLChainParamBlock4UIView)movedToSuperview;

- (MLChainParamBlock4UIView)viewWillMoveToSuperview;

- (MLChainParamBlock4UIView)viewDidMoveToSuperview;

- (MLChainParamBlock4UIView)movedFromWindow;

- (MLChainParamBlock4UIView)movedToWindow;

#ifndef clearsContext
#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clearsContext;

- (MLChainParamBlock4UIView)recursivelyForceDisplayIfNeeded;

#ifndef contentStretch
#define contentStretch(...) contentStretch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentStretch_
#define contentStretch_(...)  contentStretch(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentStretch;

#ifndef fixedBackgroundPattern
#define fixedBackgroundPattern(...) fixedBackgroundPattern(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)fixedBackgroundPattern;

#ifndef contentsPosition
#define contentsPosition(...) contentsPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentsPosition;

#ifndef skipsSubviewEnumeration
#define skipsSubviewEnumeration(...) skipsSubviewEnumeration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)skipsSubviewEnumeration;

- (MLChainParamBlock4UIView)gestureRecognizers;

#ifndef gesturesEnabled
#define gesturesEnabled(...) gesturesEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gesturesEnabled;

#ifndef deliversTouchesForGesturesToSuperview
#define deliversTouchesForGesturesToSuperview(...) deliversTouchesForGesturesToSuperview(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)deliversTouchesForGesturesToSuperview;

#ifndef deliversButtonsForGesturesToSuperview
#define deliversButtonsForGesturesToSuperview(...) deliversButtonsForGesturesToSuperview(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)deliversButtonsForGesturesToSuperview;

- (MLChainParamBlock4UIView)animator_stopAnimation;

- (MLChainParamBlock4UIView)animator_startAnimation;

- (MLChainParamBlock4UIView)updateConstraints;

#ifndef gestureStarted
#define gestureStarted(...) gestureStarted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureStarted;

#ifndef gestureChanged
#define gestureChanged(...) gestureChanged(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureChanged;

- (MLChainParamBlock4UIView)needsUpdateConstraints;

#ifndef zoomToScale
#define zoomToScale(...) zoomToScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)zoomToScale;

#ifndef rotateToDegrees
#define rotateToDegrees(...) rotateToDegrees(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotateToDegrees;

- (MLChainParamBlock4UIView)gestureDelegate;

#ifndef enabledGestures
#define enabledGestures(...) enabledGestures(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)enabledGestures;

#ifndef value_forGestureAttribute
#define value_forGestureAttribute(...) value_forGestureAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)value_forGestureAttribute;

#ifndef rotationDegrees_duration
#define rotationDegrees_duration(...) rotationDegrees_duration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotationDegrees_duration;

#ifndef reduceWidth
#define reduceWidth(...) reduceWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)reduceWidth;

#ifndef contentCompressionResistancePriority_forAxis
#define contentCompressionResistancePriority_forAxis(...) contentCompressionResistancePriority_forAxis(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentCompressionResistancePriority_forAxis;

#ifndef contentHuggingPriority_forAxis
#define contentHuggingPriority_forAxis(...) contentHuggingPriority_forAxis(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentHuggingPriority_forAxis;

- (MLChainParamBlock4UIView)updateConstraintsIfNeeded;

#ifndef drawRect_forViewPrintFormatter
#define drawRect_forViewPrintFormatter(...) drawRect_forViewPrintFormatter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawRect_forViewPrintFormatter;

- (MLChainParamBlock4UIView)exerciseAmbiguityInLayout;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frame;

- (MLChainParamBlock4UIView)encodeWithCoder;

- (MLChainParamBlock4UIView)backgroundColor;

- (MLChainParamBlock4UIView)removeFromSuperview;

#ifndef hidden
#define hidden(...) hidden(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)hidden;

#ifndef opaque
#define opaque(...) opaque(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)opaque;

- (MLChainParamBlock4UIView)addSubview;

#ifndef drawRect
#define drawRect(...) drawRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawRect_
#define drawRect_(...)  drawRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawRect;

#ifndef frameOrigin
#define frameOrigin(...) frameOrigin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frameOrigin_
#define frameOrigin_(...)  frameOrigin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frameOrigin;

- (MLChainParamBlock4UIView)willRemoveSubview;

#ifndef autoresizingMask
#define autoresizingMask(...) autoresizingMask(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)autoresizingMask;

#ifndef charge
#define charge(...) charge(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)charge;

@end
