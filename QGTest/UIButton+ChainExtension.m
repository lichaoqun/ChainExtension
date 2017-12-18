//
//  UIButton+ChainExtension.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "UIButton+ChainExtension.h"

@implementation UIButton (ChainExtension)
@dynamic dy_setTitleForState;
@dynamic dy_setTitleColorForState;
@dynamic dy_setTitleShadowColorForState;
@dynamic dy_setImageForState;
@dynamic dy_setBackgroundImageForState;
@dynamic dy_contentEdgeInsets;
@dynamic dy_titleEdgeInsets;
@dynamic dy_reversesTitleShadowWhenHighlighted;
@dynamic dy_imageEdgeInsets;
@dynamic dy_adjustsImageWhenDisabled;
@dynamic dy_adjustsImageWhenHighlighted;
@dynamic dy_showsTouchWhenHighlighted;
@dynamic dy_tintColor;


- (UIButton *(^)(NSString *, UIControlState))dy_setTitleForState{
    return ^UIButton *(NSString *title, UIControlState state) {
        [self setTitle:title forState:state];
        return self;
    };
}

- (UIButton *(^)(UIColor *, UIControlState))dy_setTitleColorForState{
    return ^UIButton *(UIColor *color, UIControlState state) {
        [self setTitleColor:color forState:state];
        return self;
    };
}

- (UIButton *(^)(UIColor *, UIControlState))dy_setTitleShadowColorForState{
    return ^UIButton *(UIColor *color, UIControlState state) {
        [self setTitleShadowColor:color forState:state];
        return self;
    };
}

- (UIButton *(^)(UIImage *, UIControlState))dy_setImageForState{
    return ^UIButton *(UIImage *image, UIControlState state) {
        [self setImage:image forState:state];
        return self;
    };
}

- (UIButton *(^)(UIImage *, UIControlState))dy_setBackgroundImageForState{
    return ^UIButton *(UIImage *image, UIControlState state) {
        [self setBackgroundImage:image forState:state];
        return self;
    };
}

- (UIButton *(^)(UIEdgeInsets))dy_contentEdgeInsets{
    return ^UIButton *(UIEdgeInsets contentEdgeInsets) {
        self.contentEdgeInsets = contentEdgeInsets;
        return self;
    };
}

- (UIButton *(^)(UIEdgeInsets))dy_titleEdgeInsets{
    return ^UIButton *(UIEdgeInsets titleEdgeInsets) {
        self.titleEdgeInsets = titleEdgeInsets;
        return self;
    };
}

- (UIButton *(^)(BOOL))dy_reversesTitleShadowWhenHighlighted{
    return ^UIButton *(BOOL reversesTitleShadowWhenHighlighted) {
        self.reversesTitleShadowWhenHighlighted = reversesTitleShadowWhenHighlighted;
        return self;
    };
}

- (UIButton *(^)(UIEdgeInsets))dy_imageEdgeInsets{
    return ^UIButton *(UIEdgeInsets imageEdgeInsets) {
        self.imageEdgeInsets = imageEdgeInsets;
        return self;
    };
}

- (UIButton *(^)(BOOL))dy_adjustsImageWhenDisabled{
    return ^UIButton *(BOOL adjustsImageWhenHighlighted) {
        self.adjustsImageWhenHighlighted = adjustsImageWhenHighlighted;
        return self;
    };
}

- (UIButton *(^)(BOOL))dy_adjustsImageWhenHighlighted{
    return ^UIButton *(BOOL adjustsImageWhenDisabled) {
        self.adjustsImageWhenDisabled = adjustsImageWhenDisabled;
        return self;
    };
}

- (UIButton *(^)(BOOL))dy_showsTouchWhenHighlighted{
    return ^UIButton *(BOOL showsTouchWhenHighlighted) {
        self.showsTouchWhenHighlighted = showsTouchWhenHighlighted;
        return self;
    };
}

- (UIButton *(^)(UIColor *))dy_tintColor{
    return ^UIButton *(UIColor *tintColor) {
        self.tintColor = tintColor;
        return self;
    };
}

@end
