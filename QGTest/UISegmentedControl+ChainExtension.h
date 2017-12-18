//
//  UISegmentedControl+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UISegmentedControl (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UISegmentedControl *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UISegmentedControl *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UISegmentedControl *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UISegmentedControl *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UISegmentedControl *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UISegmentedControl *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UISegmentedControl *(^dy_hidden)(BOOL hidden);

#pragma mark - segmentedControl 的属性

@end
