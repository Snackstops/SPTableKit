//
//  SPTableKitView.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 冯琦帆. All rights reserved.
//

#import <UIKit/UIKit.h>
//在任何view中获取所属的控制器、导航控制器，tableView和SPTableView的spDatas
#import "UIView+SPTbGetResponder.h"
//在任何对象中获取在tableView所属的indexPath和section
#import "NSObject+SPTbAddPro.h"
NS_ASSUME_NONNULL_BEGIN

@interface SPTableKitView : UITableView


#pragma mark - 数据设置
///设置所有数据数组
@property(nonatomic, strong)NSMutableArray *spDatas;
///声明cell的类
@property (nonatomic, copy) Class (^sp_setCellClassAtIndexPath)(NSIndexPath *indexPath);
///设置cell的高度(非必须，若设置了，则内部的自动计算高度无效)
@property (nonatomic, copy) CGFloat (^sp_setCellHAtIndexPath)(NSIndexPath *indexPath);
///设置section数量(非必须，若设置了，则内部自动设置section个数无效)
@property (nonatomic, copy) CGFloat (^sp_setNumberOfSectionsInTableView)(UITableView *tableView);
///设置对应section中row的数量(非必须，若设置了，则内部自动设置对应section中row的数量无效)
@property (nonatomic, copy) CGFloat (^sp_setNumberOfRowsInSection)(NSUInteger section);
///根据HeaderView类名设置HeaderView，写了此方法则sp_setHeaderViewInSection无效，无需实现sp_setHeaderHInSection，自动计算高度
@property (nonatomic, copy) Class (^sp_setHeaderClassInSection)(NSInteger section);
///根据FooterView类名设置FooterView，写了此方法则sp_setFooterViewInSection无效，无需实现sp_setFooterHInSection，自动计算高度
@property (nonatomic, copy) Class (^sp_setFooterClassInSection)(NSInteger section);
///设置HeaderView，必须实现sp_setHeaderHInSection
@property (nonatomic, copy) UIView *(^sp_setHeaderViewInSection)(NSInteger section);
///设置FooterView，必须实现sp_setFooterHInSection
@property (nonatomic, copy) UIView *(^sp_setFooterViewInSection)(NSInteger section);
///设置HeaderView高度，非必须，若设置了则自动设置的HeaderView高度无效
@property (nonatomic, copy) CGFloat (^sp_setHeaderHInSection)(NSInteger section);
///设置FooterView高度，非必须，若设置了则自动设置的FooterView高度无效
@property (nonatomic, copy) CGFloat (^sp_setFooterHInSection)(NSInteger section);
///设置点击cell自动跳转的配置字典，如@{@"vc":@"TestVC",@"testGoodid":@"model.goodid"}则代表点击cell自动push到控制器TestVC，且将cell对应model的goodid赋值给TestVC控制器的testGoodid属性
@property(nonatomic, strong) NSDictionary *sp_autoPushConfigDictionary;
///禁止系统Cell自动高度 可以有效解决tableView跳动问题，默认为YES
@property(nonatomic, assign)BOOL sp_disableAutomaticDimension;
///无数据是否显示HeaderView，默认为YES
@property(nonatomic, assign)BOOL sp_showHeaderWhenNoMsg;
///无数据是否显示FooterView，默认为YES
@property(nonatomic, assign)BOOL sp_showFooterWhenNoMsg;
///保持headerView不变（仅初始化一次），默认为NO
@property(nonatomic, assign)BOOL sp_keepStaticHeaderView;
///保持footerView不变（仅初始化一次），默认为NO
@property(nonatomic, assign)BOOL sp_keepStaticFooterView;
///控制获取cell回调在获取model之后，默认为NO
@property(nonatomic, assign)BOOL sp_fixCellBlockAfterAutoSetModel;
///当选中cell的时候是否自动调用tableView的deselectRowAtIndexPath，默认为YES
@property(nonatomic, assign)BOOL sp_autoDeselectWhenSelected;
#pragma mark - 数据获取
///获取对应行的cell，把id改成对应类名即可无需强制转换
@property (nonatomic, copy) void (^sp_getCellAtIndexPath)(NSIndexPath *indexPath,id cell,id model);
///获取对应section的headerView，把id改成对应类名即可无需强制转换，secArr为对应section的model数组
@property (nonatomic, copy) void (^sp_getHeaderViewInSection)(NSUInteger section,id headerView,NSMutableArray *secArr);
///获取对应section的footerView，把id改成对应类名即可无需强制转换，secArr为对应section的model数组
@property (nonatomic, copy) void (^sp_getFooterViewInSection)(NSUInteger section,id footerView,NSMutableArray *secArr);
#pragma mark - 偏好设置(全局设置)
///在子类中重写这个方法，可以统一设置所有cell样式
-(void)sp_setCell:(UITableViewCell *)cell;
///在子类中重写这个方法，可以统一设置所有tableView样式
-(void)sp_setTableView;

#pragma mark - 快速构建
///声明cell的类并返回cell对象
-(void)sp_setCellClassAtIndexPath:(Class (^)(NSIndexPath * indexPath)) setCellClassCallBack returnCell:(void (^)(NSIndexPath * indexPath,id cell,id model))returnCellCallBack;
///声明HeaderView的类并返回HeaderView对象
-(void)sp_setHeaderClassInSection:(Class (^)(NSInteger section)) setHeaderClassCallBack returnHeader:(void (^)(NSUInteger section,id headerView,NSMutableArray *secArr))returnHeaderCallBack;
///声明FooterView的类并返回FooterView对象
-(void)sp_setFooterClassInSection:(Class (^)(NSInteger section)) setFooterClassCallBack returnHeader:(void (^)(NSUInteger section,id headerView,NSMutableArray *secArr))returnFooterCallBack;
#pragma mark - 代理事件相关
///选中某一行，把id改成对应类名即可无需强制转换
@property (nonatomic, copy) void (^sp_didSelectedAtIndexPath)(NSIndexPath *indexPath,id model,id cell);
///取消选中某一行，把id改成对应类名即可无需强制转换
@property (nonatomic, copy) void (^sp_didDeselectedAtIndexPath)(NSIndexPath *indexPath,id model,id cell);
///滑动编辑
@property (nonatomic, copy) NSArray<UITableViewRowAction *>* (^sp_editActionsForRowAtIndexPath)(NSIndexPath *indexPath);
///cell将要展示，把id改成对应类名即可无需强制转换
@property (nonatomic, copy) void (^sp_willDisplayCell)(NSIndexPath *indexPath,id cell);
///scrollView滚动事件
@property (nonatomic, copy) void (^sp_scrollViewDidScroll)(UIScrollView *scrollView);
///scrollView缩放事件
@property (nonatomic, copy) void (^sp_scrollViewDidZoom)(UIScrollView *scrollView);
///scrollView滚动到顶部事件
@property (nonatomic, copy) void (^sp_scrollViewDidScrollToTop)(UIScrollView *scrollView);
///scrollView开始拖拽事件
@property (nonatomic, copy) void (^sp_scrollViewWillBeginDragging)(UIScrollView *scrollView);
///scrollView开始拖拽事件
@property (nonatomic, copy) void (^sp_scrollViewDidEndDragging)(UIScrollView *scrollView, BOOL willDecelerate);
#pragma mark - UITableViewDataSource & UITableViewDelegate
///tableView的DataSource 设置为当前控制器即可重写对应数据源方法
@property (nonatomic, weak, nullable) id <UITableViewDataSource> spDataSource;
///tableView的Delegate 设置为当前控制器即可重写对应代理方法
@property (nonatomic, weak, nullable) id <UITableViewDelegate> spDelegate;

@end

NS_ASSUME_NONNULL_END
