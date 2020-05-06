//
//  SPCHTbModel.h
//  SPTableKit
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface SPCHTbModel : NSObject
@property (strong,nonatomic) UIImage *iconImg;
@property (copy,nonatomic) NSString *name;
@property (copy,nonatomic) NSString *time;
@property (copy,nonatomic) NSString *comment;
//此处声明了cellH，则ZXTableView会自动把cell高度赋值给cellH，更改cellH即可改变cell高度
@property (assign,nonatomic) CGFloat cellH;
@end

NS_ASSUME_NONNULL_END
