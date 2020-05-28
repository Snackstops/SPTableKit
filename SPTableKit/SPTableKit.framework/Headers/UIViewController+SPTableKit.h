//
//  UIViewController+SPTableKit.h
//  SPTableKit
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SPTableKitView.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^FinishedLoadingBlock)(BOOL isFinishedLoading);
static UIView *AFview;

@interface UIViewController (SPTableKit)<SPTableKitViewDelegate>
@property (nonatomic,copy) FinishedLoadingBlock isFinishedLoading;

@property (strong, nonatomic) SPTableKitView *tableView;

- (void)initSPTableKitView;

@end

NS_ASSUME_NONNULL_END
