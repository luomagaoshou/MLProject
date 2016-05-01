//  
//  MLChain4NSObject.h
//  MLProject
//  
//  Created by 赖妙龙 on 2016/05/01.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChainMacro.h"
@class MLChain4NSObject;
@class MLChain4UIResponder;
@class MLChain4UIControl;
@class MLChain4UIView;
@class MLChain4UIButton;
@class MLChain4UITextField;
@class MLChain4UIScrollView;
@class MLChain4UITextView;
@class MLChain4UILabel;
@class MLChain4CALayer;
@class MLChain4CAShapeLayer;
@class MLChain4CAEmitterLayer;
@class MLChain4CAEmitterCell;
@class MLChain4CAAnimation;
@class MLChain4CAPropertyAnimation;
@class MLChain4CABasicAnimation;

ml_chain_block_maker(NSObject);
@interface MLChain4NSObject:NSObject
@property (nonatomic, strong)NSObject *object;
- (instancetype)and;
- (instancetype)with;
- (MLChain4NSObject *)lookUpMakerOfNSObject;
- (MLChain4UIResponder *)lookUpMakerOfUIResponder;
- (MLChain4UIControl *)lookUpMakerOfUIControl;
- (MLChain4UIView *)lookUpMakerOfUIView;
- (MLChain4UIButton *)lookUpMakerOfUIButton;
- (MLChain4UITextField *)lookUpMakerOfUITextField;
- (MLChain4UIScrollView *)lookUpMakerOfUIScrollView;
- (MLChain4UITextView *)lookUpMakerOfUITextView;
- (MLChain4UILabel *)lookUpMakerOfUILabel;
- (MLChain4CALayer *)lookUpMakerOfCALayer;
- (MLChain4CAShapeLayer *)lookUpMakerOfCAShapeLayer;
- (MLChain4CAEmitterLayer *)lookUpMakerOfCAEmitterLayer;
- (MLChain4CAEmitterCell *)lookUpMakerOfCAEmitterCell;
- (MLChain4CAAnimation *)lookUpMakerOfCAAnimation;
- (MLChain4CAPropertyAnimation *)lookUpMakerOfCAPropertyAnimation;
- (MLChain4CABasicAnimation *)lookUpMakerOfCABasicAnimation;

- (MLChainParamBlock4NSObject)updateOnClassInjection;

- (MLChainParamBlock4NSObject)updateOnResourceInjection;

- (MLChainParamBlock4NSObject)modelEncodeWithCoder;

#ifndef addObserverBlockForKeyPath_block
#define addObserverBlockForKeyPath_block(...) addObserverBlockForKeyPath_block(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)addObserverBlockForKeyPath_block;

- (MLChainParamBlock4NSObject)removeObserverBlocksForKeyPath;

- (MLChainParamBlock4NSObject)removeObserverBlocks;

#ifndef performSelectorWithArgs_afterDelay
#define performSelectorWithArgs_afterDelay(...) performSelectorWithArgs_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorWithArgs_afterDelay;

#ifndef performSelectorWithArgsInBackground
#define performSelectorWithArgsInBackground(...) performSelectorWithArgsInBackground(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorWithArgsInBackground;

#ifndef performSelector_afterDelay
#define performSelector_afterDelay(...) performSelector_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_afterDelay;

#ifndef associateValue_withKey
#define associateValue_withKey(...) associateValue_withKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)associateValue_withKey;

#ifndef associateWeakValue_withKey
#define associateWeakValue_withKey(...) associateWeakValue_withKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)associateWeakValue_withKey;

- (MLChainParamBlock4NSObject)removeAssociatedValues;

- (MLChainParamBlock4NSObject)rac_addDeallocDisposable;

- (MLChainParamBlock4NSObject)mj_encode;

- (MLChainParamBlock4NSObject)mj_decode;

- (MLChainParamBlock4NSObject)objectPropertyAllKeyValueNil;

#ifndef cl_json_serializeValue
#define cl_json_serializeValue(...) cl_json_serializeValue(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)cl_json_serializeValue;

- (MLChainParamBlock4NSObject)postNotificationWithDescription;

#ifndef fromNotifySafeThreadPerformSelector_withObject
#define fromNotifySafeThreadPerformSelector_withObject(...) fromNotifySafeThreadPerformSelector_withObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)fromNotifySafeThreadPerformSelector_withObject;

- (MLChainParamBlock4NSObject)allowSafePerformSelector;

- (MLChainParamBlock4NSObject)disallowSafePerformSelector;

- (MLChainParamBlock4NSObject)fromNotifySafeThreadPostNotificationName_object_userInfo;

- (MLChainParamBlock4NSObject)fromMainThreadPostNotificationName_object_userInfo;

- (MLChainParamBlock4NSObject)cplEncodePropertiesWithCoder;

- (MLChainParamBlock4NSObject)cplDecodePropertiesFromCoder;

- (MLChainParamBlock4NSObject)cplCopyPropertiesFromObject;

- (MLChainParamBlock4NSObject)cplCopyProperties_fromObject;

- (MLChainParamBlock4NSObject)mf_lock;

- (MLChainParamBlock4NSObject)mf_unlock;

- (MLChainParamBlock4NSObject)mf_lockWithPriority;

#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...) performSelector_withObject_afterDelay_ignoreMenuTracking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay_ignoreMenuTracking;

- (MLChainParamBlock4NSObject)cn_updateDictionaryForKey_withChanges;

- (MLChainParamBlock4NSObject)willUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4NSObject)willUpdateFocusToView;

- (MLChainParamBlock4NSObject)didUpdateFocusFromView;

- (MLChainParamBlock4NSObject)accessibilityIdentifier;

- (MLChainParamBlock4NSObject)accessibilitySetIdentification;

- (MLChainParamBlock4NSObject)accessibilityElements;

- (MLChainParamBlock4NSObject)accessibilityIncrement;

- (MLChainParamBlock4NSObject)accessibilityDecrement;

- (MLChainParamBlock4NSObject)accessibilityCustomActions;

- (MLChainParamBlock4NSObject)accessibilityElementDidBecomeFocused;

- (MLChainParamBlock4NSObject)accessibilityElementDidLoseFocus;

- (MLChainParamBlock4NSObject)accessibilityLanguage;

#ifndef accessibilityElementsHidden
#define accessibilityElementsHidden(...) accessibilityElementsHidden(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityElementsHidden;

#ifndef accessibilityViewIsModal
#define accessibilityViewIsModal(...) accessibilityViewIsModal(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityViewIsModal;

#ifndef shouldGroupAccessibilityChildren
#define shouldGroupAccessibilityChildren(...) shouldGroupAccessibilityChildren(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)shouldGroupAccessibilityChildren;

- (MLChainParamBlock4NSObject)accessibilityHint;

#ifndef accessibilityFrame
#define accessibilityFrame(...) accessibilityFrame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef accessibilityFrame_
#define accessibilityFrame_(...)  accessibilityFrame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityFrame;

- (MLChainParamBlock4NSObject)accessibilityPath;

#ifndef accessibilityActivationPoint
#define accessibilityActivationPoint(...) accessibilityActivationPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef accessibilityActivationPoint_
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityActivationPoint;

#ifndef accessibilityTraits
#define accessibilityTraits(...) accessibilityTraits(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityTraits;

#ifndef isAccessibilityElement
#define isAccessibilityElement(...) isAccessibilityElement(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)isAccessibilityElement;

- (MLChainParamBlock4NSObject)accessibilityContainer;

#ifndef accessibilityNavigationStyle
#define accessibilityNavigationStyle(...) accessibilityNavigationStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityNavigationStyle;

- (MLChainParamBlock4NSObject)accessibilityHeaderElements;

- (MLChainParamBlock4NSObject)accessibilityLabel;

- (MLChainParamBlock4NSObject)accessibilityValue;

- (MLChainParamBlock4NSObject)awakeFromNib;

- (MLChainParamBlock4NSObject)prepareForInterfaceBuilder;

- (MLChainParamBlock4NSObject)releaseOnMainThread;

- (MLChainParamBlock4NSObject)encodeWithCAMLWriter;

- (MLChainParamBlock4NSObject)CA_prepareRenderValue;

- (MLChainParamBlock4NSObject)removeObservation;

- (MLChainParamBlock4NSObject)receiveObservedValue;

- (MLChainParamBlock4NSObject)receiveObservedError;

- (MLChainParamBlock4NSObject)finishObserving;

#ifndef performSelector_onThread_withObject_waitUntilDone_modes
#define performSelector_onThread_withObject_waitUntilDone_modes(...) performSelector_onThread_withObject_waitUntilDone_modes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone_modes;

#ifndef performSelectorOnMainThread_withObject_waitUntilDone
#define performSelectorOnMainThread_withObject_waitUntilDone(...) performSelectorOnMainThread_withObject_waitUntilDone(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone;

#ifndef performSelectorInBackground_withObject
#define performSelectorInBackground_withObject(...) performSelectorInBackground_withObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorInBackground_withObject;

#ifndef performSelector_onThread_withObject_waitUntilDone
#define performSelector_onThread_withObject_waitUntilDone(...) performSelector_onThread_withObject_waitUntilDone(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone;

#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...) performSelectorOnMainThread_withObject_waitUntilDone_modes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone_modes;

#ifndef performSelector_withObject_afterDelay_inModes
#define performSelector_withObject_afterDelay_inModes(...) performSelector_withObject_afterDelay_inModes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay_inModes;

#ifndef performSelector_withObject_afterDelay
#define performSelector_withObject_afterDelay(...) performSelector_withObject_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay;

#ifndef performSelector_object_afterDelay
#define performSelector_object_afterDelay(...) performSelector_object_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_object_afterDelay;

- (MLChainParamBlock4NSObject)observation_forObservingKeyPath;

- (MLChainParamBlock4NSObject)removeObservation_forObservableKeyPath;

#ifndef observationInfo
#define observationInfo(...) observationInfo(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)observationInfo;

- (MLChainParamBlock4NSObject)willChangeValueForKey;

- (MLChainParamBlock4NSObject)didChangeValueForKey;

#ifndef willChange_valuesAtIndexes_forKey
#define willChange_valuesAtIndexes_forKey(...) willChange_valuesAtIndexes_forKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)willChange_valuesAtIndexes_forKey;

#ifndef didChange_valuesAtIndexes_forKey
#define didChange_valuesAtIndexes_forKey(...) didChange_valuesAtIndexes_forKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)didChange_valuesAtIndexes_forKey;

#ifndef willChangeValueForKey_withSetMutation_usingObjects
#define willChangeValueForKey_withSetMutation_usingObjects(...) willChangeValueForKey_withSetMutation_usingObjects(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)willChangeValueForKey_withSetMutation_usingObjects;

#ifndef didChangeValueForKey_withSetMutation_usingObjects
#define didChangeValueForKey_withSetMutation_usingObjects(...) didChangeValueForKey_withSetMutation_usingObjects(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)didChangeValueForKey_withSetMutation_usingObjects;

#ifndef removeObserver_forKeyPath_context
#define removeObserver_forKeyPath_context(...) removeObserver_forKeyPath_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)removeObserver_forKeyPath_context;

#ifndef addObserver_forKeyPath_options_context
#define addObserver_forKeyPath_options_context(...) addObserver_forKeyPath_options_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)addObserver_forKeyPath_options_context;

- (MLChainParamBlock4NSObject)removeObserver_forKeyPath;

#ifndef observeValueForKeyPath_ofObject_change_context
#define observeValueForKeyPath_ofObject_change_context(...) observeValueForKeyPath_ofObject_change_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)observeValueForKeyPath_ofObject_change_context;

- (MLChainParamBlock4NSObject)value_forKey;

- (MLChainParamBlock4NSObject)value_forUndefinedKey;

- (MLChainParamBlock4NSObject)nilValueForKey;

- (MLChainParamBlock4NSObject)value_forKeyPath;

- (MLChainParamBlock4NSObject)valuesForKeysWithDictionary;

#ifndef doesNotRecognizeSelector
#define doesNotRecognizeSelector(...) doesNotRecognizeSelector(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)doesNotRecognizeSelector;

@end
