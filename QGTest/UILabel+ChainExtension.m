//
//  UILabel+ChainExtension.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "UILabel+ChainExtension.h"

@implementation UILabel (ChainExtension)

@dynamic dy_text;
@dynamic dy_font;
@dynamic dy_textColor;
@dynamic dy_textAlignment;
@dynamic dy_lineBreakMode;
@dynamic dy_enabled;
@dynamic dy_numberOfLines;

#pragma mark - label 的属性
- (UILabel *(^)(NSString *))dy_text{
    return ^UILabel *(NSString *text) {
        self.text = text;
        return self;
    };
}

-(UILabel *(^)(UIFont *))dy_font{
    return ^UILabel *(UIFont *font) {
        self.font = font;
        return self;
    };
}

- (UILabel *(^)(UIColor *))dy_textColor{
    return ^UILabel *(UIColor * textColor) {
        self.textColor = textColor;
        return self;
    };
}

- (UILabel *(^)(NSTextAlignment))dy_textAlignment{
    return ^UILabel *(NSTextAlignment textAlignment) {
        self.textAlignment = textAlignment;
        return self;
    };
}

- (UILabel *(^)(NSLineBreakMode))dy_lineBreakMode{
    return ^UILabel *(NSLineBreakMode lineBreakMode) {
        self.lineBreakMode = lineBreakMode;
        return self;
    };
}

- (UILabel *(^)(BOOL))dy_enabled{
    return ^UILabel *(BOOL enabled) {
        self.enabled = enabled;
        return self;
    };
}

- (UILabel *(^)(NSInteger))dy_numberOfLines{
    return ^UILabel *(NSInteger numberOfLines) {
        self.numberOfLines = numberOfLines;
        return self;
    };
}
@end
