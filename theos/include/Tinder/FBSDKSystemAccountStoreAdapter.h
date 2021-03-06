/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : _ABCreateStringWithAddressDictionary
{
    ACAccountStore *_accountStore;
    ACAccountType *_accountType;
    BOOL _forceBlockingRenew;
}

+ (void)setSharedInstance:(id)fp8;
+ (id)sharedInstance;
+ (void)initialize;
- (BOOL)forceBlockingRenew;
- (void).cxx_destruct;
- (void)renewSystemAuthorization:(id)fp(null);
- (void)requestAccessToFacebookAccountStore:(id)fp8 retrying:(BOOL)fp12 handler:(id)fp(null);
- (void)requestAccessToFacebookAccountStore:(id)fp8 defaultAudience:(id)fp12 isReauthorize:(BOOL)fp16 appID:(id)fp20 handler:(id)fp(null);
- (id)accessTokenString;
- (void)setForceBlockingRenew:(BOOL)fp8;
- (id)accountType;
- (id)accountStore;
- (id)init;

@end

