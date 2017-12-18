//
//  UITextField+ChainExtension.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "UITextField+ChainExtension.h"

@implementation UITextField (ChainExtension)

@dynamic dy_text;
@dynamic dy_attributedText;
@dynamic dy_textColor;
@dynamic dy_font;
@dynamic dy_textAlignment;
@dynamic dy_borderStyle;
@dynamic dy_defaultTextAttributes;
@dynamic dy_placeholder;
@dynamic dy_attributedPlaceholder;
@dynamic dy_clearsOnBeginEditing;
@dynamic dy_adjustsFontSizeToFitWidth;
@dynamic dy_minimumFontSize;
@dynamic dy_delegate;
@dynamic dy_background;
@dynamic dy_disabledBackground;
@dynamic dy_allowsEditingTextAttributes;
@dynamic dy_typingAttributes;
@dynamic dy_clearButtonMode;
@dynamic dy_leftView;
@dynamic dy_leftViewMode;
@dynamic dy_rightView;
@dynamic dy_rightViewMode;


- (UITextField *(^)(NSString *))dy_text{
    return ^UITextField *(NSString *text) {
        self.text = text;
        return self;
    };
}

- (UITextField *(^)(NSAttributedString *))dy_attributedText{
    return ^UITextField *(NSAttributedString *attributedText) {
        self.attributedText = attributedText;
        return self;
    };
}

- (UITextField *(^)(UIColor *))dy_textColor{
    return ^UITextField *(UIColor *textColor) {
        self.textColor = textColor;
        return self;
    };
}

- (UITextField *(^)(UIFont *))dy_font{
    return ^UITextField *(UIFont *font) {
        self.font = font;
        return self;
    };
}

- (UITextField *(^)(NSTextAlignment))dy_textAlignment{
    return ^UITextField *(NSTextAlignment textAlignment) {
        self.textAlignment = textAlignment;
        return self;
    };
}

- (UITextField *(^)(UITextBorderStyle))dy_borderStyle{
    return ^UITextField *(UITextBorderStyle borderStyle) {
        self.borderStyle = borderStyle;
        return self;
    };
}

- (UITextField *(^)(NSDictionary<NSString *,id> *))dy_defaultTextAttributes{
    return ^UITextField *(NSDictionary<NSString *,id> *defaultTextAttributes) {
        self.defaultTextAttributes = defaultTextAttributes;
        return self;
    };
}

- (UITextField *(^)(NSString *))dy_placeholder{
    return ^UITextField *(NSString *placeholder) {
        self.placeholder = placeholder;
        return self;
    };
}

- (UITextField *(^)(NSAttributedString *))dy_attributedPlaceholder{
    return ^UITextField *(NSAttributedString *attributedPlaceholder) {
        self.attributedPlaceholder = attributedPlaceholder;
        return self;
    };
}

- (UITextField *(^)(BOOL))dy_clearsOnBeginEditing{
    return ^UITextField *(BOOL clearsOnBeginEditing) {
        self.clearsOnBeginEditing = clearsOnBeginEditing;
        return self;
    };
}

- (UITextField *(^)(BOOL))dy_adjustsFontSizeToFitWidth{
    return ^UITextField *(BOOL adjustsFontSizeToFitWidth) {
        self.adjustsFontSizeToFitWidth = adjustsFontSizeToFitWidth;
        return self;
    };
}

- (UITextField *(^)(CGFloat))dy_minimumFontSize{
    return ^UITextField *(CGFloat minimumFontSize) {
        self.minimumFontSize = minimumFontSize;
        return self;
    };
}

- (UITextField *(^)(id<UITextFieldDelegate>))dy_delegate{
    return ^UITextField *(id<UITextFieldDelegate> delegate) {
        self.delegate = delegate;
        return self;
    };
}

- (UITextField *(^)(UIImage *))dy_background{
    return ^UITextField *(UIImage *background) {
        self.background = background;
        return self;
    };
}

- (UITextField *(^)(UIImage *))dy_disabledBackground{
    return ^UITextField *(UIImage *disabledBackground) {
        self.disabledBackground = disabledBackground;
        return self;
    };
}

- (UITextField *(^)(BOOL))dy_allowsEditingTextAttributes{
    return ^UITextField *(BOOL allowsEditingTextAttributes) {
        self.allowsEditingTextAttributes = allowsEditingTextAttributes;
        return self;
    };
}

- (UITextField *(^)(NSDictionary<NSString *,id> *))dy_typingAttributes{
    return ^UITextField *(NSDictionary<NSString *,id> *typingAttributes) {
        self.typingAttributes = typingAttributes;
        return self;
    };
}

- (UITextField *(^)(UITextFieldViewMode))dy_clearButtonMode{
    return ^UITextField *(UITextFieldViewMode clearButtonMode) {
        self.clearButtonMode = clearButtonMode;
        return self;
    };
}

- (UITextField *(^)(UIView *))dy_leftView{
    return ^UITextField *(UIView *leftView) {
        self.leftView = leftView;
        return self;
    };
}

- (UITextField *(^)(UITextFieldViewMode))dy_leftViewMode{
    return ^UITextField *(UITextFieldViewMode leftViewMode) {
        self.leftViewMode = leftViewMode;
        return self;
    };
}

- (UITextField *(^)(UIView *))dy_rightView{
    return ^UITextField *(UIView *rightView) {
        self.rightView = rightView;
        return self;
    };
}

- (UITextField *(^)(UITextFieldViewMode))dy_rightViewMode{
    return ^UITextField *(UITextFieldViewMode rightViewMode) {
        self.rightViewMode = rightViewMode;
        return self;
    };
}

@end
