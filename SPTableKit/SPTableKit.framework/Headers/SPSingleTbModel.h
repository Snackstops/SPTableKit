//
//  SPSingleTbModel.h
//  SPTableKit
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface SPSingleTbModel : NSObject
@property (strong,nonatomic) UIImage *iconImg;
@property (copy,nonatomic) NSString *name;
@property (copy,nonatomic) NSString *goodAt;
@end

NS_ASSUME_NONNULL_END
