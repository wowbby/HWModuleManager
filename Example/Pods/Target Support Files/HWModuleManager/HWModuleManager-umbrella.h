#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HWContext.h"
#import "HWModuleManager.h"
#import "HWModuleProtocol.h"
#import "HWServiceProtocol.h"
#import "ModuleManager.h"
#import "ServiceManager.h"

FOUNDATION_EXPORT double HWModuleManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char HWModuleManagerVersionString[];

