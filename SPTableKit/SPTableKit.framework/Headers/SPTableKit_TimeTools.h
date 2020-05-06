//
//  SPTableKit_TimeTools.h
//  SPTableKit
//
//  Created by snackstops on 2020/4/12.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPTableKit_TimeTools : NSObject

+ (void)DismissTime:(NSString *)DismissTime WithSuccess:(void(^)(id Success))Success WithError:(void(^)(id Error))Error;

@end

NS_ASSUME_NONNULL_END
