/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TLAnalyticsSource-Protocol.h"

@interface TLFlurrySource : _ABCreateStringWithAddressDictionary <TLAnalyticsSource>
{
}

+ (void)tlsw_setLatitude:(double)fp8 longitude:(double)fp16 horizontalAccuracy:(float)fp24 verticalAccuracy:(float)fp28;
+ (void)tlsw_setGender:(id)fp8;
+ (void)tlsw_setAge:(int)fp8;
+ (void)tlsw_setUserID:(id)fp8;
+ (void)tlsw_logEvent:(id)fp8 withParameters:(id)fp12 timed:(BOOL)fp16;
+ (void)tlsw_logEvent:(id)fp8 timed:(BOOL)fp12;
+ (void)tlsw_logEvent:(id)fp8 withParameters:(id)fp12;
+ (void)tlsw_logEvent:(id)fp8;
+ (void)swizzle;
- (BOOL)trackEvent:(id)fp8 value:(id)fp12 metaData:(id)fp16;

@end
