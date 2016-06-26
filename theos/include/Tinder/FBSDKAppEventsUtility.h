/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface FBSDKAppEventsUtility : _ABCreateStringWithAddressDictionary
{
}

+ (long)unixTimeNow;
+ (id)tokenStringToUseFor:(id)fp8;
+ (id)retrievePersistedAnonymousID;
+ (id)persistenceFilePath:(id)fp8;
+ (void)persistAnonymousID:(id)fp8;
+ (BOOL)validateIdentifier:(id)fp8;
+ (BOOL)regexValidateIdentifier:(id)fp8;
+ (BOOL)matchString:(id)fp8 firstCharacterSet:(id)fp12 restOfStringCharacterSet:(id)fp16;
+ (void)logAndNotify:(id)fp8 allowLogAsDeveloperError:(BOOL)fp12;
+ (void)logAndNotify:(id)fp8;
+ (id)flushReasonToString:(unsigned int)fp8;
+ (void)ensureOnMainThread:(id)fp8 className:(id)fp12;
+ (void)clearLibraryFiles;
+ (id)attributionID;
+ (id)anonymousID;
+ (unsigned int)advertisingTrackingStatus;
+ (id)advertiserID;
+ (id)activityParametersDictionaryForEvent:(id)fp8 implicitEventsOnly:(BOOL)fp12 shouldAccessAdvertisingID:(BOOL)fp16;
- (id)init;

@end

