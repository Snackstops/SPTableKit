//
//  NSObject+SPTbAddPro.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 冯琦帆. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SPTbAddPro)
//非readonly是为了开发者便于重写set方法进行处理
///获取tableView中当前cell/model对应的indexPath
@property(strong, nonatomic)NSIndexPath *sp_indexPathInTableView;
///获取tableView中当前headerView/footerView/cell/model对应的section
@property(assign, nonatomic)NSUInteger sp_sectionInTableView;
@end

NS_ASSUME_NONNULL_END
