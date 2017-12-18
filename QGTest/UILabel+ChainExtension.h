//
//  UILabel+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UILabel (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UILabel *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UILabel *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UILabel *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UILabel *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UILabel *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UILabel *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UILabel *(^dy_hidden)(BOOL hidden);

#pragma mark - label 的属性
@property(nonatomic, copy)  UILabel *(^dy_text)(NSString *text);

@property(nonatomic, copy)  UILabel *(^dy_font)(UIFont *font);

@property(nonatomic, copy)  UILabel *(^dy_textColor)(UIColor *textColor);

@property(nonatomic, copy)  UILabel *(^dy_textAlignment)(NSTextAlignment textAlignment);

@property(nonatomic, copy)  UILabel *(^dy_lineBreakMode)(NSLineBreakMode lineBreakMode);

@property(nonatomic, copy)  UILabel *(^dy_enabled)(BOOL enabled);

@property(nonatomic, copy)  UILabel *(^dy_numberOfLines)(NSInteger numberOfLines);

@end
