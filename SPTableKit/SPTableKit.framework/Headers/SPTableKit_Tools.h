//
//  SPTableKit_Tools.h
//  SPTableKit
//
//  Created by snackstops on 2020/4/6.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPTableKit_Tools : NSObject
//初始化设置弹窗View
+(instancetype)sheradSPTableKitTools;
-(NSString *)GetuserDefaults;
-(void)SaveuserDefaultsWithTYPE:(NSString *)TYPE;
-(NSMutableDictionary *)getSPTabletypes;
@end

NS_ASSUME_NONNULL_END
