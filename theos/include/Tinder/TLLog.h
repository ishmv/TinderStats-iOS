/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TLLog : _ABCreateStringWithAddressDictionary
{
}

+ (void)logRect:(struct CGRect)fp8 description:(id)fp24;
+ (void)logException:(id)fp8 description:(id)fp12;
+ (void)logErrorDontReport:(id)fp8 description:(id)fp12;
+ (void)logError:(id)fp8 description:(id)fp12;
+ (void)logTime:(id)fp8 comment:(id)fp12;
+ (void)logDebug:(id)fp8;
+ (void)log:(id)fp8;

@end

