//  
//  MLChain4UITableView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"



@interface MLChain4UITableView:MLChain4UIScrollView
- (UITableView *)chainObject;
#ifndef insertRowAtIndexPath_withRowAnimation                                  
#define insertRowAtIndexPath_withRowAnimation(...)  insertRowAtIndexPath_withRowAnimation(@"insertRowAtIndexPath:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertRowAtIndexPath: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())insertRowAtIndexPath_withRowAnimation;


#ifndef reloadRowAtIndexPath_withRowAnimation                                  
#define reloadRowAtIndexPath_withRowAnimation(...)  reloadRowAtIndexPath_withRowAnimation(@"reloadRowAtIndexPath:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reloadRowAtIndexPath: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())reloadRowAtIndexPath_withRowAnimation;


#ifndef deleteRowAtIndexPath_withRowAnimation                                  
#define deleteRowAtIndexPath_withRowAnimation(...)  deleteRowAtIndexPath_withRowAnimation(@"deleteRowAtIndexPath:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deleteRowAtIndexPath: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())deleteRowAtIndexPath_withRowAnimation;


#ifndef updateWithBlock                                  
#define updateWithBlock(...)  updateWithBlock(@"updateWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   updateWithBlock: '@'
     */
- (MLChain4UITableView *(^)())updateWithBlock;


#ifndef scrollToRow_inSection_atScrollPosition_animated                                  
#define scrollToRow_inSection_atScrollPosition_animated(...)  scrollToRow_inSection_atScrollPosition_animated(@"scrollToRow:inSection:atScrollPosition:animated:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToRow: 'Q'
  inSection: 'Q'
  atScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToRow_inSection_atScrollPosition_animated;


#ifndef insertRow_inSection_withRowAnimation                                  
#define insertRow_inSection_withRowAnimation(...)  insertRow_inSection_withRowAnimation(@"insertRow:inSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertRow: 'Q'
  inSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())insertRow_inSection_withRowAnimation;


#ifndef reloadRow_inSection_withRowAnimation                                  
#define reloadRow_inSection_withRowAnimation(...)  reloadRow_inSection_withRowAnimation(@"reloadRow:inSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reloadRow: 'Q'
  inSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())reloadRow_inSection_withRowAnimation;


#ifndef deleteRow_inSection_withRowAnimation                                  
#define deleteRow_inSection_withRowAnimation(...)  deleteRow_inSection_withRowAnimation(@"deleteRow:inSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deleteRow: 'Q'
  inSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())deleteRow_inSection_withRowAnimation;


#ifndef insertSection_withRowAnimation                                  
#define insertSection_withRowAnimation(...)  insertSection_withRowAnimation(@"insertSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())insertSection_withRowAnimation;


#ifndef deleteSection_withRowAnimation                                  
#define deleteSection_withRowAnimation(...)  deleteSection_withRowAnimation(@"deleteSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deleteSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())deleteSection_withRowAnimation;


#ifndef reloadSection_withRowAnimation                                  
#define reloadSection_withRowAnimation(...)  reloadSection_withRowAnimation(@"reloadSection:withRowAnimation:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reloadSection: 'Q'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())reloadSection_withRowAnimation;


#ifndef clearSelectedRowsAnimated                                  
#define clearSelectedRowsAnimated(...)  clearSelectedRowsAnimated(@"clearSelectedRowsAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   clearSelectedRowsAnimated: 'B'
     */
- (MLChain4UITableView *(^)())clearSelectedRowsAnimated;


#ifndef fd_debugLog                                  
#define fd_debugLog(...)  fd_debugLog(@"fd_debugLog:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_debugLog: '@'
     */
- (MLChain4UITableView *(^)())fd_debugLog;


#ifndef fd_debugLogEnabled                                  
#define fd_debugLogEnabled(...)  fd_debugLogEnabled(@"setFd_debugLogEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setFd_debugLogEnabled: 'B'
     */
- (MLChain4UITableView *(^)())fd_debugLogEnabled;


#ifndef fd_reloadData                              
#define fd_reloadData(...)  fd_reloadData(@"fd_reloadData")                              
#endif
/**     ClassName-> UITableView                                
SEL-> fd_reloadData     */
- (MLChain4UITableView *(^)())fd_reloadData;


#ifndef fd_insertSections_withRowAnimation                                  
#define fd_insertSections_withRowAnimation(...)  fd_insertSections_withRowAnimation(@"fd_insertSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_insertSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_insertSections_withRowAnimation;


#ifndef fd_deleteSections_withRowAnimation                                  
#define fd_deleteSections_withRowAnimation(...)  fd_deleteSections_withRowAnimation(@"fd_deleteSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_deleteSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_deleteSections_withRowAnimation;


#ifndef fd_reloadSections_withRowAnimation                                  
#define fd_reloadSections_withRowAnimation(...)  fd_reloadSections_withRowAnimation(@"fd_reloadSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_reloadSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_reloadSections_withRowAnimation;


#ifndef fd_moveSection_toSection                                  
#define fd_moveSection_toSection(...)  fd_moveSection_toSection(@"fd_moveSection:toSection:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_moveSection: 'q'
  toSection: 'q'
     */
- (MLChain4UITableView *(^)())fd_moveSection_toSection;


#ifndef fd_insertRowsAtIndexPaths_withRowAnimation                                  
#define fd_insertRowsAtIndexPaths_withRowAnimation(...)  fd_insertRowsAtIndexPaths_withRowAnimation(@"fd_insertRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_insertRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_insertRowsAtIndexPaths_withRowAnimation;


#ifndef fd_deleteRowsAtIndexPaths_withRowAnimation                                  
#define fd_deleteRowsAtIndexPaths_withRowAnimation(...)  fd_deleteRowsAtIndexPaths_withRowAnimation(@"fd_deleteRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_deleteRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_deleteRowsAtIndexPaths_withRowAnimation;


#ifndef fd_reloadRowsAtIndexPaths_withRowAnimation                                  
#define fd_reloadRowsAtIndexPaths_withRowAnimation(...)  fd_reloadRowsAtIndexPaths_withRowAnimation(@"fd_reloadRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_reloadRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())fd_reloadRowsAtIndexPaths_withRowAnimation;


#ifndef fd_moveRowAtIndexPath_toIndexPath                                  
#define fd_moveRowAtIndexPath_toIndexPath(...)  fd_moveRowAtIndexPath_toIndexPath(@"fd_moveRowAtIndexPath:toIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fd_moveRowAtIndexPath: '@'
  toIndexPath: '@'
     */
- (MLChain4UITableView *(^)())fd_moveRowAtIndexPath_toIndexPath;


#ifndef fd_reloadDataWithoutInvalidateIndexPathHeightCache                              
#define fd_reloadDataWithoutInvalidateIndexPathHeightCache(...)  fd_reloadDataWithoutInvalidateIndexPathHeightCache(@"fd_reloadDataWithoutInvalidateIndexPathHeightCache")                              
#endif
/**     ClassName-> UITableView                                
SEL-> fd_reloadDataWithoutInvalidateIndexPathHeightCache     */
- (MLChain4UITableView *(^)())fd_reloadDataWithoutInvalidateIndexPathHeightCache;


#ifndef mj_reloadData                              
#define mj_reloadData(...)  mj_reloadData(@"mj_reloadData")                              
#endif
/**     ClassName-> UITableView                                
SEL-> mj_reloadData     */
- (MLChain4UITableView *(^)())mj_reloadData;


#ifndef ml_registerNibForCellWithNameOrClass                                  
#define ml_registerNibForCellWithNameOrClass(...)  ml_registerNibForCellWithNameOrClass(@"ml_registerNibForCellWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerNibForCellWithNameOrClass: '@'
     */
- (MLChain4UITableView *(^)())ml_registerNibForCellWithNameOrClass;


#ifndef ml_registerClassForCellWithNameOrClass                                  
#define ml_registerClassForCellWithNameOrClass(...)  ml_registerClassForCellWithNameOrClass(@"ml_registerClassForCellWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerClassForCellWithNameOrClass: '@'
     */
- (MLChain4UITableView *(^)())ml_registerClassForCellWithNameOrClass;


#ifndef ml_registerClassForCellWithNameOrClasses                                  
#define ml_registerClassForCellWithNameOrClasses(...)  ml_registerClassForCellWithNameOrClasses(@"ml_registerClassForCellWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerClassForCellWithNameOrClasses: '@'
     */
- (MLChain4UITableView *(^)())ml_registerClassForCellWithNameOrClasses;


#ifndef ml_registerNibForCellWithNameOrClasses                                  
#define ml_registerNibForCellWithNameOrClasses(...)  ml_registerNibForCellWithNameOrClasses(@"ml_registerNibForCellWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerNibForCellWithNameOrClasses: '@'
     */
- (MLChain4UITableView *(^)())ml_registerNibForCellWithNameOrClasses;


#ifndef ml_registerClassForHeaderFooterViewWithNameOrClasses                                  
#define ml_registerClassForHeaderFooterViewWithNameOrClasses(...)  ml_registerClassForHeaderFooterViewWithNameOrClasses(@"ml_registerClassForHeaderFooterViewWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerClassForHeaderFooterViewWithNameOrClasses: '@'
     */
- (MLChain4UITableView *(^)())ml_registerClassForHeaderFooterViewWithNameOrClasses;


#ifndef ml_registerNibForHeaderFooterViewWithNameOrClasses                                  
#define ml_registerNibForHeaderFooterViewWithNameOrClasses(...)  ml_registerNibForHeaderFooterViewWithNameOrClasses(@"ml_registerNibForHeaderFooterViewWithNameOrClasses:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerNibForHeaderFooterViewWithNameOrClasses: '@'
     */
- (MLChain4UITableView *(^)())ml_registerNibForHeaderFooterViewWithNameOrClasses;


#ifndef checkClassIsExisted_className                                  
#define checkClassIsExisted_className(...)  checkClassIsExisted_className(@"checkClassIsExisted:className:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   checkClassIsExisted: '#'
  className: '@'
     */
- (MLChain4UITableView *(^)())checkClassIsExisted_className;


#ifndef checkNibWithName                                  
#define checkNibWithName(...)  checkNibWithName(@"checkNibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   checkNibWithName: '@'
     */
- (MLChain4UITableView *(^)())checkNibWithName;


#ifndef ml_registerClassForHeaderFooterViewWithNameOrClass                                  
#define ml_registerClassForHeaderFooterViewWithNameOrClass(...)  ml_registerClassForHeaderFooterViewWithNameOrClass(@"ml_registerClassForHeaderFooterViewWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerClassForHeaderFooterViewWithNameOrClass: '@'
     */
- (MLChain4UITableView *(^)())ml_registerClassForHeaderFooterViewWithNameOrClass;


#ifndef ml_registerNibForHeaderFooterViewWithNameOrClass                                  
#define ml_registerNibForHeaderFooterViewWithNameOrClass(...)  ml_registerNibForHeaderFooterViewWithNameOrClass(@"ml_registerNibForHeaderFooterViewWithNameOrClass:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_registerNibForHeaderFooterViewWithNameOrClass: '@'
     */
- (MLChain4UITableView *(^)())ml_registerNibForHeaderFooterViewWithNameOrClass;


#ifndef separationManager                                  
#define separationManager(...)  separationManager(@"setSeparationManager:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparationManager: '@'
     */
- (MLChain4UITableView *(^)())separationManager;


#ifndef configCellWith_cellHeigth_numberOfSection_numberOfRowsInSection_didSelected                                  
#define configCellWith_cellHeigth_numberOfSection_numberOfRowsInSection_didSelected(...)  configCellWith_cellHeigth_numberOfSection_numberOfRowsInSection_didSelected(@"configCellWith:cellHeigth:numberOfSection:numberOfRowsInSection:didSelected:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   configCellWith: '@'
  cellHeigth: '@'
  numberOfSection: '@'
  numberOfRowsInSection: '@'
  didSelected: '@'
     */
- (MLChain4UITableView *(^)())configCellWith_cellHeigth_numberOfSection_numberOfRowsInSection_didSelected;


#ifndef configSectionHeaderWith_sectionHeaderHeight                                  
#define configSectionHeaderWith_sectionHeaderHeight(...)  configSectionHeaderWith_sectionHeaderHeight(@"configSectionHeaderWith:sectionHeaderHeight:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   configSectionHeaderWith: '@'
  sectionHeaderHeight: '@'
     */
- (MLChain4UITableView *(^)())configSectionHeaderWith_sectionHeaderHeight;


#ifndef configSectionFooterWith_sectionFooterHeight                                  
#define configSectionFooterWith_sectionFooterHeight(...)  configSectionFooterWith_sectionFooterHeight(@"configSectionFooterWith:sectionFooterHeight:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   configSectionFooterWith: '@'
  sectionFooterHeight: '@'
     */
- (MLChain4UITableView *(^)())configSectionFooterWith_sectionFooterHeight;


#ifndef makeFullSeparatorWithColor                                  
#define makeFullSeparatorWithColor(...)  makeFullSeparatorWithColor(@"makeFullSeparatorWithColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   makeFullSeparatorWithColor: '@'
     */
- (MLChain4UITableView *(^)())makeFullSeparatorWithColor;


#ifndef makeFullAndGraySeparator                              
#define makeFullAndGraySeparator(...)  makeFullAndGraySeparator(@"makeFullAndGraySeparator")                              
#endif
/**     ClassName-> UITableView                                
SEL-> makeFullAndGraySeparator     */
- (MLChain4UITableView *(^)())makeFullAndGraySeparator;


#ifndef ab_delayedScrollRespectingCaretOfActiveTextViewToCell_atIndexPath_atScrollPosition_animated                                  
#define ab_delayedScrollRespectingCaretOfActiveTextViewToCell_atIndexPath_atScrollPosition_animated(...)  ab_delayedScrollRespectingCaretOfActiveTextViewToCell_atIndexPath_atScrollPosition_animated(@"ab_delayedScrollRespectingCaretOfActiveTextViewToCell:atIndexPath:atScrollPosition:animated:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_delayedScrollRespectingCaretOfActiveTextViewToCell: '@'
  atIndexPath: '@'
  atScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())ab_delayedScrollRespectingCaretOfActiveTextViewToCell_atIndexPath_atScrollPosition_animated;


#ifndef ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated                                  
#define ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated(...)  ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated(@"ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView:atScrollPosition:animated:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView: '@'
  atScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated;


#ifndef ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated                                  
#define ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated(...)  ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated(@"ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView:atScrollPosition:animated:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView: '@'
  atScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView_atScrollPosition_animated;


#ifndef registerNib_forHeaderFooterViewReuseIdentifier                                  
#define registerNib_forHeaderFooterViewReuseIdentifier(...)  registerNib_forHeaderFooterViewReuseIdentifier(@"registerNib:forHeaderFooterViewReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   registerNib: '@'
  forHeaderFooterViewReuseIdentifier: '@'
     */
- (MLChain4UITableView *(^)())registerNib_forHeaderFooterViewReuseIdentifier;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDelegate: '@'
     */
- (MLChain4UITableView *(^)())delegate;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setBounds: '{'
     */
- (MLChain4UITableView *(^)())bounds;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UITableView                                
SEL-> layoutSubviews     */
- (MLChain4UITableView *(^)())layoutSubviews;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UITableView                                
SEL-> didMoveToWindow     */
- (MLChain4UITableView *(^)())didMoveToWindow;


#ifndef reloadData                              
#define reloadData(...)  reloadData(@"reloadData")                              
#endif
/**     ClassName-> UITableView                                
SEL-> reloadData     */
- (MLChain4UITableView *(^)())reloadData;


#ifndef rowHeight                                  
#define rowHeight(...)  rowHeight(@"setRowHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRowHeight: 'd'
     */
- (MLChain4UITableView *(^)())rowHeight;


#ifndef showsVerticalScrollIndicator                                  
#define showsVerticalScrollIndicator(...)  showsVerticalScrollIndicator(@"setShowsVerticalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShowsVerticalScrollIndicator: 'B'
     */
- (MLChain4UITableView *(^)())showsVerticalScrollIndicator;


#ifndef allowsMultipleSelection                                  
#define allowsMultipleSelection(...)  allowsMultipleSelection(@"setAllowsMultipleSelection:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAllowsMultipleSelection: 'B'
     */
- (MLChain4UITableView *(^)())allowsMultipleSelection;


#ifndef scrollViewWillEndDragging_withVelocity_targetContentOffset                                  
#define scrollViewWillEndDragging_withVelocity_targetContentOffset(...)  scrollViewWillEndDragging_withVelocity_targetContentOffset(@"scrollViewWillEndDragging:withVelocity:targetContentOffset:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollViewWillEndDragging: '@'
  withVelocity: '{'
  targetContentOffset: 'N'
     */
- (MLChain4UITableView *(^)())scrollViewWillEndDragging_withVelocity_targetContentOffset;


#ifndef scrollViewDidEndDragging_willDecelerate                                  
#define scrollViewDidEndDragging_willDecelerate(...)  scrollViewDidEndDragging_willDecelerate(@"scrollViewDidEndDragging:willDecelerate:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollViewDidEndDragging: '@'
  willDecelerate: 'B'
     */
- (MLChain4UITableView *(^)())scrollViewDidEndDragging_willDecelerate;


#ifndef scrollViewDidEndDecelerating                                  
#define scrollViewDidEndDecelerating(...)  scrollViewDidEndDecelerating(@"scrollViewDidEndDecelerating:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollViewDidEndDecelerating: '@'
     */
- (MLChain4UITableView *(^)())scrollViewDidEndDecelerating;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UITableView *(^)())semanticContentAttribute;


#ifndef showsHorizontalScrollIndicator                                  
#define showsHorizontalScrollIndicator(...)  showsHorizontalScrollIndicator(@"setShowsHorizontalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShowsHorizontalScrollIndicator: 'B'
     */
- (MLChain4UITableView *(^)())showsHorizontalScrollIndicator;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())touchesCancelled_withEvent;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())pressesCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UITableView *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UITableView *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())pressesChanged_withEvent;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UITableView                                
SEL-> awakeFromNib     */
- (MLChain4UITableView *(^)())awakeFromNib;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UITableView *(^)())layoutMarginsFollowReadableWidth;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UITableView *(^)())layoutMarginsDidChange;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UITableView *(^)())layoutMargins;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UITableView *(^)())resizeSubviewsWithOldSize;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UITableView *(^)())willMoveToSuperview;


#ifndef contentOff                                  
#define contentOff(...)  contentOff(@"setContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef contentOff_             
#define contentOff_(...)  contentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setContentOffset: '{'
     */
- (MLChain4UITableView *(^)())contentOff;


#ifndef contentIn                                  
#define contentIn(...)  contentIn(@"setContentInset:", __VA_ARGS__)                                  
#endif
#ifndef contentIn_             
#define contentIn_(...)  contentIn(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setContentInset: '{'
     */
- (MLChain4UITableView *(^)())contentIn;


#ifndef flashScrollIndicators                              
#define flashScrollIndicators(...)  flashScrollIndicators(@"flashScrollIndicators")                              
#endif
/**     ClassName-> UITableView                                
SEL-> flashScrollIndicators     */
- (MLChain4UITableView *(^)())flashScrollIndicators;


#ifndef refreshControl                                  
#define refreshControl(...)  refreshControl(@"setRefreshControl:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRefreshControl: '@'
     */
- (MLChain4UITableView *(^)())refreshControl;


#ifndef longPress                                  
#define longPress(...)  longPress(@"longPress:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   longPress: '@'
     */
- (MLChain4UITableView *(^)())longPress;


#ifndef sectionBorderColor                                  
#define sectionBorderColor(...)  sectionBorderColor(@"setSectionBorderColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionBorderColor: '@'
     */
- (MLChain4UITableView *(^)())sectionBorderColor;


#ifndef separatorStyle                                  
#define separatorStyle(...)  separatorStyle(@"setSeparatorStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparatorStyle: 'q'
     */
- (MLChain4UITableView *(^)())separatorStyle;


#ifndef separatorEffect                                  
#define separatorEffect(...)  separatorEffect(@"setSeparatorEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparatorEffect: '@'
     */
- (MLChain4UITableView *(^)())separatorEffect;


#ifndef editing_animated                                  
#define editing_animated(...)  editing_animated(@"setEditing:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEditing: 'B'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())editing_animated;


#ifndef scrollToRowAtIndexPath_atScrollPosition_animated                                  
#define scrollToRowAtIndexPath_atScrollPosition_animated(...)  scrollToRowAtIndexPath_atScrollPosition_animated(@"scrollToRowAtIndexPath:atScrollPosition:animated:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToRowAtIndexPath: '@'
  atScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToRowAtIndexPath_atScrollPosition_animated;


#ifndef sectionIndexColor                                  
#define sectionIndexColor(...)  sectionIndexColor(@"setSectionIndexColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionIndexColor: '@'
     */
- (MLChain4UITableView *(^)())sectionIndexColor;


#ifndef sectionIndexTrackingBackgroundColor                                  
#define sectionIndexTrackingBackgroundColor(...)  sectionIndexTrackingBackgroundColor(@"setSectionIndexTrackingBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionIndexTrackingBackgroundColor: '@'
     */
- (MLChain4UITableView *(^)())sectionIndexTrackingBackgroundColor;


#ifndef separatorColor                                  
#define separatorColor(...)  separatorColor(@"setSeparatorColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparatorColor: '@'
     */
- (MLChain4UITableView *(^)())separatorColor;


#ifndef cellLayoutMarginsFollowReadableWidth                                  
#define cellLayoutMarginsFollowReadableWidth(...)  cellLayoutMarginsFollowReadableWidth(@"setCellLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCellLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UITableView *(^)())cellLayoutMarginsFollowReadableWidth;


#ifndef allowsSelection                                  
#define allowsSelection(...)  allowsSelection(@"setAllowsSelection:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAllowsSelection: 'B'
     */
- (MLChain4UITableView *(^)())allowsSelection;


#ifndef prefetchDataSource                                  
#define prefetchDataSource(...)  prefetchDataSource(@"setPrefetchDataSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPrefetchDataSource: '@'
     */
- (MLChain4UITableView *(^)())prefetchDataSource;


#ifndef tableHeaderViewShouldAutoHide                                  
#define tableHeaderViewShouldAutoHide(...)  tableHeaderViewShouldAutoHide(@"setTableHeaderViewShouldAutoHide:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTableHeaderViewShouldAutoHide: 'B'
     */
- (MLChain4UITableView *(^)())tableHeaderViewShouldAutoHide;


#ifndef noteNumberOfRowsChanged                              
#define noteNumberOfRowsChanged(...)  noteNumberOfRowsChanged(@"noteNumberOfRowsChanged")                              
#endif
/**     ClassName-> UITableView                                
SEL-> noteNumberOfRowsChanged     */
- (MLChain4UITableView *(^)())noteNumberOfRowsChanged;


#ifndef endUpdatesWithContext                                  
#define endUpdatesWithContext(...)  endUpdatesWithContext(@"endUpdatesWithContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   endUpdatesWithContext: '@'
     */
- (MLChain4UITableView *(^)())endUpdatesWithContext;


#ifndef beginUpdates                              
#define beginUpdates(...)  beginUpdates(@"beginUpdates")                              
#endif
/**     ClassName-> UITableView                                
SEL-> beginUpdates     */
- (MLChain4UITableView *(^)())beginUpdates;


#ifndef allowsMultipleSelectionDuringEditing                                  
#define allowsMultipleSelectionDuringEditing(...)  allowsMultipleSelectionDuringEditing(@"setAllowsMultipleSelectionDuringEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAllowsMultipleSelectionDuringEditing: 'B'
     */
- (MLChain4UITableView *(^)())allowsMultipleSelectionDuringEditing;


#ifndef selectRowAtIndexPath_animated_scrollPosition                                  
#define selectRowAtIndexPath_animated_scrollPosition(...)  selectRowAtIndexPath_animated_scrollPosition(@"selectRowAtIndexPath:animated:scrollPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   selectRowAtIndexPath: '@'
  animated: 'B'
  scrollPosition: 'q'
     */
- (MLChain4UITableView *(^)())selectRowAtIndexPath_animated_scrollPosition;


#ifndef deselectRowAtIndexPath_animated                                  
#define deselectRowAtIndexPath_animated(...)  deselectRowAtIndexPath_animated(@"deselectRowAtIndexPath:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deselectRowAtIndexPath: '@'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())deselectRowAtIndexPath_animated;


#ifndef unhighlightRowAtIndexPath_animated                                  
#define unhighlightRowAtIndexPath_animated(...)  unhighlightRowAtIndexPath_animated(@"unhighlightRowAtIndexPath:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   unhighlightRowAtIndexPath: '@'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())unhighlightRowAtIndexPath_animated;


#ifndef backgroundView                                  
#define backgroundView(...)  backgroundView(@"setBackgroundView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBackgroundView: '@'
     */
- (MLChain4UITableView *(^)())backgroundView;


#ifndef currentTouch                                  
#define currentTouch(...)  currentTouch(@"setCurrentTouch:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCurrentTouch: '@'
     */
- (MLChain4UITableView *(^)())currentTouch;


#ifndef separatorIn                                  
#define separatorIn(...)  separatorIn(@"setSeparatorInset:", __VA_ARGS__)                                  
#endif
#ifndef separatorIn_             
#define separatorIn_(...)  separatorIn(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setSeparatorInset: '{'
     */
- (MLChain4UITableView *(^)())separatorIn;


#ifndef remembersLastFocusedIndexPath                                  
#define remembersLastFocusedIndexPath(...)  remembersLastFocusedIndexPath(@"setRemembersLastFocusedIndexPath:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRemembersLastFocusedIndexPath: 'B'
     */
- (MLChain4UITableView *(^)())remembersLastFocusedIndexPath;


#ifndef adjustIndexPaths_forMoveOfIndexPath_toIndexPath                                  
#define adjustIndexPaths_forMoveOfIndexPath_toIndexPath(...)  adjustIndexPaths_forMoveOfIndexPath_toIndexPath(@"adjustIndexPaths:forMoveOfIndexPath:toIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   adjustIndexPaths: '@'
  forMoveOfIndexPath: '@'
  toIndexPath: '@'
     */
- (MLChain4UITableView *(^)())adjustIndexPaths_forMoveOfIndexPath_toIndexPath;


#ifndef editing                                  
#define editing(...)  editing(@"setEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEditing: 'B'
     */
- (MLChain4UITableView *(^)())editing;


#ifndef tableHeaderBackgroundColor                                  
#define tableHeaderBackgroundColor(...)  tableHeaderBackgroundColor(@"setTableHeaderBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTableHeaderBackgroundColor: '@'
     */
- (MLChain4UITableView *(^)())tableHeaderBackgroundColor;


#ifndef multiselectCheckmarkColor                                  
#define multiselectCheckmarkColor(...)  multiselectCheckmarkColor(@"setMultiselectCheckmarkColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMultiselectCheckmarkColor: '@'
     */
- (MLChain4UITableView *(^)())multiselectCheckmarkColor;


#ifndef deleteConfirmationIndexPath_animated                                  
#define deleteConfirmationIndexPath_animated(...)  deleteConfirmationIndexPath_animated(@"setDeleteConfirmationIndexPath:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDeleteConfirmationIndexPath: '@'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())deleteConfirmationIndexPath_animated;


#ifndef estimatedRowHeight                                  
#define estimatedRowHeight(...)  estimatedRowHeight(@"setEstimatedRowHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEstimatedRowHeight: 'd'
     */
- (MLChain4UITableView *(^)())estimatedRowHeight;


#ifndef sectionFooterHeight                                  
#define sectionFooterHeight(...)  sectionFooterHeight(@"setSectionFooterHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionFooterHeight: 'd'
     */
- (MLChain4UITableView *(^)())sectionFooterHeight;


#ifndef reloadSectionIndexTitles                              
#define reloadSectionIndexTitles(...)  reloadSectionIndexTitles(@"reloadSectionIndexTitles")                              
#endif
/**     ClassName-> UITableView                                
SEL-> reloadSectionIndexTitles     */
- (MLChain4UITableView *(^)())reloadSectionIndexTitles;


#ifndef indexHiddenForSearch                                  
#define indexHiddenForSearch(...)  indexHiddenForSearch(@"setIndexHiddenForSearch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setIndexHiddenForSearch: 'B'
     */
- (MLChain4UITableView *(^)())indexHiddenForSearch;


#ifndef overlapsSectionHeaderViews                                  
#define overlapsSectionHeaderViews(...)  overlapsSectionHeaderViews(@"setOverlapsSectionHeaderViews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setOverlapsSectionHeaderViews: 'B'
     */
- (MLChain4UITableView *(^)())overlapsSectionHeaderViews;


#ifndef scrollToNearestSelectedRowAtScrollPosition_animated                                  
#define scrollToNearestSelectedRowAtScrollPosition_animated(...)  scrollToNearestSelectedRowAtScrollPosition_animated(@"scrollToNearestSelectedRowAtScrollPosition:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToNearestSelectedRowAtScrollPosition: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToNearestSelectedRowAtScrollPosition_animated;


#ifndef endUpdates                              
#define endUpdates(...)  endUpdates(@"endUpdates")                              
#endif
/**     ClassName-> UITableView                                
SEL-> endUpdates     */
- (MLChain4UITableView *(^)())endUpdates;


#ifndef reloadSections_withRowAnimation                                  
#define reloadSections_withRowAnimation(...)  reloadSections_withRowAnimation(@"reloadSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reloadSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())reloadSections_withRowAnimation;


#ifndef insertRowsAtIndexPaths_withRowAnimation                                  
#define insertRowsAtIndexPaths_withRowAnimation(...)  insertRowsAtIndexPaths_withRowAnimation(@"insertRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())insertRowsAtIndexPaths_withRowAnimation;


#ifndef deleteRowsAtIndexPaths_withRowAnimation                                  
#define deleteRowsAtIndexPaths_withRowAnimation(...)  deleteRowsAtIndexPaths_withRowAnimation(@"deleteRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deleteRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())deleteRowsAtIndexPaths_withRowAnimation;


#ifndef reloadRowsAtIndexPaths_withRowAnimation                                  
#define reloadRowsAtIndexPaths_withRowAnimation(...)  reloadRowsAtIndexPaths_withRowAnimation(@"reloadRowsAtIndexPaths:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reloadRowsAtIndexPaths: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())reloadRowsAtIndexPaths_withRowAnimation;


#ifndef showsSelectionImmediatelyOnTouchBegin                                  
#define showsSelectionImmediatelyOnTouchBegin(...)  showsSelectionImmediatelyOnTouchBegin(@"setShowsSelectionImmediatelyOnTouchBegin:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShowsSelectionImmediatelyOnTouchBegin: 'B'
     */
- (MLChain4UITableView *(^)())showsSelectionImmediatelyOnTouchBegin;


#ifndef usesVariableMargins                                  
#define usesVariableMargins(...)  usesVariableMargins(@"setUsesVariableMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setUsesVariableMargins: 'B'
     */
- (MLChain4UITableView *(^)())usesVariableMargins;


#ifndef tableHeaderView                                  
#define tableHeaderView(...)  tableHeaderView(@"setTableHeaderView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTableHeaderView: '@'
     */
- (MLChain4UITableView *(^)())tableHeaderView;


#ifndef tableFooterView                                  
#define tableFooterView(...)  tableFooterView(@"setTableFooterView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTableFooterView: '@'
     */
- (MLChain4UITableView *(^)())tableFooterView;


#ifndef registerClass_forCellReuseIdentifier                                  
#define registerClass_forCellReuseIdentifier(...)  registerClass_forCellReuseIdentifier(@"registerClass:forCellReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   registerClass: '#'
  forCellReuseIdentifier: '@'
     */
- (MLChain4UITableView *(^)())registerClass_forCellReuseIdentifier;


#ifndef estimatedSectionFooterHeight                                  
#define estimatedSectionFooterHeight(...)  estimatedSectionFooterHeight(@"setEstimatedSectionFooterHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEstimatedSectionFooterHeight: 'd'
     */
- (MLChain4UITableView *(^)())estimatedSectionFooterHeight;


#ifndef sectionIndexMinimumDisplayRowCount                                  
#define sectionIndexMinimumDisplayRowCount(...)  sectionIndexMinimumDisplayRowCount(@"setSectionIndexMinimumDisplayRowCount:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionIndexMinimumDisplayRowCount: 'q'
     */
- (MLChain4UITableView *(^)())sectionIndexMinimumDisplayRowCount;


#ifndef estimatedSectionHeaderHeight                                  
#define estimatedSectionHeaderHeight(...)  estimatedSectionHeaderHeight(@"setEstimatedSectionHeaderHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEstimatedSectionHeaderHeight: 'd'
     */
- (MLChain4UITableView *(^)())estimatedSectionHeaderHeight;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setFrame: '{'
     */
- (MLChain4UITableView *(^)())frame;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UITableView *(^)())encodeWithCoder;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UITableView *(^)())backgroundColor;


#ifndef dataSource                                  
#define dataSource(...)  dataSource(@"setDataSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDataSource: '@'
     */
- (MLChain4UITableView *(^)())dataSource;


#ifndef moveSection_toSection                                  
#define moveSection_toSection(...)  moveSection_toSection(@"moveSection:toSection:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveSection: 'q'
  toSection: 'q'
     */
- (MLChain4UITableView *(^)())moveSection_toSection;


#ifndef registerClass_forHeaderFooterViewReuseIdentifier                                  
#define registerClass_forHeaderFooterViewReuseIdentifier(...)  registerClass_forHeaderFooterViewReuseIdentifier(@"registerClass:forHeaderFooterViewReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   registerClass: '#'
  forHeaderFooterViewReuseIdentifier: '@'
     */
- (MLChain4UITableView *(^)())registerClass_forHeaderFooterViewReuseIdentifier;


#ifndef registerNib_forCellReuseIdentifier                                  
#define registerNib_forCellReuseIdentifier(...)  registerNib_forCellReuseIdentifier(@"registerNib:forCellReuseIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   registerNib: '@'
  forCellReuseIdentifier: '@'
     */
- (MLChain4UITableView *(^)())registerNib_forCellReuseIdentifier;


#ifndef moveRowAtIndexPath_toIndexPath                                  
#define moveRowAtIndexPath_toIndexPath(...)  moveRowAtIndexPath_toIndexPath(@"moveRowAtIndexPath:toIndexPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveRowAtIndexPath: '@'
  toIndexPath: '@'
     */
- (MLChain4UITableView *(^)())moveRowAtIndexPath_toIndexPath;


#ifndef allowsSelectionDuringEditing                                  
#define allowsSelectionDuringEditing(...)  allowsSelectionDuringEditing(@"setAllowsSelectionDuringEditing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAllowsSelectionDuringEditing: 'B'
     */
- (MLChain4UITableView *(^)())allowsSelectionDuringEditing;


#ifndef sectionIndexBackgroundColor                                  
#define sectionIndexBackgroundColor(...)  sectionIndexBackgroundColor(@"setSectionIndexBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionIndexBackgroundColor: '@'
     */
- (MLChain4UITableView *(^)())sectionIndexBackgroundColor;


#ifndef sectionHeaderHeight                                  
#define sectionHeaderHeight(...)  sectionHeaderHeight(@"setSectionHeaderHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSectionHeaderHeight: 'd'
     */
- (MLChain4UITableView *(^)())sectionHeaderHeight;


#ifndef countStringInsignificantRowCount                                  
#define countStringInsignificantRowCount(...)  countStringInsignificantRowCount(@"setCountStringInsignificantRowCount:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCountStringInsignificantRowCount: 'Q'
     */
- (MLChain4UITableView *(^)())countStringInsignificantRowCount;


#ifndef indexHidden_animated                                  
#define indexHidden_animated(...)  indexHidden_animated(@"setIndexHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setIndexHidden: 'B'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())indexHidden_animated;


#ifndef countString                                  
#define countString(...)  countString(@"setCountString:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCountString: '@'
     */
- (MLChain4UITableView *(^)())countString;


#ifndef insertSections_withRowAnimation                                  
#define insertSections_withRowAnimation(...)  insertSections_withRowAnimation(@"insertSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())insertSections_withRowAnimation;


#ifndef deleteSections_withRowAnimation                                  
#define deleteSections_withRowAnimation(...)  deleteSections_withRowAnimation(@"deleteSections:withRowAnimation:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   deleteSections: '@'
  withRowAnimation: 'q'
     */
- (MLChain4UITableView *(^)())deleteSections_withRowAnimation;


#ifndef separatorTopShadowColor                                  
#define separatorTopShadowColor(...)  separatorTopShadowColor(@"setSeparatorTopShadowColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparatorTopShadowColor: '@'
     */
- (MLChain4UITableView *(^)())separatorTopShadowColor;


#ifndef separatorBottomShadowColor                                  
#define separatorBottomShadowColor(...)  separatorBottomShadowColor(@"setSeparatorBottomShadowColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSeparatorBottomShadowColor: '@'
     */
- (MLChain4UITableView *(^)())separatorBottomShadowColor;


#ifndef scrollToBottomAnimated                                  
#define scrollToBottomAnimated(...)  scrollToBottomAnimated(@"scrollToBottomAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToBottomAnimated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToBottomAnimated;


#ifndef scrollToLeftAnimated                                  
#define scrollToLeftAnimated(...)  scrollToLeftAnimated(@"scrollToLeftAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToLeftAnimated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToLeftAnimated;


#ifndef scrollToRightAnimated                                  
#define scrollToRightAnimated(...)  scrollToRightAnimated(@"scrollToRightAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToRightAnimated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToRightAnimated;


#ifndef scrollToTop                              
#define scrollToTop(...)  scrollToTop(@"scrollToTop")                              
#endif
/**     ClassName-> UITableView                                
SEL-> scrollToTop     */
- (MLChain4UITableView *(^)())scrollToTop;


#ifndef scrollToBottom                              
#define scrollToBottom(...)  scrollToBottom(@"scrollToBottom")                              
#endif
/**     ClassName-> UITableView                                
SEL-> scrollToBottom     */
- (MLChain4UITableView *(^)())scrollToBottom;


#ifndef scrollToLeft                              
#define scrollToLeft(...)  scrollToLeft(@"scrollToLeft")                              
#endif
/**     ClassName-> UITableView                                
SEL-> scrollToLeft     */
- (MLChain4UITableView *(^)())scrollToLeft;


#ifndef scrollToRight                              
#define scrollToRight(...)  scrollToRight(@"scrollToRight")                              
#endif
/**     ClassName-> UITableView                                
SEL-> scrollToRight     */
- (MLChain4UITableView *(^)())scrollToRight;


#ifndef scrollToTopAnimated                                  
#define scrollToTopAnimated(...)  scrollToTopAnimated(@"scrollToTopAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollToTopAnimated: 'B'
     */
- (MLChain4UITableView *(^)())scrollToTopAnimated;


#ifndef mj_header                                  
#define mj_header(...)  mj_header(@"setMj_header:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_header: '@'
     */
- (MLChain4UITableView *(^)())mj_header;


#ifndef mj_reloadDataBlock                                  
#define mj_reloadDataBlock(...)  mj_reloadDataBlock(@"setMj_reloadDataBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_reloadDataBlock: '@'
     */
- (MLChain4UITableView *(^)())mj_reloadDataBlock;


#ifndef mj_footer                                  
#define mj_footer(...)  mj_footer(@"setMj_footer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_footer: '@'
     */
- (MLChain4UITableView *(^)())mj_footer;


#ifndef footer                                  
#define footer(...)  footer(@"setFooter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setFooter: '@'
     */
- (MLChain4UITableView *(^)())footer;


#ifndef executeReloadDataBlock                              
#define executeReloadDataBlock(...)  executeReloadDataBlock(@"executeReloadDataBlock")                              
#endif
/**     ClassName-> UITableView                                
SEL-> executeReloadDataBlock     */
- (MLChain4UITableView *(^)())executeReloadDataBlock;


#ifndef header                                  
#define header(...)  header(@"setHeader:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setHeader: '@'
     */
- (MLChain4UITableView *(^)())header;


#ifndef mj_inB                                  
#define mj_inB(...)  mj_inB(@"setMj_insetB:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_insetB: 'd'
     */
- (MLChain4UITableView *(^)())mj_inB;


#ifndef mj_offY                                  
#define mj_offY(...)  mj_offY(@"setMj_offsetY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_offsetY: 'd'
     */
- (MLChain4UITableView *(^)())mj_offY;


#ifndef mj_inT                                  
#define mj_inT(...)  mj_inT(@"setMj_insetT:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_insetT: 'd'
     */
- (MLChain4UITableView *(^)())mj_inT;


#ifndef mj_inL                                  
#define mj_inL(...)  mj_inL(@"setMj_insetL:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_insetL: 'd'
     */
- (MLChain4UITableView *(^)())mj_inL;


#ifndef mj_inR                                  
#define mj_inR(...)  mj_inR(@"setMj_insetR:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_insetR: 'd'
     */
- (MLChain4UITableView *(^)())mj_inR;


#ifndef mj_offX                                  
#define mj_offX(...)  mj_offX(@"setMj_offsetX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_offsetX: 'd'
     */
- (MLChain4UITableView *(^)())mj_offX;


#ifndef mj_contentW                                  
#define mj_contentW(...)  mj_contentW(@"setMj_contentW:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_contentW: 'd'
     */
- (MLChain4UITableView *(^)())mj_contentW;


#ifndef mj_contentH                                  
#define mj_contentH(...)  mj_contentH(@"setMj_contentH:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_contentH: 'd'
     */
- (MLChain4UITableView *(^)())mj_contentH;


#ifndef shouldRestoreScrollViewContentOff                                  
#define shouldRestoreScrollViewContentOff(...)  shouldRestoreScrollViewContentOff(@"setShouldRestoreScrollViewContentOffset:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShouldRestoreScrollViewContentOffset: 'B'
     */
- (MLChain4UITableView *(^)())shouldRestoreScrollViewContentOff;


#ifndef reloadEmptyDataSet                              
#define reloadEmptyDataSet(...)  reloadEmptyDataSet(@"reloadEmptyDataSet")                              
#endif
/**     ClassName-> UITableView                                
SEL-> reloadEmptyDataSet     */
- (MLChain4UITableView *(^)())reloadEmptyDataSet;


#ifndef emptyDataSetSource                                  
#define emptyDataSetSource(...)  emptyDataSetSource(@"setEmptyDataSetSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEmptyDataSetSource: '@'
     */
- (MLChain4UITableView *(^)())emptyDataSetSource;


#ifndef emptyDataSetDelegate                                  
#define emptyDataSetDelegate(...)  emptyDataSetDelegate(@"setEmptyDataSetDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEmptyDataSetDelegate: '@'
     */
- (MLChain4UITableView *(^)())emptyDataSetDelegate;


#ifndef dzn_didTapContentView                                  
#define dzn_didTapContentView(...)  dzn_didTapContentView(@"dzn_didTapContentView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   dzn_didTapContentView: '@'
     */
- (MLChain4UITableView *(^)())dzn_didTapContentView;


#ifndef emptyDataSetView                                  
#define emptyDataSetView(...)  emptyDataSetView(@"setEmptyDataSetView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEmptyDataSetView: '@'
     */
- (MLChain4UITableView *(^)())emptyDataSetView;


#ifndef dzn_invalidate                              
#define dzn_invalidate(...)  dzn_invalidate(@"dzn_invalidate")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_invalidate     */
- (MLChain4UITableView *(^)())dzn_invalidate;


#ifndef swizzleIfPossible                                  
#define swizzleIfPossible(...)  swizzleIfPossible(@"swizzleIfPossible:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   swizzleIfPossible: ':'
     */
- (MLChain4UITableView *(^)())swizzleIfPossible;


#ifndef dzn_reloadEmptyDataSet                              
#define dzn_reloadEmptyDataSet(...)  dzn_reloadEmptyDataSet(@"dzn_reloadEmptyDataSet")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_reloadEmptyDataSet     */
- (MLChain4UITableView *(^)())dzn_reloadEmptyDataSet;


#ifndef dzn_willAppear                              
#define dzn_willAppear(...)  dzn_willAppear(@"dzn_willAppear")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_willAppear     */
- (MLChain4UITableView *(^)())dzn_willAppear;


#ifndef dzn_didAppear                              
#define dzn_didAppear(...)  dzn_didAppear(@"dzn_didAppear")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_didAppear     */
- (MLChain4UITableView *(^)())dzn_didAppear;


#ifndef dzn_willDisappear                              
#define dzn_willDisappear(...)  dzn_willDisappear(@"dzn_willDisappear")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_willDisappear     */
- (MLChain4UITableView *(^)())dzn_willDisappear;


#ifndef dzn_didDisappear                              
#define dzn_didDisappear(...)  dzn_didDisappear(@"dzn_didDisappear")                              
#endif
/**     ClassName-> UITableView                                
SEL-> dzn_didDisappear     */
- (MLChain4UITableView *(^)())dzn_didDisappear;


#ifndef dzn_didTapDataButton                                  
#define dzn_didTapDataButton(...)  dzn_didTapDataButton(@"dzn_didTapDataButton:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   dzn_didTapDataButton: '@'
     */
- (MLChain4UITableView *(^)())dzn_didTapDataButton;


#ifndef loadType                                  
#define loadType(...)  loadType(@"setLoadType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setLoadType: 'q'
     */
- (MLChain4UITableView *(^)())loadType;


#ifndef closeMJRefreshHeaderAndFooter                              
#define closeMJRefreshHeaderAndFooter(...)  closeMJRefreshHeaderAndFooter(@"closeMJRefreshHeaderAndFooter")                              
#endif
/**     ClassName-> UITableView                                
SEL-> closeMJRefreshHeaderAndFooter     */
- (MLChain4UITableView *(^)())closeMJRefreshHeaderAndFooter;


#ifndef cellDatas                                  
#define cellDatas(...)  cellDatas(@"setCellDatas:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCellDatas: '@'
     */
- (MLChain4UITableView *(^)())cellDatas;


#ifndef pageSize                                  
#define pageSize(...)  pageSize(@"setPageSize:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPageSize: 'q'
     */
- (MLChain4UITableView *(^)())pageSize;


#ifndef statusType                                  
#define statusType(...)  statusType(@"setStatusType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setStatusType: 'q'
     */
- (MLChain4UITableView *(^)())statusType;


#ifndef currentPage                                  
#define currentPage(...)  currentPage(@"setCurrentPage:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCurrentPage: 'q'
     */
- (MLChain4UITableView *(^)())currentPage;


#ifndef ab_scrollToSelectionOfTextView                                  
#define ab_scrollToSelectionOfTextView(...)  ab_scrollToSelectionOfTextView(@"ab_scrollToSelectionOfTextView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
     */
- (MLChain4UITableView *(^)())ab_scrollToSelectionOfTextView;


#ifndef ab_scrollToSelectionOfTextView_animated                                  
#define ab_scrollToSelectionOfTextView_animated(...)  ab_scrollToSelectionOfTextView_animated(@"ab_scrollToSelectionOfTextView:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())ab_scrollToSelectionOfTextView_animated;


#ifndef ab_adjustForAutomaticKeyboardInfo_lastAdjustment                                  
#define ab_adjustForAutomaticKeyboardInfo_lastAdjustment(...)  ab_adjustForAutomaticKeyboardInfo_lastAdjustment(@"ab_adjustForAutomaticKeyboardInfo:lastAdjustment:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ab_adjustForAutomaticKeyboardInfo: '@'
  lastAdjustment: '^'
     */
- (MLChain4UITableView *(^)())ab_adjustForAutomaticKeyboardInfo_lastAdjustment;


#ifndef canCancelContentTouches                                  
#define canCancelContentTouches(...)  canCancelContentTouches(@"setCanCancelContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCanCancelContentTouches: 'B'
     */
- (MLChain4UITableView *(^)())canCancelContentTouches;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UITableView *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsLayout     */
- (MLChain4UITableView *(^)())setNeedsLayout;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UITableView *(^)())userInteractionEnabled;


#ifndef contentSize                                  
#define contentSize(...)  contentSize(@"setContentSize:", __VA_ARGS__)                                  
#endif
#ifndef contentSize_             
#define contentSize_(...)  contentSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setContentSize: '{'
     */
- (MLChain4UITableView *(^)())contentSize;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UITableView *(^)())traitCollectionDidChange;


#ifndef contentOff_animated                                  
#define contentOff_animated(...)  contentOff_animated(@"setContentOffset:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentOffset: '{'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())contentOff_animated;


#ifndef scrollRectToVisible_animated                                  
#define scrollRectToVisible_animated(...)  scrollRectToVisible_animated(@"scrollRectToVisible:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollRectToVisible: '{'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())scrollRectToVisible_animated;


#ifndef scrollEnabled                                  
#define scrollEnabled(...)  scrollEnabled(@"setScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setScrollEnabled: 'B'
     */
- (MLChain4UITableView *(^)())scrollEnabled;


#ifndef programmaticScrollEnabled                                  
#define programmaticScrollEnabled(...)  programmaticScrollEnabled(@"setProgrammaticScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setProgrammaticScrollEnabled: 'B'
     */
- (MLChain4UITableView *(^)())programmaticScrollEnabled;


#ifndef directionalLockEnabled                                  
#define directionalLockEnabled(...)  directionalLockEnabled(@"setDirectionalLockEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDirectionalLockEnabled: 'B'
     */
- (MLChain4UITableView *(^)())directionalLockEnabled;


#ifndef scrollTestParameters                                  
#define scrollTestParameters(...)  scrollTestParameters(@"setScrollTestParameters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setScrollTestParameters: '@'
     */
- (MLChain4UITableView *(^)())scrollTestParameters;


#ifndef handlePan                                  
#define handlePan(...)  handlePan(@"handlePan:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   handlePan: '@'
     */
- (MLChain4UITableView *(^)())handlePan;


#ifndef handlePinch                                  
#define handlePinch(...)  handlePinch(@"handlePinch:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   handlePinch: '@'
     */
- (MLChain4UITableView *(^)())handlePinch;


#ifndef delayed                                  
#define delayed(...)  delayed(@"delayed:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   delayed: '@'
     */
- (MLChain4UITableView *(^)())delayed;


#ifndef willRotateToInterfaceOrientation                                  
#define willRotateToInterfaceOrientation(...)  willRotateToInterfaceOrientation(@"willRotateToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willRotateToInterfaceOrientation: '@'
     */
- (MLChain4UITableView *(^)())willRotateToInterfaceOrientation;


#ifndef willAnimateRotationToInterfaceOrientation                                  
#define willAnimateRotationToInterfaceOrientation(...)  willAnimateRotationToInterfaceOrientation(@"willAnimateRotationToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willAnimateRotationToInterfaceOrientation: '@'
     */
- (MLChain4UITableView *(^)())willAnimateRotationToInterfaceOrientation;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
     */
- (MLChain4UITableView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:force:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__), (int)metamacro_at(7, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
  force: 'B'
     */
- (MLChain4UITableView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force;


#ifndef minimumZoomScale                                  
#define minimumZoomScale(...)  minimumZoomScale(@"setMinimumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMinimumZoomScale: 'd'
     */
- (MLChain4UITableView *(^)())minimumZoomScale;


#ifndef maximumZoomScale                                  
#define maximumZoomScale(...)  maximumZoomScale(@"setMaximumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMaximumZoomScale: 'd'
     */
- (MLChain4UITableView *(^)())maximumZoomScale;


#ifndef zoomScale_animated                                  
#define zoomScale_animated(...)  zoomScale_animated(@"setZoomScale:animated:", (double)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setZoomScale: 'd'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())zoomScale_animated;


#ifndef alwaysBounceVertical                                  
#define alwaysBounceVertical(...)  alwaysBounceVertical(@"setAlwaysBounceVertical:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAlwaysBounceVertical: 'B'
     */
- (MLChain4UITableView *(^)())alwaysBounceVertical;


#ifndef scrollingEnabled                                  
#define scrollingEnabled(...)  scrollingEnabled(@"setScrollingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setScrollingEnabled: 'B'
     */
- (MLChain4UITableView *(^)())scrollingEnabled;


#ifndef zoomEnabled                                  
#define zoomEnabled(...)  zoomEnabled(@"setZoomEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setZoomEnabled: 'B'
     */
- (MLChain4UITableView *(^)())zoomEnabled;


#ifndef pagingEnabled                                  
#define pagingEnabled(...)  pagingEnabled(@"setPagingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPagingEnabled: 'B'
     */
- (MLChain4UITableView *(^)())pagingEnabled;


#ifndef bounces                                  
#define bounces(...)  bounces(@"setBounces:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBounces: 'B'
     */
- (MLChain4UITableView *(^)())bounces;


#ifndef bouncesHorizontally                                  
#define bouncesHorizontally(...)  bouncesHorizontally(@"setBouncesHorizontally:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBouncesHorizontally: 'B'
     */
- (MLChain4UITableView *(^)())bouncesHorizontally;


#ifndef bouncesVertically                                  
#define bouncesVertically(...)  bouncesVertically(@"setBouncesVertically:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBouncesVertically: 'B'
     */
- (MLChain4UITableView *(^)())bouncesVertically;


#ifndef updateInBottomDuringKeyboardDismiss                                  
#define updateInBottomDuringKeyboardDismiss(...)  updateInBottomDuringKeyboardDismiss(@"setUpdateInsetBottomDuringKeyboardDismiss:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setUpdateInsetBottomDuringKeyboardDismiss: 'B'
     */
- (MLChain4UITableView *(^)())updateInBottomDuringKeyboardDismiss;


#ifndef alwaysBounceHorizontal                                  
#define alwaysBounceHorizontal(...)  alwaysBounceHorizontal(@"setAlwaysBounceHorizontal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAlwaysBounceHorizontal: 'B'
     */
- (MLChain4UITableView *(^)())alwaysBounceHorizontal;


#ifndef scrollIndicatorIns                                  
#define scrollIndicatorIns(...)  scrollIndicatorIns(@"setScrollIndicatorInsets:", __VA_ARGS__)                                  
#endif
#ifndef scrollIndicatorIns_             
#define scrollIndicatorIns_(...)  scrollIndicatorIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setScrollIndicatorInsets: '{'
     */
- (MLChain4UITableView *(^)())scrollIndicatorIns;


#ifndef decelerationRate                                  
#define decelerationRate(...)  decelerationRate(@"setDecelerationRate:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDecelerationRate: 'd'
     */
- (MLChain4UITableView *(^)())decelerationRate;


#ifndef horizontalScrollDecelerationFactor                                  
#define horizontalScrollDecelerationFactor(...)  horizontalScrollDecelerationFactor(@"setHorizontalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setHorizontalScrollDecelerationFactor: 'd'
     */
- (MLChain4UITableView *(^)())horizontalScrollDecelerationFactor;


#ifndef verticalScrollDecelerationFactor                                  
#define verticalScrollDecelerationFactor(...)  verticalScrollDecelerationFactor(@"setVerticalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setVerticalScrollDecelerationFactor: 'd'
     */
- (MLChain4UITableView *(^)())verticalScrollDecelerationFactor;


#ifndef allowsMultipleFingers                                  
#define allowsMultipleFingers(...)  allowsMultipleFingers(@"setAllowsMultipleFingers:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAllowsMultipleFingers: 'B'
     */
- (MLChain4UITableView *(^)())allowsMultipleFingers;


#ifndef tracksImmediatelyWhileDecelerating                                  
#define tracksImmediatelyWhileDecelerating(...)  tracksImmediatelyWhileDecelerating(@"setTracksImmediatelyWhileDecelerating:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTracksImmediatelyWhileDecelerating: 'B'
     */
- (MLChain4UITableView *(^)())tracksImmediatelyWhileDecelerating;


#ifndef preservesCenterDuringRotation                                  
#define preservesCenterDuringRotation(...)  preservesCenterDuringRotation(@"setPreservesCenterDuringRotation:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPreservesCenterDuringRotation: 'B'
     */
- (MLChain4UITableView *(^)())preservesCenterDuringRotation;


#ifndef showBackgroundShadow                                  
#define showBackgroundShadow(...)  showBackgroundShadow(@"setShowBackgroundShadow:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShowBackgroundShadow: 'B'
     */
- (MLChain4UITableView *(^)())showBackgroundShadow;


#ifndef delaysContentTouches                                  
#define delaysContentTouches(...)  delaysContentTouches(@"setDelaysContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDelaysContentTouches: 'B'
     */
- (MLChain4UITableView *(^)())delaysContentTouches;


#ifndef scrollsToTop                                  
#define scrollsToTop(...)  scrollsToTop(@"setScrollsToTop:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setScrollsToTop: 'B'
     */
- (MLChain4UITableView *(^)())scrollsToTop;


#ifndef zoomScale                                  
#define zoomScale(...)  zoomScale(@"setZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setZoomScale: 'd'
     */
- (MLChain4UITableView *(^)())zoomScale;


#ifndef zoomToRect_animated                                  
#define zoomToRect_animated(...)  zoomToRect_animated(@"zoomToRect:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   zoomToRect: '{'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())zoomToRect_animated;


#ifndef animator_stopAnimation_fraction                                  
#define animator_stopAnimation_fraction(...)  animator_stopAnimation_fraction(@"animator:stopAnimation:fraction:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   animator: '@'
  stopAnimation: '@'
  fraction: 'f'
     */
- (MLChain4UITableView *(^)())animator_stopAnimation_fraction;


#ifndef autoscrollContentOff                                  
#define autoscrollContentOff(...)  autoscrollContentOff(@"setAutoscrollContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef autoscrollContentOff_             
#define autoscrollContentOff_(...)  autoscrollContentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setAutoscrollContentOffset: '{'
     */
- (MLChain4UITableView *(^)())autoscrollContentOff;


#ifndef bouncesZoom                                  
#define bouncesZoom(...)  bouncesZoom(@"setBouncesZoom:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBouncesZoom: 'B'
     */
- (MLChain4UITableView *(^)())bouncesZoom;


#ifndef indicatorStyle                                  
#define indicatorStyle(...)  indicatorStyle(@"setIndicatorStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setIndicatorStyle: 'q'
     */
- (MLChain4UITableView *(^)())indicatorStyle;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeFromSuperview     */
- (MLChain4UITableView *(^)())removeFromSuperview;


#ifndef keyboardDismissMode                                  
#define keyboardDismissMode(...)  keyboardDismissMode(@"setKeyboardDismissMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setKeyboardDismissMode: 'q'
     */
- (MLChain4UITableView *(^)())keyboardDismissMode;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTop: 'd'
     */
- (MLChain4UITableView *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRight: 'd'
     */
- (MLChain4UITableView *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBottom: 'd'
     */
- (MLChain4UITableView *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UITableView *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeAllSubviews     */
- (MLChain4UITableView *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setLeft: 'd'
     */
- (MLChain4UITableView *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UITableView *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UITableView *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setWidth: 'd'
     */
- (MLChain4UITableView *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setHeight: 'd'
     */
- (MLChain4UITableView *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setSize: '{'
     */
- (MLChain4UITableView *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setOrigin: '{'
     */
- (MLChain4UITableView *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UITableView *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UITableView *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMas_key: '@'
     */
- (MLChain4UITableView *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UITableView *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UITableView *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UITableView *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setMj_size: '{'
     */
- (MLChain4UITableView *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UITableView *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UITableView *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UITableView *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UITableView *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UITableView *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UITableView *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UITableView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UITableView *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UITableView *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UITableView *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UITableView *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UITableView *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UITableView *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UITableView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UITableView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UITableView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UITableView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UITableView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UITableView *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UITableView *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UITableView *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UITableView *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UITableView *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UITableView *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UITableView *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UITableView *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UITableView *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UITableView *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UITableView *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UITableView *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UITableView *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UITableView *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updateBadgeFrame     */
- (MLChain4UITableView *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeBadge     */
- (MLChain4UITableView *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UITableView                                
SEL-> badgeInit     */
- (MLChain4UITableView *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UITableView *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UITableView                                
SEL-> refreshBadge     */
- (MLChain4UITableView *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UITableView *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setBadge: '@'
     */
- (MLChain4UITableView *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UITableView                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UITableView *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UITableView *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UITableView *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UITableView *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UITableView *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UITableView *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UITableView *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UITableView *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UITableView *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UITableView *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UITableView *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UITableView *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addWidth: 'd'
     */
- (MLChain4UITableView *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addHeight: 'd'
     */
- (MLChain4UITableView *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setX: 'd'
     */
- (MLChain4UITableView *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setY: 'd'
     */
- (MLChain4UITableView *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UITableView *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UITableView *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   tapEvent: '@'
     */
- (MLChain4UITableView *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UITableView                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UITableView *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UITableView *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UITableView *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UITableView *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UITableView *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UITableView *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UITableView *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeLastDrawRectView     */
- (MLChain4UITableView *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UITableView *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UITableView *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UITableView *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UITableView *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   tapAction: '@'
     */
- (MLChain4UITableView *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   swipeAction: '@'
     */
- (MLChain4UITableView *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   panAction: '@'
     */
- (MLChain4UITableView *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pinchAction: '@'
     */
- (MLChain4UITableView *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UITableView *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   rotationAction: '@'
     */
- (MLChain4UITableView *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UITableView *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UITableView *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UITableView *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UITableView *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UITableView *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UITableView *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   longPressAction: '@'
     */
- (MLChain4UITableView *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UITableView *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UITableView *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UITableView                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UITableView *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UITableView *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UITableView *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UITableView *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UITableView *(^)())enabled;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UITableView *(^)())nsli_addConstraint;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UITableView *(^)())solutionDidChangeInEngine;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UITableView *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UITableView *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UITableView                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UITableView *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UITableView *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsDisplay     */
- (MLChain4UITableView *(^)())setNeedsDisplay;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setPosition: '{'
     */
- (MLChain4UITableView *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setTransform: '{'
     */
- (MLChain4UITableView *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> layoutIfNeeded     */
- (MLChain4UITableView *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UITableView *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UITableView *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UITableView *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UITableView *(^)())clipsToBounds;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UITableView *(^)())autoresizesSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UITableView *(^)())needsDisplayOnBoundsChange;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UITableView *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UITableView                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UITableView *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UITableView *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UITableView *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UITableView *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UITableView *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UITableView *(^)())sendSubviewToBack;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UITableView *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UITableView *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UITableView *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UITableView *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UITableView *(^)())removeGestureRecognizer;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UITableView *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addConstraints: '@'
     */
- (MLChain4UITableView *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UITableView *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UITableView *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UITableView *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setCenter: '{'
     */
- (MLChain4UITableView *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UITableView *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UITableView *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UITableView *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UITableView *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UITableView *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UITableView *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UITableView *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UITableView *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UITableView *(^)())addLayoutGuide;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UITableView *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UITableView *(^)())removeAllGestureRecognizers;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UITableView *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UITableView *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTintColor: '@'
     */
- (MLChain4UITableView *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UITableView *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UITableView *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UITableView *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UITableView *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UITableView *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UITableView *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> focusedViewWillChange     */
- (MLChain4UITableView *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UITableView *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> focusedViewDidChange     */
- (MLChain4UITableView *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UITableView *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addConstraint: '@'
     */
- (MLChain4UITableView *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UITableView *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UITableView *(^)())tapDelegate;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UITableView *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UITableView *(^)())tintAdjustmentMode;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> tintColorDidChange     */
- (MLChain4UITableView *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UITableView *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMaskView: '@'
     */
- (MLChain4UITableView *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UITableView *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setTag: 'q'
     */
- (MLChain4UITableView *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setVisualState: '@'
     */
- (MLChain4UITableView *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UITableView *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UITableView *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UITableView *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UITableView *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UITableView *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UITableView *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UITableView                                
SEL-> sizeToFit     */
- (MLChain4UITableView *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UITableView *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UITableView *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UITableView *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UITableView                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UITableView *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UITableView                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UITableView *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UITableView *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UITableView *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UITableView *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UITableView *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UITableView *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UITableView *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UITableView *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UITableView *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UITableView                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UITableView *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UITableView *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UITableView                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UITableView *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UITableView                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UITableView *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UITableView *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UITableView                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UITableView *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UITableView *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UITableView                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UITableView *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UITableView *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UITableView                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UITableView *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UITableView *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UITableView *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UITableView *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UITableView                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UITableView *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UITableView *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UITableView                                
SEL-> didMoveToSuperview     */
- (MLChain4UITableView *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UITableView *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UITableView *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UITableView *(^)())didAddSubview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UITableView *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UITableView *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UITableView *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UITableView *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UITableView *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UITableView *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UITableView *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UITableView *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UITableView *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UITableView *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UITableView *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UITableView *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UITableView *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UITableView *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UITableView *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UITableView *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updateConstraints     */
- (MLChain4UITableView *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UITableView *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UITableView *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UITableView *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UITableView *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UITableView *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UITableView *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UITableView *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UITableView *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UITableView *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UITableView *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UITableView *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UITableView                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UITableView *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UITableView *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UITableView *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UITableView *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UITableView                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UITableView *(^)())exerciseAmbiguityInLayout;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setHidden: 'B'
     */
- (MLChain4UITableView *(^)())hidden;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UITableView *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addSubview: '@'
     */
- (MLChain4UITableView *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   drawRect: '{'
     */
- (MLChain4UITableView *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UITableView *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UITableView *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UITableView *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setCharge: 'f'
     */
- (MLChain4UITableView *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UITableView *(^)())viewWillMoveToSuperview;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UITableView *(^)())motionCancelled_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UITableView *(^)())restorationIdentifier;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UITableView *(^)())touchesEstimatedPropertiesUpdated;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> beginSelectionChange     */
- (MLChain4UITableView *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UITableView                                
SEL-> endSelectionChange     */
- (MLChain4UITableView *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UITableView *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UITableView                                
SEL-> reloadInputViews     */
- (MLChain4UITableView *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UITableView *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UITableView                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UITableView *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UITableView *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UITableView *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UITableView *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UITableView *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeObserverBlocks     */
- (MLChain4UITableView *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UITableView *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UITableView *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UITableView *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UITableView *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UITableView *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UITableView                                
SEL-> removeAssociatedValues     */
- (MLChain4UITableView *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UITableView *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setViewStack: '@'
     */
- (MLChain4UITableView *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UITableView                                
SEL-> assertNotDealloc     */
- (MLChain4UITableView *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UITableView *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UITableView *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UITableView *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UITableView *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   mj_decode: '@'
     */
- (MLChain4UITableView *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   mj_encode: '@'
     */
- (MLChain4UITableView *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UITableView *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UITableView *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UITableView *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UITableView *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UITableView                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UITableView *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UITableView *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UITableView *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITableView *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITableView *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UITableView *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UITableView *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UITableView *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UITableView                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UITableView *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UITableView *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UITableView                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UITableView *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UITableView *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UITableView *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UITableView *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UITableView *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UITableView *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UITableView *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UITableView                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UITableView *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UITableView *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UITableView *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UITableView *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UITableView *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UITableView                                
SEL-> allowSafePerformSelector     */
- (MLChain4UITableView *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UITableView                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UITableView *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UITableView *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UITableView *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UITableView *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UITableView *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UITableView *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UITableView *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UITableView *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UITableView *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UITableView *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UITableView *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UITableView *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UITableView                                
SEL-> mf_lock     */
- (MLChain4UITableView *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UITableView                                
SEL-> mf_unlock     */
- (MLChain4UITableView *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UITableView                                
SEL-> mf_lockWithPriority     */
- (MLChain4UITableView *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UITableView *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UITableView *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UITableView *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UITableView *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UITableView *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UITableView *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UITableView *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UITableView                                
SEL-> accessibilityIncrement     */
- (MLChain4UITableView *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UITableView                                
SEL-> accessibilityDecrement     */
- (MLChain4UITableView *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UITableView *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UITableView                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UITableView *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UITableView                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UITableView *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UITableView *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UITableView *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UITableView *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UITableView *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UITableView *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UITableView                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UITableView *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UITableView *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UITableView *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UITableView *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UITableView *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UITableView *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UITableView *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UITableView *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UITableView *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UITableView *(^)())accessibilityValue;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UITableView                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UITableView *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UITableView                                
SEL-> releaseOnMainThread     */
- (MLChain4UITableView *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UITableView *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UITableView                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UITableView *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UITableView *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeObservation: '@'
     */
- (MLChain4UITableView *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UITableView *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UITableView                                
SEL-> finishObserving     */
- (MLChain4UITableView *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UITableView *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UITableView *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UITableView *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UITableView *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UITableView *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UITableView *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UITableView *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UITableView *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UITableView *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UITableView *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UITableView *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UITableView *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UITableView *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UITableView *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UITableView *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UITableView *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UITableView *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UITableView                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UITableView *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UITableView *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UITableView *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UITableView *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UITableView *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UITableView *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UITableView *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UITableView                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UITableView *(^)())doesNotRecognizeSelector;


@end
