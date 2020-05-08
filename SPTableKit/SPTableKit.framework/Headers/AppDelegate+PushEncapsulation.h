//
//  AppDelegate+PushEncapsulation.h
//  JPushTest
//
//  Created by Keyto on 2018/3/19.
//  Copyright © 2018年 CGZD. All rights reserved.
//

#import "AppDelegate.h"

//static NSString *appKey = @"a82a9bd420cdcd100012b1c5";
//static NSString *channel = @"App Store";
//static BOOL isProduction = NO;

@interface AppDelegate (PushEncapsulation)

-(void)JPushApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions appKey:(NSString *)appKey channel:(NSString *)channel apsForProduction:(BOOL)isProduction;

@end
