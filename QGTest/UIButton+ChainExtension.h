//
//  UIButton+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UIButton (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UIButton *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UIButton *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UIButton *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UIButton *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UIButton *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UIButton *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UIButton *(^dy_hidden)(BOOL hidden);

#pragma mark - button 的属性
@property(nonatomic, copy)  UIButton *(^dy_setTitleForState)(NSString *title, UIControlState state);

@property(nonatomic, copy)  UIButton *(^dy_setTitleColorForState)(UIColor *color, UIControlState state);

@property(nonatomic, copy)  UIButton *(^dy_setTitleShadowColorForState)(UIColor *color, UIControlState state);

@property(nonatomic, copy)  UIButton *(^dy_setImageForState)(UIImage *image, UIControlState state);

@property(nonatomic, copy)  UIButton *(^dy_setBackgroundImageForState)(UIImage *image, UIControlState state);

@property(nonatomic, copy)  UIButton *(^dy_contentEdgeInsets)(UIEdgeInsets contentEdgeInsets);

@property(nonatomic, copy)  UIButton *(^dy_titleEdgeInsets)(UIEdgeInsets titleEdgeInsets);

@property(nonatomic, copy)  UIButton *(^dy_reversesTitleShadowWhenHighlighted)(BOOL reversesTitleShadowWhenHighlighted);

@property(nonatomic, copy)  UIButton *(^dy_imageEdgeInsets)(UIEdgeInsets imageEdgeInsets);

@property(nonatomic, copy)  UIButton *(^dy_adjustsImageWhenHighlighted)(BOOL adjustsImageWhenHighlighted);

@property(nonatomic, copy)  UIButton *(^dy_adjustsImageWhenDisabled)(BOOL adjustsImageWhenDisabled);

@property(nonatomic, copy)  UIButton *(^dy_showsTouchWhenHighlighted)(BOOL showsTouchWhenHighlighted);

@property(nonatomic, copy)  UIButton *(^dy_tintColor)(UIColor *tintColor);

@end
