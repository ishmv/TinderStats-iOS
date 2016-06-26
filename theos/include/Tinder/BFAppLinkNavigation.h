/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class BFAppLink, NSDictionary;

@interface BFAppLinkNavigation : _ABCreateStringWithAddressDictionary
{
    NSDictionary *_extras;
    NSDictionary *_appLinkData;
    BFAppLink *_appLink;
}

+ (void)setDefaultResolver:(id)fp8;
+ (id)defaultResolver;
+ (int)navigateToAppLink:(id)fp8 error:(id *)fp12;
+ (id)navigateToURLInBackground:(id)fp8 resolver:(id)fp12;
+ (id)navigateToURLInBackground:(id)fp8;
+ (id)resolveAppLinkInBackground:(id)fp8;
+ (id)resolveAppLinkInBackground:(id)fp8 resolver:(id)fp12;
+ (id)navigationWithAppLink:(id)fp8 extras:(id)fp12 appLinkData:(id)fp16;
- (void)setAppLink:(id)fp8;
- (id)appLink;
- (void)setAppLinkData:(id)fp8;
- (id)appLinkData;
- (void)setExtras:(id)fp8;
- (id)extras;
- (void).cxx_destruct;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)fp8 error:(id)fp12 type:(int)fp16;
- (int)navigate:(id *)fp8;
- (id)appLinkURLWithTargetURL:(id)fp8 error:(id *)fp12;
- (id)stringByEscapingQueryString:(id)fp8;

@end

