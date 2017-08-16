//
//  HWContext.m
//  Pods
//
//  Created by 郑振兴 on 2017/8/16.
//
//

#import "HWContext.h"

@implementation HWContext
+ (instancetype)shareInstance
{

    static HWContext *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      instance = [[[self class] alloc] init];
    });

    return instance;
}
@end
