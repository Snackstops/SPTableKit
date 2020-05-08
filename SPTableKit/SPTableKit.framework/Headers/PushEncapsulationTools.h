//
//  PushEncapsulationTools.h
//  SPTableKit
//
//  Created by snackstops on 2020/5/7.
//  Copyright © 2020 SPTableKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface PushEncapsulationTools : NSObject
+(instancetype)shareJPushManger;




// 在应用启动的时候调用
- (void)setupWithOption:(NSDictionary *)launchingOption
                 appKey:(NSString *)appKey
                channel:(NSString *)channel
       apsForProduction:(BOOL)isProduction
  advertisingIdentifier:(NSString *)advertisingId;

// 在appdelegate注册设备处调用
- (void)registerDeviceToken:(NSData *)deviceToken;

//设置角标
- (void)setBadge:(int)badge;

//获取注册ID
- (void)getRegisterIDCallBack:(void(^)(NSString *registerID))completionHandler;

//处理推送信息
- (void)handleRemoteNotification:(NSDictionary *)remoteInfo;


//处理跳转
- (void)getUserDic:(NSDictionary *)userDic;
@end

NS_ASSUME_NONNULL_END
