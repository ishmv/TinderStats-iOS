/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TLAnalyticsSource-Protocol.h"

@interface TLGoogleAnalyticsSource : _ABCreateStringWithAddressDictionary <TLAnalyticsSource>
{
}

+ (void)tlsw_send:(id)fp8;
+ (void)tlsw_set:(id)fp8 value:(id)fp12;
+ (id)tlsw_trackerWithName:(id)fp8 trackingId:(id)fp12;
+ (void)tl_swGAITracker:(id)fp8;
+ (void)swizzle;
- (BOOL)trackEvent:(id)fp8 value:(id)fp12 metaData:(id)fp16;

@end

