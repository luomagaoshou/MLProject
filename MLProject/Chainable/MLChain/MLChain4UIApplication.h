//  
//  MLChain4UIApplication.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"



@interface MLChain4UIApplication:MLChain4UIResponder
- (UIApplication *)chainObject;
#ifndef networkActivityInfo                                  
#define networkActivityInfo(...)  networkActivityInfo(@"setNetworkActivityInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setNetworkActivityInfo: '@'
     */
- (MLChain4UIApplication *(^)())networkActivityInfo;


#ifndef incrementNetworkActivityCount                              
#define incrementNetworkActivityCount(...)  incrementNetworkActivityCount(@"incrementNetworkActivityCount")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> incrementNetworkActivityCount     */
- (MLChain4UIApplication *(^)())incrementNetworkActivityCount;


#ifndef decrementNetworkActivityCount                              
#define decrementNetworkActivityCount(...)  decrementNetworkActivityCount(@"decrementNetworkActivityCount")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> decrementNetworkActivityCount     */
- (MLChain4UIApplication *(^)())decrementNetworkActivityCount;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDelegate: '@'
     */
- (MLChain4UIApplication *(^)())delegate;


#ifndef openURL_options_completionHandler                                  
#define openURL_options_completionHandler(...)  openURL_options_completionHandler(@"openURL:options:completionHandler:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   openURL: '@'
  options: '@'
  completionHandler: '@'
     */
- (MLChain4UIApplication *(^)())openURL_options_completionHandler;


#ifndef startedTest                                  
#define startedTest(...)  startedTest(@"startedTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   startedTest: '@'
     */
- (MLChain4UIApplication *(^)())startedTest;


#ifndef finishedTest                                  
#define finishedTest(...)  finishedTest(@"finishedTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest;


#ifndef applicationSupportsShakeToEdit                                  
#define applicationSupportsShakeToEdit(...)  applicationSupportsShakeToEdit(@"setApplicationSupportsShakeToEdit:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setApplicationSupportsShakeToEdit: 'B'
     */
- (MLChain4UIApplication *(^)())applicationSupportsShakeToEdit;


#ifndef idleTimerDisabled                                  
#define idleTimerDisabled(...)  idleTimerDisabled(@"setIdleTimerDisabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setIdleTimerDisabled: 'B'
     */
- (MLChain4UIApplication *(^)())idleTimerDisabled;


#ifndef applicationWillSuspend                              
#define applicationWillSuspend(...)  applicationWillSuspend(@"applicationWillSuspend")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationWillSuspend     */
- (MLChain4UIApplication *(^)())applicationWillSuspend;


#ifndef finishedTest_extraResults                                  
#define finishedTest_extraResults(...)  finishedTest_extraResults(@"finishedTest:extraResults:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  extraResults: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_extraResults;


#ifndef receivesMemoryWarnings                                  
#define receivesMemoryWarnings(...)  receivesMemoryWarnings(@"setReceivesMemoryWarnings:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setReceivesMemoryWarnings: 'B'
     */
- (MLChain4UIApplication *(^)())receivesMemoryWarnings;


#ifndef pushRunLoopMode_requester                                  
#define pushRunLoopMode_requester(...)  pushRunLoopMode_requester(@"pushRunLoopMode:requester:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pushRunLoopMode: '@'
  requester: '@'
     */
- (MLChain4UIApplication *(^)())pushRunLoopMode_requester;


#ifndef popRunLoopMode_requester                                  
#define popRunLoopMode_requester(...)  popRunLoopMode_requester(@"popRunLoopMode:requester:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   popRunLoopMode: '@'
  requester: '@'
     */
- (MLChain4UIApplication *(^)())popRunLoopMode_requester;


#ifndef statusBarStyle_animationParameters                                  
#define statusBarStyle_animationParameters(...)  statusBarStyle_animationParameters(@"setStatusBarStyle:animationParameters:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
  animationParameters: '@'
     */
- (MLChain4UIApplication *(^)())statusBarStyle_animationParameters;


#ifndef statusBarStyle                                  
#define statusBarStyle(...)  statusBarStyle(@"setStatusBarStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
     */
- (MLChain4UIApplication *(^)())statusBarStyle;


#ifndef statusBarHidden_animationParameters                                  
#define statusBarHidden_animationParameters(...)  statusBarHidden_animationParameters(@"setStatusBarHidden:animationParameters:", (int)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  animationParameters: '@'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_animationParameters;


#ifndef statusBarHidden                                  
#define statusBarHidden(...)  statusBarHidden(@"setStatusBarHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarHidden;


#ifndef statusBarHidden_animationParameters_changeApplicationFlag                                  
#define statusBarHidden_animationParameters_changeApplicationFlag(...)  statusBarHidden_animationParameters_changeApplicationFlag(@"setStatusBarHidden:animationParameters:changeApplicationFlag:", (int)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  animationParameters: '@'
  changeApplicationFlag: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_animationParameters_changeApplicationFlag;


#ifndef statusBarHidden_duration_changeApplicationFlag                                  
#define statusBarHidden_duration_changeApplicationFlag(...)  statusBarHidden_duration_changeApplicationFlag(@"setStatusBarHidden:duration:changeApplicationFlag:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  duration: 'd'
  changeApplicationFlag: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_duration_changeApplicationFlag;


#ifndef statusBarHidden_withAnimation                                  
#define statusBarHidden_withAnimation(...)  statusBarHidden_withAnimation(@"setStatusBarHidden:withAnimation:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  withAnimation: 'q'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_withAnimation;


#ifndef statusBarOrientation_animationParameters_notifySpringBoardAndFence_updateBlock                                  
#define statusBarOrientation_animationParameters_notifySpringBoardAndFence_updateBlock(...)  statusBarOrientation_animationParameters_notifySpringBoardAndFence_updateBlock(@"setStatusBarOrientation:animationParameters:notifySpringBoardAndFence:updateBlock:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
  animationParameters: '@'
  notifySpringBoardAndFence: 'B'
  updateBlock: '@'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation_animationParameters_notifySpringBoardAndFence_updateBlock;


#ifndef statusBarOrientation_animationParameters                                  
#define statusBarOrientation_animationParameters(...)  statusBarOrientation_animationParameters(@"setStatusBarOrientation:animationParameters:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
  animationParameters: '@'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation_animationParameters;


#ifndef statusBarOrientation_animationParameters_notifySpringBoardAndFence                                  
#define statusBarOrientation_animationParameters_notifySpringBoardAndFence(...)  statusBarOrientation_animationParameters_notifySpringBoardAndFence(@"setStatusBarOrientation:animationParameters:notifySpringBoardAndFence:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
  animationParameters: '@'
  notifySpringBoardAndFence: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation_animationParameters_notifySpringBoardAndFence;


#ifndef removeStatusBarStyleOverrides                                  
#define removeStatusBarStyleOverrides(...)  removeStatusBarStyleOverrides(@"removeStatusBarStyleOverrides:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeStatusBarStyleOverrides: 'i'
     */
- (MLChain4UIApplication *(^)())removeStatusBarStyleOverrides;


#ifndef addStatusBarStyleOverrides                                  
#define addStatusBarStyleOverrides(...)  addStatusBarStyleOverrides(@"addStatusBarStyleOverrides:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addStatusBarStyleOverrides: 'i'
     */
- (MLChain4UIApplication *(^)())addStatusBarStyleOverrides;


#ifndef glowAnimationEnabled_forStyle                                  
#define glowAnimationEnabled_forStyle(...)  glowAnimationEnabled_forStyle(@"setGlowAnimationEnabled:forStyle:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setGlowAnimationEnabled: 'B'
  forStyle: 'q'
     */
- (MLChain4UIApplication *(^)())glowAnimationEnabled_forStyle;


#ifndef doubleHeightMode_glowAnimationEnabled                                  
#define doubleHeightMode_glowAnimationEnabled(...)  doubleHeightMode_glowAnimationEnabled(@"setDoubleHeightMode:glowAnimationEnabled:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDoubleHeightMode: 'i'
  glowAnimationEnabled: 'B'
     */
- (MLChain4UIApplication *(^)())doubleHeightMode_glowAnimationEnabled;


#ifndef applicationWillSuspendForEventsOnly                              
#define applicationWillSuspendForEventsOnly(...)  applicationWillSuspendForEventsOnly(@"applicationWillSuspendForEventsOnly")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationWillSuspendForEventsOnly     */
- (MLChain4UIApplication *(^)())applicationWillSuspendForEventsOnly;


#ifndef applicationDidResumeForEventsOnly                              
#define applicationDidResumeForEventsOnly(...)  applicationDidResumeForEventsOnly(@"applicationDidResumeForEventsOnly")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationDidResumeForEventsOnly     */
- (MLChain4UIApplication *(^)())applicationDidResumeForEventsOnly;


#ifndef applicationWillSuspendUnderLock                              
#define applicationWillSuspendUnderLock(...)  applicationWillSuspendUnderLock(@"applicationWillSuspendUnderLock")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationWillSuspendUnderLock     */
- (MLChain4UIApplication *(^)())applicationWillSuspendUnderLock;


#ifndef applicationDidResumeFromUnderLock                              
#define applicationDidResumeFromUnderLock(...)  applicationDidResumeFromUnderLock(@"applicationDidResumeFromUnderLock")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationDidResumeFromUnderLock     */
- (MLChain4UIApplication *(^)())applicationDidResumeFromUnderLock;


#ifndef suspendReturningToLastApp                                  
#define suspendReturningToLastApp(...)  suspendReturningToLastApp(@"suspendReturningToLastApp:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   suspendReturningToLastApp: 'B'
     */
- (MLChain4UIApplication *(^)())suspendReturningToLastApp;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())pressesCancelled_withEvent;


#ifndef proximityStateChanged                                  
#define proximityStateChanged(...)  proximityStateChanged(@"proximityStateChanged:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   proximityStateChanged: 'B'
     */
- (MLChain4UIApplication *(^)())proximityStateChanged;


#ifndef proximityEventsEnabled                                  
#define proximityEventsEnabled(...)  proximityEventsEnabled(@"setProximityEventsEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setProximityEventsEnabled: 'B'
     */
- (MLChain4UIApplication *(^)())proximityEventsEnabled;


#ifndef applicationWillTerminate                              
#define applicationWillTerminate(...)  applicationWillTerminate(@"applicationWillTerminate")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationWillTerminate     */
- (MLChain4UIApplication *(^)())applicationWillTerminate;


#ifndef applicationSuspend                              
#define applicationSuspend(...)  applicationSuspend(@"applicationSuspend")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationSuspend     */
- (MLChain4UIApplication *(^)())applicationSuspend;


#ifndef prepareSnapshotsWithAction_forScene_completion                                  
#define prepareSnapshotsWithAction_forScene_completion(...)  prepareSnapshotsWithAction_forScene_completion(@"prepareSnapshotsWithAction:forScene:completion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   prepareSnapshotsWithAction: '@'
  forScene: '@'
  completion: '@'
     */
- (MLChain4UIApplication *(^)())prepareSnapshotsWithAction_forScene_completion;


#ifndef applicationOpenToShortCut                                  
#define applicationOpenToShortCut(...)  applicationOpenToShortCut(@"applicationOpenToShortCut:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   applicationOpenToShortCut: '@'
     */
- (MLChain4UIApplication *(^)())applicationOpenToShortCut;


#ifndef applicationOpenURL                                  
#define applicationOpenURL(...)  applicationOpenURL(@"applicationOpenURL:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   applicationOpenURL: '@'
     */
- (MLChain4UIApplication *(^)())applicationOpenURL;


#ifndef prepareForDefaultImageSnapshot                              
#define prepareForDefaultImageSnapshot(...)  prepareForDefaultImageSnapshot(@"prepareForDefaultImageSnapshot")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> prepareForDefaultImageSnapshot     */
- (MLChain4UIApplication *(^)())prepareForDefaultImageSnapshot;


#ifndef prepareForDefaultImageSnapshotForScreen                                  
#define prepareForDefaultImageSnapshotForScreen(...)  prepareForDefaultImageSnapshotForScreen(@"prepareForDefaultImageSnapshotForScreen:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   prepareForDefaultImageSnapshotForScreen: '@'
     */
- (MLChain4UIApplication *(^)())prepareForDefaultImageSnapshotForScreen;


#ifndef extendSnapshotContext_forSnapshotAction                                  
#define extendSnapshotContext_forSnapshotAction(...)  extendSnapshotContext_forSnapshotAction(@"extendSnapshotContext:forSnapshotAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   extendSnapshotContext: '@'
  forSnapshotAction: '@'
     */
- (MLChain4UIApplication *(^)())extendSnapshotContext_forSnapshotAction;


#ifndef addStatusBarItem                                  
#define addStatusBarItem(...)  addStatusBarItem(@"addStatusBarItem:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addStatusBarItem: 'i'
     */
- (MLChain4UIApplication *(^)())addStatusBarItem;


#ifndef addStatusBarImageNamed                                  
#define addStatusBarImageNamed(...)  addStatusBarImageNamed(@"addStatusBarImageNamed:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addStatusBarImageNamed: '@'
     */
- (MLChain4UIApplication *(^)())addStatusBarImageNamed;


#ifndef removeStatusBarItem                                  
#define removeStatusBarItem(...)  removeStatusBarItem(@"removeStatusBarItem:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeStatusBarItem: 'i'
     */
- (MLChain4UIApplication *(^)())removeStatusBarItem;


#ifndef registerUserNotificationSettings                                  
#define registerUserNotificationSettings(...)  registerUserNotificationSettings(@"registerUserNotificationSettings:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   registerUserNotificationSettings: '@'
     */
- (MLChain4UIApplication *(^)())registerUserNotificationSettings;


#ifndef statusBarMode_interfaceOrientation_duration_animation_startTime                                  
#define statusBarMode_interfaceOrientation_duration_animation_startTime(...)  statusBarMode_interfaceOrientation_duration_animation_startTime(@"setStatusBarMode:interfaceOrientation:duration:animation:startTime:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (double)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarMode: 'i'
  interfaceOrientation: 'q'
  duration: 'f'
  animation: 'i'
  startTime: 'd'
     */
- (MLChain4UIApplication *(^)())statusBarMode_interfaceOrientation_duration_animation_startTime;


#ifndef statusBarOrientation_animation_duration                                  
#define statusBarOrientation_animation_duration(...)  statusBarOrientation_animation_duration(@"setStatusBarOrientation:animation:duration:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
  animation: 'i'
  duration: 'd'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation_animation_duration;


#ifndef statusBarStyle_duration                                  
#define statusBarStyle_duration(...)  statusBarStyle_duration(@"setStatusBarStyle:duration:", (long long)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
  duration: 'd'
     */
- (MLChain4UIApplication *(^)())statusBarStyle_duration;


#ifndef statusBarMode_interfaceOrientation_duration_animation                                  
#define statusBarMode_interfaceOrientation_duration_animation(...)  statusBarMode_interfaceOrientation_duration_animation(@"setStatusBarMode:interfaceOrientation:duration:animation:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarMode: 'i'
  interfaceOrientation: 'q'
  duration: 'f'
  animation: 'i'
     */
- (MLChain4UIApplication *(^)())statusBarMode_interfaceOrientation_duration_animation;


#ifndef statusBarMode_interfaceOrientation_duration                                  
#define statusBarMode_interfaceOrientation_duration(...)  statusBarMode_interfaceOrientation_duration(@"setStatusBarMode:interfaceOrientation:duration:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarMode: 'i'
  interfaceOrientation: 'q'
  duration: 'f'
     */
- (MLChain4UIApplication *(^)())statusBarMode_interfaceOrientation_duration;


#ifndef beginIgnoringInteractionEvents                              
#define beginIgnoringInteractionEvents(...)  beginIgnoringInteractionEvents(@"beginIgnoringInteractionEvents")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> beginIgnoringInteractionEvents     */
- (MLChain4UIApplication *(^)())beginIgnoringInteractionEvents;


#ifndef endIgnoringInteractionEvents                              
#define endIgnoringInteractionEvents(...)  endIgnoringInteractionEvents(@"endIgnoringInteractionEvents")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> endIgnoringInteractionEvents     */
- (MLChain4UIApplication *(^)())endIgnoringInteractionEvents;


#ifndef userDefaultsDidChange                                  
#define userDefaultsDidChange(...)  userDefaultsDidChange(@"userDefaultsDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   userDefaultsDidChange: '@'
     */
- (MLChain4UIApplication *(^)())userDefaultsDidChange;


#ifndef systemVolumeHUDEnabled_forAudioCategory                                  
#define systemVolumeHUDEnabled_forAudioCategory(...)  systemVolumeHUDEnabled_forAudioCategory(@"setSystemVolumeHUDEnabled:forAudioCategory:", (int)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setSystemVolumeHUDEnabled: 'B'
  forAudioCategory: '@'
     */
- (MLChain4UIApplication *(^)())systemVolumeHUDEnabled_forAudioCategory;


#ifndef didReceiveMemoryWarning                              
#define didReceiveMemoryWarning(...)  didReceiveMemoryWarning(@"didReceiveMemoryWarning")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> didReceiveMemoryWarning     */
- (MLChain4UIApplication *(^)())didReceiveMemoryWarning;


#ifndef terminateWithSuccess                              
#define terminateWithSuccess(...)  terminateWithSuccess(@"terminateWithSuccess")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> terminateWithSuccess     */
- (MLChain4UIApplication *(^)())terminateWithSuccess;


#ifndef shortcutService                                  
#define shortcutService(...)  shortcutService(@"setShortcutService:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setShortcutService: '@'
     */
- (MLChain4UIApplication *(^)())shortcutService;


#ifndef applicationDidResume                              
#define applicationDidResume(...)  applicationDidResume(@"applicationDidResume")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationDidResume     */
- (MLChain4UIApplication *(^)())applicationDidResume;


#ifndef applicationDidEndResumeAnimation                              
#define applicationDidEndResumeAnimation(...)  applicationDidEndResumeAnimation(@"applicationDidEndResumeAnimation")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationDidEndResumeAnimation     */
- (MLChain4UIApplication *(^)())applicationDidEndResumeAnimation;


#ifndef applicationDidBeginSuspendAnimation                              
#define applicationDidBeginSuspendAnimation(...)  applicationDidBeginSuspendAnimation(@"applicationDidBeginSuspendAnimation")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> applicationDidBeginSuspendAnimation     */
- (MLChain4UIApplication *(^)())applicationDidBeginSuspendAnimation;


#ifndef handleKeyEvent                                  
#define handleKeyEvent(...)  handleKeyEvent(@"handleKeyEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   handleKeyEvent: '^'
     */
- (MLChain4UIApplication *(^)())handleKeyEvent;


#ifndef lockDevice                                  
#define lockDevice(...)  lockDevice(@"lockDevice:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   lockDevice: '^'
     */
- (MLChain4UIApplication *(^)())lockDevice;


#ifndef vibrateForDuration                                  
#define vibrateForDuration(...)  vibrateForDuration(@"vibrateForDuration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   vibrateForDuration: 'i'
     */
- (MLChain4UIApplication *(^)())vibrateForDuration;


#ifndef backlightLevel                                  
#define backlightLevel(...)  backlightLevel(@"setBacklightLevel:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setBacklightLevel: 'f'
     */
- (MLChain4UIApplication *(^)())backlightLevel;


#ifndef acceleratedInX_Y_Z                                  
#define acceleratedInX_Y_Z(...)  acceleratedInX_Y_Z(@"acceleratedInX:Y:Z:", (float)metamacro_at(0, __VA_ARGS__), (float)metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   acceleratedInX: 'f'
  Y: 'f'
  Z: 'f'
     */
- (MLChain4UIApplication *(^)())acceleratedInX_Y_Z;


#ifndef handleKeyUIEvent                                  
#define handleKeyUIEvent(...)  handleKeyUIEvent(@"handleKeyUIEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   handleKeyUIEvent: '@'
     */
- (MLChain4UIApplication *(^)())handleKeyUIEvent;


#ifndef handleKeyHIDEvent                                  
#define handleKeyHIDEvent(...)  handleKeyHIDEvent(@"handleKeyHIDEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   handleKeyHIDEvent: '^'
     */
- (MLChain4UIApplication *(^)())handleKeyHIDEvent;


#ifndef expectsFaceContact_inLandscape                                  
#define expectsFaceContact_inLandscape(...)  expectsFaceContact_inLandscape(@"setExpectsFaceContact:inLandscape:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setExpectsFaceContact: 'B'
  inLandscape: 'B'
     */
- (MLChain4UIApplication *(^)())expectsFaceContact_inLandscape;


#ifndef registerForRemoteNotifications                              
#define registerForRemoteNotifications(...)  registerForRemoteNotifications(@"registerForRemoteNotifications")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> registerForRemoteNotifications     */
- (MLChain4UIApplication *(^)())registerForRemoteNotifications;


#ifndef networkActivityIndicatorVisible                                  
#define networkActivityIndicatorVisible(...)  networkActivityIndicatorVisible(@"setNetworkActivityIndicatorVisible:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setNetworkActivityIndicatorVisible: 'B'
     */
- (MLChain4UIApplication *(^)())networkActivityIndicatorVisible;


#ifndef alertView_clickedButtonAtIndex                                  
#define alertView_clickedButtonAtIndex(...)  alertView_clickedButtonAtIndex(@"alertView:clickedButtonAtIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   alertView: '@'
  clickedButtonAtIndex: 'q'
     */
- (MLChain4UIApplication *(^)())alertView_clickedButtonAtIndex;


#ifndef alertViewCancel                                  
#define alertViewCancel(...)  alertViewCancel(@"alertViewCancel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   alertViewCancel: '@'
     */
- (MLChain4UIApplication *(^)())alertViewCancel;


#ifndef alertView_didDismissWithButtonIndex                                  
#define alertView_didDismissWithButtonIndex(...)  alertView_didDismissWithButtonIndex(@"alertView:didDismissWithButtonIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   alertView: '@'
  didDismissWithButtonIndex: 'q'
     */
- (MLChain4UIApplication *(^)())alertView_didDismissWithButtonIndex;


#ifndef activityContinuationManager_displayProgressUI_dismissalHandler                                  
#define activityContinuationManager_displayProgressUI_dismissalHandler(...)  activityContinuationManager_displayProgressUI_dismissalHandler(@"activityContinuationManager:displayProgressUI:dismissalHandler:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   activityContinuationManager: '@'
  displayProgressUI: '@'
  dismissalHandler: '@'
     */
- (MLChain4UIApplication *(^)())activityContinuationManager_displayProgressUI_dismissalHandler;


#ifndef activityContinuationManager_configureProgressUIWithError                                  
#define activityContinuationManager_configureProgressUIWithError(...)  activityContinuationManager_configureProgressUIWithError(@"activityContinuationManager:configureProgressUIWithError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   activityContinuationManager: '@'
  configureProgressUIWithError: '@'
     */
- (MLChain4UIApplication *(^)())activityContinuationManager_configureProgressUIWithError;


#ifndef activityContinuationManager_hideProgressUIWithCompletion                                  
#define activityContinuationManager_hideProgressUIWithCompletion(...)  activityContinuationManager_hideProgressUIWithCompletion(@"activityContinuationManager:hideProgressUIWithCompletion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   activityContinuationManager: '@'
  hideProgressUIWithCompletion: '@'
     */
- (MLChain4UIApplication *(^)())activityContinuationManager_hideProgressUIWithCompletion;


#ifndef activityContinuationManager_didFailToContinueUserActivityWithType_error                                  
#define activityContinuationManager_didFailToContinueUserActivityWithType_error(...)  activityContinuationManager_didFailToContinueUserActivityWithType_error(@"activityContinuationManager:didFailToContinueUserActivityWithType:error:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   activityContinuationManager: '@'
  didFailToContinueUserActivityWithType: '@'
  error: '@'
     */
- (MLChain4UIApplication *(^)())activityContinuationManager_didFailToContinueUserActivityWithType_error;


#ifndef activityContinuationManager_didUpdateUserActivity                                  
#define activityContinuationManager_didUpdateUserActivity(...)  activityContinuationManager_didUpdateUserActivity(@"activityContinuationManager:didUpdateUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   activityContinuationManager: '@'
  didUpdateUserActivity: '@'
     */
- (MLChain4UIApplication *(^)())activityContinuationManager_didUpdateUserActivity;


#ifndef pushRunLoopMode                                  
#define pushRunLoopMode(...)  pushRunLoopMode(@"pushRunLoopMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pushRunLoopMode: '@'
     */
- (MLChain4UIApplication *(^)())pushRunLoopMode;


#ifndef popRunLoopMode                                  
#define popRunLoopMode(...)  popRunLoopMode(@"popRunLoopMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   popRunLoopMode: '@'
     */
- (MLChain4UIApplication *(^)())popRunLoopMode;


#ifndef performDisablingStatusBarStyleValidation                                  
#define performDisablingStatusBarStyleValidation(...)  performDisablingStatusBarStyleValidation(@"performDisablingStatusBarStyleValidation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performDisablingStatusBarStyleValidation: '@'
     */
- (MLChain4UIApplication *(^)())performDisablingStatusBarStyleValidation;


#ifndef statusBarStyle_animation_startTime_duration_curve                                  
#define statusBarStyle_animation_startTime_duration_curve(...)  statusBarStyle_animation_startTime_duration_curve(@"setStatusBarStyle:animation:startTime:duration:curve:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__), (long long)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
  animation: 'i'
  startTime: 'd'
  duration: 'd'
  curve: 'q'
     */
- (MLChain4UIApplication *(^)())statusBarStyle_animation_startTime_duration_curve;


#ifndef statusBarStyle_animation                                  
#define statusBarStyle_animation(...)  statusBarStyle_animation(@"setStatusBarStyle:animation:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
  animation: 'i'
     */
- (MLChain4UIApplication *(^)())statusBarStyle_animation;


#ifndef statusBarStyle_animated                                  
#define statusBarStyle_animated(...)  statusBarStyle_animated(@"setStatusBarStyle:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarStyle: 'q'
  animated: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarStyle_animated;


#ifndef statusBarHidden_duration                                  
#define statusBarHidden_duration(...)  statusBarHidden_duration(@"setStatusBarHidden:duration:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  duration: 'd'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_duration;


#ifndef statusBarHidden_animated                                  
#define statusBarHidden_animated(...)  statusBarHidden_animated(@"setStatusBarHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarHidden: 'B'
  animated: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarHidden_animated;


#ifndef statusBarOrientation_animated                                  
#define statusBarOrientation_animated(...)  statusBarOrientation_animated(@"setStatusBarOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation_animated;


#ifndef statusBarOrientation                                  
#define statusBarOrientation(...)  statusBarOrientation(@"setStatusBarOrientation:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarOrientation: 'q'
     */
- (MLChain4UIApplication *(^)())statusBarOrientation;


#ifndef doubleHeightStatusText_forStyle                                  
#define doubleHeightStatusText_forStyle(...)  doubleHeightStatusText_forStyle(@"setDoubleHeightStatusText:forStyle:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDoubleHeightStatusText: '@'
  forStyle: 'q'
     */
- (MLChain4UIApplication *(^)())doubleHeightStatusText_forStyle;


#ifndef doubleHeightMode                                  
#define doubleHeightMode(...)  doubleHeightMode(@"setDoubleHeightMode:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDoubleHeightMode: 'i'
     */
- (MLChain4UIApplication *(^)())doubleHeightMode;


#ifndef doubleHeightPrefixText                                  
#define doubleHeightPrefixText(...)  doubleHeightPrefixText(@"setDoubleHeightPrefixText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDoubleHeightPrefixText: '@'
     */
- (MLChain4UIApplication *(^)())doubleHeightPrefixText;


#ifndef doubleHeightStatusText                                  
#define doubleHeightStatusText(...)  doubleHeightStatusText(@"setDoubleHeightStatusText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setDoubleHeightStatusText: '@'
     */
- (MLChain4UIApplication *(^)())doubleHeightStatusText;


#ifndef mediaKeyDown                                  
#define mediaKeyDown(...)  mediaKeyDown(@"mediaKeyDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   mediaKeyDown: '^'
     */
- (MLChain4UIApplication *(^)())mediaKeyDown;


#ifndef mediaKeyUp                                  
#define mediaKeyUp(...)  mediaKeyUp(@"mediaKeyUp:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   mediaKeyUp: '^'
     */
- (MLChain4UIApplication *(^)())mediaKeyUp;


#ifndef lockButtonDown                                  
#define lockButtonDown(...)  lockButtonDown(@"lockButtonDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   lockButtonDown: '^'
     */
- (MLChain4UIApplication *(^)())lockButtonDown;


#ifndef lockButtonUp                                  
#define lockButtonUp(...)  lockButtonUp(@"lockButtonUp:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   lockButtonUp: '^'
     */
- (MLChain4UIApplication *(^)())lockButtonUp;


#ifndef headsetButtonDown                                  
#define headsetButtonDown(...)  headsetButtonDown(@"headsetButtonDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   headsetButtonDown: '^'
     */
- (MLChain4UIApplication *(^)())headsetButtonDown;


#ifndef headsetButtonUp                                  
#define headsetButtonUp(...)  headsetButtonUp(@"headsetButtonUp:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   headsetButtonUp: '^'
     */
- (MLChain4UIApplication *(^)())headsetButtonUp;


#ifndef headsetAvailabilityChanged                                  
#define headsetAvailabilityChanged(...)  headsetAvailabilityChanged(@"headsetAvailabilityChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   headsetAvailabilityChanged: '^'
     */
- (MLChain4UIApplication *(^)())headsetAvailabilityChanged;


#ifndef menuButtonDown                                  
#define menuButtonDown(...)  menuButtonDown(@"menuButtonDown:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   menuButtonDown: '^'
     */
- (MLChain4UIApplication *(^)())menuButtonDown;


#ifndef menuButtonUp                                  
#define menuButtonUp(...)  menuButtonUp(@"menuButtonUp:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   menuButtonUp: '^'
     */
- (MLChain4UIApplication *(^)())menuButtonUp;


#ifndef ringerChanged                                  
#define ringerChanged(...)  ringerChanged(@"ringerChanged:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   ringerChanged: 'i'
     */
- (MLChain4UIApplication *(^)())ringerChanged;


#ifndef volumeChanged                                  
#define volumeChanged(...)  volumeChanged(@"volumeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   volumeChanged: '^'
     */
- (MLChain4UIApplication *(^)())volumeChanged;


#ifndef accessoryKeyStateChanged                                  
#define accessoryKeyStateChanged(...)  accessoryKeyStateChanged(@"accessoryKeyStateChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   accessoryKeyStateChanged: '^'
     */
- (MLChain4UIApplication *(^)())accessoryKeyStateChanged;


#ifndef resetIdleTimerAndUndim                              
#define resetIdleTimerAndUndim(...)  resetIdleTimerAndUndim(@"resetIdleTimerAndUndim")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> resetIdleTimerAndUndim     */
- (MLChain4UIApplication *(^)())resetIdleTimerAndUndim;


#ifndef updateSuspendedSettings                                  
#define updateSuspendedSettings(...)  updateSuspendedSettings(@"updateSuspendedSettings:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   updateSuspendedSettings: '@'
     */
- (MLChain4UIApplication *(^)())updateSuspendedSettings;


#ifndef showTTYPromptForNumber_withID                                  
#define showTTYPromptForNumber_withID(...)  showTTYPromptForNumber_withID(@"showTTYPromptForNumber:withID:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   showTTYPromptForNumber: '@'
  withID: 'i'
     */
- (MLChain4UIApplication *(^)())showTTYPromptForNumber_withID;


#ifndef showNetworkPromptsIfNecessary                                  
#define showNetworkPromptsIfNecessary(...)  showNetworkPromptsIfNecessary(@"showNetworkPromptsIfNecessary:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   showNetworkPromptsIfNecessary: 'B'
     */
- (MLChain4UIApplication *(^)())showNetworkPromptsIfNecessary;


#ifndef usesBackgroundNetwork                                  
#define usesBackgroundNetwork(...)  usesBackgroundNetwork(@"setUsesBackgroundNetwork:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setUsesBackgroundNetwork: 'B'
     */
- (MLChain4UIApplication *(^)())usesBackgroundNetwork;


#ifndef newsstandIconImage                                  
#define newsstandIconImage(...)  newsstandIconImage(@"setNewsstandIconImage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setNewsstandIconImage: '@'
     */
- (MLChain4UIApplication *(^)())newsstandIconImage;


#ifndef addStatusBarImageNamed_removeOnExit                                  
#define addStatusBarImageNamed_removeOnExit(...)  addStatusBarImageNamed_removeOnExit(@"addStatusBarImageNamed:removeOnExit:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addStatusBarImageNamed: '@'
  removeOnExit: 'B'
     */
- (MLChain4UIApplication *(^)())addStatusBarImageNamed_removeOnExit;


#ifndef removeStatusBarImageNamed                                  
#define removeStatusBarImageNamed(...)  removeStatusBarImageNamed(@"removeStatusBarImageNamed:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeStatusBarImageNamed: '@'
     */
- (MLChain4UIApplication *(^)())removeStatusBarImageNamed;


#ifndef addStatusBarItem_removeOnExit                                  
#define addStatusBarItem_removeOnExit(...)  addStatusBarItem_removeOnExit(@"addStatusBarItem:removeOnExit:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addStatusBarItem: 'i'
  removeOnExit: 'B'
     */
- (MLChain4UIApplication *(^)())addStatusBarItem_removeOnExit;


#ifndef applicationBadgeString                                  
#define applicationBadgeString(...)  applicationBadgeString(@"setApplicationBadgeString:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setApplicationBadgeString: '@'
     */
- (MLChain4UIApplication *(^)())applicationBadgeString;


#ifndef applicationIconBadgeNumber                                  
#define applicationIconBadgeNumber(...)  applicationIconBadgeNumber(@"setApplicationIconBadgeNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setApplicationIconBadgeNumber: 'q'
     */
- (MLChain4UIApplication *(^)())applicationIconBadgeNumber;


#ifndef addWebClipToHomeScreen                                  
#define addWebClipToHomeScreen(...)  addWebClipToHomeScreen(@"addWebClipToHomeScreen:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addWebClipToHomeScreen: '@'
     */
- (MLChain4UIApplication *(^)())addWebClipToHomeScreen;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())motionCancelled_withEvent;


#ifndef statusBar_willAnimateFromHeight_toHeight_duration_animation                                  
#define statusBar_willAnimateFromHeight_toHeight_duration_animation(...)  statusBar_willAnimateFromHeight_toHeight_duration_animation(@"statusBar:willAnimateFromHeight:toHeight:duration:animation:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   statusBar: '@'
  willAnimateFromHeight: 'd'
  toHeight: 'd'
  duration: 'd'
  animation: 'i'
     */
- (MLChain4UIApplication *(^)())statusBar_willAnimateFromHeight_toHeight_duration_animation;


#ifndef statusBar_didAnimateFromHeight_toHeight_animation                                  
#define statusBar_didAnimateFromHeight_toHeight_animation(...)  statusBar_didAnimateFromHeight_toHeight_animation(@"statusBar:didAnimateFromHeight:toHeight:animation:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   statusBar: '@'
  didAnimateFromHeight: 'd'
  toHeight: 'd'
  animation: 'i'
     */
- (MLChain4UIApplication *(^)())statusBar_didAnimateFromHeight_toHeight_animation;


#ifndef noteActiveInterfaceOrientationWillChangeToOrientation                                  
#define noteActiveInterfaceOrientationWillChangeToOrientation(...)  noteActiveInterfaceOrientationWillChangeToOrientation(@"noteActiveInterfaceOrientationWillChangeToOrientation:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   noteActiveInterfaceOrientationWillChangeToOrientation: 'q'
     */
- (MLChain4UIApplication *(^)())noteActiveInterfaceOrientationWillChangeToOrientation;


#ifndef noteActiveInterfaceOrientationDidChangeToOrientation_willAnimateWithSettings_fromOrientation                                  
#define noteActiveInterfaceOrientationDidChangeToOrientation_willAnimateWithSettings_fromOrientation(...)  noteActiveInterfaceOrientationDidChangeToOrientation_willAnimateWithSettings_fromOrientation(@"noteActiveInterfaceOrientationDidChangeToOrientation:willAnimateWithSettings:fromOrientation:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   noteActiveInterfaceOrientationDidChangeToOrientation: 'q'
  willAnimateWithSettings: '@'
  fromOrientation: 'q'
     */
- (MLChain4UIApplication *(^)())noteActiveInterfaceOrientationDidChangeToOrientation_willAnimateWithSettings_fromOrientation;


#ifndef statusBarMode_duration                                  
#define statusBarMode_duration(...)  statusBarMode_duration(@"setStatusBarMode:duration:", (int)metamacro_at(0, __VA_ARGS__), (float)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarMode: 'i'
  duration: 'f'
     */
- (MLChain4UIApplication *(^)())statusBarMode_duration;


#ifndef statusBarShowsProgress                                  
#define statusBarShowsProgress(...)  statusBarShowsProgress(@"setStatusBarShowsProgress:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setStatusBarShowsProgress: 'B'
     */
- (MLChain4UIApplication *(^)())statusBarShowsProgress;


#ifndef ignoresInteractionEvents                                  
#define ignoresInteractionEvents(...)  ignoresInteractionEvents(@"setIgnoresInteractionEvents:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setIgnoresInteractionEvents: 'B'
     */
- (MLChain4UIApplication *(^)())ignoresInteractionEvents;


#ifndef significantTimeChange                              
#define significantTimeChange(...)  significantTimeChange(@"significantTimeChange")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> significantTimeChange     */
- (MLChain4UIApplication *(^)())significantTimeChange;


#ifndef batteryStatusDidChange                                  
#define batteryStatusDidChange(...)  batteryStatusDidChange(@"batteryStatusDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   batteryStatusDidChange: '@'
     */
- (MLChain4UIApplication *(^)())batteryStatusDidChange;


#ifndef proximitySensingEnabled                                  
#define proximitySensingEnabled(...)  proximitySensingEnabled(@"setProximitySensingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setProximitySensingEnabled: 'B'
     */
- (MLChain4UIApplication *(^)())proximitySensingEnabled;


#ifndef systemVolumeHUDEnabled                                  
#define systemVolumeHUDEnabled(...)  systemVolumeHUDEnabled(@"setSystemVolumeHUDEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setSystemVolumeHUDEnabled: 'B'
     */
- (MLChain4UIApplication *(^)())systemVolumeHUDEnabled;


#ifndef shortcutItems                                  
#define shortcutItems(...)  shortcutItems(@"setShortcutItems:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setShortcutItems: '@'
     */
- (MLChain4UIApplication *(^)())shortcutItems;


#ifndef hardwareKeyboardLayoutName                                  
#define hardwareKeyboardLayoutName(...)  hardwareKeyboardLayoutName(@"setHardwareKeyboardLayoutName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setHardwareKeyboardLayoutName: '@'
     */
- (MLChain4UIApplication *(^)())hardwareKeyboardLayoutName;


#ifndef clearHardwareKeyboardState                              
#define clearHardwareKeyboardState(...)  clearHardwareKeyboardState(@"clearHardwareKeyboardState")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> clearHardwareKeyboardState     */
- (MLChain4UIApplication *(^)())clearHardwareKeyboardState;


#ifndef expectsFaceContact                                  
#define expectsFaceContact(...)  expectsFaceContact(@"setExpectsFaceContact:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setExpectsFaceContact: 'B'
     */
- (MLChain4UIApplication *(^)())expectsFaceContact;


#ifndef willDisplayMiniAlert                              
#define willDisplayMiniAlert(...)  willDisplayMiniAlert(@"willDisplayMiniAlert")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> willDisplayMiniAlert     */
- (MLChain4UIApplication *(^)())willDisplayMiniAlert;


#ifndef willDismissMiniAlert                              
#define willDismissMiniAlert(...)  willDismissMiniAlert(@"willDismissMiniAlert")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> willDismissMiniAlert     */
- (MLChain4UIApplication *(^)())willDismissMiniAlert;


#ifndef didDismissMiniAlert                              
#define didDismissMiniAlert(...)  didDismissMiniAlert(@"didDismissMiniAlert")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> didDismissMiniAlert     */
- (MLChain4UIApplication *(^)())didDismissMiniAlert;


#ifndef didDismissActionSheet                              
#define didDismissActionSheet(...)  didDismissActionSheet(@"didDismissActionSheet")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> didDismissActionSheet     */
- (MLChain4UIApplication *(^)())didDismissActionSheet;


#ifndef requestDeviceUnlock                              
#define requestDeviceUnlock(...)  requestDeviceUnlock(@"requestDeviceUnlock")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> requestDeviceUnlock     */
- (MLChain4UIApplication *(^)())requestDeviceUnlock;


#ifndef runModal                                  
#define runModal(...)  runModal(@"runModal:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runModal: '@'
     */
- (MLChain4UIApplication *(^)())runModal;


#ifndef stopModal                              
#define stopModal(...)  stopModal(@"stopModal")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> stopModal     */
- (MLChain4UIApplication *(^)())stopModal;


#ifndef unregisterForRemoteNotifications                              
#define unregisterForRemoteNotifications(...)  unregisterForRemoteNotifications(@"unregisterForRemoteNotifications")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> unregisterForRemoteNotifications     */
- (MLChain4UIApplication *(^)())unregisterForRemoteNotifications;


#ifndef registerForRemoteNotificationTypes                                  
#define registerForRemoteNotificationTypes(...)  registerForRemoteNotificationTypes(@"registerForRemoteNotificationTypes:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   registerForRemoteNotificationTypes: 'Q'
     */
- (MLChain4UIApplication *(^)())registerForRemoteNotificationTypes;


#ifndef presentLocalNotificationNow                                  
#define presentLocalNotificationNow(...)  presentLocalNotificationNow(@"presentLocalNotificationNow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   presentLocalNotificationNow: '@'
     */
- (MLChain4UIApplication *(^)())presentLocalNotificationNow;


#ifndef scheduleLocalNotification                                  
#define scheduleLocalNotification(...)  scheduleLocalNotification(@"scheduleLocalNotification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   scheduleLocalNotification: '@'
     */
- (MLChain4UIApplication *(^)())scheduleLocalNotification;


#ifndef cancelLocalNotification                                  
#define cancelLocalNotification(...)  cancelLocalNotification(@"cancelLocalNotification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cancelLocalNotification: '@'
     */
- (MLChain4UIApplication *(^)())cancelLocalNotification;


#ifndef cancelAllLocalNotifications                              
#define cancelAllLocalNotifications(...)  cancelAllLocalNotifications(@"cancelAllLocalNotifications")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> cancelAllLocalNotifications     */
- (MLChain4UIApplication *(^)())cancelAllLocalNotifications;


#ifndef scheduledLocalNotifications                                  
#define scheduledLocalNotifications(...)  scheduledLocalNotifications(@"setScheduledLocalNotifications:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setScheduledLocalNotifications: '@'
     */
- (MLChain4UIApplication *(^)())scheduledLocalNotifications;


#ifndef clearKeepAliveTimeout                              
#define clearKeepAliveTimeout(...)  clearKeepAliveTimeout(@"clearKeepAliveTimeout")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> clearKeepAliveTimeout     */
- (MLChain4UIApplication *(^)())clearKeepAliveTimeout;


#ifndef minimumBackgroundFetchInterval                                  
#define minimumBackgroundFetchInterval(...)  minimumBackgroundFetchInterval(@"setMinimumBackgroundFetchInterval:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setMinimumBackgroundFetchInterval: 'd'
     */
- (MLChain4UIApplication *(^)())minimumBackgroundFetchInterval;


#ifndef ignoreSnapshotOnNextApplicationLaunch                              
#define ignoreSnapshotOnNextApplicationLaunch(...)  ignoreSnapshotOnNextApplicationLaunch(@"ignoreSnapshotOnNextApplicationLaunch")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> ignoreSnapshotOnNextApplicationLaunch     */
- (MLChain4UIApplication *(^)())ignoreSnapshotOnNextApplicationLaunch;


#ifndef saveApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler                                  
#define saveApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler(...)  saveApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler(@"saveApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   saveApplicationPreservationStateWithSessionIdentifier: '@'
  viewController: '@'
  beginHandler: '@'
  completionHandler: '@'
     */
- (MLChain4UIApplication *(^)())saveApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler;


#ifndef restoreApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler                                  
#define restoreApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler(...)  restoreApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler(@"restoreApplicationPreservationStateWithSessionIdentifier:viewController:beginHandler:completionHandler:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   restoreApplicationPreservationStateWithSessionIdentifier: '@'
  viewController: '@'
  beginHandler: '@'
  completionHandler: '@'
     */
- (MLChain4UIApplication *(^)())restoreApplicationPreservationStateWithSessionIdentifier_viewController_beginHandler_completionHandler;


#ifndef removeApplicationPreservationStateWithSessionIdentifier                                  
#define removeApplicationPreservationStateWithSessionIdentifier(...)  removeApplicationPreservationStateWithSessionIdentifier(@"removeApplicationPreservationStateWithSessionIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeApplicationPreservationStateWithSessionIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())removeApplicationPreservationStateWithSessionIdentifier;


#ifndef extendStateRestoration                              
#define extendStateRestoration(...)  extendStateRestoration(@"extendStateRestoration")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> extendStateRestoration     */
- (MLChain4UIApplication *(^)())extendStateRestoration;


#ifndef completeStateRestoration                              
#define completeStateRestoration(...)  completeStateRestoration(@"completeStateRestoration")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> completeStateRestoration     */
- (MLChain4UIApplication *(^)())completeStateRestoration;


#ifndef failedTest                                  
#define failedTest(...)  failedTest(@"failedTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   failedTest: '@'
     */
- (MLChain4UIApplication *(^)())failedTest;


#ifndef startLeaking                              
#define startLeaking(...)  startLeaking(@"startLeaking")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> startLeaking     */
- (MLChain4UIApplication *(^)())startLeaking;


#ifndef stopLeaking                              
#define stopLeaking(...)  stopLeaking(@"stopLeaking")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> stopLeaking     */
- (MLChain4UIApplication *(^)())stopLeaking;


#ifndef startedSubTest_forTest                                  
#define startedSubTest_forTest(...)  startedSubTest_forTest(@"startedSubTest:forTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   startedSubTest: '@'
  forTest: '@'
     */
- (MLChain4UIApplication *(^)())startedSubTest_forTest;


#ifndef finishedSubTest_forTest                                  
#define finishedSubTest_forTest(...)  finishedSubTest_forTest(@"finishedSubTest:forTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedSubTest: '@'
  forTest: '@'
     */
- (MLChain4UIApplication *(^)())finishedSubTest_forTest;


#ifndef runTest_startingBeforeAnimation_stoppingAfterAnimation                                  
#define runTest_startingBeforeAnimation_stoppingAfterAnimation(...)  runTest_startingBeforeAnimation_stoppingAfterAnimation(@"runTest:startingBeforeAnimation:stoppingAfterAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runTest: '@'
  startingBeforeAnimation: '@'
  stoppingAfterAnimation: '@'
     */
- (MLChain4UIApplication *(^)())runTest_startingBeforeAnimation_stoppingAfterAnimation;


#ifndef startCHUDRecording                                  
#define startCHUDRecording(...)  startCHUDRecording(@"startCHUDRecording:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   startCHUDRecording: '@'
     */
- (MLChain4UIApplication *(^)())startCHUDRecording;


#ifndef emitPPTStartTracePointForTestName_identifier                                  
#define emitPPTStartTracePointForTestName_identifier(...)  emitPPTStartTracePointForTestName_identifier(@"emitPPTStartTracePointForTestName:identifier:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   emitPPTStartTracePointForTestName: '@'
  identifier: 'Q'
     */
- (MLChain4UIApplication *(^)())emitPPTStartTracePointForTestName_identifier;


#ifndef startedSubTest_forTest_withMetrics                                  
#define startedSubTest_forTest_withMetrics(...)  startedSubTest_forTest_withMetrics(@"startedSubTest:forTest:withMetrics:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   startedSubTest: '@'
  forTest: '@'
  withMetrics: '@'
     */
- (MLChain4UIApplication *(^)())startedSubTest_forTest_withMetrics;


#ifndef emitPPTStartTracePointForSubTestName_identifier_testIdentifier                                  
#define emitPPTStartTracePointForSubTestName_identifier_testIdentifier(...)  emitPPTStartTracePointForSubTestName_identifier_testIdentifier(@"emitPPTStartTracePointForSubTestName:identifier:testIdentifier:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   emitPPTStartTracePointForSubTestName: '@'
  identifier: 'Q'
  testIdentifier: 'Q'
     */
- (MLChain4UIApplication *(^)())emitPPTStartTracePointForSubTestName_identifier_testIdentifier;


#ifndef emitPPTEndTracePointForSubTestName_identifier                                  
#define emitPPTEndTracePointForSubTestName_identifier(...)  emitPPTEndTracePointForSubTestName_identifier(@"emitPPTEndTracePointForSubTestName:identifier:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   emitPPTEndTracePointForSubTestName: '@'
  identifier: 'Q'
     */
- (MLChain4UIApplication *(^)())emitPPTEndTracePointForSubTestName_identifier;


#ifndef installCACommitCompletionBlock                                  
#define installCACommitCompletionBlock(...)  installCACommitCompletionBlock(@"installCACommitCompletionBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   installCACommitCompletionBlock: '@'
     */
- (MLChain4UIApplication *(^)())installCACommitCompletionBlock;


#ifndef finishedIPTest_extraResults_withTeardownBlock                                  
#define finishedIPTest_extraResults_withTeardownBlock(...)  finishedIPTest_extraResults_withTeardownBlock(@"finishedIPTest:extraResults:withTeardownBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedIPTest: '@'
  extraResults: '@'
  withTeardownBlock: '@'
     */
- (MLChain4UIApplication *(^)())finishedIPTest_extraResults_withTeardownBlock;


#ifndef emitPPTEndTracePointForTestName_identifier                                  
#define emitPPTEndTracePointForTestName_identifier(...)  emitPPTEndTracePointForTestName_identifier(@"emitPPTEndTracePointForTestName:identifier:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   emitPPTEndTracePointForTestName: '@'
  identifier: 'Q'
     */
- (MLChain4UIApplication *(^)())emitPPTEndTracePointForTestName_identifier;


#ifndef stopCHUDRecording                              
#define stopCHUDRecording(...)  stopCHUDRecording(@"stopCHUDRecording")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> stopCHUDRecording     */
- (MLChain4UIApplication *(^)())stopCHUDRecording;


#ifndef finishedTest_extraResults_waitForNotification_withTeardownBlock                                  
#define finishedTest_extraResults_waitForNotification_withTeardownBlock(...)  finishedTest_extraResults_waitForNotification_withTeardownBlock(@"finishedTest:extraResults:waitForNotification:withTeardownBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  extraResults: '@'
  waitForNotification: '@'
  withTeardownBlock: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_extraResults_waitForNotification_withTeardownBlock;


#ifndef finishedTest_waitForCommit_extraResults_withTeardownBlock                                  
#define finishedTest_waitForCommit_extraResults_withTeardownBlock(...)  finishedTest_waitForCommit_extraResults_withTeardownBlock(@"finishedTest:waitForCommit:extraResults:withTeardownBlock:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  waitForCommit: 'B'
  extraResults: '@'
  withTeardownBlock: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_waitForCommit_extraResults_withTeardownBlock;


#ifndef failedTest_withResults                                  
#define failedTest_withResults(...)  failedTest_withResults(@"failedTest:withResults:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   failedTest: '@'
  withResults: '@'
     */
- (MLChain4UIApplication *(^)())failedTest_withResults;


#ifndef failedTest_withFailure_withResults                                  
#define failedTest_withFailure_withResults(...)  failedTest_withFailure_withResults(@"failedTest:withFailure:withResults:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   failedTest: '@'
  withFailure: '@'
  withResults: '@'
     */
- (MLChain4UIApplication *(^)())failedTest_withFailure_withResults;


#ifndef failedTest_withFailure                                  
#define failedTest_withFailure(...)  failedTest_withFailure(@"failedTest:withFailure:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   failedTest: '@'
  withFailure: '@'
     */
- (MLChain4UIApplication *(^)())failedTest_withFailure;


#ifndef rotateIfNeeded_completion                                  
#define rotateIfNeeded_completion(...)  rotateIfNeeded_completion(@"rotateIfNeeded:completion:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   rotateIfNeeded: 'q'
  completion: '@'
     */
- (MLChain4UIApplication *(^)())rotateIfNeeded_completion;


#ifndef runTest_forAnimation                                  
#define runTest_forAnimation(...)  runTest_forAnimation(@"runTest:forAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runTest: '@'
  forAnimation: '@'
     */
- (MLChain4UIApplication *(^)())runTest_forAnimation;


#ifndef finishedSubTest_forTest_waitForCommit                                  
#define finishedSubTest_forTest_waitForCommit(...)  finishedSubTest_forTest_waitForCommit(@"finishedSubTest:forTest:waitForCommit:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedSubTest: '@'
  forTest: '@'
  waitForCommit: 'B'
     */
- (MLChain4UIApplication *(^)())finishedSubTest_forTest_waitForCommit;


#ifndef startedIPTest                                  
#define startedIPTest(...)  startedIPTest(@"startedIPTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   startedIPTest: '@'
     */
- (MLChain4UIApplication *(^)())startedIPTest;


#ifndef finishedIPTest                                  
#define finishedIPTest(...)  finishedIPTest(@"finishedIPTest:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedIPTest: '@'
     */
- (MLChain4UIApplication *(^)())finishedIPTest;


#ifndef finishedIPTest_extraResults                                  
#define finishedIPTest_extraResults(...)  finishedIPTest_extraResults(@"finishedIPTest:extraResults:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedIPTest: '@'
  extraResults: '@'
     */
- (MLChain4UIApplication *(^)())finishedIPTest_extraResults;


#ifndef finishedIPTest_waitForCommit_extraResults_withTeardownBlock                                  
#define finishedIPTest_waitForCommit_extraResults_withTeardownBlock(...)  finishedIPTest_waitForCommit_extraResults_withTeardownBlock(@"finishedIPTest:waitForCommit:extraResults:withTeardownBlock:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedIPTest: '@'
  waitForCommit: 'B'
  extraResults: '@'
  withTeardownBlock: '@'
     */
- (MLChain4UIApplication *(^)())finishedIPTest_waitForCommit_extraResults_withTeardownBlock;


#ifndef finishedTest_extraResults_withTeardownBlock                                  
#define finishedTest_extraResults_withTeardownBlock(...)  finishedTest_extraResults_withTeardownBlock(@"finishedTest:extraResults:withTeardownBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  extraResults: '@'
  withTeardownBlock: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_extraResults_withTeardownBlock;


#ifndef finishedTest_extraResults_waitForNotification                                  
#define finishedTest_extraResults_waitForNotification(...)  finishedTest_extraResults_waitForNotification(@"finishedTest:extraResults:waitForNotification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  extraResults: '@'
  waitForNotification: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_extraResults_waitForNotification;


#ifndef finishedTest_waitForCommit_extraResults                                  
#define finishedTest_waitForCommit_extraResults(...)  finishedTest_waitForCommit_extraResults(@"finishedTest:waitForCommit:extraResults:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   finishedTest: '@'
  waitForCommit: 'B'
  extraResults: '@'
     */
- (MLChain4UIApplication *(^)())finishedTest_waitForCommit_extraResults;


#ifndef enableFramebufferStatisticsGathering                              
#define enableFramebufferStatisticsGathering(...)  enableFramebufferStatisticsGathering(@"enableFramebufferStatisticsGathering")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> enableFramebufferStatisticsGathering     */
- (MLChain4UIApplication *(^)())enableFramebufferStatisticsGathering;


#ifndef testPrep_options                                  
#define testPrep_options(...)  testPrep_options(@"testPrep:options:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   testPrep: '@'
  options: '@'
     */
- (MLChain4UIApplication *(^)())testPrep_options;


#ifndef beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication                                  
#define beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication(...)  beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication(@"beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheet: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
  requireTopApplication: 'B'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication;


#ifndef beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_presentAnimated                                  
#define beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_presentAnimated(...)  beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_presentAnimated(@"beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:presentAnimated:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheet: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
  requireTopApplication: 'B'
  presentAnimated: 'B'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_presentAnimated;


#ifndef beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated                                  
#define beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(...)  beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(@"beginRemoteSheet:delegate:didEndSelector:contextInfo:requireTopApplication:opaque:presentAnimated:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheet: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
  requireTopApplication: 'B'
  opaque: 'B'
  presentAnimated: 'B'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheet_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated;


#ifndef beginRemoteSheetController_viewOrNil_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated                                  
#define beginRemoteSheetController_viewOrNil_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(...)  beginRemoteSheetController_viewOrNil_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(@"beginRemoteSheetController:viewOrNil:delegate:didEndSelector:contextInfo:requireTopApplication:opaque:presentAnimated:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__), (int)metamacro_at(7, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheetController: '@'
  viewOrNil: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
  requireTopApplication: 'B'
  opaque: 'B'
  presentAnimated: 'B'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheetController_viewOrNil_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated;


#ifndef endRemoteSheet_returnCode                                  
#define endRemoteSheet_returnCode(...)  endRemoteSheet_returnCode(@"endRemoteSheet:returnCode:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   endRemoteSheet: '@'
  returnCode: 'q'
     */
- (MLChain4UIApplication *(^)())endRemoteSheet_returnCode;


#ifndef endRemoteSheet_returnCode_dismissAnimated                                  
#define endRemoteSheet_returnCode_dismissAnimated(...)  endRemoteSheet_returnCode_dismissAnimated(@"endRemoteSheet:returnCode:dismissAnimated:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   endRemoteSheet: '@'
  returnCode: 'q'
  dismissAnimated: 'B'
     */
- (MLChain4UIApplication *(^)())endRemoteSheet_returnCode_dismissAnimated;


#ifndef beginRemoteSheet_delegate_didEndSelector_contextInfo                                  
#define beginRemoteSheet_delegate_didEndSelector_contextInfo(...)  beginRemoteSheet_delegate_didEndSelector_contextInfo(@"beginRemoteSheet:delegate:didEndSelector:contextInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheet: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheet_delegate_didEndSelector_contextInfo;


#ifndef beginRemoteSheetController_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated                                  
#define beginRemoteSheetController_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(...)  beginRemoteSheetController_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated(@"beginRemoteSheetController:delegate:didEndSelector:contextInfo:requireTopApplication:opaque:presentAnimated:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   beginRemoteSheetController: '@'
  delegate: '@'
  didEndSelector: ':'
  contextInfo: '^'
  requireTopApplication: 'B'
  opaque: 'B'
  presentAnimated: 'B'
     */
- (MLChain4UIApplication *(^)())beginRemoteSheetController_delegate_didEndSelector_contextInfo_requireTopApplication_opaque_presentAnimated;


#ifndef endRemoteSheet                                  
#define endRemoteSheet(...)  endRemoteSheet(@"endRemoteSheet:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   endRemoteSheet: '@'
     */
- (MLChain4UIApplication *(^)())endRemoteSheet;


#ifndef installNotificationObserverForNotificationName_forOneNotification_usingBlock                                  
#define installNotificationObserverForNotificationName_forOneNotification_usingBlock(...)  installNotificationObserverForNotificationName_forOneNotification_usingBlock(@"installNotificationObserverForNotificationName:forOneNotification:usingBlock:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   installNotificationObserverForNotificationName: '@'
  forOneNotification: 'B'
  usingBlock: '@'
     */
- (MLChain4UIApplication *(^)())installNotificationObserverForNotificationName_forOneNotification_usingBlock;


#ifndef showKeyboardUsingBlock_withCompletionBlock                                  
#define showKeyboardUsingBlock_withCompletionBlock(...)  showKeyboardUsingBlock_withCompletionBlock(@"showKeyboardUsingBlock:withCompletionBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   showKeyboardUsingBlock: '@'
  withCompletionBlock: '@'
     */
- (MLChain4UIApplication *(^)())showKeyboardUsingBlock_withCompletionBlock;


#ifndef runTestForKeyboardBringupAndDismissalWithName_withShowKeyboardBlock_withHideKeyboardBlock_withExtraResultsBlock_withCleanupBlock                                  
#define runTestForKeyboardBringupAndDismissalWithName_withShowKeyboardBlock_withHideKeyboardBlock_withExtraResultsBlock_withCleanupBlock(...)  runTestForKeyboardBringupAndDismissalWithName_withShowKeyboardBlock_withHideKeyboardBlock_withExtraResultsBlock_withCleanupBlock(@"runTestForKeyboardBringupAndDismissalWithName:withShowKeyboardBlock:withHideKeyboardBlock:withExtraResultsBlock:withCleanupBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runTestForKeyboardBringupAndDismissalWithName: '@'
  withShowKeyboardBlock: '@'
  withHideKeyboardBlock: '@'
  withExtraResultsBlock: '@'
  withCleanupBlock: '@'
     */
- (MLChain4UIApplication *(^)())runTestForKeyboardBringupAndDismissalWithName_withShowKeyboardBlock_withHideKeyboardBlock_withExtraResultsBlock_withCleanupBlock;


#ifndef runTestForKeyboardRotationWithName_fromOrientation_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock                                  
#define runTestForKeyboardRotationWithName_fromOrientation_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock(...)  runTestForKeyboardRotationWithName_fromOrientation_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock(@"runTestForKeyboardRotationWithName:fromOrientation:withShowKeyboardBlock:withExtraResultsBlock:withCleanupBlock:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runTestForKeyboardRotationWithName: '@'
  fromOrientation: 'q'
  withShowKeyboardBlock: '@'
  withExtraResultsBlock: '@'
  withCleanupBlock: '@'
     */
- (MLChain4UIApplication *(^)())runTestForKeyboardRotationWithName_fromOrientation_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock;


#ifndef runTestForKeyboardSplitAndMergeWithName_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock                                  
#define runTestForKeyboardSplitAndMergeWithName_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock(...)  runTestForKeyboardSplitAndMergeWithName_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock(@"runTestForKeyboardSplitAndMergeWithName:withShowKeyboardBlock:withExtraResultsBlock:withCleanupBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   runTestForKeyboardSplitAndMergeWithName: '@'
  withShowKeyboardBlock: '@'
  withExtraResultsBlock: '@'
  withCleanupBlock: '@'
     */
- (MLChain4UIApplication *(^)())runTestForKeyboardSplitAndMergeWithName_withShowKeyboardBlock_withExtraResultsBlock_withCleanupBlock;


#ifndef endReceivingRemoteControlEvents                              
#define endReceivingRemoteControlEvents(...)  endReceivingRemoteControlEvents(@"endReceivingRemoteControlEvents")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> endReceivingRemoteControlEvents     */
- (MLChain4UIApplication *(^)())endReceivingRemoteControlEvents;


#ifndef workspace_didLaunchWithCompletion                                  
#define workspace_didLaunchWithCompletion(...)  workspace_didLaunchWithCompletion(@"workspace:didLaunchWithCompletion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspace: '@'
  didLaunchWithCompletion: '@'
     */
- (MLChain4UIApplication *(^)())workspace_didLaunchWithCompletion;


#ifndef workspaceShouldExit_withTransitionContext                                  
#define workspaceShouldExit_withTransitionContext(...)  workspaceShouldExit_withTransitionContext(@"workspaceShouldExit:withTransitionContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspaceShouldExit: '@'
  withTransitionContext: '@'
     */
- (MLChain4UIApplication *(^)())workspaceShouldExit_withTransitionContext;


#ifndef workspaceShouldExit                                  
#define workspaceShouldExit(...)  workspaceShouldExit(@"workspaceShouldExit:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspaceShouldExit: '@'
     */
- (MLChain4UIApplication *(^)())workspaceShouldExit;


#ifndef workspaceNoteAssertionExpirationImminent                                  
#define workspaceNoteAssertionExpirationImminent(...)  workspaceNoteAssertionExpirationImminent(@"workspaceNoteAssertionExpirationImminent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspaceNoteAssertionExpirationImminent: '@'
     */
- (MLChain4UIApplication *(^)())workspaceNoteAssertionExpirationImminent;


#ifndef scene_didReceiveActions                                  
#define scene_didReceiveActions(...)  scene_didReceiveActions(@"scene:didReceiveActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   scene: '@'
  didReceiveActions: '@'
     */
- (MLChain4UIApplication *(^)())scene_didReceiveActions;


#ifndef scene_didUpdateWithDiff_transitionContext_completion                                  
#define scene_didUpdateWithDiff_transitionContext_completion(...)  scene_didUpdateWithDiff_transitionContext_completion(@"scene:didUpdateWithDiff:transitionContext:completion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   scene: '@'
  didUpdateWithDiff: '@'
  transitionContext: '@'
  completion: '@'
     */
- (MLChain4UIApplication *(^)())scene_didUpdateWithDiff_transitionContext_completion;


#ifndef workspaceDidEndTransaction                                  
#define workspaceDidEndTransaction(...)  workspaceDidEndTransaction(@"workspaceDidEndTransaction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspaceDidEndTransaction: '@'
     */
- (MLChain4UIApplication *(^)())workspaceDidEndTransaction;


#ifndef workspace_didCreateScene_withTransitionContext_completion                                  
#define workspace_didCreateScene_withTransitionContext_completion(...)  workspace_didCreateScene_withTransitionContext_completion(@"workspace:didCreateScene:withTransitionContext:completion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspace: '@'
  didCreateScene: '@'
  withTransitionContext: '@'
  completion: '@'
     */
- (MLChain4UIApplication *(^)())workspace_didCreateScene_withTransitionContext_completion;


#ifndef workspace_willDestroyScene_withTransitionContext_completion                                  
#define workspace_willDestroyScene_withTransitionContext_completion(...)  workspace_willDestroyScene_withTransitionContext_completion(@"workspace:willDestroyScene:withTransitionContext:completion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspace: '@'
  willDestroyScene: '@'
  withTransitionContext: '@'
  completion: '@'
     */
- (MLChain4UIApplication *(^)())workspace_willDestroyScene_withTransitionContext_completion;


#ifndef workspace_didReceiveActions                                  
#define workspace_didReceiveActions(...)  workspace_didReceiveActions(@"workspace:didReceiveActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   workspace: '@'
  didReceiveActions: '@'
     */
- (MLChain4UIApplication *(^)())workspace_didReceiveActions;


#ifndef layoutMonitor_didUpdateDisplayLayout_withContext                                  
#define layoutMonitor_didUpdateDisplayLayout_withContext(...)  layoutMonitor_didUpdateDisplayLayout_withContext(@"layoutMonitor:didUpdateDisplayLayout:withContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   layoutMonitor: '@'
  didUpdateDisplayLayout: '@'
  withContext: '@'
     */
- (MLChain4UIApplication *(^)())layoutMonitor_didUpdateDisplayLayout_withContext;


#ifndef suspend                              
#define suspend(...)  suspend(@"suspend")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> suspend     */
- (MLChain4UIApplication *(^)())suspend;


#ifndef endBackgroundTask                                  
#define endBackgroundTask(...)  endBackgroundTask(@"endBackgroundTask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   endBackgroundTask: 'Q'
     */
- (MLChain4UIApplication *(^)())endBackgroundTask;


#ifndef remoteNotificationRegistrar_didReceiveDeviceToken                                  
#define remoteNotificationRegistrar_didReceiveDeviceToken(...)  remoteNotificationRegistrar_didReceiveDeviceToken(@"remoteNotificationRegistrar:didReceiveDeviceToken:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   remoteNotificationRegistrar: '@'
  didReceiveDeviceToken: '@'
     */
- (MLChain4UIApplication *(^)())remoteNotificationRegistrar_didReceiveDeviceToken;


#ifndef beginReceivingRemoteControlEvents                              
#define beginReceivingRemoteControlEvents(...)  beginReceivingRemoteControlEvents(@"beginReceivingRemoteControlEvents")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> beginReceivingRemoteControlEvents     */
- (MLChain4UIApplication *(^)())beginReceivingRemoteControlEvents;


#ifndef sendEvent                                  
#define sendEvent(...)  sendEvent(@"sendEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   sendEvent: '@'
     */
- (MLChain4UIApplication *(^)())sendEvent;


#ifndef suspensionAnimationDelay                                  
#define suspensionAnimationDelay(...)  suspensionAnimationDelay(@"setSuspensionAnimationDelay:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setSuspensionAnimationDelay: 'd'
     */
- (MLChain4UIApplication *(^)())suspensionAnimationDelay;


#ifndef wantsVolumeButtonEvents                                  
#define wantsVolumeButtonEvents(...)  wantsVolumeButtonEvents(@"setWantsVolumeButtonEvents:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setWantsVolumeButtonEvents: 'B'
     */
- (MLChain4UIApplication *(^)())wantsVolumeButtonEvents;


#ifndef wantsLockEvents                                  
#define wantsLockEvents(...)  wantsLockEvents(@"setWantsLockEvents:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setWantsLockEvents: 'B'
     */
- (MLChain4UIApplication *(^)())wantsLockEvents;


#ifndef openURL_withCompletionHandler                                  
#define openURL_withCompletionHandler(...)  openURL_withCompletionHandler(@"openURL:withCompletionHandler:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   openURL: '@'
  withCompletionHandler: '@'
     */
- (MLChain4UIApplication *(^)())openURL_withCompletionHandler;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())touchesCancelled_withEvent;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UIApplication *(^)())restoreUserActivityState;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIApplication *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIApplication *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UIApplication *(^)())pressesChanged_withEvent;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UIApplication *(^)())gestureEnded;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())restorationIdentifier;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UIApplication *(^)())updateUserActivityState;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UIApplication *(^)())touchesEstimatedPropertiesUpdated;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> beginSelectionChange     */
- (MLChain4UIApplication *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> endSelectionChange     */
- (MLChain4UIApplication *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UIApplication *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> reloadInputViews     */
- (MLChain4UIApplication *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UIApplication *(^)())remoteControlReceivedWithEvent;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UIApplication *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UIApplication *(^)())gestureChanged;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UIApplication *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UIApplication *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UIApplication *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UIApplication *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UIApplication *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> removeObserverBlocks     */
- (MLChain4UIApplication *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UIApplication *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UIApplication *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UIApplication *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UIApplication *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UIApplication *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> removeAssociatedValues     */
- (MLChain4UIApplication *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UIApplication *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setViewStack: '@'
     */
- (MLChain4UIApplication *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> assertNotDealloc     */
- (MLChain4UIApplication *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UIApplication *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UIApplication *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UIApplication *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UIApplication *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   mj_decode: '@'
     */
- (MLChain4UIApplication *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   mj_encode: '@'
     */
- (MLChain4UIApplication *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UIApplication *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIApplication *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIApplication *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UIApplication *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UIApplication *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UIApplication *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIApplication *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIApplication *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIApplication *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIApplication *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIApplication *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UIApplication *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UIApplication *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UIApplication *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UIApplication *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UIApplication *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UIApplication *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UIApplication *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UIApplication *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UIApplication *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UIApplication *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UIApplication *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UIApplication *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> allowSafePerformSelector     */
- (MLChain4UIApplication *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UIApplication *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIApplication *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIApplication *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UIApplication *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UIApplication *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIApplication *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIApplication *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UIApplication *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UIApplication *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UIApplication *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIApplication *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UIApplication *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> mf_lock     */
- (MLChain4UIApplication *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> mf_unlock     */
- (MLChain4UIApplication *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> mf_lockWithPriority     */
- (MLChain4UIApplication *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UIApplication *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UIApplication *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UIApplication *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIApplication *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UIApplication *(^)())willUpdateFocusToView;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UIApplication *(^)())didUpdateFocusFromView;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UIApplication *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> accessibilityIncrement     */
- (MLChain4UIApplication *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> accessibilityDecrement     */
- (MLChain4UIApplication *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UIApplication *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UIApplication *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UIApplication *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UIApplication *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIApplication                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UIApplication *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIApplication                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UIApplication *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UIApplication *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UIApplication *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UIApplication *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UIApplication *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UIApplication *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> awakeFromNib     */
- (MLChain4UIApplication *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UIApplication *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> releaseOnMainThread     */
- (MLChain4UIApplication *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UIApplication *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UIApplication *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UIApplication *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeObservation: '@'
     */
- (MLChain4UIApplication *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UIApplication *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UIApplication                                
SEL-> finishObserving     */
- (MLChain4UIApplication *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIApplication *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIApplication *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIApplication *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UIApplication *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIApplication *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIApplication *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UIApplication *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UIApplication *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UIApplication *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UIApplication *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UIApplication *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UIApplication *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UIApplication *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIApplication *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIApplication *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIApplication *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIApplication *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UIApplication *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UIApplication *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UIApplication *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UIApplication *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UIApplication *(^)())value_forKey;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UIApplication *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UIApplication *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UIApplication *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UIApplication *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIApplication                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UIApplication *(^)())doesNotRecognizeSelector;


@end
