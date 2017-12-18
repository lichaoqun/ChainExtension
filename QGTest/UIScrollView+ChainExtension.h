//
//  UIScrollView+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UIScrollView (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UIScrollView *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UIScrollView *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UIScrollView *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UIScrollView *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UIScrollView *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UIScrollView *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UIScrollView *(^dy_hidden)(BOOL hidden);

#pragma mark - scrollView 的属性

//@property(nonatomic)         CGPoint                      contentOffset;                  // default CGPointZero
//@property(nonatomic)         CGSize                       contentSize;                    // default CGSizeZero
//@property(nonatomic)         UIEdgeInsets                 contentInset;                   // default UIEdgeInsetsZero. add additional scroll area around content
//
///* When contentInsetAdjustmentBehavior allows, UIScrollView may incorporate
// its safeAreaInsets into the adjustedContentInset.
// */
//@property(nonatomic, readonly) UIEdgeInsets adjustedContentInset API_AVAILABLE(ios(11.0),tvos(11.0));
//
///* Also see -scrollViewDidChangeAdjustedContentInset: in the UIScrollViewDelegate protocol.
// */
//- (void)adjustedContentInsetDidChange API_AVAILABLE(ios(11.0),tvos(11.0)) NS_REQUIRES_SUPER;
//
///* Configure the behavior of adjustedContentInset.
// Default is UIScrollViewContentInsetAdjustmentAutomatic.
// */
//@property(nonatomic) UIScrollViewContentInsetAdjustmentBehavior contentInsetAdjustmentBehavior API_AVAILABLE(ios(11.0),tvos(11.0));
//
///* contentLayoutGuide anchors (e.g., contentLayoutGuide.centerXAnchor, etc.) refer to
// the untranslated content area of the scroll view.
// */
//@property(nonatomic,readonly,strong) UILayoutGuide *contentLayoutGuide API_AVAILABLE(ios(11.0),tvos(11.0));
//
///* frameLayoutGuide anchors (e.g., frameLayoutGuide.centerXAnchor) refer to
// the untransformed frame of the scroll view.
// */
//@property(nonatomic,readonly,strong) UILayoutGuide *frameLayoutGuide API_AVAILABLE(ios(11.0),tvos(11.0));
//
//@property(nullable,nonatomic,weak) id<UIScrollViewDelegate>        delegate;                       // default nil. weak reference
//@property(nonatomic,getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;         // default NO. if YES, try to lock vertical or horizontal scrolling while dragging
//@property(nonatomic)         BOOL                         bounces;                        // default YES. if YES, bounces past edge of content and back again
//@property(nonatomic)         BOOL                         alwaysBounceVertical;           // default NO. if YES and bounces is YES, even if content is smaller than bounds, allow drag vertically
//@property(nonatomic)         BOOL                         alwaysBounceHorizontal;         // default NO. if YES and bounces is YES, even if content is smaller than bounds, allow drag horizontally
//@property(nonatomic,getter=isPagingEnabled) BOOL          pagingEnabled __TVOS_PROHIBITED;// default NO. if YES, stop on multiples of view bounds
//@property(nonatomic,getter=isScrollEnabled) BOOL          scrollEnabled;                  // default YES. turn off any dragging temporarily
//@property(nonatomic)         BOOL                         showsHorizontalScrollIndicator; // default YES. show indicator while we are tracking. fades out after tracking
//@property(nonatomic)         BOOL                         showsVerticalScrollIndicator;   // default YES. show indicator while we are tracking. fades out after tracking
//@property(nonatomic)         UIEdgeInsets                 scrollIndicatorInsets;          // default is UIEdgeInsetsZero. adjust indicators inside of insets
//@property(nonatomic)         UIScrollViewIndicatorStyle   indicatorStyle;                 // default is UIScrollViewIndicatorStyleDefault
//@property(nonatomic)         CGFloat                      decelerationRate NS_AVAILABLE_IOS(3_0);
//@property(nonatomic)         UIScrollViewIndexDisplayMode indexDisplayMode API_AVAILABLE(tvos(10.2));
//
//- (void)setContentOffset:(CGPoint)contentOffset animated:(BOOL)animated;  // animate at constant velocity to new offset
//- (void)scrollRectToVisible:(CGRect)rect animated:(BOOL)animated;         // scroll so rect is just visible (nearest edges). nothing if rect completely visible
//
//- (void)flashScrollIndicators;             // displays the scroll indicators for a short time. This should be done whenever you bring the scroll view to front.


@end
