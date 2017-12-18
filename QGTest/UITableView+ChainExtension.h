//
//  UITableView+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+ChainExtension.h"

@interface UITableView (ChainExtension)

#pragma mark - 继承自 view 的属性
@property(nonatomic, copy)  UITableView *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UITableView *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UITableView *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UITableView *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UITableView *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UITableView *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UITableView *(^dy_hidden)(BOOL hidden);

#pragma mark - tableView 的属性

@end
