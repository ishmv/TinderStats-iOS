/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TLAnalyticsSource-Protocol.h"

@interface TLAmplitudeSource : _ABCreateStringWithAddressDictionary <TLAnalyticsSource>
{
}

+ (void)tlsw_logEvent:(id)fp8 withEventProperties:(id)fp12 outOfSession:(BOOL)fp16;
+ (void)tlsw_logEvent:(id)fp8 withEventProperties:(id)fp12;
+ (void)tlsw_logEvent:(id)fp8;
+ (void)tlsw_logRevenue:(id)fp8 quantity:(int)fp12 price:(id)fp16 receipt:(id)fp20;
+ (void)tlsw_logRevenue:(id)fp8 quantity:(int)fp12 price:(id)fp16;
+ (void)tlsw_logRevenue:(id)fp8;
+ (void)swizzle;
- (BOOL)trackEvent:(id)fp8 value:(id)fp12 metaData:(id)fp16;

@end
