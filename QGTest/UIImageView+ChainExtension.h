//
//  UIImageView+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UIImageView (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UIImageView *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UIImageView *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UIImageView *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UIImageView *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UIImageView *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UIImageView *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UIImageView *(^dy_hidden)(BOOL hidden);

#pragma mark - imageView 的属性
@property(nonatomic, copy)  UIImageView *(^dy_image)(UIImage *image);

@property(nonatomic, copy)  UIImageView *(^dy_highlightedImage)(UIImage *highlightedImage);

@property(nonatomic, copy)  UIImageView *(^dy_highlighted)(BOOL highlighted);

@property(nonatomic, copy)  UIImageView *(^dy_animationImages)(NSArray<UIImage *> *animationImages);

@property(nonatomic, copy)  UIImageView *(^dy_highlightedAnimationImages)(NSArray<UIImage *> *highlightedAnimationImages);

@property(nonatomic, copy)  UIImageView *(^dy_animationDuration)(NSTimeInterval animationDuration);

@property(nonatomic, copy)  UIImageView *(^dy_animationRepeatCount)(NSInteger animationRepeatCount);

@property(nonatomic, copy)  UIImageView * (^dy_tintColor)(UIColor *tintColor);

@property(nonatomic, copy)  UIImageView *(^dy_startAnimating)(void);

@property(nonatomic, copy)  UIImageView *(^dy_stopAnimating)(void);


@end
