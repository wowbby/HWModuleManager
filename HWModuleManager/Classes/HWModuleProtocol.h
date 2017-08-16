//
//  HWModuleProtocol.h
//  Pods
//
//  Created by 郑振兴 on 2017/8/16.
//
//

#import <Foundation/Foundation.h>
#import "HWContext.h"

@protocol HWModuleProtocol <NSObject>

/**
 模块初始化

 @param context HWContext
 */
- (void)moduleInit:(HWContext *)context;

/**
 模块销毁

 @param context HWContext
 */
- (void)moduleDealloc:(HWContext *)context;

/**
 * @brief 当App处于非活跃状态时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleWillResignActive:(HWContext *)context;

/**
 * @brief 当App已经进入后台时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidEnterBackground:(HWContext *)context;

/**
 * @brief 当App将要进入后台时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleWillEnterForeground:(HWContext *)context;

/**
 * @brief 当App处于活跃状态时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidBecomeActive:(HWContext *)context;

/**
 * @brief 当App将要退出时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleWillTerminate:(HWContext *)context;

/**
 * @brief 当App收到内存告警时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidReceiveMemoryWarning:(HWContext *)context;

/**
 * @brief 当App远程推送通知注册失败时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidFailToRegisterForRemoteNotifications:(HWContext *)context;

/**
 * @brief 当App远程推送通知注册成功时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidRegisterForRemoteNotifications:(HWContext *)context;

/**
 * @brief 当App收到远程推送通知时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidReceiveRemoteNotification:(HWContext *)context;

/**
 * @brief 当App收到本地通知时，CoreHive通过该方法通知给模块。
 * @param context 包含CoreHive环境信息的对象.
 */
- (void)moduleDidReceiveLocalNotification:(HWContext *)context;
@end
