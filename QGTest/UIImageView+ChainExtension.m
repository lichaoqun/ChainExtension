//
//  UIImageView+ChainExtension.m
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import "UIImageView+ChainExtension.h"

@implementation UIImageView (ChainExtension)
@dynamic dy_image;
@dynamic dy_highlightedImage;
@dynamic dy_highlighted;
@dynamic dy_animationImages;
@dynamic dy_highlightedAnimationImages;
@dynamic dy_animationDuration;
@dynamic dy_animationRepeatCount;
@dynamic dy_tintColor;
@dynamic dy_startAnimating;
@dynamic dy_stopAnimating;


- (UIImageView *(^)(UIImage *))dy_image{
    return ^UIImageView *(UIImage *image) {
        self.image = image;
        return self;
    };
}

- (UIImageView *(^)(UIImage *))dy_highlightedImage{
    return ^UIImageView *(UIImage *highlightedImage) {
        self.highlightedImage = highlightedImage;
        return self;
    };
}

- (UIImageView *(^)(BOOL))dy_highlighted{
    return ^UIImageView *(BOOL highlighted) {
        self.highlighted = highlighted;
        return self;
    };
}

- (UIImageView *(^)(NSArray<UIImage *> *))dy_animationImages{
    return ^UIImageView *(NSArray<UIImage *> *animationImages) {
        self.animationImages = animationImages;
        return self;
    };
}

- (UIImageView *(^)(NSArray<UIImage *> *))dy_highlightedAnimationImages{
    return ^UIImageView *(NSArray<UIImage *> *highlightedAnimationImages) {
        self.highlightedAnimationImages = highlightedAnimationImages;
        return self;
    };
}

- (UIImageView *(^)(NSTimeInterval))dy_animationDuration{
    return ^UIImageView *(NSTimeInterval animationDuration) {
        self.animationDuration = animationDuration;
        return self;
    };
}

- (UIImageView *(^)(NSInteger))dy_animationRepeatCount{
    return ^UIImageView *(NSInteger animationRepeatCount) {
        self.animationRepeatCount = animationRepeatCount;
        return self;
    };
}

- (UIImageView *(^)(UIColor *))dy_tintColor{
    return ^UIImageView *(UIColor *tintColor) {
        self.tintColor = tintColor;
        return self;
    };
}

- (UIImageView *(^)(void))dy_startAnimating{
    return ^UIImageView *(void) {
        [self startAnimating];
        return self;
    };
}

- (UIImageView *(^)(void))dy_stopAnimating{
    return ^UIImageView *(void) {
        [self stopAnimating];
        return self;
    };
}


@end
