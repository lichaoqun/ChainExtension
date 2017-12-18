//
//  UITextField+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UITextField (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UITextField *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UITextField *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UITextField *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UITextField *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UITextField *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UITextField *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UITextField *(^dy_hidden)(BOOL hidden);

#pragma mark - textField 的属性
@property(nonatomic, copy)  UITextField *(^dy_text)(NSString *text);

@property(nonatomic, copy)  UITextField *(^dy_attributedText)(NSAttributedString *attributedText);

@property(nonatomic, copy)  UITextField *(^dy_textColor)(UIColor *textColor);

@property(nonatomic, copy)  UITextField *(^dy_font)(UIFont *font);

@property(nonatomic, copy)  UITextField *(^dy_textAlignment)(NSTextAlignment textAlignment);

@property(nonatomic, copy)  UITextField *(^dy_borderStyle)(UITextBorderStyle borderStyle);

@property(nonatomic, copy)  UITextField *(^dy_defaultTextAttributes)(NSDictionary<NSString *, id> *defaultTextAttributes);

@property(nonatomic, copy)  UITextField *(^dy_placeholder)(NSString *placeholder);

@property(nonatomic, copy)  UITextField *(^dy_attributedPlaceholder)(NSAttributedString *attributedPlaceholder);

@property(nonatomic, copy)  UITextField *(^dy_clearsOnBeginEditing)(BOOL clearsOnBeginEditing);

@property(nonatomic, copy)  UITextField *(^dy_adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);

@property(nonatomic, copy)  UITextField *(^dy_minimumFontSize)(CGFloat minimumFontSize);

@property(nonatomic, copy)  UITextField *(^dy_delegate)(id<UITextFieldDelegate> delegate);

@property(nonatomic, copy)  UITextField *(^dy_background)(UIImage *background);

@property(nonatomic, copy)  UITextField *(^dy_disabledBackground)(UIImage *disabledBackground);

@property(nonatomic, copy)  UITextField *(^dy_allowsEditingTextAttributes)(BOOL allowsEditingTextAttributes);

@property(nonatomic, copy)  UITextField *(^dy_typingAttributes)(NSDictionary<NSString *, id> *typingAttributes);

@property(nonatomic, copy)  UITextField *(^dy_clearButtonMode)(UITextFieldViewMode  clearButtonMode);

@property(nonatomic, copy)  UITextField *(^dy_leftView)(UIView *leftView);

@property(nonatomic, copy)  UITextField *(^dy_leftViewMode)(UITextFieldViewMode  leftViewMode);

@property(nonatomic, copy)  UITextField *(^dy_rightView)(UIView              *rightView);

@property(nonatomic, copy)  UITextField *(^dy_rightViewMode)(UITextFieldViewMode  rightViewMode);


@end
