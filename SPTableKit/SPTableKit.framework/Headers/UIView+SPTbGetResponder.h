//
//  UIView+SPTbGetResponder.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 冯琦帆. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (SPTbGetResponder)
///获取当前view所属的cls类型对象(返回最接近且符合条件的父类)
- (id)sp_getResponderWithClass:(Class)cls;
///获取当前view所属的tableView
@property(weak, nonatomic, readonly)UITableView *sp_tableView;
///获取当前view所属的控制器
@property(weak, nonatomic, readonly)UIViewController *sp_vc;
///获取当前view所属的导航控制器
@property(weak, nonatomic, readonly)UINavigationController *sp_navVc;
///获取SPTableView的spDatas可变数组
@property(strong, nonatomic)NSMutableArray *sp_tableViewDatas;
@end

NS_ASSUME_NONNULL_END
