/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKAccessTokenCaching-Protocol.h"

@class FBSDKKeychainStore;

@interface FBSDKAccessTokenCacheV4 : _ABCreateStringWithAddressDictionary <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStore *_keychainStore;
}

- (void).cxx_destruct;
- (void)clearCache;
- (void)cacheAccessToken:(id)fp8;
- (id)fetchAccessToken;
- (id)init;

@end
