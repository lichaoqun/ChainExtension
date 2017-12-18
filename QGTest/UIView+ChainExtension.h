//
//  UIView+ChainExtension.h
//  QGTest
//
//  Created by 李超群 on 2017/12/18.
//  Copyright © 2017年 李超群. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ChainExtension)

@property(nonatomic, copy)  UIView *(^dy_backgroundColor)(UIColor *backgroundColor);

@property(nonatomic, copy)  UIView *(^dy_userInteractionEnabled)(BOOL userInteractionEnabled);

@property(nonatomic, copy)  UIView *(^dy_tag)(NSInteger tag);

@property(nonatomic, copy)  UIView *(^dy_frame)(CGRect frame);

@property(nonatomic, copy)  UIView *(^dy_bounds)(CGRect bounds);

@property(nonatomic, copy)  UIView *(^dy_alpha)(CGFloat alpha);

@property(nonatomic, copy)  UIView *(^dy_hidden)(BOOL hidden);

@end





#pragma mark - 有泛型和埋点的 DYView
@interface DYView <T> : UIView

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYView *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYView *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYLabel
@interface DYLabel <T> : UILabel

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYLabel *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYLabel *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYButton
@interface DYButton <T> : UIButton

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYButton *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYButton *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYImageView
@interface DYImageView <T> : UIImageView

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYImageView *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYImageView *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYTextField
@interface DYTextField<T> : UITextField

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYTextField *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYTextField *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYScrollView
@interface DYScrollView<T> : UIScrollView

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYScrollView *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYScrollView *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYTableView
@interface DYTableView<T> : UITableView

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYTableView *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYTableView *(^dy_UMengParam)(NSString *UMengParam);

@end


#pragma mark - DYSegmentedControl
@interface DYSegmentedControl <T> : UISegmentedControl

/** 与 view 关联的 model */
@property(nonatomic, copy) __kindof DYSegmentedControl *(^dy_model)(T model);

/** 友盟的埋点 */
@property(nonatomic, copy) __kindof DYSegmentedControl *(^dy_UMengParam)(NSString *UMengParam);

@end

