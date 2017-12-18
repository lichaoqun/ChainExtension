//
//  UIView+ChainExtension.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "UIView+ChainExtension.h"


@implementation UIView (ChainExtension)
@dynamic dy_backgroundColor;
@dynamic dy_userInteractionEnabled;
@dynamic dy_tag;
@dynamic dy_frame;
@dynamic dy_bounds;
@dynamic dy_alpha;
@dynamic dy_hidden;


- (UIView *(^)(UIColor *))dy_backgroundColor{
    return ^UIView *(UIColor *backgroundColor) {
        self.backgroundColor = backgroundColor;
        return self;
    };
}

- (UIView *(^)(BOOL))dy_userInteractionEnabled{
    return ^UIView *(BOOL userInteractionEnabled) {
        self.userInteractionEnabled = userInteractionEnabled;
        return self;
    };
}

- (UIView *(^)(NSInteger))dy_tag{
    return ^UIView *(NSInteger tag) {
        self.tag = tag;
        return self;
    };
}

- (UIView *(^)(CGRect))dy_frame{
    return ^UIView *(CGRect frame) {
        self.frame = frame;
        return self;
    };
}

- (UIView *(^)(CGRect))dy_bounds{
    return ^UIView *(CGRect bounds) {
        self.bounds = bounds;
        return self;
    };
}

- (UIView *(^)(CGFloat))dy_alpha{
    return ^UIView *(CGFloat alpha) {
        self.alpha = alpha;
        return self;
    };
}

- (UIView *(^)(BOOL))dy_hidden{
    return  ^UIView *(BOOL hidden) {
        self.hidden = hidden;
        return self;
    };
}


@end
