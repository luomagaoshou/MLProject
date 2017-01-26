//  
//  MLChain4UIScrollView.h
//  MLProject
//  
//  Created by 赖妙龙 on 2017/01/26.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"



@interface MLChain4UIScrollView:MLChain4UIView
- (UIScrollView *)chainObject;
#ifndef scrollToBottomAnimated                                  
#define scrollToBottomAnimated(...)  scrollToBottomAnimated(@"scrollToBottomAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollToBottomAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollToBottomAnimated;


#ifndef scrollToLeftAnimated                                  
#define scrollToLeftAnimated(...)  scrollToLeftAnimated(@"scrollToLeftAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollToLeftAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollToLeftAnimated;


#ifndef scrollToRightAnimated                                  
#define scrollToRightAnimated(...)  scrollToRightAnimated(@"scrollToRightAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollToRightAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollToRightAnimated;


#ifndef scrollToTop                              
#define scrollToTop(...)  scrollToTop(@"scrollToTop")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> scrollToTop     */
- (MLChain4UIScrollView *(^)())scrollToTop;


#ifndef scrollToBottom                              
#define scrollToBottom(...)  scrollToBottom(@"scrollToBottom")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> scrollToBottom     */
- (MLChain4UIScrollView *(^)())scrollToBottom;


#ifndef scrollToLeft                              
#define scrollToLeft(...)  scrollToLeft(@"scrollToLeft")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> scrollToLeft     */
- (MLChain4UIScrollView *(^)())scrollToLeft;


#ifndef scrollToRight                              
#define scrollToRight(...)  scrollToRight(@"scrollToRight")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> scrollToRight     */
- (MLChain4UIScrollView *(^)())scrollToRight;


#ifndef scrollToTopAnimated                                  
#define scrollToTopAnimated(...)  scrollToTopAnimated(@"scrollToTopAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollToTopAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollToTopAnimated;


#ifndef mj_header                                  
#define mj_header(...)  mj_header(@"setMj_header:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_header: '@'
     */
- (MLChain4UIScrollView *(^)())mj_header;


#ifndef mj_reloadDataBlock                                  
#define mj_reloadDataBlock(...)  mj_reloadDataBlock(@"setMj_reloadDataBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_reloadDataBlock: '@'
     */
- (MLChain4UIScrollView *(^)())mj_reloadDataBlock;


#ifndef mj_footer                                  
#define mj_footer(...)  mj_footer(@"setMj_footer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_footer: '@'
     */
- (MLChain4UIScrollView *(^)())mj_footer;


#ifndef footer                                  
#define footer(...)  footer(@"setFooter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setFooter: '@'
     */
- (MLChain4UIScrollView *(^)())footer;


#ifndef executeReloadDataBlock                              
#define executeReloadDataBlock(...)  executeReloadDataBlock(@"executeReloadDataBlock")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> executeReloadDataBlock     */
- (MLChain4UIScrollView *(^)())executeReloadDataBlock;


#ifndef header                                  
#define header(...)  header(@"setHeader:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setHeader: '@'
     */
- (MLChain4UIScrollView *(^)())header;


#ifndef mj_inB                                  
#define mj_inB(...)  mj_inB(@"setMj_insetB:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_insetB: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_inB;


#ifndef mj_offY                                  
#define mj_offY(...)  mj_offY(@"setMj_offsetY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_offsetY: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_offY;


#ifndef mj_inT                                  
#define mj_inT(...)  mj_inT(@"setMj_insetT:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_insetT: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_inT;


#ifndef mj_inL                                  
#define mj_inL(...)  mj_inL(@"setMj_insetL:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_insetL: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_inL;


#ifndef mj_inR                                  
#define mj_inR(...)  mj_inR(@"setMj_insetR:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_insetR: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_inR;


#ifndef mj_offX                                  
#define mj_offX(...)  mj_offX(@"setMj_offsetX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_offsetX: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_offX;


#ifndef mj_contentW                                  
#define mj_contentW(...)  mj_contentW(@"setMj_contentW:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_contentW: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_contentW;


#ifndef mj_contentH                                  
#define mj_contentH(...)  mj_contentH(@"setMj_contentH:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_contentH: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_contentH;


#ifndef shouldRestoreScrollViewContentOff                                  
#define shouldRestoreScrollViewContentOff(...)  shouldRestoreScrollViewContentOff(@"setShouldRestoreScrollViewContentOffset:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShouldRestoreScrollViewContentOffset: 'B'
     */
- (MLChain4UIScrollView *(^)())shouldRestoreScrollViewContentOff;


#ifndef reloadEmptyDataSet                              
#define reloadEmptyDataSet(...)  reloadEmptyDataSet(@"reloadEmptyDataSet")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> reloadEmptyDataSet     */
- (MLChain4UIScrollView *(^)())reloadEmptyDataSet;


#ifndef emptyDataSetSource                                  
#define emptyDataSetSource(...)  emptyDataSetSource(@"setEmptyDataSetSource:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEmptyDataSetSource: '@'
     */
- (MLChain4UIScrollView *(^)())emptyDataSetSource;


#ifndef emptyDataSetDelegate                                  
#define emptyDataSetDelegate(...)  emptyDataSetDelegate(@"setEmptyDataSetDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEmptyDataSetDelegate: '@'
     */
- (MLChain4UIScrollView *(^)())emptyDataSetDelegate;


#ifndef dzn_didTapContentView                                  
#define dzn_didTapContentView(...)  dzn_didTapContentView(@"dzn_didTapContentView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   dzn_didTapContentView: '@'
     */
- (MLChain4UIScrollView *(^)())dzn_didTapContentView;


#ifndef emptyDataSetView                                  
#define emptyDataSetView(...)  emptyDataSetView(@"setEmptyDataSetView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEmptyDataSetView: '@'
     */
- (MLChain4UIScrollView *(^)())emptyDataSetView;


#ifndef dzn_invalidate                              
#define dzn_invalidate(...)  dzn_invalidate(@"dzn_invalidate")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_invalidate     */
- (MLChain4UIScrollView *(^)())dzn_invalidate;


#ifndef swizzleIfPossible                                  
#define swizzleIfPossible(...)  swizzleIfPossible(@"swizzleIfPossible:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   swizzleIfPossible: ':'
     */
- (MLChain4UIScrollView *(^)())swizzleIfPossible;


#ifndef dzn_reloadEmptyDataSet                              
#define dzn_reloadEmptyDataSet(...)  dzn_reloadEmptyDataSet(@"dzn_reloadEmptyDataSet")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_reloadEmptyDataSet     */
- (MLChain4UIScrollView *(^)())dzn_reloadEmptyDataSet;


#ifndef dzn_willAppear                              
#define dzn_willAppear(...)  dzn_willAppear(@"dzn_willAppear")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_willAppear     */
- (MLChain4UIScrollView *(^)())dzn_willAppear;


#ifndef dzn_didAppear                              
#define dzn_didAppear(...)  dzn_didAppear(@"dzn_didAppear")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_didAppear     */
- (MLChain4UIScrollView *(^)())dzn_didAppear;


#ifndef dzn_willDisappear                              
#define dzn_willDisappear(...)  dzn_willDisappear(@"dzn_willDisappear")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_willDisappear     */
- (MLChain4UIScrollView *(^)())dzn_willDisappear;


#ifndef dzn_didDisappear                              
#define dzn_didDisappear(...)  dzn_didDisappear(@"dzn_didDisappear")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> dzn_didDisappear     */
- (MLChain4UIScrollView *(^)())dzn_didDisappear;


#ifndef dzn_didTapDataButton                                  
#define dzn_didTapDataButton(...)  dzn_didTapDataButton(@"dzn_didTapDataButton:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   dzn_didTapDataButton: '@'
     */
- (MLChain4UIScrollView *(^)())dzn_didTapDataButton;


#ifndef loadType                                  
#define loadType(...)  loadType(@"setLoadType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setLoadType: 'q'
     */
- (MLChain4UIScrollView *(^)())loadType;


#ifndef closeMJRefreshHeaderAndFooter                              
#define closeMJRefreshHeaderAndFooter(...)  closeMJRefreshHeaderAndFooter(@"closeMJRefreshHeaderAndFooter")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> closeMJRefreshHeaderAndFooter     */
- (MLChain4UIScrollView *(^)())closeMJRefreshHeaderAndFooter;


#ifndef cellDatas                                  
#define cellDatas(...)  cellDatas(@"setCellDatas:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCellDatas: '@'
     */
- (MLChain4UIScrollView *(^)())cellDatas;


#ifndef pageSize                                  
#define pageSize(...)  pageSize(@"setPageSize:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPageSize: 'q'
     */
- (MLChain4UIScrollView *(^)())pageSize;


#ifndef statusType                                  
#define statusType(...)  statusType(@"setStatusType:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setStatusType: 'q'
     */
- (MLChain4UIScrollView *(^)())statusType;


#ifndef currentPage                                  
#define currentPage(...)  currentPage(@"setCurrentPage:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCurrentPage: 'q'
     */
- (MLChain4UIScrollView *(^)())currentPage;


#ifndef ab_scrollToSelectionOfTextView                                  
#define ab_scrollToSelectionOfTextView(...)  ab_scrollToSelectionOfTextView(@"ab_scrollToSelectionOfTextView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
     */
- (MLChain4UIScrollView *(^)())ab_scrollToSelectionOfTextView;


#ifndef ab_scrollToSelectionOfTextView_animated                                  
#define ab_scrollToSelectionOfTextView_animated(...)  ab_scrollToSelectionOfTextView_animated(@"ab_scrollToSelectionOfTextView:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   ab_scrollToSelectionOfTextView: '@'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())ab_scrollToSelectionOfTextView_animated;


#ifndef ab_adjustForAutomaticKeyboardInfo_lastAdjustment                                  
#define ab_adjustForAutomaticKeyboardInfo_lastAdjustment(...)  ab_adjustForAutomaticKeyboardInfo_lastAdjustment(@"ab_adjustForAutomaticKeyboardInfo:lastAdjustment:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   ab_adjustForAutomaticKeyboardInfo: '@'
  lastAdjustment: '^'
     */
- (MLChain4UIScrollView *(^)())ab_adjustForAutomaticKeyboardInfo_lastAdjustment;


#ifndef canCancelContentTouches                                  
#define canCancelContentTouches(...)  canCancelContentTouches(@"setCanCancelContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCanCancelContentTouches: 'B'
     */
- (MLChain4UIScrollView *(^)())canCancelContentTouches;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDelegate: '@'
     */
- (MLChain4UIScrollView *(^)())delegate;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UIScrollView *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsLayout     */
- (MLChain4UIScrollView *(^)())setNeedsLayout;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setBounds: '{'
     */
- (MLChain4UIScrollView *(^)())bounds;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())userInteractionEnabled;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> layoutSubviews     */
- (MLChain4UIScrollView *(^)())layoutSubviews;


#ifndef contentSize                                  
#define contentSize(...)  contentSize(@"setContentSize:", __VA_ARGS__)                                  
#endif
#ifndef contentSize_             
#define contentSize_(...)  contentSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setContentSize: '{'
     */
- (MLChain4UIScrollView *(^)())contentSize;


#ifndef showsVerticalScrollIndicator                                  
#define showsVerticalScrollIndicator(...)  showsVerticalScrollIndicator(@"setShowsVerticalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShowsVerticalScrollIndicator: 'B'
     */
- (MLChain4UIScrollView *(^)())showsVerticalScrollIndicator;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UIScrollView *(^)())traitCollectionDidChange;


#ifndef showsHorizontalScrollIndicator                                  
#define showsHorizontalScrollIndicator(...)  showsHorizontalScrollIndicator(@"setShowsHorizontalScrollIndicator:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShowsHorizontalScrollIndicator: 'B'
     */
- (MLChain4UIScrollView *(^)())showsHorizontalScrollIndicator;


#ifndef contentOff_animated                                  
#define contentOff_animated(...)  contentOff_animated(@"setContentOffset:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentOffset: '{'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())contentOff_animated;


#ifndef scrollRectToVisible_animated                                  
#define scrollRectToVisible_animated(...)  scrollRectToVisible_animated(@"scrollRectToVisible:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollRectToVisible: '{'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollRectToVisible_animated;


#ifndef scrollEnabled                                  
#define scrollEnabled(...)  scrollEnabled(@"setScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setScrollEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollEnabled;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())touchesCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIScrollView *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIScrollView *(^)())decodeRestorableStateWithCoder;


#ifndef programmaticScrollEnabled                                  
#define programmaticScrollEnabled(...)  programmaticScrollEnabled(@"setProgrammaticScrollEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setProgrammaticScrollEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())programmaticScrollEnabled;


#ifndef contentOff                                  
#define contentOff(...)  contentOff(@"setContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef contentOff_             
#define contentOff_(...)  contentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setContentOffset: '{'
     */
- (MLChain4UIScrollView *(^)())contentOff;


#ifndef directionalLockEnabled                                  
#define directionalLockEnabled(...)  directionalLockEnabled(@"setDirectionalLockEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDirectionalLockEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())directionalLockEnabled;


#ifndef scrollTestParameters                                  
#define scrollTestParameters(...)  scrollTestParameters(@"setScrollTestParameters:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setScrollTestParameters: '@'
     */
- (MLChain4UIScrollView *(^)())scrollTestParameters;


#ifndef handlePan                                  
#define handlePan(...)  handlePan(@"handlePan:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   handlePan: '@'
     */
- (MLChain4UIScrollView *(^)())handlePan;


#ifndef handlePinch                                  
#define handlePinch(...)  handlePinch(@"handlePinch:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   handlePinch: '@'
     */
- (MLChain4UIScrollView *(^)())handlePinch;


#ifndef delayed                                  
#define delayed(...)  delayed(@"delayed:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   delayed: '@'
     */
- (MLChain4UIScrollView *(^)())delayed;


#ifndef willRotateToInterfaceOrientation                                  
#define willRotateToInterfaceOrientation(...)  willRotateToInterfaceOrientation(@"willRotateToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willRotateToInterfaceOrientation: '@'
     */
- (MLChain4UIScrollView *(^)())willRotateToInterfaceOrientation;


#ifndef willAnimateRotationToInterfaceOrientation                                  
#define willAnimateRotationToInterfaceOrientation(...)  willAnimateRotationToInterfaceOrientation(@"willAnimateRotationToInterfaceOrientation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willAnimateRotationToInterfaceOrientation: '@'
     */
- (MLChain4UIScrollView *(^)())willAnimateRotationToInterfaceOrientation;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
     */
- (MLChain4UIScrollView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate;


#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force                                  
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(...)  zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(@"setZoomScale:withAnchorPoint:validatingScrollOffset:allowRubberbanding:animated:duration:notifyDelegate:force:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__), (double)metamacro_at(5, __VA_ARGS__), (int)metamacro_at(6, __VA_ARGS__), (int)metamacro_at(7, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setZoomScale: 'd'
  withAnchorPoint: '{'
  validatingScrollOffset: 'B'
  allowRubberbanding: 'B'
  animated: 'B'
  duration: 'd'
  notifyDelegate: 'B'
  force: 'B'
     */
- (MLChain4UIScrollView *(^)())zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force;


#ifndef minimumZoomScale                                  
#define minimumZoomScale(...)  minimumZoomScale(@"setMinimumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMinimumZoomScale: 'd'
     */
- (MLChain4UIScrollView *(^)())minimumZoomScale;


#ifndef maximumZoomScale                                  
#define maximumZoomScale(...)  maximumZoomScale(@"setMaximumZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMaximumZoomScale: 'd'
     */
- (MLChain4UIScrollView *(^)())maximumZoomScale;


#ifndef zoomScale_animated                                  
#define zoomScale_animated(...)  zoomScale_animated(@"setZoomScale:animated:", (double)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setZoomScale: 'd'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())zoomScale_animated;


#ifndef alwaysBounceVertical                                  
#define alwaysBounceVertical(...)  alwaysBounceVertical(@"setAlwaysBounceVertical:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAlwaysBounceVertical: 'B'
     */
- (MLChain4UIScrollView *(^)())alwaysBounceVertical;


#ifndef contentIn                                  
#define contentIn(...)  contentIn(@"setContentInset:", __VA_ARGS__)                                  
#endif
#ifndef contentIn_             
#define contentIn_(...)  contentIn(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setContentInset: '{'
     */
- (MLChain4UIScrollView *(^)())contentIn;


#ifndef scrollingEnabled                                  
#define scrollingEnabled(...)  scrollingEnabled(@"setScrollingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setScrollingEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollingEnabled;


#ifndef zoomEnabled                                  
#define zoomEnabled(...)  zoomEnabled(@"setZoomEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setZoomEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())zoomEnabled;


#ifndef pagingEnabled                                  
#define pagingEnabled(...)  pagingEnabled(@"setPagingEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPagingEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())pagingEnabled;


#ifndef bounces                                  
#define bounces(...)  bounces(@"setBounces:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBounces: 'B'
     */
- (MLChain4UIScrollView *(^)())bounces;


#ifndef bouncesHorizontally                                  
#define bouncesHorizontally(...)  bouncesHorizontally(@"setBouncesHorizontally:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBouncesHorizontally: 'B'
     */
- (MLChain4UIScrollView *(^)())bouncesHorizontally;


#ifndef bouncesVertically                                  
#define bouncesVertically(...)  bouncesVertically(@"setBouncesVertically:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBouncesVertically: 'B'
     */
- (MLChain4UIScrollView *(^)())bouncesVertically;


#ifndef updateInBottomDuringKeyboardDismiss                                  
#define updateInBottomDuringKeyboardDismiss(...)  updateInBottomDuringKeyboardDismiss(@"setUpdateInsetBottomDuringKeyboardDismiss:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setUpdateInsetBottomDuringKeyboardDismiss: 'B'
     */
- (MLChain4UIScrollView *(^)())updateInBottomDuringKeyboardDismiss;


#ifndef alwaysBounceHorizontal                                  
#define alwaysBounceHorizontal(...)  alwaysBounceHorizontal(@"setAlwaysBounceHorizontal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAlwaysBounceHorizontal: 'B'
     */
- (MLChain4UIScrollView *(^)())alwaysBounceHorizontal;


#ifndef scrollIndicatorIns                                  
#define scrollIndicatorIns(...)  scrollIndicatorIns(@"setScrollIndicatorInsets:", __VA_ARGS__)                                  
#endif
#ifndef scrollIndicatorIns_             
#define scrollIndicatorIns_(...)  scrollIndicatorIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setScrollIndicatorInsets: '{'
     */
- (MLChain4UIScrollView *(^)())scrollIndicatorIns;


#ifndef decelerationRate                                  
#define decelerationRate(...)  decelerationRate(@"setDecelerationRate:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDecelerationRate: 'd'
     */
- (MLChain4UIScrollView *(^)())decelerationRate;


#ifndef horizontalScrollDecelerationFactor                                  
#define horizontalScrollDecelerationFactor(...)  horizontalScrollDecelerationFactor(@"setHorizontalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setHorizontalScrollDecelerationFactor: 'd'
     */
- (MLChain4UIScrollView *(^)())horizontalScrollDecelerationFactor;


#ifndef verticalScrollDecelerationFactor                                  
#define verticalScrollDecelerationFactor(...)  verticalScrollDecelerationFactor(@"setVerticalScrollDecelerationFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setVerticalScrollDecelerationFactor: 'd'
     */
- (MLChain4UIScrollView *(^)())verticalScrollDecelerationFactor;


#ifndef allowsMultipleFingers                                  
#define allowsMultipleFingers(...)  allowsMultipleFingers(@"setAllowsMultipleFingers:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAllowsMultipleFingers: 'B'
     */
- (MLChain4UIScrollView *(^)())allowsMultipleFingers;


#ifndef tracksImmediatelyWhileDecelerating                                  
#define tracksImmediatelyWhileDecelerating(...)  tracksImmediatelyWhileDecelerating(@"setTracksImmediatelyWhileDecelerating:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTracksImmediatelyWhileDecelerating: 'B'
     */
- (MLChain4UIScrollView *(^)())tracksImmediatelyWhileDecelerating;


#ifndef preservesCenterDuringRotation                                  
#define preservesCenterDuringRotation(...)  preservesCenterDuringRotation(@"setPreservesCenterDuringRotation:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPreservesCenterDuringRotation: 'B'
     */
- (MLChain4UIScrollView *(^)())preservesCenterDuringRotation;


#ifndef flashScrollIndicators                              
#define flashScrollIndicators(...)  flashScrollIndicators(@"flashScrollIndicators")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> flashScrollIndicators     */
- (MLChain4UIScrollView *(^)())flashScrollIndicators;


#ifndef showBackgroundShadow                                  
#define showBackgroundShadow(...)  showBackgroundShadow(@"setShowBackgroundShadow:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShowBackgroundShadow: 'B'
     */
- (MLChain4UIScrollView *(^)())showBackgroundShadow;


#ifndef delaysContentTouches                                  
#define delaysContentTouches(...)  delaysContentTouches(@"setDelaysContentTouches:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDelaysContentTouches: 'B'
     */
- (MLChain4UIScrollView *(^)())delaysContentTouches;


#ifndef scrollsToTop                                  
#define scrollsToTop(...)  scrollsToTop(@"setScrollsToTop:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setScrollsToTop: 'B'
     */
- (MLChain4UIScrollView *(^)())scrollsToTop;


#ifndef zoomScale                                  
#define zoomScale(...)  zoomScale(@"setZoomScale:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setZoomScale: 'd'
     */
- (MLChain4UIScrollView *(^)())zoomScale;


#ifndef zoomToRect_animated                                  
#define zoomToRect_animated(...)  zoomToRect_animated(@"zoomToRect:animated:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   zoomToRect: '{'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())zoomToRect_animated;


#ifndef refreshControl                                  
#define refreshControl(...)  refreshControl(@"setRefreshControl:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setRefreshControl: '@'
     */
- (MLChain4UIScrollView *(^)())refreshControl;


#ifndef animator_stopAnimation_fraction                                  
#define animator_stopAnimation_fraction(...)  animator_stopAnimation_fraction(@"animator:stopAnimation:fraction:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (float)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   animator: '@'
  stopAnimation: '@'
  fraction: 'f'
     */
- (MLChain4UIScrollView *(^)())animator_stopAnimation_fraction;


#ifndef autoscrollContentOff                                  
#define autoscrollContentOff(...)  autoscrollContentOff(@"setAutoscrollContentOffset:", __VA_ARGS__)                                  
#endif
#ifndef autoscrollContentOff_             
#define autoscrollContentOff_(...)  autoscrollContentOff(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setAutoscrollContentOffset: '{'
     */
- (MLChain4UIScrollView *(^)())autoscrollContentOff;


#ifndef bouncesZoom                                  
#define bouncesZoom(...)  bouncesZoom(@"setBouncesZoom:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBouncesZoom: 'B'
     */
- (MLChain4UIScrollView *(^)())bouncesZoom;


#ifndef indicatorStyle                                  
#define indicatorStyle(...)  indicatorStyle(@"setIndicatorStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setIndicatorStyle: 'q'
     */
- (MLChain4UIScrollView *(^)())indicatorStyle;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setFrame: '{'
     */
- (MLChain4UIScrollView *(^)())frame;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UIScrollView *(^)())encodeWithCoder;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeFromSuperview     */
- (MLChain4UIScrollView *(^)())removeFromSuperview;


#ifndef keyboardDismissMode                                  
#define keyboardDismissMode(...)  keyboardDismissMode(@"setKeyboardDismissMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setKeyboardDismissMode: 'q'
     */
- (MLChain4UIScrollView *(^)())keyboardDismissMode;


#ifndef top                                  
#define top(...)  top(@"setTop:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTop: 'd'
     */
- (MLChain4UIScrollView *(^)())top;


#ifndef right                                  
#define right(...)  right(@"setRight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setRight: 'd'
     */
- (MLChain4UIScrollView *(^)())right;


#ifndef bottom                                  
#define bottom(...)  bottom(@"setBottom:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBottom: 'd'
     */
- (MLChain4UIScrollView *(^)())bottom;


#ifndef layerShadow_off_radius                                  
#define layerShadow_off_radius(...)  layerShadow_off_radius(@"setLayerShadow:offset:radius:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setLayerShadow: '@'
  offset: '{'
  radius: 'd'
     */
- (MLChain4UIScrollView *(^)())layerShadow_off_radius;


#ifndef removeAllSubviews                              
#define removeAllSubviews(...)  removeAllSubviews(@"removeAllSubviews")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeAllSubviews     */
- (MLChain4UIScrollView *(^)())removeAllSubviews;


#ifndef left                                  
#define left(...)  left(@"setLeft:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setLeft: 'd'
     */
- (MLChain4UIScrollView *(^)())left;


#ifndef centerX                                  
#define centerX(...)  centerX(@"setCenterX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCenterX: 'd'
     */
- (MLChain4UIScrollView *(^)())centerX;


#ifndef centerY                                  
#define centerY(...)  centerY(@"setCenterY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCenterY: 'd'
     */
- (MLChain4UIScrollView *(^)())centerY;


#ifndef width                                  
#define width(...)  width(@"setWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setWidth: 'd'
     */
- (MLChain4UIScrollView *(^)())width;


#ifndef height                                  
#define height(...)  height(@"setHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setHeight: 'd'
     */
- (MLChain4UIScrollView *(^)())height;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setSize: '{'
     */
- (MLChain4UIScrollView *(^)())size;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setOrigin: '{'
     */
- (MLChain4UIScrollView *(^)())origin;


#ifndef sd_setImageLoadOperation_forKey                                  
#define sd_setImageLoadOperation_forKey(...)  sd_setImageLoadOperation_forKey(@"sd_setImageLoadOperation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sd_setImageLoadOperation: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())sd_setImageLoadOperation_forKey;


#ifndef sd_cancelImageLoadOperationWithKey                                  
#define sd_cancelImageLoadOperationWithKey(...)  sd_cancelImageLoadOperationWithKey(@"sd_cancelImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sd_cancelImageLoadOperationWithKey: '@'
     */
- (MLChain4UIScrollView *(^)())sd_cancelImageLoadOperationWithKey;


#ifndef sd_removeImageLoadOperationWithKey                                  
#define sd_removeImageLoadOperationWithKey(...)  sd_removeImageLoadOperationWithKey(@"sd_removeImageLoadOperationWithKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sd_removeImageLoadOperationWithKey: '@'
     */
- (MLChain4UIScrollView *(^)())sd_removeImageLoadOperationWithKey;


#ifndef mas_key                                  
#define mas_key(...)  mas_key(@"setMas_key:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMas_key: '@'
     */
- (MLChain4UIScrollView *(^)())mas_key;


#ifndef mj_y                                  
#define mj_y(...)  mj_y(@"setMj_y:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_y: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_y;


#ifndef mj_h                                  
#define mj_h(...)  mj_h(@"setMj_h:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_h: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_h;


#ifndef mj_w                                  
#define mj_w(...)  mj_w(@"setMj_w:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_w: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_w;


#ifndef mj_size                                  
#define mj_size(...)  mj_size(@"setMj_size:", __VA_ARGS__)                                  
#endif
#ifndef mj_size_             
#define mj_size_(...)  mj_size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setMj_size: '{'
     */
- (MLChain4UIScrollView *(^)())mj_size;


#ifndef mj_x                                  
#define mj_x(...)  mj_x(@"setMj_x:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMj_x: 'd'
     */
- (MLChain4UIScrollView *(^)())mj_x;


#ifndef mj_origin                                  
#define mj_origin(...)  mj_origin(@"setMj_origin:", __VA_ARGS__)                                  
#endif
#ifndef mj_origin_             
#define mj_origin_(...)  mj_origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setMj_origin: '{'
     */
- (MLChain4UIScrollView *(^)())mj_origin;


#ifndef addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder                                  
#define addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(...)  addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder(@"addRightButtonOnKeyboardWithText:target:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addRightButtonOnKeyboardWithText_target_action_shouldShowPlaceholder;


#ifndef addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder                                  
#define addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(...)  addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder(@"addDoneOnKeyboardWithTarget:action:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addDoneOnKeyboardWithTarget_action_shouldShowPlaceholder;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), (int)metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_shouldShowPlaceholder;


#ifndef enablePrevious_next                                  
#define enablePrevious_next(...)  enablePrevious_next(@"setEnablePrevious:next:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEnablePrevious: 'B'
  next: 'B'
     */
- (MLChain4UIScrollView *(^)())enablePrevious_next;


#ifndef previousInvocation                                  
#define previousInvocation(...)  previousInvocation(@"setPreviousInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPreviousInvocation: '@'
     */
- (MLChain4UIScrollView *(^)())previousInvocation;


#ifndef nextInvocation                                  
#define nextInvocation(...)  nextInvocation(@"setNextInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setNextInvocation: '@'
     */
- (MLChain4UIScrollView *(^)())nextInvocation;


#ifndef doneInvocation                                  
#define doneInvocation(...)  doneInvocation(@"setDoneInvocation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDoneInvocation: '@'
     */
- (MLChain4UIScrollView *(^)())doneInvocation;


#ifndef addRightButtonOnKeyboardWithText_target_action_titleText                                  
#define addRightButtonOnKeyboardWithText_target_action_titleText(...)  addRightButtonOnKeyboardWithText_target_action_titleText(@"addRightButtonOnKeyboardWithText:target:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addRightButtonOnKeyboardWithText_target_action_titleText;


#ifndef addDoneOnKeyboardWithTarget_action_titleText                                  
#define addDoneOnKeyboardWithTarget_action_titleText(...)  addDoneOnKeyboardWithTarget_action_titleText(@"addDoneOnKeyboardWithTarget:action:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addDoneOnKeyboardWithTarget_action_titleText;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_titleText;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_titleText;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction_titleText;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:titleText:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
  titleText: '@'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction_titleText;


#ifndef shouldHideTitle                                  
#define shouldHideTitle(...)  shouldHideTitle(@"setShouldHideTitle:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShouldHideTitle: 'B'
     */
- (MLChain4UIScrollView *(^)())shouldHideTitle;


#ifndef customPreviousTarget_action                                  
#define customPreviousTarget_action(...)  customPreviousTarget_action(@"setCustomPreviousTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCustomPreviousTarget: '@'
  action: ':'
     */
- (MLChain4UIScrollView *(^)())customPreviousTarget_action;


#ifndef customNextTarget_action                                  
#define customNextTarget_action(...)  customNextTarget_action(@"setCustomNextTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCustomNextTarget: '@'
  action: ':'
     */
- (MLChain4UIScrollView *(^)())customNextTarget_action;


#ifndef customDoneTarget_action                                  
#define customDoneTarget_action(...)  customDoneTarget_action(@"setCustomDoneTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCustomDoneTarget: '@'
  action: ':'
     */
- (MLChain4UIScrollView *(^)())customDoneTarget_action;


#ifndef addRightButtonOnKeyboardWithText_target_action                                  
#define addRightButtonOnKeyboardWithText_target_action(...)  addRightButtonOnKeyboardWithText_target_action(@"addRightButtonOnKeyboardWithText:target:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addRightButtonOnKeyboardWithText: '@'
  target: '@'
  action: ':'
     */
- (MLChain4UIScrollView *(^)())addRightButtonOnKeyboardWithText_target_action;


#ifndef addDoneOnKeyboardWithTarget_action                                  
#define addDoneOnKeyboardWithTarget_action(...)  addDoneOnKeyboardWithTarget_action(@"addDoneOnKeyboardWithTarget:action:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addDoneOnKeyboardWithTarget: '@'
  action: ':'
     */
- (MLChain4UIScrollView *(^)())addDoneOnKeyboardWithTarget_action;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__), (int)metamacro_at(5, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction_shouldShowPlaceholder;


#ifndef addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction                                  
#define addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(...)  addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction(@"addLeftRightOnKeyboardWithTarget:leftButtonTitle:rightButtonTitle:leftButtonAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addLeftRightOnKeyboardWithTarget: '@'
  leftButtonTitle: '@'
  rightButtonTitle: '@'
  leftButtonAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIScrollView *(^)())addLeftRightOnKeyboardWithTarget_leftButtonTitle_rightButtonTitle_leftButtonAction_rightButtonAction;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:shouldShowPlaceholder:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
  shouldShowPlaceholder: 'B'
     */
- (MLChain4UIScrollView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction_shouldShowPlaceholder;


#ifndef addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction                                  
#define addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(...)  addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction(@"addCancelDoneOnKeyboardWithTarget:cancelAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addCancelDoneOnKeyboardWithTarget: '@'
  cancelAction: ':'
  doneAction: ':'
     */
- (MLChain4UIScrollView *(^)())addCancelDoneOnKeyboardWithTarget_cancelAction_doneAction;


#ifndef addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction                                  
#define addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(...)  addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction(@"addPreviousNextDoneOnKeyboardWithTarget:previousAction:nextAction:doneAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextDoneOnKeyboardWithTarget: '@'
  previousAction: ':'
  nextAction: ':'
  doneAction: ':'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextDoneOnKeyboardWithTarget_previousAction_nextAction_doneAction;


#ifndef addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction                                  
#define addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(...)  addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction(@"addPreviousNextRightOnKeyboardWithTarget:rightButtonTitle:previousAction:nextAction:rightButtonAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addPreviousNextRightOnKeyboardWithTarget: '@'
  rightButtonTitle: '@'
  previousAction: ':'
  nextAction: ':'
  rightButtonAction: ':'
     */
- (MLChain4UIScrollView *(^)())addPreviousNextRightOnKeyboardWithTarget_rightButtonTitle_previousAction_nextAction_rightButtonAction;


#ifndef keyboardDistanceFromTextField                                  
#define keyboardDistanceFromTextField(...)  keyboardDistanceFromTextField(@"setKeyboardDistanceFromTextField:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setKeyboardDistanceFromTextField: 'd'
     */
- (MLChain4UIScrollView *(^)())keyboardDistanceFromTextField;


#ifndef bk_whenTouches_tapped_handler                                  
#define bk_whenTouches_tapped_handler(...)  bk_whenTouches_tapped_handler(@"bk_whenTouches:tapped:handler:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_whenTouches: 'Q'
  tapped: 'Q'
  handler: '@'
     */
- (MLChain4UIScrollView *(^)())bk_whenTouches_tapped_handler;


#ifndef bk_whenTapped                                  
#define bk_whenTapped(...)  bk_whenTapped(@"bk_whenTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_whenTapped: '@'
     */
- (MLChain4UIScrollView *(^)())bk_whenTapped;


#ifndef bk_whenDoubleTapped                                  
#define bk_whenDoubleTapped(...)  bk_whenDoubleTapped(@"bk_whenDoubleTapped:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_whenDoubleTapped: '@'
     */
- (MLChain4UIScrollView *(^)())bk_whenDoubleTapped;


#ifndef bk_eachSubview                                  
#define bk_eachSubview(...)  bk_eachSubview(@"bk_eachSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_eachSubview: '@'
     */
- (MLChain4UIScrollView *(^)())bk_eachSubview;


#ifndef badgeBGColor                                  
#define badgeBGColor(...)  badgeBGColor(@"setBadgeBGColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeBGColor: '@'
     */
- (MLChain4UIScrollView *(^)())badgeBGColor;


#ifndef badgeTextColor                                  
#define badgeTextColor(...)  badgeTextColor(@"setBadgeTextColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeTextColor: '@'
     */
- (MLChain4UIScrollView *(^)())badgeTextColor;


#ifndef badgeFont                                  
#define badgeFont(...)  badgeFont(@"setBadgeFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeFont: '@'
     */
- (MLChain4UIScrollView *(^)())badgeFont;


#ifndef badgePadding                                  
#define badgePadding(...)  badgePadding(@"setBadgePadding:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgePadding: 'd'
     */
- (MLChain4UIScrollView *(^)())badgePadding;


#ifndef badgeMinSize                                  
#define badgeMinSize(...)  badgeMinSize(@"setBadgeMinSize:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeMinSize: 'd'
     */
- (MLChain4UIScrollView *(^)())badgeMinSize;


#ifndef badgeOriginX                                  
#define badgeOriginX(...)  badgeOriginX(@"setBadgeOriginX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeOriginX: 'd'
     */
- (MLChain4UIScrollView *(^)())badgeOriginX;


#ifndef badgeOriginY                                  
#define badgeOriginY(...)  badgeOriginY(@"setBadgeOriginY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeOriginY: 'd'
     */
- (MLChain4UIScrollView *(^)())badgeOriginY;


#ifndef shouldHideBadgeAtZero                                  
#define shouldHideBadgeAtZero(...)  shouldHideBadgeAtZero(@"setShouldHideBadgeAtZero:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShouldHideBadgeAtZero: 'B'
     */
- (MLChain4UIScrollView *(^)())shouldHideBadgeAtZero;


#ifndef shouldAnimateBadge                                  
#define shouldAnimateBadge(...)  shouldAnimateBadge(@"setShouldAnimateBadge:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShouldAnimateBadge: 'B'
     */
- (MLChain4UIScrollView *(^)())shouldAnimateBadge;


#ifndef updateBadgeFrame                              
#define updateBadgeFrame(...)  updateBadgeFrame(@"updateBadgeFrame")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updateBadgeFrame     */
- (MLChain4UIScrollView *(^)())updateBadgeFrame;


#ifndef removeBadge                              
#define removeBadge(...)  removeBadge(@"removeBadge")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeBadge     */
- (MLChain4UIScrollView *(^)())removeBadge;


#ifndef badgeInit                              
#define badgeInit(...)  badgeInit(@"badgeInit")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> badgeInit     */
- (MLChain4UIScrollView *(^)())badgeInit;


#ifndef updateBadgeValueAnimated                                  
#define updateBadgeValueAnimated(...)  updateBadgeValueAnimated(@"updateBadgeValueAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   updateBadgeValueAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())updateBadgeValueAnimated;


#ifndef refreshBadge                              
#define refreshBadge(...)  refreshBadge(@"refreshBadge")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> refreshBadge     */
- (MLChain4UIScrollView *(^)())refreshBadge;


#ifndef badgeValue                                  
#define badgeValue(...)  badgeValue(@"setBadgeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadgeValue: '@'
     */
- (MLChain4UIScrollView *(^)())badgeValue;


#ifndef badge                                  
#define badge(...)  badge(@"setBadge:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBadge: '@'
     */
- (MLChain4UIScrollView *(^)())badge;


#ifndef resignFirstResponderCommonMothed                              
#define resignFirstResponderCommonMothed(...)  resignFirstResponderCommonMothed(@"resignFirstResponderCommonMothed")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> resignFirstResponderCommonMothed     */
- (MLChain4UIScrollView *(^)())resignFirstResponderCommonMothed;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UIScrollView *(^)())moveToSuperview;


#ifndef setupSelfNameCellXibOnSelfWithReuseIDDictionary                                  
#define setupSelfNameCellXibOnSelfWithReuseIDDictionary(...)  setupSelfNameCellXibOnSelfWithReuseIDDictionary(@"setupSelfNameCellXibOnSelfWithReuseIDDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setupSelfNameCellXibOnSelfWithReuseIDDictionary: '@'
     */
- (MLChain4UIScrollView *(^)())setupSelfNameCellXibOnSelfWithReuseIDDictionary;


#ifndef setupSelfNameCellXibOnSelf                              
#define setupSelfNameCellXibOnSelf(...)  setupSelfNameCellXibOnSelf(@"setupSelfNameCellXibOnSelf")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setupSelfNameCellXibOnSelf     */
- (MLChain4UIScrollView *(^)())setupSelfNameCellXibOnSelf;


#ifndef setupSelfNameCollectionViewCellXibOnSelf                              
#define setupSelfNameCollectionViewCellXibOnSelf(...)  setupSelfNameCollectionViewCellXibOnSelf(@"setupSelfNameCollectionViewCellXibOnSelf")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setupSelfNameCollectionViewCellXibOnSelf     */
- (MLChain4UIScrollView *(^)())setupSelfNameCollectionViewCellXibOnSelf;


#ifndef addWidth_addHeight                                  
#define addWidth_addHeight(...)  addWidth_addHeight(@"addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIScrollView *(^)())addWidth_addHeight;


#ifndef cornerRadius_borderColor                                  
#define cornerRadius_borderColor(...)  cornerRadius_borderColor(@"setCornerRadius:borderColor:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCornerRadius: 'd'
  borderColor: '@'
     */
- (MLChain4UIScrollView *(^)())cornerRadius_borderColor;


#ifndef width_height                                  
#define width_height(...)  width_height(@"setWidth:height:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setWidth: 'd'
  height: 'd'
     */
- (MLChain4UIScrollView *(^)())width_height;


#ifndef moveHorizontal_vertical                                  
#define moveHorizontal_vertical(...)  moveHorizontal_vertical(@"moveHorizontal:vertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
     */
- (MLChain4UIScrollView *(^)())moveHorizontal_vertical;


#ifndef moveHorizontal_vertical_addWidth_addHeight                                  
#define moveHorizontal_vertical_addWidth_addHeight(...)  moveHorizontal_vertical_addWidth_addHeight(@"moveHorizontal:vertical:addWidth:addHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   moveHorizontal: 'd'
  vertical: 'd'
  addWidth: 'd'
  addHeight: 'd'
     */
- (MLChain4UIScrollView *(^)())moveHorizontal_vertical_addWidth_addHeight;


#ifndef moveToHorizontal_toVertical                                  
#define moveToHorizontal_toVertical(...)  moveToHorizontal_toVertical(@"moveToHorizontal:toVertical:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
     */
- (MLChain4UIScrollView *(^)())moveToHorizontal_toVertical;


#ifndef moveToHorizontal_toVertical_setWidth_setHeight                                  
#define moveToHorizontal_toVertical_setWidth_setHeight(...)  moveToHorizontal_toVertical_setWidth_setHeight(@"moveToHorizontal:toVertical:setWidth:setHeight:", (double)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (double)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   moveToHorizontal: 'd'
  toVertical: 'd'
  setWidth: 'd'
  setHeight: 'd'
     */
- (MLChain4UIScrollView *(^)())moveToHorizontal_toVertical_setWidth_setHeight;


#ifndef addWidth                                  
#define addWidth(...)  addWidth(@"addWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addWidth: 'd'
     */
- (MLChain4UIScrollView *(^)())addWidth;


#ifndef addHeight                                  
#define addHeight(...)  addHeight(@"addHeight:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addHeight: 'd'
     */
- (MLChain4UIScrollView *(^)())addHeight;


#ifndef x                                  
#define x(...)  x(@"setX:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setX: 'd'
     */
- (MLChain4UIScrollView *(^)())x;


#ifndef y                                  
#define y(...)  y(@"setY:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setY: 'd'
     */
- (MLChain4UIScrollView *(^)())y;


#ifndef cornerRadius                                  
#define cornerRadius(...)  cornerRadius(@"setCornerRadius:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCornerRadius: 'd'
     */
- (MLChain4UIScrollView *(^)())cornerRadius;


#ifndef ml_setUpOuterBorderWithWidth_color                                  
#define ml_setUpOuterBorderWithWidth_color(...)  ml_setUpOuterBorderWithWidth_color(@"ml_setUpOuterBorderWithWidth:color:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   ml_setUpOuterBorderWithWidth: 'd'
  color: '@'
     */
- (MLChain4UIScrollView *(^)())ml_setUpOuterBorderWithWidth_color;


#ifndef tapEvent                                  
#define tapEvent(...)  tapEvent(@"tapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   tapEvent: '@'
     */
- (MLChain4UIScrollView *(^)())tapEvent;


#ifndef addFullScreenClearColorShade                              
#define addFullScreenClearColorShade(...)  addFullScreenClearColorShade(@"addFullScreenClearColorShade")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> addFullScreenClearColorShade     */
- (MLChain4UIScrollView *(^)())addFullScreenClearColorShade;


#ifndef addFullScreenClearColorShadeWithTapEvent                                  
#define addFullScreenClearColorShadeWithTapEvent(...)  addFullScreenClearColorShadeWithTapEvent(@"addFullScreenClearColorShadeWithTapEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addFullScreenClearColorShadeWithTapEvent: '@'
     */
- (MLChain4UIScrollView *(^)())addFullScreenClearColorShadeWithTapEvent;


#ifndef clearColorShadeView                                  
#define clearColorShadeView(...)  clearColorShadeView(@"setClearColorShadeView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setClearColorShadeView: '@'
     */
- (MLChain4UIScrollView *(^)())clearColorShadeView;


#ifndef drawRectViewArray                                  
#define drawRectViewArray(...)  drawRectViewArray(@"setDrawRectViewArray:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDrawRectViewArray: '@'
     */
- (MLChain4UIScrollView *(^)())drawRectViewArray;


#ifndef drawRectBlock                                  
#define drawRectBlock(...)  drawRectBlock(@"setDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDrawRectBlock: '@'
     */
- (MLChain4UIScrollView *(^)())drawRectBlock;


#ifndef startDrawInsideWithBlock                                  
#define startDrawInsideWithBlock(...)  startDrawInsideWithBlock(@"startDrawInsideWithBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   startDrawInsideWithBlock: '@'
     */
- (MLChain4UIScrollView *(^)())startDrawInsideWithBlock;


#ifndef removeAllDrawRectViews                              
#define removeAllDrawRectViews(...)  removeAllDrawRectViews(@"removeAllDrawRectViews")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeAllDrawRectViews     */
- (MLChain4UIScrollView *(^)())removeAllDrawRectViews;


#ifndef removeLastDrawRectView                              
#define removeLastDrawRectView(...)  removeLastDrawRectView(@"removeLastDrawRectView")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeLastDrawRectView     */
- (MLChain4UIScrollView *(^)())removeLastDrawRectView;


#ifndef configDrawRectBlock                                  
#define configDrawRectBlock(...)  configDrawRectBlock(@"configDrawRectBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   configDrawRectBlock: '@'
     */
- (MLChain4UIScrollView *(^)())configDrawRectBlock;


#ifndef setupSelfNameXibOnSelfWithSerialNumber                                  
#define setupSelfNameXibOnSelfWithSerialNumber(...)  setupSelfNameXibOnSelfWithSerialNumber(@"setupSelfNameXibOnSelfWithSerialNumber:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setupSelfNameXibOnSelfWithSerialNumber: 'q'
     */
- (MLChain4UIScrollView *(^)())setupSelfNameXibOnSelfWithSerialNumber;


#ifndef setupSelfNameXibOnSelf                              
#define setupSelfNameXibOnSelf(...)  setupSelfNameXibOnSelf(@"setupSelfNameXibOnSelf")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setupSelfNameXibOnSelf     */
- (MLChain4UIScrollView *(^)())setupSelfNameXibOnSelf;


#ifndef setupXibWithName                                  
#define setupXibWithName(...)  setupXibWithName(@"setupXibWithName:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setupXibWithName: '@'
     */
- (MLChain4UIScrollView *(^)())setupXibWithName;


#ifndef tapWithConfig_event                                  
#define tapWithConfig_event(...)  tapWithConfig_event(@"tapWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   tapWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())tapWithConfig_event;


#ifndef tapAction                                  
#define tapAction(...)  tapAction(@"tapAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   tapAction: '@'
     */
- (MLChain4UIScrollView *(^)())tapAction;


#ifndef swipeWithConfig_event                                  
#define swipeWithConfig_event(...)  swipeWithConfig_event(@"swipeWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   swipeWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())swipeWithConfig_event;


#ifndef swipeAction                                  
#define swipeAction(...)  swipeAction(@"swipeAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   swipeAction: '@'
     */
- (MLChain4UIScrollView *(^)())swipeAction;


#ifndef longPressWithConfig_event                                  
#define longPressWithConfig_event(...)  longPressWithConfig_event(@"longPressWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   longPressWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())longPressWithConfig_event;


#ifndef panWithConfig_event                                  
#define panWithConfig_event(...)  panWithConfig_event(@"panWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   panWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())panWithConfig_event;


#ifndef panAction                                  
#define panAction(...)  panAction(@"panAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   panAction: '@'
     */
- (MLChain4UIScrollView *(^)())panAction;


#ifndef pinchWithConfig_event                                  
#define pinchWithConfig_event(...)  pinchWithConfig_event(@"pinchWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pinchWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())pinchWithConfig_event;


#ifndef pinchAction                                  
#define pinchAction(...)  pinchAction(@"pinchAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pinchAction: '@'
     */
- (MLChain4UIScrollView *(^)())pinchAction;


#ifndef rotationWithConfig_event                                  
#define rotationWithConfig_event(...)  rotationWithConfig_event(@"rotationWithConfig:event:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   rotationWithConfig: '@'
  event: '@'
     */
- (MLChain4UIScrollView *(^)())rotationWithConfig_event;


#ifndef rotationAction                                  
#define rotationAction(...)  rotationAction(@"rotationAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   rotationAction: '@'
     */
- (MLChain4UIScrollView *(^)())rotationAction;


#ifndef tapWithEvent                                  
#define tapWithEvent(...)  tapWithEvent(@"tapWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   tapWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())tapWithEvent;


#ifndef swipeWithEvent                                  
#define swipeWithEvent(...)  swipeWithEvent(@"swipeWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   swipeWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())swipeWithEvent;


#ifndef longPressWithEvent                                  
#define longPressWithEvent(...)  longPressWithEvent(@"longPressWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   longPressWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())longPressWithEvent;


#ifndef panWithEvent                                  
#define panWithEvent(...)  panWithEvent(@"panWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   panWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())panWithEvent;


#ifndef pinchWithEvent                                  
#define pinchWithEvent(...)  pinchWithEvent(@"pinchWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pinchWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())pinchWithEvent;


#ifndef rotationWithEvent                                  
#define rotationWithEvent(...)  rotationWithEvent(@"rotationWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   rotationWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())rotationWithEvent;


#ifndef longPressAction                                  
#define longPressAction(...)  longPressAction(@"longPressAction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   longPressAction: '@'
     */
- (MLChain4UIScrollView *(^)())longPressAction;


#ifndef mf_setAsSourceForPopoverPresentationController                                  
#define mf_setAsSourceForPopoverPresentationController(...)  mf_setAsSourceForPopoverPresentationController(@"mf_setAsSourceForPopoverPresentationController:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   mf_setAsSourceForPopoverPresentationController: '@'
     */
- (MLChain4UIScrollView *(^)())mf_setAsSourceForPopoverPresentationController;


#ifndef infoCardThemeChanged                                  
#define infoCardThemeChanged(...)  infoCardThemeChanged(@"infoCardThemeChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   infoCardThemeChanged: '@'
     */
- (MLChain4UIScrollView *(^)())infoCardThemeChanged;


#ifndef clearArtworkCatalogs                              
#define clearArtworkCatalogs(...)  clearArtworkCatalogs(@"clearArtworkCatalogs")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> clearArtworkCatalogs     */
- (MLChain4UIScrollView *(^)())clearArtworkCatalogs;


#ifndef cam_addConstraints_forKey                                  
#define cam_addConstraints_forKey(...)  cam_addConstraints_forKey(@"cam_addConstraints:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_addConstraints: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())cam_addConstraints_forKey;


#ifndef cam_removeAllConstraintsForKey                                  
#define cam_removeAllConstraintsForKey(...)  cam_removeAllConstraintsForKey(@"cam_removeAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_removeAllConstraintsForKey: '@'
     */
- (MLChain4UIScrollView *(^)())cam_removeAllConstraintsForKey;


#ifndef cam_addConstraint_forKey                                  
#define cam_addConstraint_forKey(...)  cam_addConstraint_forKey(@"cam_addConstraint:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_addConstraint: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())cam_addConstraint_forKey;


#ifndef cam_clearAllConstraintsForKey                                  
#define cam_clearAllConstraintsForKey(...)  cam_clearAllConstraintsForKey(@"cam_clearAllConstraintsForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_clearAllConstraintsForKey: '@'
     */
- (MLChain4UIScrollView *(^)())cam_clearAllConstraintsForKey;


#ifndef cam_rotateWithDeviceOrientation_animated                                  
#define cam_rotateWithDeviceOrientation_animated(...)  cam_rotateWithDeviceOrientation_animated(@"cam_rotateWithDeviceOrientation:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_rotateWithDeviceOrientation: 'q'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())cam_rotateWithDeviceOrientation_animated;


#ifndef cam_setHidden_animated                                  
#define cam_setHidden_animated(...)  cam_setHidden_animated(@"cam_setHidden:animated:", (int)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_setHidden: 'B'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())cam_setHidden_animated;


#ifndef cam_setHidden_delay_animated                                  
#define cam_setHidden_delay_animated(...)  cam_setHidden_delay_animated(@"cam_setHidden:delay:animated:", (int)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cam_setHidden: 'B'
  delay: 'd'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())cam_setHidden_delay_animated;


#ifndef abSetLayoutDebuggingColor                                  
#define abSetLayoutDebuggingColor(...)  abSetLayoutDebuggingColor(@"abSetLayoutDebuggingColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   abSetLayoutDebuggingColor: '@'
     */
- (MLChain4UIScrollView *(^)())abSetLayoutDebuggingColor;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())enabled;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UIScrollView *(^)())nsli_addConstraint;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UIScrollView *(^)())solutionDidChangeInEngine;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UIScrollView *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UIScrollView *(^)())constraintsDidChangeInEngine;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UIScrollView *(^)())viewDidMoveToSuperview;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UIScrollView *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsDisplay     */
- (MLChain4UIScrollView *(^)())setNeedsDisplay;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setPosition: '{'
     */
- (MLChain4UIScrollView *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setTransform: '{'
     */
- (MLChain4UIScrollView *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> layoutIfNeeded     */
- (MLChain4UIScrollView *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UIScrollView *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UIScrollView *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UIScrollView *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UIScrollView *(^)())clipsToBounds;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UIScrollView *(^)())autoresizesSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UIScrollView *(^)())needsDisplayOnBoundsChange;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> didMoveToWindow     */
- (MLChain4UIScrollView *(^)())didMoveToWindow;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UIScrollView *(^)())alpha;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UIScrollView *(^)())invalidateIntrinsicContentSize;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UIScrollView *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UIScrollView *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UIScrollView *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UIScrollView *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UIScrollView *(^)())sendSubviewToBack;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UIScrollView *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UIScrollView *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UIScrollView *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UIScrollView *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UIScrollView *(^)())removeGestureRecognizer;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UIScrollView *(^)())semanticContentAttribute;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UIScrollView *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addConstraints: '@'
     */
- (MLChain4UIScrollView *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UIScrollView *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UIScrollView *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UIScrollView *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setCenter: '{'
     */
- (MLChain4UIScrollView *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UIScrollView *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UIScrollView *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UIScrollView *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIScrollView *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UIScrollView *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UIScrollView *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UIScrollView *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UIScrollView *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UIScrollView *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UIScrollView *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UIScrollView *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UIScrollView *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UIScrollView *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UIScrollView *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UIScrollView *(^)())interactionTintColor;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTintColor: '@'
     */
- (MLChain4UIScrollView *(^)())tintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UIScrollView *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UIScrollView *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UIScrollView *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UIScrollView *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIScrollView *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UIScrollView *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> focusedViewWillChange     */
- (MLChain4UIScrollView *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UIScrollView *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> focusedViewDidChange     */
- (MLChain4UIScrollView *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UIScrollView *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addConstraint: '@'
     */
- (MLChain4UIScrollView *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UIScrollView *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UIScrollView *(^)())tapDelegate;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UIScrollView *(^)())layoutMargins;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UIScrollView *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UIScrollView *(^)())tintAdjustmentMode;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> tintColorDidChange     */
- (MLChain4UIScrollView *(^)())tintColorDidChange;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UIScrollView *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMaskView: '@'
     */
- (MLChain4UIScrollView *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UIScrollView *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setTag: 'q'
     */
- (MLChain4UIScrollView *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setVisualState: '@'
     */
- (MLChain4UIScrollView *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UIScrollView *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UIScrollView *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UIScrollView *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UIScrollView *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UIScrollView *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UIScrollView *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> sizeToFit     */
- (MLChain4UIScrollView *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UIScrollView *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UIScrollView *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UIScrollView *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UIScrollView *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UIScrollView *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UIScrollView *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UIScrollView *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UIScrollView *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UIScrollView *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UIScrollView *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UIScrollView *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UIScrollView *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UIScrollView *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UIScrollView *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UIScrollView *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UIScrollView *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UIScrollView *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UIScrollView *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UIScrollView *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UIScrollView *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UIScrollView *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UIScrollView *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UIScrollView *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UIScrollView *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UIScrollView *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> didMoveToSuperview     */
- (MLChain4UIScrollView *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UIScrollView *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UIScrollView *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UIScrollView *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UIScrollView *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UIScrollView *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UIScrollView *(^)())movedToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UIScrollView *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UIScrollView *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UIScrollView *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UIScrollView *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UIScrollView *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UIScrollView *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UIScrollView *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UIScrollView *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UIScrollView *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UIScrollView *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UIScrollView *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UIScrollView *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UIScrollView *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UIScrollView *(^)())setNeedsUpdateConstraints;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updateConstraints     */
- (MLChain4UIScrollView *(^)())updateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UIScrollView *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UIScrollView *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIScrollView *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UIScrollView *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UIScrollView *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UIScrollView *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UIScrollView *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UIScrollView *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UIScrollView *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UIScrollView *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UIScrollView *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UIScrollView *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UIScrollView *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIScrollView *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UIScrollView *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UIScrollView *(^)())exerciseAmbiguityInLayout;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setHidden: 'B'
     */
- (MLChain4UIScrollView *(^)())hidden;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UIScrollView *(^)())backgroundColor;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UIScrollView *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addSubview: '@'
     */
- (MLChain4UIScrollView *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   drawRect: '{'
     */
- (MLChain4UIScrollView *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UIScrollView *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UIScrollView *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UIScrollView *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setCharge: 'f'
     */
- (MLChain4UIScrollView *(^)())charge;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UIScrollView *(^)())viewWillMoveToSuperview;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())pressesBegan_withEvent;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())pressesCancelled_withEvent;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())motionCancelled_withEvent;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UIScrollView *(^)())pressesChanged_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UIScrollView *(^)())restorationIdentifier;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UIScrollView *(^)())touchesEstimatedPropertiesUpdated;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> beginSelectionChange     */
- (MLChain4UIScrollView *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> endSelectionChange     */
- (MLChain4UIScrollView *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UIScrollView *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> reloadInputViews     */
- (MLChain4UIScrollView *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UIScrollView *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UIScrollView *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UIScrollView *(^)())scrollWheel;


#ifndef modelEncodeWithCoder                                  
#define modelEncodeWithCoder(...)  modelEncodeWithCoder(@"modelEncodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   modelEncodeWithCoder: '@'
     */
- (MLChain4UIScrollView *(^)())modelEncodeWithCoder;


#ifndef addObserverBlockForKeyPath_block                                  
#define addObserverBlockForKeyPath_block(...)  addObserverBlockForKeyPath_block(@"addObserverBlockForKeyPath:block:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addObserverBlockForKeyPath: '@'
  block: '@'
     */
- (MLChain4UIScrollView *(^)())addObserverBlockForKeyPath_block;


#ifndef removeObserverBlocksForKeyPath                                  
#define removeObserverBlocksForKeyPath(...)  removeObserverBlocksForKeyPath(@"removeObserverBlocksForKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeObserverBlocksForKeyPath: '@'
     */
- (MLChain4UIScrollView *(^)())removeObserverBlocksForKeyPath;


#ifndef removeObserverBlocks                              
#define removeObserverBlocks(...)  removeObserverBlocks(@"removeObserverBlocks")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeObserverBlocks     */
- (MLChain4UIScrollView *(^)())removeObserverBlocks;


#ifndef performSelectorWithArgs_afterDelay                                  
#define performSelectorWithArgs_afterDelay(...)  performSelectorWithArgs_afterDelay(@"performSelectorWithArgs:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelectorWithArgs: ':'
  afterDelay: 'd'
     */
- (MLChain4UIScrollView *(^)())performSelectorWithArgs_afterDelay;


#ifndef performSelectorWithArgsInBackground                                  
#define performSelectorWithArgsInBackground(...)  performSelectorWithArgsInBackground(@"performSelectorWithArgsInBackground:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelectorWithArgsInBackground: ':'
     */
- (MLChain4UIScrollView *(^)())performSelectorWithArgsInBackground;


#ifndef performSelector_afterDelay                                  
#define performSelector_afterDelay(...)  performSelector_afterDelay(@"performSelector:afterDelay:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  afterDelay: 'd'
     */
- (MLChain4UIScrollView *(^)())performSelector_afterDelay;


#ifndef associateValue_withKey                                  
#define associateValue_withKey(...)  associateValue_withKey(@"setAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAssociateValue: '@'
  withKey: '^'
     */
- (MLChain4UIScrollView *(^)())associateValue_withKey;


#ifndef associateWeakValue_withKey                                  
#define associateWeakValue_withKey(...)  associateWeakValue_withKey(@"setAssociateWeakValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAssociateWeakValue: '@'
  withKey: '^'
     */
- (MLChain4UIScrollView *(^)())associateWeakValue_withKey;


#ifndef removeAssociatedValues                              
#define removeAssociatedValues(...)  removeAssociatedValues(@"removeAssociatedValues")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> removeAssociatedValues     */
- (MLChain4UIScrollView *(^)())removeAssociatedValues;


#ifndef rac_addDeallocDisposable                                  
#define rac_addDeallocDisposable(...)  rac_addDeallocDisposable(@"rac_addDeallocDisposable:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   rac_addDeallocDisposable: '@'
     */
- (MLChain4UIScrollView *(^)())rac_addDeallocDisposable;


#ifndef viewStack                                  
#define viewStack(...)  viewStack(@"setViewStack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setViewStack: '@'
     */
- (MLChain4UIScrollView *(^)())viewStack;


#ifndef assertNotDealloc                              
#define assertNotDealloc(...)  assertNotDealloc(@"assertNotDealloc")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> assertNotDealloc     */
- (MLChain4UIScrollView *(^)())assertNotDealloc;


#ifndef parentPtrs                                  
#define parentPtrs(...)  parentPtrs(@"setParentPtrs:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setParentPtrs: '@'
     */
- (MLChain4UIScrollView *(^)())parentPtrs;


#ifndef willReleaseChildren                                  
#define willReleaseChildren(...)  willReleaseChildren(@"willReleaseChildren:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willReleaseChildren: '@'
     */
- (MLChain4UIScrollView *(^)())willReleaseChildren;


#ifndef willReleaseObject_relationship                                  
#define willReleaseObject_relationship(...)  willReleaseObject_relationship(@"willReleaseObject:relationship:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willReleaseObject: '@'
  relationship: '@'
     */
- (MLChain4UIScrollView *(^)())willReleaseObject_relationship;


#ifndef willReleaseChild                                  
#define willReleaseChild(...)  willReleaseChild(@"willReleaseChild:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willReleaseChild: '@'
     */
- (MLChain4UIScrollView *(^)())willReleaseChild;


#ifndef mj_decode                                  
#define mj_decode(...)  mj_decode(@"mj_decode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   mj_decode: '@'
     */
- (MLChain4UIScrollView *(^)())mj_decode;


#ifndef mj_encode                                  
#define mj_encode(...)  mj_encode(@"mj_encode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   mj_encode: '@'
     */
- (MLChain4UIScrollView *(^)())mj_encode;


#ifndef bk_addObserverForKeyPaths_identifier_options_context_task                                  
#define bk_addObserverForKeyPaths_identifier_options_context_task(...)  bk_addObserverForKeyPaths_identifier_options_context_task(@"bk_addObserverForKeyPaths:identifier:options:context:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  context: 'i'
  task: '@'
     */
- (MLChain4UIScrollView *(^)())bk_addObserverForKeyPaths_identifier_options_context_task;


#ifndef bk_addObserverForKeyPath_identifier_options_task                                  
#define bk_addObserverForKeyPath_identifier_options_task(...)  bk_addObserverForKeyPath_identifier_options_task(@"bk_addObserverForKeyPath:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_addObserverForKeyPath: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIScrollView *(^)())bk_addObserverForKeyPath_identifier_options_task;


#ifndef bk_addObserverForKeyPaths_identifier_options_task                                  
#define bk_addObserverForKeyPaths_identifier_options_task(...)  bk_addObserverForKeyPaths_identifier_options_task(@"bk_addObserverForKeyPaths:identifier:options:task:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_addObserverForKeyPaths: '@'
  identifier: '@'
  options: 'Q'
  task: '@'
     */
- (MLChain4UIScrollView *(^)())bk_addObserverForKeyPaths_identifier_options_task;


#ifndef bk_setObserverBlocks                                  
#define bk_setObserverBlocks(...)  bk_setObserverBlocks(@"bk_setObserverBlocks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_setObserverBlocks: '@'
     */
- (MLChain4UIScrollView *(^)())bk_setObserverBlocks;


#ifndef bk_removeAllBlockObservers                              
#define bk_removeAllBlockObservers(...)  bk_removeAllBlockObservers(@"bk_removeAllBlockObservers")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> bk_removeAllBlockObservers     */
- (MLChain4UIScrollView *(^)())bk_removeAllBlockObservers;


#ifndef bk_removeObserverForKeyPath_identifier                                  
#define bk_removeObserverForKeyPath_identifier(...)  bk_removeObserverForKeyPath_identifier(@"bk_removeObserverForKeyPath:identifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_removeObserverForKeyPath: '@'
  identifier: '@'
     */
- (MLChain4UIScrollView *(^)())bk_removeObserverForKeyPath_identifier;


#ifndef bk_removeObserversWithIdentifier                                  
#define bk_removeObserversWithIdentifier(...)  bk_removeObserversWithIdentifier(@"bk_removeObserversWithIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_removeObserversWithIdentifier: '@'
     */
- (MLChain4UIScrollView *(^)())bk_removeObserversWithIdentifier;


#ifndef bk_associateValue_withKey                                  
#define bk_associateValue_withKey(...)  bk_associateValue_withKey(@"bk_associateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_associateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIScrollView *(^)())bk_associateValue_withKey;


#ifndef bk_atomicallyAssociateValue_withKey                                  
#define bk_atomicallyAssociateValue_withKey(...)  bk_atomicallyAssociateValue_withKey(@"bk_atomicallyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_atomicallyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIScrollView *(^)())bk_atomicallyAssociateValue_withKey;


#ifndef bk_associateCopyOfValue_withKey                                  
#define bk_associateCopyOfValue_withKey(...)  bk_associateCopyOfValue_withKey(@"bk_associateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_associateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIScrollView *(^)())bk_associateCopyOfValue_withKey;


#ifndef bk_atomicallyAssociateCopyOfValue_withKey                                  
#define bk_atomicallyAssociateCopyOfValue_withKey(...)  bk_atomicallyAssociateCopyOfValue_withKey(@"bk_atomicallyAssociateCopyOfValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_atomicallyAssociateCopyOfValue: '@'
  withKey: 'r'
     */
- (MLChain4UIScrollView *(^)())bk_atomicallyAssociateCopyOfValue_withKey;


#ifndef bk_weaklyAssociateValue_withKey                                  
#define bk_weaklyAssociateValue_withKey(...)  bk_weaklyAssociateValue_withKey(@"bk_weaklyAssociateValue:withKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   bk_weaklyAssociateValue: '@'
  withKey: 'r'
     */
- (MLChain4UIScrollView *(^)())bk_weaklyAssociateValue_withKey;


#ifndef bk_removeAllAssociatedObjects                              
#define bk_removeAllAssociatedObjects(...)  bk_removeAllAssociatedObjects(@"bk_removeAllAssociatedObjects")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> bk_removeAllAssociatedObjects     */
- (MLChain4UIScrollView *(^)())bk_removeAllAssociatedObjects;


#ifndef operationWithAppearTimeBlock                                  
#define operationWithAppearTimeBlock(...)  operationWithAppearTimeBlock(@"operationWithAppearTimeBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   operationWithAppearTimeBlock: '@'
     */
- (MLChain4UIScrollView *(^)())operationWithAppearTimeBlock;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UIScrollView *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UIScrollView *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UIScrollView *(^)())featureIdentifier;


#ifndef enableMobClick                                  
#define enableMobClick(...)  enableMobClick(@"setEnableMobClick:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setEnableMobClick: 'B'
     */
- (MLChain4UIScrollView *(^)())enableMobClick;


#ifndef mobClickId                                  
#define mobClickId(...)  mobClickId(@"setMobClickId:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMobClickId: '@'
     */
- (MLChain4UIScrollView *(^)())mobClickId;


#ifndef mobClickIdIndex                                  
#define mobClickIdIndex(...)  mobClickIdIndex(@"setMobClickIdIndex:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setMobClickIdIndex: 'Q'
     */
- (MLChain4UIScrollView *(^)())mobClickIdIndex;


#ifndef registerForTimeMarkerNotificationsIfNecessaryForPlayer                                  
#define registerForTimeMarkerNotificationsIfNecessaryForPlayer(...)  registerForTimeMarkerNotificationsIfNecessaryForPlayer(@"registerForTimeMarkerNotificationsIfNecessaryForPlayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   registerForTimeMarkerNotificationsIfNecessaryForPlayer: '@'
     */
- (MLChain4UIScrollView *(^)())registerForTimeMarkerNotificationsIfNecessaryForPlayer;


#ifndef unregisterForTimeMarkerNotifications                              
#define unregisterForTimeMarkerNotifications(...)  unregisterForTimeMarkerNotifications(@"unregisterForTimeMarkerNotifications")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> unregisterForTimeMarkerNotifications     */
- (MLChain4UIScrollView *(^)())unregisterForTimeMarkerNotifications;


#ifndef dispatchAsyncWithCancellationIdentifier_delay_queue_block                                  
#define dispatchAsyncWithCancellationIdentifier_delay_queue_block(...)  dispatchAsyncWithCancellationIdentifier_delay_queue_block(@"dispatchAsyncWithCancellationIdentifier:delay:queue:block:", metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   dispatchAsyncWithCancellationIdentifier: '@'
  delay: 'd'
  queue: '@'
  block: '@'
     */
- (MLChain4UIScrollView *(^)())dispatchAsyncWithCancellationIdentifier_delay_queue_block;


#ifndef cl_json_serializeValue                                  
#define cl_json_serializeValue(...)  cl_json_serializeValue(@"cl_json_serializeValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cl_json_serializeValue: '^'
     */
- (MLChain4UIScrollView *(^)())cl_json_serializeValue;


#ifndef postNotificationWithDescription                                  
#define postNotificationWithDescription(...)  postNotificationWithDescription(@"postNotificationWithDescription:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   postNotificationWithDescription: '@'
     */
- (MLChain4UIScrollView *(^)())postNotificationWithDescription;


#ifndef fromNotifySafeThreadPerformSelector_withObject                                  
#define fromNotifySafeThreadPerformSelector_withObject(...)  fromNotifySafeThreadPerformSelector_withObject(@"fromNotifySafeThreadPerformSelector:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   fromNotifySafeThreadPerformSelector: ':'
  withObject: '@'
     */
- (MLChain4UIScrollView *(^)())fromNotifySafeThreadPerformSelector_withObject;


#ifndef allowSafePerformSelector                              
#define allowSafePerformSelector(...)  allowSafePerformSelector(@"allowSafePerformSelector")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> allowSafePerformSelector     */
- (MLChain4UIScrollView *(^)())allowSafePerformSelector;


#ifndef disallowSafePerformSelector                              
#define disallowSafePerformSelector(...)  disallowSafePerformSelector(@"disallowSafePerformSelector")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> disallowSafePerformSelector     */
- (MLChain4UIScrollView *(^)())disallowSafePerformSelector;


#ifndef fromNotifySafeThreadPostNotificationName_object_userInfo                                  
#define fromNotifySafeThreadPostNotificationName_object_userInfo(...)  fromNotifySafeThreadPostNotificationName_object_userInfo(@"fromNotifySafeThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   fromNotifySafeThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIScrollView *(^)())fromNotifySafeThreadPostNotificationName_object_userInfo;


#ifndef fromMainThreadPostNotificationName_object_userInfo                                  
#define fromMainThreadPostNotificationName_object_userInfo(...)  fromMainThreadPostNotificationName_object_userInfo(@"fromMainThreadPostNotificationName:object:userInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   fromMainThreadPostNotificationName: '@'
  object: '@'
  userInfo: '@'
     */
- (MLChain4UIScrollView *(^)())fromMainThreadPostNotificationName_object_userInfo;


#ifndef cplEncodePropertiesWithCoder                                  
#define cplEncodePropertiesWithCoder(...)  cplEncodePropertiesWithCoder(@"cplEncodePropertiesWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cplEncodePropertiesWithCoder: '@'
     */
- (MLChain4UIScrollView *(^)())cplEncodePropertiesWithCoder;


#ifndef cplDecodePropertiesFromCoder                                  
#define cplDecodePropertiesFromCoder(...)  cplDecodePropertiesFromCoder(@"cplDecodePropertiesFromCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cplDecodePropertiesFromCoder: '@'
     */
- (MLChain4UIScrollView *(^)())cplDecodePropertiesFromCoder;


#ifndef cplCopyPropertiesFromObject_withCopyBlock                                  
#define cplCopyPropertiesFromObject_withCopyBlock(...)  cplCopyPropertiesFromObject_withCopyBlock(@"cplCopyPropertiesFromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cplCopyPropertiesFromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIScrollView *(^)())cplCopyPropertiesFromObject_withCopyBlock;


#ifndef cplCopyProperties_fromObject_withCopyBlock                                  
#define cplCopyProperties_fromObject_withCopyBlock(...)  cplCopyProperties_fromObject_withCopyBlock(@"cplCopyProperties:fromObject:withCopyBlock:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cplCopyProperties: '@'
  fromObject: '@'
  withCopyBlock: '@'
     */
- (MLChain4UIScrollView *(^)())cplCopyProperties_fromObject_withCopyBlock;


#ifndef performSelector_withObject_afterDelay_ignoreMenuTracking                                  
#define performSelector_withObject_afterDelay_ignoreMenuTracking(...)  performSelector_withObject_afterDelay_ignoreMenuTracking(@"performSelector:withObject:afterDelay:ignoreMenuTracking:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  ignoreMenuTracking: 'B'
     */
- (MLChain4UIScrollView *(^)())performSelector_withObject_afterDelay_ignoreMenuTracking;


#ifndef cn_updateDictionaryForKey_withChanges                                  
#define cn_updateDictionaryForKey_withChanges(...)  cn_updateDictionaryForKey_withChanges(@"cn_updateDictionaryForKey:withChanges:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   cn_updateDictionaryForKey: '@'
  withChanges: '@'
     */
- (MLChain4UIScrollView *(^)())cn_updateDictionaryForKey_withChanges;


#ifndef mf_performOnewaySelectorInMainThread_withObject_withObject                                  
#define mf_performOnewaySelectorInMainThread_withObject_withObject(...)  mf_performOnewaySelectorInMainThread_withObject_withObject(@"mf_performOnewaySelectorInMainThread:withObject:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   mf_performOnewaySelectorInMainThread: ':'
  withObject: '@'
  withObject: '@'
     */
- (MLChain4UIScrollView *(^)())mf_performOnewaySelectorInMainThread_withObject_withObject;


#ifndef da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes                                  
#define da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(...)  da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes(@"da_addNullRunLoopSourceAndPerformSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   da_addNullRunLoopSourceAndPerformSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIScrollView *(^)())da_addNullRunLoopSourceAndPerformSelector_withObject_afterDelay_inModes;


#ifndef da_performSelectorThatDoesntAffectRetainCount_withObject                                  
#define da_performSelectorThatDoesntAffectRetainCount_withObject(...)  da_performSelectorThatDoesntAffectRetainCount_withObject(@"da_performSelectorThatDoesntAffectRetainCount:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   da_performSelectorThatDoesntAffectRetainCount: ':'
  withObject: '@'
     */
- (MLChain4UIScrollView *(^)())da_performSelectorThatDoesntAffectRetainCount_withObject;


#ifndef mf_lock                              
#define mf_lock(...)  mf_lock(@"mf_lock")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> mf_lock     */
- (MLChain4UIScrollView *(^)())mf_lock;


#ifndef mf_unlock                              
#define mf_unlock(...)  mf_unlock(@"mf_unlock")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> mf_unlock     */
- (MLChain4UIScrollView *(^)())mf_unlock;


#ifndef mf_lockWithPriority                              
#define mf_lockWithPriority(...)  mf_lockWithPriority(@"mf_lockWithPriority")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> mf_lockWithPriority     */
- (MLChain4UIScrollView *(^)())mf_lockWithPriority;


#ifndef performBlockOnMainThreadSynchronously                                  
#define performBlockOnMainThreadSynchronously(...)  performBlockOnMainThreadSynchronously(@"performBlockOnMainThreadSynchronously:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performBlockOnMainThreadSynchronously: '@'
     */
- (MLChain4UIScrollView *(^)())performBlockOnMainThreadSynchronously;


#ifndef CKAssignToContainerWithID                                  
#define CKAssignToContainerWithID(...)  CKAssignToContainerWithID(@"CKAssignToContainerWithID:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   CKAssignToContainerWithID: '@'
     */
- (MLChain4UIScrollView *(^)())CKAssignToContainerWithID;


#ifndef ml_bindToSQLiteStatement_atPosition                                  
#define ml_bindToSQLiteStatement_atPosition(...)  ml_bindToSQLiteStatement_atPosition(@"ml_bindToSQLiteStatement:atPosition:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   ml_bindToSQLiteStatement: '^'
  atPosition: 'i'
     */
- (MLChain4UIScrollView *(^)())ml_bindToSQLiteStatement_atPosition;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> accessibilityIncrement     */
- (MLChain4UIScrollView *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> accessibilityDecrement     */
- (MLChain4UIScrollView *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UIScrollView *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UIScrollView *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UIScrollView *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UIScrollView *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UIScrollView *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UIScrollView *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UIScrollView *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UIScrollView *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UIScrollView *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UIScrollView *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UIScrollView *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> awakeFromNib     */
- (MLChain4UIScrollView *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UIScrollView *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> releaseOnMainThread     */
- (MLChain4UIScrollView *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UIScrollView *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UIScrollView *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UIScrollView *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeObservation: '@'
     */
- (MLChain4UIScrollView *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UIScrollView *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UIScrollView                                
SEL-> finishObserving     */
- (MLChain4UIScrollView *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIScrollView *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIScrollView *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIScrollView *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UIScrollView *(^)())performSelectorInBackground_withObject;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIScrollView *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIScrollView *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UIScrollView *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UIScrollView *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UIScrollView *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UIScrollView *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UIScrollView *(^)())observationInfo;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UIScrollView *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UIScrollView *(^)())didChangeValueForKey;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIScrollView *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIScrollView *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIScrollView *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UIScrollView *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UIScrollView *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UIScrollView *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UIScrollView *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UIScrollView *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UIScrollView *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UIScrollView *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UIScrollView *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIScrollView                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UIScrollView *(^)())doesNotRecognizeSelector;


@end
