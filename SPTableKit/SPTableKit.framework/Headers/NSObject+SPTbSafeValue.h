//
//  NSObject+SPTbSafeValue.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/5/6.
//  Copyright © 2020 冯琦帆. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (SPTbSafeValue)
-(id)sp_safeValueForKey:(NSString *)key;
-(void)sp_safeSetValue:(id)value forKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
