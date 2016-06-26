/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface FBSDKServerConfigurationManager : _ABCreateStringWithAddressDictionary
{
}

+ (id)_wrapperBlockForLoadBlock:(SEL)fp4;
+ (BOOL)_serverConfigurationTimestampIsValid:(id)fp8;
+ (id)_parseDialogConfigurations:(id)fp8;
+ (void)_didProcessConfigurationFromNetwork:(id)fp8 appID:(id)fp12 error:(id)fp16;
+ (id)_defaultServerConfigurationForAppID:(id)fp8;
+ (id)requestToLoadServerConfiguration:(id)fp8;
+ (void)processLoadRequestResponse:(id)fp8 error:(id)fp12 appID:(id)fp16;
+ (void)loadServerConfigurationWithCompletionBlock:(id)fp(null);
+ (id)cachedServerConfiguration;
+ (void)clearCache;
+ (void)initialize;
- (id)init;

@end

