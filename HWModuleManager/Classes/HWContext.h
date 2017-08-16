//
//  HWContext.h
//  Pods
//
//  Created by 郑振兴 on 2017/8/16.
//
//

#import <Foundation/Foundation.h>
@interface HWContext : NSObject
/**
 * @brief 当前App对象
 */
@property (nonatomic, strong) UIApplication *application;

/**
 * @brief App在didFinishLaunchingWithOptions:方法中所传入的launchOptions对象。
 */
@property (nonatomic, strong) NSDictionary *launchOptions;

+ (instancetype)shareInstance;

@end
