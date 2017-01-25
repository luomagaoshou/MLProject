//  
//  MLChain4UICollectionView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"



@interface MLChain4UICollectionView:MLChain4UIScrollView
- (UICollectionView *)chainObject;
#ifndef mj_reloadData                              
#define mj_reloadData(...)  mj_reloadData(@"mj_reloadData")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> mj_reloadData     */
- (MLChain4UICollectionView *(^)())mj_reloadData;


#ifndef ml_registerNibForCellWithNameOrClass                                  
#define ml_registerNibForCellWithNameOrClass(...)  ml_registerNibForCellWithNameOrClass(@"ml_registerNibForCellWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerNibForCellWithNameOrClass: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerNibForCellWithNameOrClass;


#ifndef ml_registerClassForCellWithNameOrClass                                  
#define ml_registerClassForCellWithNameOrClass(...)  ml_registerClassForCellWithNameOrClass(@"ml_registerClassForCellWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerClassForCellWithNameOrClass: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerClassForCellWithNameOrClass;


#ifndef ml_registerClassForCellWithNameOrClasses                                  
#define ml_registerClassForCellWithNameOrClasses(...)  ml_registerClassForCellWithNameOrClasses(@"ml_registerClassForCellWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerClassForCellWithNameOrClasses: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerClassForCellWithNameOrClasses;


#ifndef ml_registerNibForCellWithNameOrClasses                                  
#define ml_registerNibForCellWithNameOrClasses(...)  ml_registerNibForCellWithNameOrClasses(@"ml_registerNibForCellWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerNibForCellWithNameOrClasses: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerNibForCellWithNameOrClasses;


#ifndef checkClassIsExisted_className                                  
#define checkClassIsExisted_className(...)  checkClassIsExisted_className(@"checkClassIsExisted:className:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   checkClassIsExisted: '#'
  className: '@'
     */
- (MLChain4UICollectionView *(^)())checkClassIsExisted_className;


#ifndef checkNibWithName                                  
#define checkNibWithName(...)  checkNibWithName(@"checkNibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   checkNibWithName: '@'
     */
- (MLChain4UICollectionView *(^)())checkNibWithName;


#ifndef ml_registerClassForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind                                  
#define ml_registerClassForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind(...)  ml_registerClassForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind(@"ml_registerClassForSupplementaryViewWithNameOrClasses:forSupplementaryViewOfKind:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerClassForSupplementaryViewWithNameOrClasses: '@'
  forSupplementaryViewOfKind: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerClassForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind;


#ifndef ml_registerNibForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind                                  
#define ml_registerNibForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind(...)  ml_registerNibForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind(@"ml_registerNibForSupplementaryViewWithNameOrClasses:forSupplementaryViewOfKind:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerNibForSupplementaryViewWithNameOrClasses: '@'
  forSupplementaryViewOfKind: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerNibForSupplementaryViewWithNameOrClasses_forSupplementaryViewOfKind;


#ifndef ml_registerClassForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind                                  
#define ml_registerClassForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind(...)  ml_registerClassForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind(@"ml_registerClassForSupplementaryViewWithNameOrClass:forSupplementaryViewOfKind:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerClassForSupplementaryViewWithNameOrClass: '@'
  forSupplementaryViewOfKind: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerClassForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind;


#ifndef ml_registerNibForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind                                  
#define ml_registerNibForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind(...)  ml_registerNibForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind(@"ml_registerNibForSupplementaryViewWithNameOrClass:forSupplementaryViewOfKind:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_registerNibForSupplementaryViewWithNameOrClass: '@'
  forSupplementaryViewOfKind: '@'
     */
- (MLChain4UICollectionView *(^)())ml_registerNibForSupplementaryViewWithNameOrClass_forSupplementaryViewOfKind;


#ifndef removeMultiSelectedIndexPath                                  
#define removeMultiSelectedIndexPath(...)  removeMultiSelectedIndexPath(@"removeMultiSelectedIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeMultiSelectedIndexPath: '@'
     */
- (MLChain4UICollectionView *(^)())removeMultiSelectedIndexPath;


#ifndef addMultiSelectedIndexPath                                  
#define addMultiSelectedIndexPath(...)  addMultiSelectedIndexPath(@"addMultiSelectedIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addMultiSelectedIndexPath: '@'
     */
- (MLChain4UICollectionView *(^)())addMultiSelectedIndexPath;


#ifndef selectedCellConfig                                  
#define selectedCellConfig(...)  selectedCellConfig(@"setSelectedCellConfig:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setSelectedCellConfig: '@'
     */
- (MLChain4UICollectionView *(^)())selectedCellConfig;


#ifndef deselectedConfig                                  
#define deselectedConfig(...)  deselectedConfig(@"setDeselectedConfig:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDeselectedConfig: '@'
     */
- (MLChain4UICollectionView *(^)())deselectedConfig;


#ifndef multiSelectedIndexPaths                                  
#define multiSelectedIndexPaths(...)  multiSelectedIndexPaths(@"setMultiSelectedIndexPaths:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMultiSelectedIndexPaths: '@'
     */
- (MLChain4UICollectionView *(^)())multiSelectedIndexPaths;


#ifndef maxMultiSelectedIndexPath                                  
#define maxMultiSelectedIndexPath(...)  maxMultiSelectedIndexPath(@"setMaxMultiSelectedIndexPath:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMaxMultiSelectedIndexPath: 'q'
     */
- (MLChain4UICollectionView *(^)())maxMultiSelectedIndexPath;


#ifndef autoHandleMultiSelectedIndexPath                                  
#define autoHandleMultiSelectedIndexPath(...)  autoHandleMultiSelectedIndexPath(@"autoHandleMultiSelectedIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   autoHandleMultiSelectedIndexPath: '@'
     */
- (MLChain4UICollectionView *(^)())autoHandleMultiSelectedIndexPath;


#ifndef selectedItemConfig_deselectedItemConfig                                  
#define selectedItemConfig_deselectedItemConfig(...)  selectedItemConfig_deselectedItemConfig(@"setSelectedItemConfig:deselectedItemConfig:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setSelectedItemConfig: '@'
  deselectedItemConfig: '@'
     */
- (MLChain4UICollectionView *(^)())selectedItemConfig_deselectedItemConfig;


#ifndef separationManager                                  
#define separationManager(...)  separationManager(@"setSeparationManager:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setSeparationManager: '@'
     */
- (MLChain4UICollectionView *(^)())separationManager;


#ifndef configCellWith_cellSize_numberOfSection_numberOfItemsInSection_didSelected                                  
#define configCellWith_cellSize_numberOfSection_numberOfItemsInSection_didSelected(...)  configCellWith_cellSize_numberOfSection_numberOfItemsInSection_didSelected(@"configCellWith:cellSize:numberOfSection:numberOfItemsInSection:didSelected:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   configCellWith: '@'
  cellSize: '@'
  numberOfSection: '@'
  numberOfItemsInSection: '@'
  didSelected: '@'
     */
- (MLChain4UICollectionView *(^)())configCellWith_cellSize_numberOfSection_numberOfItemsInSection_didSelected;


#ifndef configSectionHeaderWith_sectionHeaderSize                                  
#define configSectionHeaderWith_sectionHeaderSize(...)  configSectionHeaderWith_sectionHeaderSize(@"configSectionHeaderWith:sectionHeaderSize:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   configSectionHeaderWith: '@'
  sectionHeaderSize: '@'
     */
- (MLChain4UICollectionView *(^)())configSectionHeaderWith_sectionHeaderSize;


#ifndef configCellLayoutWithMinimumInteritemSpacing_minimumLineSpacing_insetForSection                                  
#define configCellLayoutWithMinimumInteritemSpacing_minimumLineSpacing_insetForSection(...)  configCellLayoutWithMinimumInteritemSpacing_minimumLineSpacing_insetForSection(@"configCellLayoutWithMinimumInteritemSpacing:minimumLineSpacing:insetForSection:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   configCellLayoutWithMinimumInteritemSpacing: '@'
  minimumLineSpacing: '@'
  insetForSection: '@'
     */
- (MLChain4UICollectionView *(^)())configCellLayoutWithMinimumInteritemSpacing_minimumLineSpacing_insetForSection;


#ifndef configSectionFooterWith_sectionFooterSize                                  
#define configSectionFooterWith_sectionFooterSize(...)  configSectionFooterWith_sectionFooterSize(@"configSectionFooterWith:sectionFooterSize:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   configSectionFooterWith: '@'
  sectionFooterSize: '@'
     */
- (MLChain4UICollectionView *(^)())configSectionFooterWith_sectionFooterSize;


#ifndef registerNib_forSupplementaryViewOfKind_withReuseIdentifier                                  
#define registerNib_forSupplementaryViewOfKind_withReuseIdentifier(...)  registerNib_forSupplementaryViewOfKind_withReuseIdentifier(@"registerNib:forSupplementaryViewOfKind:withReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   registerNib: '@'
  forSupplementaryViewOfKind: '@'
  withReuseIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())registerNib_forSupplementaryViewOfKind_withReuseIdentifier;


#ifndef registerNib_forCellWithReuseIdentifier                                  
#define registerNib_forCellWithReuseIdentifier(...)  registerNib_forCellWithReuseIdentifier(@"registerNib:forCellWithReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   registerNib: '@'
  forCellWithReuseIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())registerNib_forCellWithReuseIdentifier;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDelegate: '@'
     */
- (MLChain4UICollectionView *(^)())delegate;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setBounds: '{'
     */
- (MLChain4UICollectionView *(^)())bounds;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> layoutSubviews     */
- (MLChain4UICollectionView *(^)())layoutSubviews;


#ifndef contentSize                                  
#define contentSize(...)  contentSize(@"setContentSize:", __VA_ARGS__)                                  
#endif
#ifndef contentSize_             
#define contentSize_(...)  contentSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setContentSize: '{'
     */
- (MLChain4UICollectionView *(^)())contentSize;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> didMoveToWindow     */
- (MLChain4UICollectionView *(^)())didMoveToWindow;


#ifndef reloadData                              
#define reloadData(...)  reloadData(@"reloadData")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> reloadData     */
- (MLChain4UICollectionView *(^)())reloadData;


#ifndef allowsMultipleSelection                                  
#define allowsMultipleSelection(...)  allowsMultipleSelection(@"setAllowsMultipleSelection:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAllowsMultipleSelection: 'B'
     */
- (MLChain4UICollectionView *(^)())allowsMultipleSelection;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UICollectionView *(^)())traitCollectionDidChange;


#ifndef cancelInteractiveTransition                              
#define cancelInteractiveTransition(...)  cancelInteractiveTransition(@"cancelInteractiveTransition")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> cancelInteractiveTransition     */
- (MLChain4UICollectionView *(^)())cancelInteractiveTransition;


#ifndef finishInteractiveTransition                              
#define finishInteractiveTransition(...)  finishInteractiveTransition(@"finishInteractiveTransition")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> finishInteractiveTransition     */
- (MLChain4UICollectionView *(^)())finishInteractiveTransition;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UICollectionView *(^)())semanticContentAttribute;


#ifndef registerClass_forSupplementaryViewOfKind_withReuseIdentifier                                  
#define registerClass_forSupplementaryViewOfKind_withReuseIdentifier(...)  registerClass_forSupplementaryViewOfKind_withReuseIdentifier(@"registerClass:forSupplementaryViewOfKind:withReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   registerClass: '#'
  forSupplementaryViewOfKind: '@'
  withReuseIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())registerClass_forSupplementaryViewOfKind_withReuseIdentifier;


#ifndef registerClass_forCellWithReuseIdentifier                                  
#define registerClass_forCellWithReuseIdentifier(...)  registerClass_forCellWithReuseIdentifier(@"registerClass:forCellWithReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   registerClass: '#'
  forCellWithReuseIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())registerClass_forCellWithReuseIdentifier;


#ifndef contentOff_animated                                  
#define contentOff_animated(...)  contentOff_animated(@"setContentOffset:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentOffset: '{'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())contentOff_animated;


#ifndef scrollEnabled                                  
#define scrollEnabled(...)  scrollEnabled(@"setScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setScrollEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollEnabled;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())touchesCancelled_withEvent;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())pressesCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UICollectionView *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UICollectionView *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())pressesChanged_withEvent;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UICollectionView *(^)())layoutMargins;


#ifndef contentIn                                  
#define contentIn(...)  contentIn(@"setContentInset:", __VA_ARGS__)                                  
#endif
#ifndef contentIn_             
#define contentIn_(...)  contentIn(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setContentInset: '{'
     */
- (MLChain4UICollectionView *(^)())contentIn;


#ifndef allowsSelection                                  
#define allowsSelection(...)  allowsSelection(@"setAllowsSelection:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAllowsSelection: 'B'
     */
- (MLChain4UICollectionView *(^)())allowsSelection;


#ifndef prefetchDataSource                                  
#define prefetchDataSource(...)  prefetchDataSource(@"setPrefetchDataSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPrefetchDataSource: '@'
     */
- (MLChain4UICollectionView *(^)())prefetchDataSource;


#ifndef backgroundView                                  
#define backgroundView(...)  backgroundView(@"setBackgroundView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBackgroundView: '@'
     */
- (MLChain4UICollectionView *(^)())backgroundView;


#ifndef remembersLastFocusedIndexPath                                  
#define remembersLastFocusedIndexPath(...)  remembersLastFocusedIndexPath(@"setRemembersLastFocusedIndexPath:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRemembersLastFocusedIndexPath: 'B'
     */
- (MLChain4UICollectionView *(^)())remembersLastFocusedIndexPath;


#ifndef editing                                  
#define editing(...)  editing(@"setEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEditing: 'B'
     */
- (MLChain4UICollectionView *(^)())editing;


#ifndef selectItemAtIndexPath_animated_scrollPosition                                  
#define selectItemAtIndexPath_animated_scrollPosition(...)  selectItemAtIndexPath_animated_scrollPosition(@"selectItemAtIndexPath:animated:scrollPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   selectItemAtIndexPath: '@'
  animated: 'B'
  scrollPosition: 'Q'
     */
- (MLChain4UICollectionView *(^)())selectItemAtIndexPath_animated_scrollPosition;


#ifndef reloadSections                                  
#define reloadSections(...)  reloadSections(@"reloadSections:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   reloadSections: '@'
     */
- (MLChain4UICollectionView *(^)())reloadSections;


#ifndef performBatchUpdates_completion                                  
#define performBatchUpdates_completion(...)  performBatchUpdates_completion(@"performBatchUpdates:completion:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performBatchUpdates: '@'
  completion: '@'
     */
- (MLChain4UICollectionView *(^)())performBatchUpdates_completion;


#ifndef scrollToItemAtIndexPath_atScrollPosition_animated                                  
#define scrollToItemAtIndexPath_atScrollPosition_animated(...)  scrollToItemAtIndexPath_atScrollPosition_animated(@"scrollToItemAtIndexPath:atScrollPosition:animated:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollToItemAtIndexPath: '@'
  atScrollPosition: 'Q'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollToItemAtIndexPath_atScrollPosition_animated;


#ifndef insertItemsAtIndexPaths                                  
#define insertItemsAtIndexPaths(...)  insertItemsAtIndexPaths(@"insertItemsAtIndexPaths:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertItemsAtIndexPaths: '@'
     */
- (MLChain4UICollectionView *(^)())insertItemsAtIndexPaths;


#ifndef deselectItemAtIndexPath_animated                                  
#define deselectItemAtIndexPath_animated(...)  deselectItemAtIndexPath_animated(@"deselectItemAtIndexPath:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   deselectItemAtIndexPath: '@'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())deselectItemAtIndexPath_animated;


#ifndef updateInteractiveMovementTargetPosition                                  
#define updateInteractiveMovementTargetPosition(...)  updateInteractiveMovementTargetPosition(@"updateInteractiveMovementTargetPosition:", __VA_ARGS__)                                  
#endif
#ifndef updateInteractiveMovementTargetPosition_             
#define updateInteractiveMovementTargetPosition_(...)  updateInteractiveMovementTargetPosition(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   updateInteractiveMovementTargetPosition: '{'
     */
- (MLChain4UICollectionView *(^)())updateInteractiveMovementTargetPosition;


#ifndef cancelInteractiveMovement                              
#define cancelInteractiveMovement(...)  cancelInteractiveMovement(@"cancelInteractiveMovement")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> cancelInteractiveMovement     */
- (MLChain4UICollectionView *(^)())cancelInteractiveMovement;


#ifndef endInteractiveMovement                              
#define endInteractiveMovement(...)  endInteractiveMovement(@"endInteractiveMovement")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> endInteractiveMovement     */
- (MLChain4UICollectionView *(^)())endInteractiveMovement;


#ifndef prefetchCompleteForItemAtIndexPath                                  
#define prefetchCompleteForItemAtIndexPath(...)  prefetchCompleteForItemAtIndexPath(@"prefetchCompleteForItemAtIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   prefetchCompleteForItemAtIndexPath: '@'
     */
- (MLChain4UICollectionView *(^)())prefetchCompleteForItemAtIndexPath;


#ifndef collectionViewLayout                                  
#define collectionViewLayout(...)  collectionViewLayout(@"setCollectionViewLayout:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCollectionViewLayout: '@'
     */
- (MLChain4UICollectionView *(^)())collectionViewLayout;


#ifndef deleteItemsAtIndexPaths                                  
#define deleteItemsAtIndexPaths(...)  deleteItemsAtIndexPaths(@"deleteItemsAtIndexPaths:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   deleteItemsAtIndexPaths: '@'
     */
- (MLChain4UICollectionView *(^)())deleteItemsAtIndexPaths;


#ifndef reloadItemsAtIndexPaths                                  
#define reloadItemsAtIndexPaths(...)  reloadItemsAtIndexPaths(@"reloadItemsAtIndexPaths:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   reloadItemsAtIndexPaths: '@'
     */
- (MLChain4UICollectionView *(^)())reloadItemsAtIndexPaths;


#ifndef prefetchingEnabled                                  
#define prefetchingEnabled(...)  prefetchingEnabled(@"setPrefetchingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPrefetchingEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())prefetchingEnabled;


#ifndef moveItemAtIndexPath_toIndexPath                                  
#define moveItemAtIndexPath_toIndexPath(...)  moveItemAtIndexPath_toIndexPath(@"moveItemAtIndexPath:toIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveItemAtIndexPath: '@'
  toIndexPath: '@'
     */
- (MLChain4UICollectionView *(^)())moveItemAtIndexPath_toIndexPath;


#ifndef collectionViewLayout_withAnimator                                  
#define collectionViewLayout_withAnimator(...)  collectionViewLayout_withAnimator(@"setCollectionViewLayout:withAnimator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCollectionViewLayout: '@'
  withAnimator: '@'
     */
- (MLChain4UICollectionView *(^)())collectionViewLayout_withAnimator;


#ifndef insertSections                                  
#define insertSections(...)  insertSections(@"insertSections:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSections: '@'
     */
- (MLChain4UICollectionView *(^)())insertSections;


#ifndef deleteSections                                  
#define deleteSections(...)  deleteSections(@"deleteSections:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   deleteSections: '@'
     */
- (MLChain4UICollectionView *(^)())deleteSections;


#ifndef performBatchUpdates_withAnimator                                  
#define performBatchUpdates_withAnimator(...)  performBatchUpdates_withAnimator(@"performBatchUpdates:withAnimator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performBatchUpdates: '@'
  withAnimator: '@'
     */
- (MLChain4UICollectionView *(^)())performBatchUpdates_withAnimator;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setFrame: '{'
     */
- (MLChain4UICollectionView *(^)())frame;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UICollectionView *(^)())encodeWithCoder;


#ifndef dataSource                                  
#define dataSource(...)  dataSource(@"setDataSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDataSource: '@'
     */
- (MLChain4UICollectionView *(^)())dataSource;


#ifndef moveSection_toSection                                  
#define moveSection_toSection(...)  moveSection_toSection(@"moveSection:toSection:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveSection: 'q'
  toSection: 'q'
     */
- (MLChain4UICollectionView *(^)())moveSection_toSection;


#ifndef collectionViewLayout_animated_completion                                  
#define collectionViewLayout_animated_completion(...)  collectionViewLayout_animated_completion(@"setCollectionViewLayout:animated:completion:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCollectionViewLayout: '@'
  animated: 'B'
  completion: '@'
     */
- (MLChain4UICollectionView *(^)())collectionViewLayout_animated_completion;


#ifndef collectionViewLayout_animated                                  
#define collectionViewLayout_animated(...)  collectionViewLayout_animated(@"setCollectionViewLayout:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCollectionViewLayout: '@'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())collectionViewLayout_animated;


#ifndef scrollToBottomAnimated                                  
#define scrollToBottomAnimated(...)  scrollToBottomAnimated(@"scrollToBottomAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollToBottomAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollToBottomAnimated;


#ifndef scrollToLeftAnimated                                  
#define scrollToLeftAnimated(...)  scrollToLeftAnimated(@"scrollToLeftAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollToLeftAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollToLeftAnimated;


#ifndef scrollToRightAnimated                                  
#define scrollToRightAnimated(...)  scrollToRightAnimated(@"scrollToRightAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollToRightAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollToRightAnimated;


#ifndef scrollToTop                              
#define scrollToTop(...)  scrollToTop(@"scrollToTop")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> scrollToTop     */
- (MLChain4UICollectionView *(^)())scrollToTop;


#ifndef scrollToBottom                              
#define scrollToBottom(...)  scrollToBottom(@"scrollToBottom")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> scrollToBottom     */
- (MLChain4UICollectionView *(^)())scrollToBottom;


#ifndef scrollToLeft                              
#define scrollToLeft(...)  scrollToLeft(@"scrollToLeft")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> scrollToLeft     */
- (MLChain4UICollectionView *(^)())scrollToLeft;


#ifndef scrollToRight                              
#define scrollToRight(...)  scrollToRight(@"scrollToRight")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> scrollToRight     */
- (MLChain4UICollectionView *(^)())scrollToRight;


#ifndef scrollToTopAnimated                                  
#define scrollToTopAnimated(...)  scrollToTopAnimated(@"scrollToTopAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollToTopAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollToTopAnimated;


#ifndef mj_header                                  
#define mj_header(...)  mj_header(@"setMj_header:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_header: '@'
     */
- (MLChain4UICollectionView *(^)())mj_header;


#ifndef mj_reloadDataBlock                                  
#define mj_reloadDataBlock(...)  mj_reloadDataBlock(@"setMj_reloadDataBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_reloadDataBlock: '@'
     */
- (MLChain4UICollectionView *(^)())mj_reloadDataBlock;


#ifndef mj_footer                                  
#define mj_footer(...)  mj_footer(@"setMj_footer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_footer: '@'
     */
- (MLChain4UICollectionView *(^)())mj_footer;


#ifndef footer                                  
#define footer(...)  footer(@"setFooter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setFooter: '@'
     */
- (MLChain4UICollectionView *(^)())footer;


#ifndef executeReloadDataBlock                              
#define executeReloadDataBlock(...)  executeReloadDataBlock(@"executeReloadDataBlock")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> executeReloadDataBlock     */
- (MLChain4UICollectionView *(^)())executeReloadDataBlock;


#ifndef header                                  
#define header(...)  header(@"setHeader:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setHeader: '@'
     */
- (MLChain4UICollectionView *(^)())header;


#ifndef mj_inB                                  
#define mj_inB(...)  mj_inB(@"setMj_insetB:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_insetB: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_inB;


#ifndef mj_offY                                  
#define mj_offY(...)  mj_offY(@"setMj_offsetY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_offsetY: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_offY;


#ifndef mj_inT                                  
#define mj_inT(...)  mj_inT(@"setMj_insetT:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_insetT: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_inT;


#ifndef mj_inL                                  
#define mj_inL(...)  mj_inL(@"setMj_insetL:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_insetL: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_inL;


#ifndef mj_inR                                  
#define mj_inR(...)  mj_inR(@"setMj_insetR:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_insetR: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_inR;


#ifndef mj_offX                                  
#define mj_offX(...)  mj_offX(@"setMj_offsetX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_offsetX: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_offX;


#ifndef mj_contentW                                  
#define mj_contentW(...)  mj_contentW(@"setMj_contentW:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_contentW: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_contentW;


#ifndef mj_contentH                                  
#define mj_contentH(...)  mj_contentH(@"setMj_contentH:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_contentH: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_contentH;


#ifndef shouldRestoreScrollViewContentOff                                  
#define shouldRestoreScrollViewContentOff(...)  shouldRestoreScrollViewContentOff(@"setShouldRestoreScrollViewContentOffset:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShouldRestoreScrollViewContentOffset: 'B'
     */
- (MLChain4UICollectionView *(^)())shouldRestoreScrollViewContentOff;


#ifndef reloadEmptyDataSet                              
#define reloadEmptyDataSet(...)  reloadEmptyDataSet(@"reloadEmptyDataSet")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> reloadEmptyDataSet     */
- (MLChain4UICollectionView *(^)())reloadEmptyDataSet;


#ifndef emptyDataSetSource                                  
#define emptyDataSetSource(...)  emptyDataSetSource(@"setEmptyDataSetSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEmptyDataSetSource: '@'
     */
- (MLChain4UICollectionView *(^)())emptyDataSetSource;


#ifndef emptyDataSetDelegate                                  
#define emptyDataSetDelegate(...)  emptyDataSetDelegate(@"setEmptyDataSetDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEmptyDataSetDelegate: '@'
     */
- (MLChain4UICollectionView *(^)())emptyDataSetDelegate;


#ifndef dzn_didTapContentView                                  
#define dzn_didTapContentView(...)  dzn_didTapContentView(@"dzn_didTapContentView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   dzn_didTapContentView: '@'
     */
- (MLChain4UICollectionView *(^)())dzn_didTapContentView;


#ifndef emptyDataSetView                                  
#define emptyDataSetView(...)  emptyDataSetView(@"setEmptyDataSetView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEmptyDataSetView: '@'
     */
- (MLChain4UICollectionView *(^)())emptyDataSetView;


#ifndef dzn_invalidate                              
#define dzn_invalidate(...)  dzn_invalidate(@"dzn_invalidate")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_invalidate     */
- (MLChain4UICollectionView *(^)())dzn_invalidate;


#ifndef swizzleIfPossible                                  
#define swizzleIfPossible(...)  swizzleIfPossible(@"swizzleIfPossible:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   swizzleIfPossible: ':'
     */
- (MLChain4UICollectionView *(^)())swizzleIfPossible;


#ifndef dzn_reloadEmptyDataSet                              
#define dzn_reloadEmptyDataSet(...)  dzn_reloadEmptyDataSet(@"dzn_reloadEmptyDataSet")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_reloadEmptyDataSet     */
- (MLChain4UICollectionView *(^)())dzn_reloadEmptyDataSet;


#ifndef dzn_willAppear                              
#define dzn_willAppear(...)  dzn_willAppear(@"dzn_willAppear")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_willAppear     */
- (MLChain4UICollectionView *(^)())dzn_willAppear;


#ifndef dzn_didAppear                              
#define dzn_didAppear(...)  dzn_didAppear(@"dzn_didAppear")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_didAppear     */
- (MLChain4UICollectionView *(^)())dzn_didAppear;


#ifndef dzn_willDisappear                              
#define dzn_willDisappear(...)  dzn_willDisappear(@"dzn_willDisappear")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_willDisappear     */
- (MLChain4UICollectionView *(^)())dzn_willDisappear;


#ifndef dzn_didDisappear                              
#define dzn_didDisappear(...)  dzn_didDisappear(@"dzn_didDisappear")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> dzn_didDisappear     */
- (MLChain4UICollectionView *(^)())dzn_didDisappear;


#ifndef dzn_didTapDataButton                                  
#define dzn_didTapDataButton(...)  dzn_didTapDataButton(@"dzn_didTapDataButton:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   dzn_didTapDataButton: '@'
     */
- (MLChain4UICollectionView *(^)())dzn_didTapDataButton;


#ifndef loadType                                  
#define loadType(...)  loadType(@"setLoadType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setLoadType: 'q'
     */
- (MLChain4UICollectionView *(^)())loadType;


#ifndef closeMJRefreshHeaderAndFooter                              
#define closeMJRefreshHeaderAndFooter(...)  closeMJRefreshHeaderAndFooter(@"closeMJRefreshHeaderAndFooter")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> closeMJRefreshHeaderAndFooter     */
- (MLChain4UICollectionView *(^)())closeMJRefreshHeaderAndFooter;


#ifndef cellDatas                                  
#define cellDatas(...)  cellDatas(@"setCellDatas:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCellDatas: '@'
     */
- (MLChain4UICollectionView *(^)())cellDatas;


#ifndef pageSize                                  
#define pageSize(...)  pageSize(@"setPageSize:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPageSize: 'q'
     */
- (MLChain4UICollectionView *(^)())pageSize;


#ifndef statusType                                  
#define statusType(...)  statusType(@"setStatusType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setStatusType: 'q'
     */
- (MLChain4UICollectionView *(^)())statusType;


#ifndef currentPage                                  
#define currentPage(...)  currentPage(@"setCurrentPage:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCurrentPage: 'q'
     */
- (MLChain4UICollectionView *(^)())currentPage;


#ifndef ab_scrollToSelectionOfTextView                                  
#define ab_scrollToSelectionOfTextView(...)  ab_scrollToSelectionOfTextView(@"ab_scrollToSelectionOfTextView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
     */
- (MLChain4UICollectionView *(^)())ab_scrollToSelectionOfTextView;


#ifndef ab_scrollToSelectionOfTextView_animated                                  
#define ab_scrollToSelectionOfTextView_animated(...)  ab_scrollToSelectionOfTextView_animated(@"ab_scrollToSelectionOfTextView:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())ab_scrollToSelectionOfTextView_animated;


#ifndef ab_adjustForAutomaticKeyboardInfo_lastAdjustment                                  
#define ab_adjustForAutomaticKeyboardInfo_lastAdjustment(...)  ab_adjustForAutomaticKeyboardInfo_lastAdjustment(@"ab_adjustForAutomaticKeyboardInfo:lastAdjustment:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ab_adjustForAutomaticKeyboardInfo: '@'
  lastAdjustment: '^'
     */
- (MLChain4UICollectionView *(^)())ab_adjustForAutomaticKeyboardInfo_lastAdjustment;


#ifndef canCancelContentTouches                                  
#define canCancelContentTouches(...)  canCancelContentTouches(@"setCanCancelContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCanCancelContentTouches: 'B'
     */
- (MLChain4UICollectionView *(^)())canCancelContentTouches;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UICollectionView *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsLayout     */
- (MLChain4UICollectionView *(^)())setNeedsLayout;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())userInteractionEnabled;


#ifndef showsVerticalScrollIndicator                                  
#define showsVerticalScrollIndicator(...)  showsVerticalScrollIndicator(@"setShowsVerticalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShowsVerticalScrollIndicator: 'B'
     */
- (MLChain4UICollectionView *(^)())showsVerticalScrollIndicator;


#ifndef showsHorizontalScrollIndicator                                  
#define showsHorizontalScrollIndicator(...)  showsHorizontalScrollIndicator(@"setShowsHorizontalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShowsHorizontalScrollIndicator: 'B'
     */
- (MLChain4UICollectionView *(^)())showsHorizontalScrollIndicator;


#ifndef scrollRectToVisible_animated                                  
#define scrollRectToVisible_animated(...)  scrollRectToVisible_animated(@"scrollRectToVisible:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollRectToVisible: '{'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollRectToVisible_animated;


#ifndef programmaticScrollEnabled                                  
#define programmaticScrollEnabled(...)  programmaticScrollEnabled(@"setProgrammaticScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setProgrammaticScrollEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())programmaticScrollEnabled;


#ifndef contentOff                                  
#define contentOff(...)  contentOff(@"setContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef contentOff_             
#define contentOff_(...)  contentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setContentOffset: '{'
     */
- (MLChain4UICollectionView *(^)())contentOff;


#ifndef directionalLockEnabled                                  
#define directionalLockEnabled(...)  directionalLockEnabled(@"setDirectionalLockEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDirectionalLockEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())directionalLockEnabled;


#ifndef scrollTestParameters                                  
#define scrollTestParameters(...)  scrollTestParameters(@"setScrollTestParameters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setScrollTestParameters: '@'
     */
- (MLChain4UICollectionView *(^)())scrollTestParameters;


#ifndef handlePan                                  
#define handlePan(...)  handlePan(@"handlePan:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   handlePan: '@'
     */
- (MLChain4UICollectionView *(^)())handlePan;


#ifndef handlePinch                                  
#define handlePinch(...)  handlePinch(@"handlePinch:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   handlePinch: '@'
     */
- (MLChain4UICollectionView *(^)())handlePinch;


#ifndef delayed                                  
#define delayed(...)  delayed(@"delayed:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   delayed: '@'
     */
- (MLChain4UICollectionView *(^)())delayed;


#ifndef willRotateToInterfaceOrientation                                  
#define willRotateToInterfaceOrientation(...)  willRotateToInterfaceOrientation(@"willRotateToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willRotateToInterfaceOrientation: '@'
     */
- (MLChain4UICollectionView *(^)())willRotateToInterfaceOrientation;


#ifndef willAnimateRotationToInterfaceOrientation                                  
#define willAnimateRotationToInterfaceOrientation(...)  willAnimateRotationToInterfaceOrientation(@"willAnimateRotationToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willAnimateRotationToInterfaceOrientation: '@'
     */
- (MLChain4UICollectionView *(^)())willAnimateRotationToInterfaceOrientation;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
     */
- (MLChain4UICollectionView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:force:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__), (int)metamacro_at(7, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
  force: 'B'
     */
- (MLChain4UICollectionView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force;


#ifndef minimumZoomScale                                  
#define minimumZoomScale(...)  minimumZoomScale(@"setMinimumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMinimumZoomScale: 'd'
     */
- (MLChain4UICollectionView *(^)())minimumZoomScale;


#ifndef maximumZoomScale                                  
#define maximumZoomScale(...)  maximumZoomScale(@"setMaximumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMaximumZoomScale: 'd'
     */
- (MLChain4UICollectionView *(^)())maximumZoomScale;


#ifndef zoomScale_animated                                  
#define zoomScale_animated(...)  zoomScale_animated(@"setZoomScale:animated:", (double)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setZoomScale: 'd'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())zoomScale_animated;


#ifndef alwaysBounceVertical                                  
#define alwaysBounceVertical(...)  alwaysBounceVertical(@"setAlwaysBounceVertical:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAlwaysBounceVertical: 'B'
     */
- (MLChain4UICollectionView *(^)())alwaysBounceVertical;


#ifndef scrollingEnabled                                  
#define scrollingEnabled(...)  scrollingEnabled(@"setScrollingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setScrollingEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollingEnabled;


#ifndef zoomEnabled                                  
#define zoomEnabled(...)  zoomEnabled(@"setZoomEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setZoomEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())zoomEnabled;


#ifndef pagingEnabled                                  
#define pagingEnabled(...)  pagingEnabled(@"setPagingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPagingEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())pagingEnabled;


#ifndef bounces                                  
#define bounces(...)  bounces(@"setBounces:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBounces: 'B'
     */
- (MLChain4UICollectionView *(^)())bounces;


#ifndef bouncesHorizontally                                  
#define bouncesHorizontally(...)  bouncesHorizontally(@"setBouncesHorizontally:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBouncesHorizontally: 'B'
     */
- (MLChain4UICollectionView *(^)())bouncesHorizontally;


#ifndef bouncesVertically                                  
#define bouncesVertically(...)  bouncesVertically(@"setBouncesVertically:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBouncesVertically: 'B'
     */
- (MLChain4UICollectionView *(^)())bouncesVertically;


#ifndef updateInBottomDuringKeyboardDismiss                                  
#define updateInBottomDuringKeyboardDismiss(...)  updateInBottomDuringKeyboardDismiss(@"setUpdateInsetBottomDuringKeyboardDismiss:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setUpdateInsetBottomDuringKeyboardDismiss: 'B'
     */
- (MLChain4UICollectionView *(^)())updateInBottomDuringKeyboardDismiss;


#ifndef alwaysBounceHorizontal                                  
#define alwaysBounceHorizontal(...)  alwaysBounceHorizontal(@"setAlwaysBounceHorizontal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAlwaysBounceHorizontal: 'B'
     */
- (MLChain4UICollectionView *(^)())alwaysBounceHorizontal;


#ifndef scrollIndicatorIns                                  
#define scrollIndicatorIns(...)  scrollIndicatorIns(@"setScrollIndicatorInsets:", __VA_ARGS__)                                  
#endif
#ifndef scrollIndicatorIns_             
#define scrollIndicatorIns_(...)  scrollIndicatorIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setScrollIndicatorInsets: '{'
     */
- (MLChain4UICollectionView *(^)())scrollIndicatorIns;


#ifndef decelerationRate                                  
#define decelerationRate(...)  decelerationRate(@"setDecelerationRate:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDecelerationRate: 'd'
     */
- (MLChain4UICollectionView *(^)())decelerationRate;


#ifndef horizontalScrollDecelerationFactor                                  
#define horizontalScrollDecelerationFactor(...)  horizontalScrollDecelerationFactor(@"setHorizontalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setHorizontalScrollDecelerationFactor: 'd'
     */
- (MLChain4UICollectionView *(^)())horizontalScrollDecelerationFactor;


#ifndef verticalScrollDecelerationFactor                                  
#define verticalScrollDecelerationFactor(...)  verticalScrollDecelerationFactor(@"setVerticalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setVerticalScrollDecelerationFactor: 'd'
     */
- (MLChain4UICollectionView *(^)())verticalScrollDecelerationFactor;


#ifndef allowsMultipleFingers                                  
#define allowsMultipleFingers(...)  allowsMultipleFingers(@"setAllowsMultipleFingers:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAllowsMultipleFingers: 'B'
     */
- (MLChain4UICollectionView *(^)())allowsMultipleFingers;


#ifndef tracksImmediatelyWhileDecelerating                                  
#define tracksImmediatelyWhileDecelerating(...)  tracksImmediatelyWhileDecelerating(@"setTracksImmediatelyWhileDecelerating:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTracksImmediatelyWhileDecelerating: 'B'
     */
- (MLChain4UICollectionView *(^)())tracksImmediatelyWhileDecelerating;


#ifndef preservesCenterDuringRotation                                  
#define preservesCenterDuringRotation(...)  preservesCenterDuringRotation(@"setPreservesCenterDuringRotation:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPreservesCenterDuringRotation: 'B'
     */
- (MLChain4UICollectionView *(^)())preservesCenterDuringRotation;


#ifndef flashScrollIndicators                              
#define flashScrollIndicators(...)  flashScrollIndicators(@"flashScrollIndicators")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> flashScrollIndicators     */
- (MLChain4UICollectionView *(^)())flashScrollIndicators;


#ifndef showBackgroundShadow                                  
#define showBackgroundShadow(...)  showBackgroundShadow(@"setShowBackgroundShadow:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShowBackgroundShadow: 'B'
     */
- (MLChain4UICollectionView *(^)())showBackgroundShadow;


#ifndef delaysContentTouches                                  
#define delaysContentTouches(...)  delaysContentTouches(@"setDelaysContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDelaysContentTouches: 'B'
     */
- (MLChain4UICollectionView *(^)())delaysContentTouches;


#ifndef scrollsToTop                                  
#define scrollsToTop(...)  scrollsToTop(@"setScrollsToTop:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setScrollsToTop: 'B'
     */
- (MLChain4UICollectionView *(^)())scrollsToTop;


#ifndef zoomScale                                  
#define zoomScale(...)  zoomScale(@"setZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setZoomScale: 'd'
     */
- (MLChain4UICollectionView *(^)())zoomScale;


#ifndef zoomToRect_animated                                  
#define zoomToRect_animated(...)  zoomToRect_animated(@"zoomToRect:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   zoomToRect: '{'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())zoomToRect_animated;


#ifndef refreshControl                                  
#define refreshControl(...)  refreshControl(@"setRefreshControl:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRefreshControl: '@'
     */
- (MLChain4UICollectionView *(^)())refreshControl;


#ifndef animator_stopAnimation_fraction                                  
#define animator_stopAnimation_fraction(...)  animator_stopAnimation_fraction(@"animator:stopAnimation:fraction:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   animator: '@'
  stopAnimation: '@'
  fraction: 'f'
     */
- (MLChain4UICollectionView *(^)())animator_stopAnimation_fraction;


#ifndef autoscrollContentOff                                  
#define autoscrollContentOff(...)  autoscrollContentOff(@"setAutoscrollContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef autoscrollContentOff_             
#define autoscrollContentOff_(...)  autoscrollContentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setAutoscrollContentOffset: '{'
     */
- (MLChain4UICollectionView *(^)())autoscrollContentOff;


#ifndef bouncesZoom                                  
#define bouncesZoom(...)  bouncesZoom(@"setBouncesZoom:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBouncesZoom: 'B'
     */
- (MLChain4UICollectionView *(^)())bouncesZoom;


#ifndef indicatorStyle                                  
#define indicatorStyle(...)  indicatorStyle(@"setIndicatorStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setIndicatorStyle: 'q'
     */
- (MLChain4UICollectionView *(^)())indicatorStyle;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeFromSuperview     */
- (MLChain4UICollectionView *(^)())removeFromSuperview;


#ifndef keyboardDismissMode                                  
#define keyboardDismissMode(...)  keyboardDismissMode(@"setKeyboardDismissMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setKeyboardDismissMode: 'q'
     */
- (MLChain4UICollectionView *(^)())keyboardDismissMode;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTop: 'd'
     */
- (MLChain4UICollectionView *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRight: 'd'
     */
- (MLChain4UICollectionView *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBottom: 'd'
     */
- (MLChain4UICollectionView *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UICollectionView *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeAllSubviews     */
- (MLChain4UICollectionView *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setLeft: 'd'
     */
- (MLChain4UICollectionView *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UICollectionView *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UICollectionView *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setWidth: 'd'
     */
- (MLChain4UICollectionView *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setHeight: 'd'
     */
- (MLChain4UICollectionView *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setSize: '{'
     */
- (MLChain4UICollectionView *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setOrigin: '{'
     */
- (MLChain4UICollectionView *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UICollectionView *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UICollectionView *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMas_key: '@'
     */
- (MLChain4UICollectionView *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setMj_size: '{'
     */
- (MLChain4UICollectionView *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UICollectionView *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UICollectionView *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UICollectionView *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UICollectionView *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UICollectionView *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UICollectionView *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UICollectionView *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UICollectionView *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UICollectionView *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UICollectionView *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UICollectionView *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UICollectionView *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UICollectionView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UICollectionView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UICollectionView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UICollectionView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UICollectionView *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UICollectionView *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UICollectionView *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UICollectionView *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UICollectionView *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UICollectionView *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UICollectionView *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UICollectionView *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UICollectionView *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UICollectionView *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UICollectionView *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UICollectionView *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UICollectionView *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UICollectionView *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updateBadgeFrame     */
- (MLChain4UICollectionView *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeBadge     */
- (MLChain4UICollectionView *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> badgeInit     */
- (MLChain4UICollectionView *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> refreshBadge     */
- (MLChain4UICollectionView *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UICollectionView *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBadge: '@'
     */
- (MLChain4UICollectionView *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UICollectionView *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UICollectionView *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UICollectionView *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UICollectionView *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UICollectionView *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UICollectionView *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UICollectionView *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UICollectionView *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UICollectionView *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UICollectionView *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UICollectionView *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UICollectionView *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addWidth: 'd'
     */
- (MLChain4UICollectionView *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addHeight: 'd'
     */
- (MLChain4UICollectionView *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setX: 'd'
     */
- (MLChain4UICollectionView *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setY: 'd'
     */
- (MLChain4UICollectionView *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UICollectionView *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UICollectionView *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   tapEvent: '@'
     */
- (MLChain4UICollectionView *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UICollectionView *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UICollectionView *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UICollectionView *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UICollectionView *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UICollectionView *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UICollectionView *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UICollectionView *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeLastDrawRectView     */
- (MLChain4UICollectionView *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UICollectionView *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UICollectionView *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UICollectionView *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UICollectionView *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   tapAction: '@'
     */
- (MLChain4UICollectionView *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   swipeAction: '@'
     */
- (MLChain4UICollectionView *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   panAction: '@'
     */
- (MLChain4UICollectionView *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pinchAction: '@'
     */
- (MLChain4UICollectionView *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UICollectionView *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   rotationAction: '@'
     */
- (MLChain4UICollectionView *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   longPressAction: '@'
     */
- (MLChain4UICollectionView *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UICollectionView *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UICollectionView *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UICollectionView *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UICollectionView *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UICollectionView *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UICollectionView *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())enabled;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UICollectionView *(^)())nsli_addConstraint;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UICollectionView *(^)())solutionDidChangeInEngine;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UICollectionView *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UICollectionView *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UICollectionView *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UICollectionView *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsDisplay     */
- (MLChain4UICollectionView *(^)())setNeedsDisplay;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setPosition: '{'
     */
- (MLChain4UICollectionView *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setTransform: '{'
     */
- (MLChain4UICollectionView *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> layoutIfNeeded     */
- (MLChain4UICollectionView *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UICollectionView *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UICollectionView *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UICollectionView *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UICollectionView *(^)())clipsToBounds;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UICollectionView *(^)())autoresizesSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UICollectionView *(^)())needsDisplayOnBoundsChange;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UICollectionView *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UICollectionView *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UICollectionView *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UICollectionView *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UICollectionView *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UICollectionView *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UICollectionView *(^)())sendSubviewToBack;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UICollectionView *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UICollectionView *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UICollectionView *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UICollectionView *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UICollectionView *(^)())removeGestureRecognizer;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UICollectionView *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addConstraints: '@'
     */
- (MLChain4UICollectionView *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UICollectionView *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UICollectionView *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UICollectionView *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setCenter: '{'
     */
- (MLChain4UICollectionView *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UICollectionView *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UICollectionView *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UICollectionView *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UICollectionView *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UICollectionView *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UICollectionView *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UICollectionView *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UICollectionView *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UICollectionView *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UICollectionView *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UICollectionView *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UICollectionView *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UICollectionView *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UICollectionView *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UICollectionView *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTintColor: '@'
     */
- (MLChain4UICollectionView *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UICollectionView *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UICollectionView *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UICollectionView *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UICollectionView *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UICollectionView *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UICollectionView *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> focusedViewWillChange     */
- (MLChain4UICollectionView *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UICollectionView *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> focusedViewDidChange     */
- (MLChain4UICollectionView *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UICollectionView *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addConstraint: '@'
     */
- (MLChain4UICollectionView *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UICollectionView *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UICollectionView *(^)())tapDelegate;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UICollectionView *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UICollectionView *(^)())tintAdjustmentMode;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> tintColorDidChange     */
- (MLChain4UICollectionView *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UICollectionView *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMaskView: '@'
     */
- (MLChain4UICollectionView *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UICollectionView *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setTag: 'q'
     */
- (MLChain4UICollectionView *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setVisualState: '@'
     */
- (MLChain4UICollectionView *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UICollectionView *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UICollectionView *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UICollectionView *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UICollectionView *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UICollectionView *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UICollectionView *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> sizeToFit     */
- (MLChain4UICollectionView *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UICollectionView *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UICollectionView *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UICollectionView *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UICollectionView *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UICollectionView *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UICollectionView *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UICollectionView *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UICollectionView *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UICollectionView *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UICollectionView *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UICollectionView *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UICollectionView *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UICollectionView *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UICollectionView *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UICollectionView *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UICollectionView *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UICollectionView *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UICollectionView *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UICollectionView *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UICollectionView *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UICollectionView *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UICollectionView *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UICollectionView *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UICollectionView *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UICollectionView *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> didMoveToSuperview     */
- (MLChain4UICollectionView *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UICollectionView *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UICollectionView *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UICollectionView *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UICollectionView *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UICollectionView *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UICollectionView *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UICollectionView *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UICollectionView *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UICollectionView *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UICollectionView *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UICollectionView *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UICollectionView *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UICollectionView *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UICollectionView *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UICollectionView *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UICollectionView *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UICollectionView *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UICollectionView *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UICollectionView *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UICollectionView *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updateConstraints     */
- (MLChain4UICollectionView *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UICollectionView *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UICollectionView *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UICollectionView *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UICollectionView *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UICollectionView *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UICollectionView *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UICollectionView *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UICollectionView *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UICollectionView *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UICollectionView *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UICollectionView *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UICollectionView *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UICollectionView *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UICollectionView *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UICollectionView *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UICollectionView *(^)())exerciseAmbiguityInLayout;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setHidden: 'B'
     */
- (MLChain4UICollectionView *(^)())hidden;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UICollectionView *(^)())backgroundColor;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UICollectionView *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addSubview: '@'
     */
- (MLChain4UICollectionView *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   drawRect: '{'
     */
- (MLChain4UICollectionView *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UICollectionView *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UICollectionView *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UICollectionView *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setCharge: 'f'
     */
- (MLChain4UICollectionView *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UICollectionView *(^)())viewWillMoveToSuperview;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UICollectionView *(^)())motionCancelled_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())restorationIdentifier;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UICollectionView *(^)())touchesEstimatedPropertiesUpdated;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> beginSelectionChange     */
- (MLChain4UICollectionView *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> endSelectionChange     */
- (MLChain4UICollectionView *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UICollectionView *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> reloadInputViews     */
- (MLChain4UICollectionView *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UICollectionView *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UICollectionView *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UICollectionView *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UICollectionView *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UICollectionView *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UICollectionView *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeObserverBlocks     */
- (MLChain4UICollectionView *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UICollectionView *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UICollectionView *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UICollectionView *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UICollectionView *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UICollectionView *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> removeAssociatedValues     */
- (MLChain4UICollectionView *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UICollectionView *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setViewStack: '@'
     */
- (MLChain4UICollectionView *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> assertNotDealloc     */
- (MLChain4UICollectionView *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UICollectionView *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UICollectionView *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UICollectionView *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UICollectionView *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   mj_decode: '@'
     */
- (MLChain4UICollectionView *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   mj_encode: '@'
     */
- (MLChain4UICollectionView *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UICollectionView *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UICollectionView *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UICollectionView *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UICollectionView *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UICollectionView *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UICollectionView *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UICollectionView *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UICollectionView *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UICollectionView *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UICollectionView *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UICollectionView *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UICollectionView *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UICollectionView *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UICollectionView *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UICollectionView *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UICollectionView *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UICollectionView *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UICollectionView *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UICollectionView *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UICollectionView *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UICollectionView *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UICollectionView *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UICollectionView *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> allowSafePerformSelector     */
- (MLChain4UICollectionView *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UICollectionView *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UICollectionView *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UICollectionView *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UICollectionView *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UICollectionView *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UICollectionView *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UICollectionView *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UICollectionView *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UICollectionView *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UICollectionView *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UICollectionView *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UICollectionView *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> mf_lock     */
- (MLChain4UICollectionView *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> mf_unlock     */
- (MLChain4UICollectionView *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> mf_lockWithPriority     */
- (MLChain4UICollectionView *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UICollectionView *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UICollectionView *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UICollectionView *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> accessibilityIncrement     */
- (MLChain4UICollectionView *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> accessibilityDecrement     */
- (MLChain4UICollectionView *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UICollectionView *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UICollectionView *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UICollectionView *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UICollectionView *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UICollectionView *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UICollectionView *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UICollectionView *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UICollectionView *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UICollectionView *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UICollectionView *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UICollectionView *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> awakeFromNib     */
- (MLChain4UICollectionView *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UICollectionView *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> releaseOnMainThread     */
- (MLChain4UICollectionView *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UICollectionView *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UICollectionView *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UICollectionView *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeObservation: '@'
     */
- (MLChain4UICollectionView *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UICollectionView *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UICollectionView                                
SEL-> finishObserving     */
- (MLChain4UICollectionView *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UICollectionView *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UICollectionView *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UICollectionView *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UICollectionView *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UICollectionView *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UICollectionView *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UICollectionView *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UICollectionView *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UICollectionView *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UICollectionView *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UICollectionView *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UICollectionView *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UICollectionView *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UICollectionView *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UICollectionView *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UICollectionView *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UICollectionView *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UICollectionView *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UICollectionView *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UICollectionView *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UICollectionView *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UICollectionView *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UICollectionView *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UICollectionView *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UICollectionView                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UICollectionView *(^)())doesNotRecognizeSelector;


@end
