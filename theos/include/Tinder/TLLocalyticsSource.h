/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TLAnalyticsSource-Protocol.h"

@interface TLLocalyticsSource : _ABCreateStringWithAddressDictionary <TLAnalyticsSource>
{
}

+ (void)tlsw_setCustomerEmail:(id)fp8;
+ (void)tlsw_setCustomerId:(id)fp8;
+ (void)tlsw_setProfileValue:(id)fp8 forAttribute:(id)fp12;
+ (void)tlsw_setCustomerName:(id)fp8;
+ (void)tlsw_tagEvent:(id)fp8 attributes:(id)fp12 reportAttributes:(id)fp16 customerValueIncrease:(id)fp20;
+ (void)swizzle;
- (BOOL)trackEvent:(id)fp8 value:(id)fp12 metaData:(id)fp16;

@end

