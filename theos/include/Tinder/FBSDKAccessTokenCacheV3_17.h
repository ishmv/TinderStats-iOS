/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKAccessTokenCaching-Protocol.h"

@class FBSDKKeychainStoreViaBundleID;

@interface FBSDKAccessTokenCacheV3_17 : _ABCreateStringWithAddressDictionary <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStoreViaBundleID *_keychainStore;
}

- (void).cxx_destruct;
- (void)cacheAccessToken:(id)fp8;
- (void)clearCache;
- (id)fetchAccessToken;
- (id)init;

@end
